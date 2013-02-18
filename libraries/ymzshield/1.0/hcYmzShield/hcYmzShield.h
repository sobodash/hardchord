/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.h)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2
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


#ifndef __HCYMZSHIELD_H__
#define __HCYMZSHIELD_H__

#include <Arduino.h>


// Envelope controls
#define __CONT__ B00001000
#define __ATT__  B00000100
#define __ALT__  B00000010
#define __HOLD__ B00000001

// YMZ Shield pinning masks for AVR
#define __MASK_SER__  B00000100
#define __MASK_RCK__  B00001000
#define __MASK_SRCK__ B00010000
#define __MASK_CS1__  B00000100
#define __MASK_SEL__  B00001000
#define __MASK_CS2__  B00010000

// YMZ Shield pinning masks for digitalWrite
#define __PIN_SER__  2
#define __PIN_RCK__  3
#define __PIN_SRCK__ 4
#define __PIN_CS1__  10
#define __PIN_SEL__  11
#define __PIN_CS2__  12


class hcYmzShield {
  public:
    hcYmzShield();
    void setTonePeriod(uint8_t, uint16_t);
    uint16_t getTonePeriod(uint8_t);
    void setToneFrequency(uint8_t, float);
    void setToneMidi(uint8_t, uint16_t);
    void setNoisePeriod(uint8_t);
    uint8_t getNoisePeriod();
    void setNoiseFrequency(float);
    void mute();
    void setEnvelopePeriod(uint16_t);
    uint16_t getEnvelopePeriod();
    void setEnvelopeFrequency(float);
    void startEnvelope(uint8_t);
    void restartEnvelope();
    void setTone(uint8_t, boolean = true);
    boolean isTone(uint8_t);
    void setNoise(uint8_t, boolean = true);
    boolean isNoise(uint8_t);
    void setEnvelope(uint8_t, boolean = true);
    boolean isEnvelope(uint8_t);
    void setVolume(uint8_t, uint8_t);
    void setVolume(uint8_t);
    uint8_t getVolume(uint8_t);
  private:
    uint8_t _psg0Registers[0x0d];
    uint8_t _psg1Registers[0x0d];
    void _setRegister(uint8_t, uint8_t, uint8_t = 0);
    static void _shiftOut(uint8_t);
    static void _busAddress();
    static void _busData();
    static void _psgWrite();
    static void _psg0Write();
    static void _psg1Write();
    static uint8_t _psgDetect(uint8_t);
};

#endif __HCYMZSHIELD_H__
