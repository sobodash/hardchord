/*
 * Hardchord SPI Controller (hcSPI.cpp)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.01
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

#include "hcSPI.h"


/**
 * hcSPI.on()
 *
 * Enables the SPI bus for output.
 */
void hcSPI::on() {
  SPCR |= __MASK_SPE__;
}


/**
 * hcSPI.off()
 *
 * Disables output from the SPI bus.
 */
void hcSPI::off() {
  SPCR &= ~__MASK_SPE__;
}


/**
 * hcSPI.setBitOrder()
 *
 * Toggles the bit order of the SPI bus.
 */
void hcSPI::setBitOrder(byte bitOrder)
{
  if(bitOrder == MSBFIRST)
    SPCR &= ~__MASK_DORD__;
  else
    SPCR |= __MASK_DORD__;
}


/**
 * hcSPI.setSpeed()
 *
 * Changes the data mode of the SPI bus.
 */
void hcSPI::setSpeed(uint8_t rate)
{
  SPCR = ((SPCR & ~__MASK_SPR__) | (rate & 3));
}


/**
 * hcSPI.setHiSpeed()
 *
 * Toggle the state of the SPI clockspeed doubler.
 */
void hcSPI::setHiSpeed(byte enable = 1)
{
  SPSR = ((SPSR & ~__MASK_SPIX__) | !!enable);
}


/**
 * hcSPI.setMode()
 *
 * Changes the data mode of the SPI bus.
 */
void hcSPI::setMode(uint8_t mode)
{
  SPCR = ((SPCR & ~__MASK_MODE__) | ((mode & 3) << 2));
}


/**
 * hcSPI.attachInterrupt()
 *
 * Attach an interrupt handler to the SPI bus.
 */
void hcSPI::attachInterrupt() {
  SPCR |= __MASK_SPIE__;
}


/**
 * hcSPI.detachInterrupt()
 *
 * Detach interrupt handler from the SPI bus.
 */
void hcSPI::detachInterrupt() {
  SPCR &= ~__MASK_SPIE__;
}


/**
 * hcSPI.transfer()
 *
 * Send a byte.
 */
byte hcSPI::transfer(byte data) {
  SPDR = data;
  while (!(SPSR & __MASK_SPIF__));
  return(SPDR);
}


/**
 * hcSPI.clear()
 *
 * Clear out any cobwebs.
 */
void hcSPI::clear() {
  byte clr;
  clr = SPSR;
  clr = SPDR;
}


/**
 * hcGenericSPI()
 *
 * Creates a new SPI handle on the enable pin. Bit order is passed as the second parameter.
 */
hcGenericSPI::hcGenericSPI(byte pinSelect, byte bitOrder = MSBFIRST) {
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
  this->setBitOrder(bitOrder);
  
  // Clear out any cobwebs
  this->clear();
}


/**
 * hcSPI.write()
 *
 * Writes data to the SPI bus.
 */
void hcGenericSPI::write(byte data) {
  digitalWrite(this->_pinSelect, LOW);
  this->transfer(data);
  digitalWrite(this->_pinSelect, HIGH);
}


