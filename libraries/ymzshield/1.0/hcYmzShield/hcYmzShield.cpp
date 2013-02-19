/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.cpp)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2.1
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 */

#include <Arduino.h>
#include "hcYmzShield.h"


// Enable this to use direct PORT access for super high-speed transfer.
// Disable it if you find it is incompatible with your Arduino board (unlikely,
// but possible with future revisions.
#define __USE_AVR__


// Base tone periods for the first 12 MIDI notes at 4MHz
static const uint16_t tpMidi[12] = {
  15289, 14431, 13621, 12856, 12135, 11454,
  10811, 10204,  9631,  9091,  8581,  8099
};


/**
 * Helper Methods
 * 
 * These static methods control data exchange with the YMZ284 chips and the 75HC595 serial shifter.
 */
#ifndef __USE_AVR__
void hcYmzShield::_shiftOut(uint8_t value) {
  digitalWrite(__PIN_RCK__, LOW);
  shiftOut(__PIN_SER__, __PIN_SRCK__, MSBFIRST, value);
  digitalWrite(__PIN_RCK__, HIGH);
}
void hcYmzShield::_busAddress() {
  digitalWrite(__PIN_SEL__, LOW);
}
void hcYmzShield::_busData() {
  digitalWrite(__PIN_SEL__, HIGH);
}
void hcYmzShield::_psgWrite() {
  digitalWrite(__PIN_CS2__, LOW);
  digitalWrite(__PIN_CS1__, LOW);
  digitalWrite(__PIN_CS2__, HIGH);
  digitalWrite(__PIN_CS1__, HIGH);
}
void hcYmzShield::_psg0Write() {
  digitalWrite(__PIN_CS2__, LOW);
  digitalWrite(__PIN_CS2__, HIGH);
}
void hcYmzShield::_psg1Write() {
  digitalWrite(__PIN_CS1__, LOW);
  digitalWrite(__PIN_CS1__, HIGH);
}
#else
void hcYmzShield::_shiftOut(uint8_t value) {
  PORTD &= ~__MASK_RCK__;
  for(uint8_t i = 8; i; i--) {
    PORTD &= ~__MASK_SRCK__; // Clock
    PORTD &= ~__MASK_SER__; // Data
    if(value & 0x80)
      PORTD |= __MASK_SER__; // Data
    value <<= 1;
    PORTD |= __MASK_SRCK__; // Clock
  }
  PORTD |= __MASK_RCK__;
}
void hcYmzShield::_busAddress() {
  PORTB &= ~__MASK_SEL__;
}
void hcYmzShield::_busData() {
  PORTB |= __MASK_SEL__;
}
void hcYmzShield::_psgWrite() {
  PORTB &= ~B00010100; // __MASK_CS1__ | __MASK_CS2__
  PORTB |= B00010100; // __MASK_CS1__ | __MASK_CS2__
}
void hcYmzShield::_psg0Write() {
  PORTB &= ~__MASK_CS2__;
  PORTB |= __MASK_CS2__;
}
void hcYmzShield::_psg1Write() {
  PORTB &= ~__MASK_CS1__;
  PORTB |= __MASK_CS1__;
}
#endif __USE_AVR__


/**
 * public hcYmzShield()
 *
 * Initializes the shield as an object.
 */
hcYmzShield::hcYmzShield() {
  #ifndef __USE_AVR__
  pinMode(__PIN_SER__,  OUTPUT);
  pinMode(__PIN_RCK__,  OUTPUT);
  pinMode(__PIN_SRCK__, OUTPUT);
  pinMode(__PIN_CS1__,  OUTPUT);
  pinMode(__PIN_SEL__,  OUTPUT);
  pinMode(__PIN_CS2__,  OUTPUT);
  
  // Disable writing until we actually want to do it
  digitalWrite(__PIN_CS1__, HIGH);
  digitalWrite(__PIN_CS2__, HIGH);
  #else
  DDRB  |= B00011100; // __MASK_CS1__ | __MASK_SEL__ | __MASK_CS2__
  DDRD  |= B00011100; // __MASK_SER__ | __MASK_RCK__ | __MASK_SRCK__
  PORTB |= B00010100; // __MASK_CS1__ | __MASK_CS2__
  #endif __USE_AVR__
  
  // Initialize register backup to 0
  memset(this->_psg0Registers, 0, 0x0d);
  memset(this->_psg1Registers, 0, 0x0d);
  
  // Make sure the speakers don't fart
  this->mute();
}


/**
 * private hcYmzShield::_psgDetect()
 * 
 * Returns whether a channel is on PSG0 (B00000001) or PSG1 (B00000010).
 */
uint8_t hcYmzShield::_psgDetect(uint8_t channel) {
  return((channel > 2) ? 2 : 1);
}


/**
 * private hcYmzShield::_setRegister()
 * 
 * Set a byte in the YMZ284's internal registers.
 */
void hcYmzShield::_setRegister(uint8_t reg, uint8_t data, uint8_t psg) {
  // Switch the bus to recieve a register address and shift it out
  this->_busAddress();
  this->_shiftOut(reg);
  if(psg == 1) this->_psg0Write();
  else if(psg == 2) this->_psg1Write();
  else this->_psgWrite();
  
  // Switch the bus to recieve data and shift it out
  this->_busData();
  this->_shiftOut(data);
  if(psg == 1) this->_psg0Write();
  else if(psg == 2) this->_psg1Write();
  else this->_psgWrite();
  
  // Copy the byte to the internal register map
  if(psg < 2 || psg == 3)
    this->_psg0Registers[reg] = data;
  if(psg == 2 || psg == 3)
    this->_psg1Registers[reg] = data;
}


/**
 * public hcYmzShield::setTonePeriod()
 * 
 * Sets the tone period (TP) of a channel. The formula for the frequency output is:
 * 
 * Hz = (4 * 10^6) / (32 * TP)
 */
void hcYmzShield::setTonePeriod(uint8_t channel, uint16_t tp) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  tp &= 0x0fff; // Sanitize to 12-bit
  
  this->_setRegister((channel *= 2), (tp & 0xff), psg);
  this->_setRegister((++channel), (tp >> 8), psg);
}


/**
 * public hcYmzShield:getTonePeriod()
 * 
 * Returns the current tone period of a channel.
 */
uint16_t hcYmzShield::getTonePeriod(uint8_t channel) {
  // Get Channels 3-5 from PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= (channel > 2 ? 3 : 0);
  uint16_t tp;
  
  if(psg == 2) {
    tp =  (this->_psg1Registers[(channel *=2)]);
    tp += (this->_psg1Registers[(++channel)] << 8);
  }
  else {
    tp =  (this->_psg0Registers[(channel *=2)]);
    tp += (this->_psg0Registers[(++channel)] << 8);
  }
  
  return(tp);
}


/**
 * public hcYmzShield::setToneFrequency()
 * 
 * Sets the tone period of a channel to produce a given frequency in Hz.
 */
void hcYmzShield::setToneFrequency(uint8_t channel, float hz) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  uint16_t tp = 125000 / hz;
  
  this->_setRegister((channel *= 2), (tp & 0xff), psg);
  this->_setRegister((++channel), (tp >> 8), psg);
}


/**
 * public hcYmzShield::setToneMidi()
 * 
 * Sets the tone period of a channel to produce the given MIDI note.
 */
void hcYmzShield::setToneMidi(uint8_t channel, uint16_t note) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);

  uint16_t tp = ((note > 12) ? (tpMidi[note%12] >> (note/12)) : tpMidi[note]);
  
  this->_setRegister((channel *= 2), (tp & 0xff), psg);
  this->_setRegister((++channel), (tp >> 8), psg);
}


/**
 * public hcYmzShield::setNoisePeriod()
 * 
 * Sets the noise period (NP) for the noise generator of the YMZ284. The
 * formula for the frequency of output is:
 * 
 * Hz = (4 * 10^6) / (32 * NP)
 */
void hcYmzShield::setNoisePeriod(uint8_t np) {
  this->_setRegister(0x06, (np & B00011111), 3); // Sanitize and write
}


/**
 * public hcYmzShield:getNoisePeriod()
 * 
 * Returns the current noise period of the shield.
 */
uint8_t hcYmzShield::getNoisePeriod() {
  return(this->_psg0Registers[0x06]);
}


/**
 * public hcYmzShield::setNoiseFrequency()
 * 
 * Sets the noise period to a given frequency in Hz.
 */
void hcYmzShield::setNoiseFrequency(float hz) {
  uint16_t np = 125000 / hz;
  
  this->_setRegister(0x06, (np & B00011111), 3); // Sanitize and write
}


/**
 * public hcYmzShield:setEnvelopePeriod()
 * 
 * Adjust the envelope period (EP) to adjust how frequently the noise
 * envelope repeats.
 * 
 * Hz = (4 * 10^6) / (256 * EP)
 */
void hcYmzShield::setEnvelopePeriod(uint16_t ep) {
  ep &= 0xffff; // May be unnecessary
  this->_setRegister(0x0b, ep & 0xff, 3);
  this->_setRegister(0x0c, ep >> 8, 3);
}


/**
 * public hcYmzShield:getEnvelopePeriod()
 * 
 * Returns the current envelope period of the shield.
 */
uint16_t hcYmzShield::getEnvelopePeriod() {
  return(this->_psg0Registers[0x0b] + (this->_psg0Registers[0x0c] << 8));
}


/**
 * public hcYmzShield:setEnvelopeFrequency()
 * 
 * Sets the envelope period to a given frequency in Hz.
 */
void hcYmzShield::setEnvelopeFrequency(float hz) {
  uint16_t ep = 7812.5 / hz;
  
  this->_setRegister(0x0b, ep & 0xff, 3);
  this->_setRegister(0x0c, ep >> 8, 3);
}


/**
 * public hcYmzShield::startEnvelope()
 * 
 * Sets the shape of the noise envelope. Only the lower 4 bits of the
 * register are used. The bits correspond toggle CONTINUE, ATTACK, ALTERNATE and HOLD.
 */
void hcYmzShield::startEnvelope(uint8_t shape) {
  shape &= 0xf;
  this->_setRegister(0x0d, shape, 3);
}


/**
 * public hcYmzShield::restartEnvelope()
 * 
 * Resets the current envelope using the existing shape.
 */
void hcYmzShield::restartEnvelope() {
  startEnvelope(this->_psg0Registers[0x0d]);
}


/**
 * public hcYmzShield:setTone()
 * 
 * Enables or disables tone output on a channel.
 */
void hcYmzShield::setTone(uint8_t channel, boolean isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] : this->_psg0Registers[0x07]);
  
  uint8_t mask = (1 << channel);
  
  isEnabled ? data &= ~mask : data |= mask;
  
  this->_setRegister(0x07, (data & 0x3f), psg);
}


/**
 * public hcYmzShield:isTone()
 * 
 * Returns boolean true if the current channel is being used for tone output.
 */
boolean hcYmzShield::isTone(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] : this->_psg0Registers[0x07]);
  
  return(((data & (1 << channel)) == 0) ? true : false);
}


/**
 * public hcYmzShield:setNoise()
 * 
 * Enables or disables noise output on a channel.
 */
void hcYmzShield::setNoise(uint8_t channel, boolean isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] : this->_psg0Registers[0x07]);
  
  uint8_t mask = (1 << (channel + 3));
  
  isEnabled ? data &= ~mask : data |= mask;
  
  this->_setRegister(0x07, (data & 0x3f), psg);
}


/**
 * public hcYmzShield:isNoise()
 * 
 * Returns boolean true if the current channel is being used for noise output.
 */
boolean hcYmzShield::isNoise(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] : this->_psg0Registers[0x07]);
  
  return(((data & (1 << (channel * 3))) == 0) ? true : false);
}


/**
 * public hcYmzShield:mute()
 * 
 * Toggle sound channels off.
 */
void hcYmzShield::mute() {
  this->_setRegister(0x07, B00111111, 3);
}


/**
 * public hcYmzShield:setVolume()
 * 
 * Adjust the value of each channel.
 */
void hcYmzShield::setVolume(uint8_t channel, uint8_t volume) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  volume &= 0xf;
  
  // Pick up the noise bit
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] : this->_psg0Registers[0x08]) & 0x10;
  
  this->_setRegister(0x08 + channel, volume + data, psg);
}


/**
 * public hcYmzShield:getVolume()
 * 
 * Returns the volume of a channel.
 */
byte hcYmzShield::getVolume(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);

  return(((psg == 2) ? this->_psg1Registers[0x08] : this->_psg0Registers[0x08]) & 0xf);
}


/**
 * public hcYmzShield:setVolume()
 * 
 * Adjust the value of all channels.
 */
void hcYmzShield::setVolume(uint8_t volume) {
  volume &= 0xf;
  for(uint8_t i = 0; i < 6; i++)
    this->setVolume(i, volume);
}


/**
 * public hcYmzShield:setEnvelope()
 * 
 * Enables or disables mixing a channel through the envelope generator.
 */
void hcYmzShield::setEnvelope(uint8_t channel, boolean isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] : this->_psg0Registers[0x08]);
  
  uint8_t mask = 0x10;
  
  isEnabled ? data |= mask : data &= ~mask;
  
  this->_setRegister(0x08, (data & 0x1f), psg);
}


/**
 * public hcYmzShield:isEnvelope()
 * 
 * Returns boolean true if the current channel is being used for noise output.
 */
boolean hcYmzShield::isEnvelope(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] : this->_psg0Registers[0x08]);
  
  return(((data & 0x10) == 1) ? true : false);
}


