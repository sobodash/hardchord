/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.h)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2.2
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


#ifndef __HCYMZSHIELD_H
#define __HCYMZSHIELD_H

#include <Arduino.h>

// Envelope controls
#define CONT B00001000
#define ATT  B00000100
#define ALT  B00000010
#define HOLD B00000001

// YMZ Shield pinning masks for AVR
#define MASK_SER  B00000100
#define MASK_RCK  B00001000
#define MASK_SRCK B00010000
#define MASK_CS1  B00000100
#define MASK_SEL  B00001000
#define MASK_CS2  B00010000

// YMZ Shield pinning masks for digitalWrite
#define PIN_SER  2
#define PIN_RCK  3
#define PIN_SRCK 4
#define PIN_CS1  10
#define PIN_SEL  11
#define PIN_CS2  12

// Special note states
#define SKIP 128
#define OFF  255


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
    void setChannels(uint8_t, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF);
  private:
    uint8_t _psg0Registers[0x0d];
    uint8_t _psg1Registers[0x0d];
    void _setRegister(uint8_t, uint8_t, uint8_t = 0);
    inline static void _shiftOut(uint8_t);
    inline static void _busAddress();
    inline static void _busData();
    inline static void _psgWrite();
    inline static void _psg0Write();
    inline static void _psg1Write();
    inline static uint8_t _psgDetect(uint8_t);
};

extern hcYmzShield PSG;


#endif __HCYMZSHIELD_H
