/*
 * Hardchord SPI Controller (hcSPI.h)
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

#include <Arduino.h>

#ifndef __hcSPI_h__
#define __hcSPI_h__


/**
 * SPI Control Register (SPCR):
 *
 * MSB 7 - SPIE  - Toggle SPI interrupt on/off (HIGH/LOW)
 *     6 - SPE   - Toggle SPI bus on/off (HIGH/LOW)
 *     5 - DORD  - Toggle LSB/MSB data format (HIGH/LOW)
 *     4 - MSTR  - Toggle Arduino as SPI master/slave (HIGH/LOW)
 *     3 - CPOL  - Toggle clock idle state (HIGH/LOW)
 *     2 - CPHA  - Toggle data sample on falling/rising (HIGH/LOW)
 *     1 - SPR1  - Set SPI bus speed (2 bits):
 * LSB 0 - SPR0  - 0=4MHz, 11=250KHz
 *
 *
 * SPI Status Register (SPSR):
 *
 * MSB 7 - SPIF  - Set to HIGH when serial transfer complete
 *     6 - WCOL  - Set to HIGH if SPDR register written to during data transfer
 *     5 - ---   - 
 *     4 - ---   - 
 *     3 - ---   - 
 *     2 - ---   - 
 *     1 - ---   - 
 * LSB 0 - SPI2X - Toggle clockpeed doubler enable/disable (HIGH/LOW)
 */

#define __MASK_INIT__ ((1 << SPE) | (1 << MSTR))
#define __MASK_SPIE__ (1 << SPIE)
#define __MASK_SPE__  (1 << SPE)
#define __MASK_DORD__ (1 << DORD)
#define __MASK_MSTR__ (1 << MSTR)
#define __MASK_MODE__ ((1 << CPOL) | (1 << CPHA))
#define __MASK_SPR__  ((1 << SPR1) | (1 << SPR0))
#define __MASK_SPIF__ (1 << SPIF)
#define __MASK_WCOL__ (1 << WCOL)
#define __MASK_SPIX__ (1 << SPI2X)


class hcSPI {
  public:
    static void on();
    static void off();
    static void setBitOrder(byte);
    static void setSpeed(byte);
    static void setHiSpeed(byte);
    static void setMode(byte);
    static void attachInterrupt();
    static void detachInterrupt();
    static byte transfer(byte);
    static void clear();
};

class hcGenericSPI : hcSPI {
  public:
    hcGenericSPI(byte, byte);
    void write(byte);
  private:
    byte _pinSelect;
};

#endif

