/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.h)
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


#ifndef __HCYMZSHIELD_H__
#define __HCYMZSHIELD_H__

#include <Arduino.h>


// Envelope controls
#define __CONT__ B00001000
#define __ATT__  B00000100
#define __ALT__  B00000010
#define __HOLD__ B00000001

// YMZ Shield pinning masks
#define __MASK_SER__  B00000100;
#define __MASK_RCK__  B00001000;
#define __MASK_SRCK__ B00010000;
#define __MASK_CS1__  B00000100;
#define __MASK_SEL__  B00001000;
#define __MASK_CS2__  B00010000;

class hcYmzShield {
  public:
    hcYmzShield();
    void setTonePeriod(byte, uint16_t);
    uint16_t getTonePeriod(byte);
    void setToneFrequency(byte, float);
    void setToneMidi(byte, uint16_t);
    void setNoisePeriod(byte);
    byte getNoisePeriod();
    void setNoiseFrequency(float);
    void mute();
    void setEnvelopePeriod(uint16_t);
    uint16_t getEnvelopePeriod();
    void setEnvelopeFrequency(float);
    void startEnvelope(byte);
    void restartEnvelope();
    void setTone(byte, boolean = true);
    boolean isTone(byte);
    void setNoise(byte, boolean = true);
    boolean isNoise(byte);
    void setEnvelope(byte, boolean = true);
    boolean isEnvelope(byte);
    void setVolume(byte, byte);
    void setVolume(byte);
    byte getVolume(byte);
  private:
    byte _psg0Registers[0x0d];
    byte _psg1Registers[0x0d];
    void _setByte(byte, byte, byte = 0);
    static void _shiftOut(byte);
    static void _busAddress();
    static void _busData();
    static void _psgWrite();
    static void _psg0Write();
    static void _psg1Write();
    static byte _psgDetect(byte);
};

#endif __HCYMZSHIELD_H__
