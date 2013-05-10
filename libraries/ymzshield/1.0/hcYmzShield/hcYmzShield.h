/**
 * Hardchord YMZ Shield 1.0 (hcYmzShield.h)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.5.0
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


#ifndef __HCYMZSHIELD_H
#define __HCYMZSHIELD_H


/**
 * Include the Arduino libraries
 */
#if defined(ARDUINO) && ARDUINO >= 100
  #include <Arduino.h>
#else
  #include "WProgram.h"
  #include "pins_arduino.h"
#endif


/**
 * Uncomment whichever of these matches your board version.
 *
 * Revision 1.0 boards modded for SPI should use Revision 2.0.
 */
#ifndef YMZ_VERSION
  #define YMZ_VERSION 200
#endif


/**
 * Default to space-heavy precise notes instead of octave shifts.
 */
#ifndef YMZ_PRECISION
  #define YMZ_PRECISION 1
#endif


/**
 * Pin and Port Assignments
 * 
 * The current code should support all known Arduino boards as of 2013.
 */
#if YMZ_VERSION >= 200 // Revision 2.0 Board
  
  // Arduino NG, Diecimila, Duemilanove, Uno, Mini, Nano, LilyPad
  #if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega168P__) || defined(__AVR_ATmega168A__) || defined(__AVR_ATmega168PA__)
    // Chip Select 1
    #define YMZ_CS1 0x04  // 00000100
    #define YMZ_CS1_PORT PORTD
    #define YMZ_CS1_DIR DDRD
    // Chip Select 2
    #define YMZ_CS2 0x08  // 00001000
    #define YMZ_CS2_PORT PORTD
    #define YMZ_CS2_DIR DDRD
    // Address/Data Toggle
    #define YMZ_SEL 0x01  // 00000001
    #define YMZ_SEL_PORT PORTB
    #define YMZ_SEL_DIR DDRB
    // Slave Select
    #define YMZ_RCK 0x02  // 00000010
    #define YMZ_RCK_PORT PORTB
    #define YMZ_RCK_DIR DDRB
    // Default Slave Select
    #define YMZ_SS 0x04   // 00000100
    #define YMZ_SS_PORT PORTB
    #define YMZ_SS_DIR DDRB
    // Master Out/Slave In
    #define YMZ_MOSI 0x08 // 00001000
    #define YMZ_MOSI_PORT PORTB
    #define YMZ_MOSI_DIR DDRB
    // Master Clock
    #define YMZ_SCK 0x20  // 00100000
    #define YMZ_SCK_PORT PORTB
    #define YMZ_SCK_DIR DDRB
  
  // Arduino Mega, Mega 2560
  #elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
    // Chip Select 1
    #define YMZ_CS1 0x10  // 00010000
    #define YMZ_CS1_PORT PORTE
    #define YMZ_CS1_DIR DDRE
    // Chip Select 2
    #define YMZ_CS2 0x20  // 00100000
    #define YMZ_CS2_PORT PORTE
    #define YMZ_CS2_DIR DDRE
    // Address/Data Toggle
    #define YMZ_SEL 0x20  // 00100000
    #define YMZ_SEL_PORT PORTH
    #define YMZ_SEL_DIR DDRH
    // Slave Select
    #define YMZ_RCK 0x40  // 01000000
    #define YMZ_RCK_PORT PORTH
    #define YMZ_RCK_DIR DDRH
    // Default Slave Select
    #define YMZ_SS 0x01   // 00000001
    #define YMZ_SS_PORT PORTB
    #define YMZ_SS_DIR DDRB
    // Master Out/Slave In
    #define YMZ_MOSI 0x04 // 00000100
    #define YMZ_MOSI_PORT PORTB
    #define YMZ_MOSI_DIR DDRB
    // Master Clock
    #define YMZ_SCK 0x02  // 00000010
    #define YMZ_SCK_PORT PORTB
    #define YMZ_SCK_DIR DDRB
  
  // Arduino Leonardo
  #elif defined(__AVR_ATmega32U4__)
    // Chip Select 1
    #define YMZ_CS1 0x01  // 00000010
    #define YMZ_CS1_PORT PORTD
    #define YMZ_CS1_DIR DDRD
    // Chip Select 2
    #define YMZ_CS2 0x02  // 00000010
    #define YMZ_CS2_PORT PORTD
    #define YMZ_CS2_DIR DDRD
    // Address/Data Toggle
    #define YMZ_SEL 0x10  // 00010000
    #define YMZ_SEL_PORT PORTB
    #define YMZ_SEL_DIR DDRB
    // Slave Select
    #define YMZ_RCK 0x20  // 00100000
    #define YMZ_RCK_PORT PORTB
    #define YMZ_RCK_DIR DDRB
    // Default Slave Select
    #define YMZ_SS 0x01   // 00000001
    #define YMZ_SS_PORT PORTB
    #define YMZ_SS_DIR DDRB
    // Master Out/Slave In
    #define YMZ_MOSI 0x04 // 00000100
    #define YMZ_MOSI_PORT PORTB
    #define YMZ_MOSI_DIR DDRB
    // Master Clock
    #define YMZ_SCK 0x02  // 00000010
    #define YMZ_SCK_PORT PORTB
    #define YMZ_SCK_DIR DDRB
  
  // Arduino generic fallback
  #else
    #define YMZ_FALLBACK
    // Chip Select 1
    #define YMZ_CS1 2
    // Chip Select 2
    #define YMZ_CS2 3
    // Address/Data Toggle
    #define YMZ_SEL 8
    // Slave Select
    #define YMZ_RCK 9
    // Default Slave Select
    #define YMZ_SS SS
    // Master Out/Slave In
    #define YMZ_MOSI MOSI
    // Master Clock
    #define YMZ_SCK MCK
    
  #endif

#else // Revision 1.0 Board
  
  // Arduino NG, Diecimila, Duemilanove, Uno, Mini, Nano, LilyPad
  #if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega168P__) || defined(__AVR_ATmega168A__) || defined(__AVR_ATmega168PA__)
    // Chip Select 1
    #define YMZ_CS1 0x10  // 00010000
    #define YMZ_CS1_PORT PORTB
    #define YMZ_CS1_DIR DDRB
    // Chip Select 2
    #define YMZ_CS2 0x04  // 00000100
    #define YMZ_CS2_PORT PORTB
    #define YMZ_CS2_DIR DDRB
    // Address/Data Toggle
    #define YMZ_SEL 0x08  // 00001000
    #define YMZ_SEL_PORT PORTB
    #define YMZ_SEL_DIR DDRB
    // 75HC595 Latch
    #define YMZ_RCK 0x08  // 00001000
    #define YMZ_RCK_PORT PORTD
    #define YMZ_RCK_DIR DDRD
    // 75HC595 Data
    #define YMZ_SER 0x04  // 00000100
    #define YMZ_SER_PORT PORTD
    #define YMZ_SER_DIR DDRD
    // 75HC595 Clock
    #define YMZ_SRCK 0x10 // 00010000
    #define YMZ_SRCK_PORT PORTD
    #define YMZ_SRCK_DIR DDRD
  
  // Arduino Mega, Mega 2560
  #elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
    // Chip Select 1
    #define YMZ_CS1 0x10  // 00010000
    #define YMZ_CS1_PORT PORTB
    #define YMZ_CS1_DIR DDRB
    // Chip Select 2
    #define YMZ_CS2 0x40  // 01000000
    #define YMZ_CS2_PORT PORTB
    #define YMZ_CS2_DIR DDRB
    // Address/Data Toggle
    #define YMZ_SEL 0x20  // 00100000
    #define YMZ_SEL_PORT PORTB
    #define YMZ_SEL_DIR DDRB
    // 75HC595 Latch
    #define YMZ_RCK 0x10  // 00010000
    #define YMZ_RCK_PORT PORTE
    #define YMZ_RCK_DIR DDRE
    // 75HC595 Data
    #define YMZ_SER 0x10  // 00010000
    #define YMZ_SER_PORT PORTE
    #define YMZ_SER_DIR DDRE
    // 75HC595 Clock
    #define YMZ_SRCK 0x20 // 00100000
    #define YMZ_SRCK_PORT PORTG
    #define YMZ_SRCK_DIR DDRG
  
  // Arduino Leonardo
  #elif defined(__AVR_ATmega32U4__)
    // Chip Select 1
    #define YMZ_CS1 0x40  // 01000000
    #define YMZ_CS1_PORT PORTD
    #define YMZ_CS1_DIR DDRD
    // Chip Select 2
    #define YMZ_CS2 0x40  // 01000000
    #define YMZ_CS2_PORT PORTB
    #define YMZ_CS2_DIR DDRB
    // Address/Data Toggle
    #define YMZ_SEL 0x80  // 10000000
    #define YMZ_SEL_PORT PORTB
    #define YMZ_SEL_DIR DDRB
    // 75HC595 Latch
    #define YMZ_RCK 0x01  // 00000001
    #define YMZ_RCK_PORT PORTD
    #define YMZ_RCK_DIR DDRD
    // 75HC595 Data
    #define YMZ_SER 0x02  // 00000010
    #define YMZ_SER_PORT PORTD
    #define YMZ_SER_DIR DDRD
    // 75HC595 Clock
    #define YMZ_SRCK 0x10 // 00010000
    #define YMZ_SRCK_PORT PORTD
    #define YMZ_SRCK_DIR DDRD
  
  // Arduino fallback
  #else
    #define YMZ_FALLBACK
    // Chip Select 1
    #define YMZ_CS1 12
    // Chip Select 2
    #define YMZ_CS2 10
    // Address/Data Toggle
    #define YMZ_SEL 11
    // 75HC595 Latch
    #define YMZ_RCK 3
    // 75HC595 Data
    #define YMZ_SER 2
    // 75HC595 Clock
    #define YMZ_SRCK 4
  
  #endif
#endif



/**
 * Yamaha YMZ284 Register Masks
 */
#define YMZ_MASK_TFREQ  0x0fff
#define YMZ_MASK_NFREQ  0x1f
#define YMZ_MASK_MIXER  0x3f
#define YMZ_MASK_LEVEL  0x1f
#define YMZ_MASK_CHAN   0x07
#define YMZ_MASK_VOLUME 0x0f
#define YMZ_MASK_ENVEL  0x10
#define YMZ_MASK_EFREQ  0xffff
#define YMZ_MASK_ADSR   0x0f


/**
 * Yamaha ADSR envelope controls
 * 
 * These are intended to be used in combination by ORing (|) the names.
 */
#define CONT 0x08 // Continue
#define ATT  0x04 // Attack
#define ALT  0x02 // Alternate
#define HOLD 0x01 // Hold


/**
 * Hardchord Music Terms
 * 
 * The following defined terms are used in all Hardchord projects. Make sure
 * they only get defined once.
 */
#ifndef __HCMUSICTERMS
  #define __HCMUSICTERMS
  
  // Block header
  #define YMZ_MAGIC 0x4843 // "HC"
  
  // MIDI state extensions
  #define SKIP 128
  #define OFF  255
  
  // Numerators for calculating dotted notes
  #define DOT 12
  #define DOUBLEDOT 14
  #define TRIPLEDOT 15
  
  // Tempos
  #define LARGHISSIMO 16
  #define GRAVE 30
  #define LENTO 42
  #define LARGO 48
  #define LARGHETTO 52
  #define ADAGIO 60
  #define ADAGIETTO 68
  #define ANDANTE 75
  #define ANDANTINO 80
  #define MODERATO 90
  #define ALEGRETTO 102
  #define ALLEGRO 120
  #define VIVACE 136
  #define VIVACISSIMO 146
  #define ALLEGRISSIMO 160
  #define PRESTO 174
  #define PRESTISSIMO 180
  
  // Articulation
  #define STACCATO 20
  #define LEGATO 0
  
#endif


/**
 * hcYmzShield()
 *
 * Core class that provides all methods necessary to control the
 * Hardchord YMZ Shield.
 */
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
    void setTone(uint8_t, bool = true);
    bool isTone(uint8_t);
    void setNoise(uint8_t, bool = true);
    bool isNoise(uint8_t);
    void setEnvelope(uint8_t, bool = true);
    bool isEnvelope(uint8_t);
    void setVolume(uint8_t, uint8_t, bool = false);
    void setVolume(uint8_t);
    uint8_t getVolume(uint8_t);
    void setChannels(uint8_t, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF, uint8_t = OFF);
    void setNote(uint8_t, uint8_t);
    void setTempo(uint8_t);
    void setArticulation(uint8_t = 8);
    uint8_t getTempo();
    void beat(uint8_t, uint8_t = 8);
    void playBlock(const uint8_t*);
  protected:
    uint8_t _psg0Registers[0x0e];
    uint8_t _psg1Registers[0x0e];
    uint8_t _volume[6];
    uint8_t _tone;
    uint8_t _bpm;
    uint8_t _articulation;
    void _setRegisterPsg(uint8_t, uint8_t);
    void _setRegisterPsg0(uint8_t, uint8_t);
    void _setRegisterPsg1(uint8_t, uint8_t);
    inline static void _shiftOut(uint8_t);
    inline static void _busAddress();
    inline static void _busData();
    inline static void _psg0Write();
    inline static void _psg1Write();
};

extern hcYmzShield YMZ;


#endif
