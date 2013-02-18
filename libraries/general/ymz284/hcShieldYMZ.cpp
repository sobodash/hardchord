/**
 * Hardchord YMZ2N4 Shield (hcShieldYMZ.cpp)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1
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

#include "hcShieldYMZ.h"
#include <Arduino.h>


/**
 * Notes about YMZ chip timing:
 * 
 * At 16MHz, each CPU cycle on the arduino takes roughly 62.5ns to complete. We
 * only need a 30ns delay, at the absolute most, to push data into the YMZ chips.
 * 
 * Unfortunately, Arduino doesn't really have a nice way to create small delays:
 * delayMicroseconds() is much too long for our purposes, and it interferes with
 * any running Timers.
 *
 * The best solution at this point is to use AVR to drop in a NOP opcode through
 * inline assembler. It's twice as long of a delay as needed, but is the best
 * option given current Arduino clockspeeds.
 */

/**
 * public ymzController
 *
 * This class initializes the object. The three parameters set the pins where the
 * controller is attached to the Arduino. By default it assumes pins 2-4.
 */
hcShieldYMZ::hcShieldYMZ(byte pinSelect) {
  // Save the output pin for later use
  this->_pinSelect = pinSelect;
  
  // Configure the SPI pins
  pinMode(SCK, OUTPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(pinSelect, OUTPUT);
  digitalWrite(pinSelect, HIGH);
  
  // Set the SPI bus to its initial state
  SPCR = __MASK_INIT__;
  SPSR &= ~__MASK_SPIX__;
  
  // Change the bit order if needed
  this->setBitOrder(MSBFIRST);
  
  // Clear out any cobwebs
  this->clear();
  
  // Initialize all registers to 0
  memset(this->_registers, 0, 0x0d);
  
  // Make sure speakers don't fart
  this->allMixerOff();
}


/**
 * private ymzController::write()
 * 
 * Write a byte to the YMZ284.
 */
void hcShieldYMZ::_write(byte state, byte value) {
  // Push byte into the serial shifter
  digitalWrite(this->_pinSelect, LOW);
  this->transfer(state);
  this->transfer(value);
  digitalWrite(this->_pinSelect, HIGH);
  __asm__("nop\n\t");
}


/**
 * private ymzController::setByte()
 * 
 * Set a byte in the YMZ284's internal registers.
 */
void hcShieldYMZ::setByte(byte reg, byte data, byte mask) {
  // Push out data
  this->_write(mask[0], reg);
  this->_write(mask[1], data);    
  
  // Copy the byte to the internal register map
  this->_registers[reg] = data;
}

byte hcShieldYMZ::_getMask(byte channel) {
  if(channel < 3)
    return(__YMZ_A__);
  else
    return(__YMZ_B__);
}


/**
 * public ymzController::setTonePeriod()
 * 
 * Sets the tone period (TP) of a channel on the YMZ284. The formula for
 * the frequency output is:
 * frequency = 4MHz / (32 * TP)
 */
void hcShieldYMZ::setTonePeriod(byte channel, uint16_t tp12) {
  byte mask = this->_getMask(channel);
  this->setByte(channel *= 2, (tp12 & 0xff));
  // Drop the top nibble to avoid storing bad info in the registers
  this->setByte(++channel, (tp12 >> 8));
}
uint16_t hcShieldYMZ::getTonePeriod(byte channel) {
  unsigned int tp = this->_registers[(channel *=2)];
  tp += (this->_registers[(++channel)] << 8);
  return(tp);
}


/**
 * public ymzController::setNoisePeriod()
 * 
 * Sets the noise period (NP) for the noise generator of the YMZ284. The
 * formula for the frequency of output is:
 * 
 * frequency = 4MHz / (32 * NP)
 */
void hcShieldYMZ::setNoisePeriod(byte data) {
  setByte(0x06, (data & 0x18)); // Drop the top 3 bits
}
byte hcShieldYMZ::getNoisePeriod() {
  return((int)this->_registers[0x06]);
}


/**
 * public ymzController:setMixer()
 * 
 * Toggle sound channels on or off.
 */
void hcShieldYMZ::setMixer(byte channel, boolean isEnabled, boolean isNoise) {
  byte data = this->_registers[0x07];
  byte mask = (1 << (channel + (isNoise ? 3 : 0)));
  if(isEnabled)
    data &= ~mask;
  else
    data |= mask;
  this->setByte(0x07, (data & 0x3f));
}
boolean hcShieldYMZ::getMixer(byte channel, boolean isNoise) {
  byte mask = (1 << (channel + (isNoise ? 3 : 0)));
    Serial.println(this->_registers[0x07], BIN);
  if(this->_registers[0x07] & mask)
    return(false);
  else
    return(true);
}


/**
 * public ymzController:allMixerOff()
 * 
 * Toggle sound channels off.
 */
void hcShieldYMZ::allMixerOff() {
  setByte(0x07, B00111111);
}


/**
 * public ymzController:setVolume()
 * 
 * Adjust the value of each channel.
 */
void hcShieldYMZ::setVolume(byte channel, byte volume) {
  if(channel >= 3) return;// The chip only has 3 channels
  
  // Sanitize the volume value. Volume cannot be higher than 15,
  // so right shift 4 bytes to convert from a scale of 255.
  if(volume > 15)
    volume >>= 4;
  setByte(0x08 + channel, volume);
}
byte hcShieldYMZ::getVolume(byte channel) {
  return(this->_registers[0x08 + channel]);
}


/**
 * public ymzController:setVolume()
 * 
 * Adjust the value of all channels.
 */
void hcShieldYMZ::setVolume(byte volume) {
  byte reg, i;
  
  // Sanitize the volume value. Volume levels higher than 15,
  // go to the envelope generator.
  if(volume > 0x1f)
    volume = 0x1f;
    
  for(reg = 0x08, i = 3; i > 0; reg++, i--)
    setByte(reg, volume);
}


/**
 * public ymzController:setEnvelopePeriod()
 * 
 * Adjust the envelope period (EP) to adjust how frequently the noise
 * envelope repeats.
 * 
 * frequency = 4MHz / (256 * EP)
 */
void hcShieldYMZ::setEnvelopePeriod(uint16_t data) {
  data &= 0xffff;
  setByte(0x0b, lowByte(data));
  setByte(0x0c, highByte(data));
}
uint16_t hcShieldYMZ::getEnvelopePeriod() {
  return(this->_registers[0x0b] + (this->_registers[0x0c] << 8));
}


/**
 * public ymzController::startEnvelope()
 * 
 * Sets the shape of the noise envelope. Only the lower 4 bits of the
 * register are used. The bits correspond to CONT, ATT, ALT and HOLD.
 */
void hcShieldYMZ::startEnvelope(byte data) {
  if(data > 0x0f) return; // Ignore invalid envelope sizes
  
  setByte(0x0d, data);
}

void hcShieldYMZ::startEnvelope() {
  startEnvelope(this->_registers[0x0d]);
}

