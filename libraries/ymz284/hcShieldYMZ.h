/**
 * Hardchord YMZ2N4 Shield (hcShieldYMZ.h)
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

#include <Arduino.h>
#include "hcSPI.h"

#ifndef __hcShieldYMZ_h__
#define __hcShieldYMZ_h__

/**
 * YMZ Control Registers:
 * 
 * $00 - Channel A frequency fine adjustment
 * $01 - Channel A frequency rough adjustment
 * $02 - Channel B frequncey fine adjustment
 * $03 - Channel B frequency rough adjustment
 * $04 - Channel C frequncey fine adjustment
 * $05 - Channel C frequency rough adjustment
 * $06 - Noise frequency
 * $07 - Mixer settings
 * $08 - Channel A level
 * $09 - Channel B level
 * $0A - Channel C level
 * $0B - Envelope frequency fine adjustment
 * $0C - Envelope frequency rough adjustment
 * $0D - Envelope shape
 * $0F - Control power (upper nibble must equal 0)
 */

// Register masks
#define __MASK_NOISE_C__ B00100000;
#define __MASK_NOISE_B__ B00010000;
#define __MASK_NOISE_A__ B00001000;

#define __MASK_TONE_C__ B00000100;
#define __MASK_TONE_B__ B00000010;
#define __MASK_TONE_A__ B00000001;

#define __MASK_ENVELOPE__ B00010000;

// Envelope controls
#define CONT B00001000;
#define ATT  B00000100;
#define ALT  B00000010;
#define HOLD B00000001;

// Write masks {ADDR, DATA}
#define __YMZ_M__ {B00000000, B00001001};
#define __YMZ_A__ {B00111000, B00111001};
#define __YMZ_B__ {B00000111, B00001111};


class hcShieldYMZ : hcSPI {
  public:
    hcShieldYMZ(byte);
    void setTonePeriod(byte, uint16_t);
    uint16_t getTonePeriod(byte);
    void setNoisePeriod(byte);
    byte getNoisePeriod();
    void setMixer(byte, boolean, boolean = false);
    boolean getMixer(byte, boolean = false);
    void allMixerOff();
    void setVolume(byte, byte);
    void setVolume(byte);
    byte getVolume(byte);
    void setEnvelopePeriod(uint16_t);
    uint16_t getEnvelopePeriod();
    void startEnvelope(byte);
    void startEnvelope();
  private:
    byte _pinSelect;
    byte _registers[0x0d];
    void setByte(byte, byte, byte);
    void _write(byte, byte);
    byte _getMask(byte);
    void write(byte);
};

#endif
