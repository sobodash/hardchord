/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.cpp)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2.2
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 */

#include "hcYmzShield.h"


// Create the handle to the shield.
hcYmzShield PSG;


// Base tone periods for the first 12 MIDI notes at 4MHz
static const uint16_t tpMidi[12] = {
  15289, 14431, 13621, 12856, 12135, 11454,
  10811, 10204,  9631,  9091,  8581,  8099
};


/**
 * Helper Methods
 * 
 * These static methods control data exchange with the YMZ284 chips and the
 * board's 75HC595 serial shifter.
 */
#if defined(__ATmega168__)  || defined(__ATMEGA328__)
void hcYmzShield::_shiftOut(uint8_t value) {
  PORTD &= ~MASK_RCK; // Latch
  for(uint8_t i = 8; i; i--) {
    PORTD &= ~MASK_SRCK; // Clock
    PORTD &= ~MASK_SER; // Data
    if(value & 0x80)
      PORTD |= MASK_SER; // Data
    value <<= 1;
    PORTD |= MASK_SRCK; // Clock
  }
  PORTD |= MASK_RCK; // Latch
}
void hcYmzShield::_busAddress() {
  PORTB &= ~MASK_SEL;
}
void hcYmzShield::_busData() {
  PORTB |= MASK_SEL;
}
void hcYmzShield::_psgWrite() {
  PORTB &= ~B00010100; // MASK_CS1 | MASK_CS2
  PORTB |= B00010100; // MASK_CS1 | MASK_CS2
}
void hcYmzShield::_psg0Write() {
  PORTB &= ~MASK_CS2;
  PORTB |= MASK_CS2;
}
void hcYmzShield::_psg1Write() {
  PORTB &= ~MASK_CS1;
  PORTB |= MASK_CS1;
}
#elif defined(__ATmega1280__) || defined(__ATmega2560__)
void hcYmzShield::_shiftOut(uint8_t value) {
  PORTE &= ~B00010000; // Latch
  for(uint8_t i = 8; i; i--) {
    PORTG &= ~B00100000; // Clock
    PORTE &= ~B00010000; // Data
    if(value & 0x80)
      PORTE |= B00010000; // Data
    value <<= 1;
    PORTG |= B00100000; // Clock
  }
  PORTE |= B00010000; // Latch
}
void hcYmzShield::_busAddress() {
  PORTB &= ~B00100000;
}
void hcYmzShield::_busData() {
  PORTB |= B00100000;
}
void hcYmzShield::_psgWrite() {
  PORTB &= ~B01010000; // MASK_CS1 | MASK_CS2
  PORTB |= B01010000; // MASK_CS1 | MASK_CS2
}
void hcYmzShield::_psg0Write() {
  PORTB &= ~B00010000;
  PORTB |= B00010000;
}
void hcYmzShield::_psg1Write() {
  PORTB &= ~B01000000;
  PORTB |= B01000000;
}
#else
void hcYmzShield::_shiftOut(uint8_t value) {
  digitalWrite(PIN_RCK, LOW);
  shiftOut(PIN_SER, PIN_SRCK, MSBFIRST, value);
  digitalWrite(PIN_RCK, HIGH);
}
void hcYmzShield::_busAddress() {
  digitalWrite(PIN_SEL, LOW);
}
void hcYmzShield::_busData() {
  digitalWrite(PIN_SEL, HIGH);
}
void hcYmzShield::_psgWrite() {
  digitalWrite(PIN_CS2, LOW);
  digitalWrite(PIN_CS1, LOW);
  digitalWrite(PIN_CS2, HIGH);
  digitalWrite(PIN_CS1, HIGH);
}
void hcYmzShield::_psg0Write() {
  digitalWrite(PIN_CS2, LOW);
  digitalWrite(PIN_CS2, HIGH);
}
void hcYmzShield::_psg1Write() {
  digitalWrite(PIN_CS1, LOW);
  digitalWrite(PIN_CS1, HIGH);
}
#endif


/**
 * public hcYmzShield()
 *
 * Initializes the shield as an object.
 */
hcYmzShield::hcYmzShield() {
  #if defined(__ATmega168__)  || defined(__ATMEGA328__)
  DDRB  |= B00011100; // MASK_CS1 | MASK_SEL | MASK_CS2
  DDRD  |= B00011100; // MASK_SER | MASK_RCK | MASK_SRCK
  PORTB |= B00010100; // MASK_CS1 | MASK_CS2
  #elif defined(__ATmega1280__) || defined(__ATmega2560__)
  DDRB  |= B01110000; // CS1 | SEL | CS2
  DDRE  |= B00110000; // SER | RCK
  DDRG  |= B00100000; // SRCK
  PORTB |= B01010000; // CS1 | CS2
  #else
  pinMode(PIN_SER,  OUTPUT);
  pinMode(PIN_RCK,  OUTPUT);
  pinMode(PIN_SRCK, OUTPUT);
  pinMode(PIN_CS1,  OUTPUT);
  pinMode(PIN_SEL,  OUTPUT);
  pinMode(PIN_CS2,  OUTPUT);
  
  // Disable writing until we actually want to do it
  digitalWrite(PIN_CS1, HIGH);
  digitalWrite(PIN_CS2, HIGH);
  #endif
  
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
 * Sets the tone period (TP) of a channel. Frequency is generated as
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
 * public hcYmzShield::getTonePeriod()
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
 * public hcYmzShield::getNoisePeriod()
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
 * public hcYmzShield::setEnvelopePeriod()
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
 * public hcYmzShield::getEnvelopePeriod()
 * 
 * Returns the current envelope period of the shield.
 */
uint16_t hcYmzShield::getEnvelopePeriod() {
  return(this->_psg0Registers[0x0b] + (this->_psg0Registers[0x0c] << 8));
}


/**
 * public hcYmzShield::setEnvelopeFrequency()
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
 * register are used. The bits toggle CONTINUE, ATTACK, ALTERNATE and HOLD.
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
 * public hcYmzShield::setTone()
 * 
 * Enables or disables tone output on a channel.
 */
void hcYmzShield::setTone(uint8_t channel, bool isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] :
    this->_psg0Registers[0x07]);
  
  uint8_t mask = (1 << channel);
  
  isEnabled ? data &= ~mask : data |= mask;
  
  this->_setRegister(0x07, (data & 0x3f), psg);
}


/**
 * public hcYmzShield::isTone()
 * 
 * Returns bool true if the current channel is being used for tone output.
 */
bool hcYmzShield::isTone(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] :
    this->_psg0Registers[0x07]);
  
  return(((data & (1 << channel)) == 0) ? true : false);
}


/**
 * public hcYmzShield::setNoise()
 * 
 * Enables or disables noise output on a channel.
 */
void hcYmzShield::setNoise(uint8_t channel, bool isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] :
    this->_psg0Registers[0x07]);
  
  uint8_t mask = (1 << (channel + 3));
  
  isEnabled ? data &= ~mask : data |= mask;
  
  this->_setRegister(0x07, (data & 0x3f), psg);
}


/**
 * public hcYmzShield::isNoise()
 * 
 * Returns bool true if the current channel is being used for noise output.
 */
bool hcYmzShield::isNoise(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x07] :
    this->_psg0Registers[0x07]);
  
  return(((data & (1 << (channel * 3))) == 0) ? true : false);
}


/**
 * public hcYmzShield::mute()
 * 
 * Toggle sound channels off.
 */
void hcYmzShield::mute() {
  this->_setRegister(0x07, B00111111, 3);
}


/**
 * public hcYmzShield::setVolume()
 * 
 * Adjust the value of each channel.
 */
void hcYmzShield::setVolume(uint8_t channel, uint8_t volume) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  volume &= 0xf;
  
  // Pick up the noise bit
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] :
    this->_psg0Registers[0x08]) & 0x10;
  
  this->_setRegister(0x08 + channel, volume + data, psg);
}


/**
 * public hcYmzShield::getVolume()
 * 
 * Returns the volume of a channel.
 */
byte hcYmzShield::getVolume(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);

  return(((psg == 2) ? this->_psg1Registers[0x08] :
    this->_psg0Registers[0x08]) & 0xf);
}


/**
 * public hcYmzShield::setVolume()
 * 
 * Adjust the value of all channels.
 */
void hcYmzShield::setVolume(uint8_t volume) {
  volume &= 0xf;
  for(uint8_t i = 0; i < 6; i++)
    this->setVolume(i, volume);
}


/**
 * public hcYmzShield::setEnvelope()
 * 
 * Enables or disables mixing a channel through the envelope generator.
 */
void hcYmzShield::setEnvelope(uint8_t channel, bool isEnabled) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] :
    this->_psg0Registers[0x08]);
  
  uint8_t mask = 0x10;
  
  isEnabled ? data |= mask : data &= ~mask;
  
  this->_setRegister(0x08, (data & 0x1f), psg);
}


/**
 * public hcYmzShield::isEnvelope()
 * 
 * Returns bool true if the current channel is being used for noise output.
 */
bool hcYmzShield::isEnvelope(uint8_t channel) {
  // Direct Channels 3-5 to PSG1
  uint8_t psg = this->_psgDetect(channel);
  channel -= ((channel > 2) ? 3 : 0);
  
  // Pull the register
  uint8_t data = ((psg == 2) ? this->_psg1Registers[0x08] :
    this->_psg0Registers[0x08]);
  
  return(((data & 0x10) == 1) ? true : false);
}


/**
 * public hcYmzShield::setChannels()
 * 
 * Sets all six channels of the chip in one shot using MIDI notes. 255 is
 * understood as OFF; 128 is understood as SKIP.
 * 
 * We will *NOT* waste clock cycles here to sanitize input.
 */
void hcYmzShield::setChannels(uint8_t c0, uint8_t c1, uint8_t c2, uint8_t c3,
  uint8_t c4, uint8_t c5) {
  uint8_t channel[6] = {c0, c1, c2, c3, c4, c5};
  uint8_t i;
  
  // First turn off any notes we will change
  for(i = 0; i < 6; i++)
    if(channel[i] != SKIP)
      this->setTone(i, false);
    
  // Now set the new notes
  for(i = 0; i < 6; i++)
    if(channel[i] != SKIP && channel[i] != OFF)
      this->setToneMidi(i, channel[i]);
  
  // And then re-enable output
  for(i = 0; i < 6; i++)
    if(channel[i] != SKIP && channel[i] != OFF)
      this->setTone(i);
}


/**
 * public hcYmzShield::setNote()
 * 
 * Sets a single channel to the given MIDI note. 255 is understood as OFF.
 * 
 * We will *NOT* waste clock cycles here to sanitize input.
 */
void hcYmzShield::setNote(uint8_t channel, uint8_t note) {
  // First turn off the channel
  this->setTone(channel, false);
    
  // Set the note and turn the channel on
  if(note != OFF) {
    this->setToneMidi(channel, note);
    this->setTone(channel);
  }
}


/**
 * public hcYmzShield::setTempo()
 * 
 * Sets the current tempo in beats per minute (BPM).
 */
void hcYmzShield::setTempo(uint8_t bpm) {
  this->_bpm = bpm;
}


/**
 * public hcYmzShield::getTempo()
 * 
 * Returns the current tempo in beats per minute (BPM).
 */
uint8_t hcYmzShield::getTempo() {
  return(this->_bpm);
}


/**
 * public hcYmzShield::beat()
 * 
 * Delays the number of milliseconds relative to 1/beat at the current tempo.
 * For example, at the default tempo of MODERATO, beat(4) would delay for
 * 666 milliseconds, or one quarter note.
 * 
 * For dotted notes, you can pass DOT, DOUBLEDOT or TRIPLEDOT as the second
 * parameter to extend the length.
 */
void hcYmzShield::beat(uint8_t beat, float dot) {
  // There are 60,000 milliseconds per minute
  uint16_t base = (60000/this->_bpm) * 4;
  delay((base/beat) * dot);
}


