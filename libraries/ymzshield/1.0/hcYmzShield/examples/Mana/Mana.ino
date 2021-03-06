/**
 * Endless Battlefield Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1.0
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

#include <hcYmzShield.h>


const static uint8_t ffa[2890] PROGMEM = {
  0x48, 0x43, 0x01, 0x51, 0x00, 0x0b, 0x51, 0x01, 0x0a, 0x51, 0x02, 0x0a, 
  0x51, 0x03, 0x0a, 0x51, 0x04, 0x0b, 0x51, 0x05, 0x0a, 0x83, 0x45, 0x3c, 
  0x21, 0x40, 0xff, 0xff, 0xa0, 0x04, 0x0c, 0x83, 0x40, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x45, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x4c, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x3c, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x3b, 
  0x1f, 0x3e, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x80, 0x39, 0x1d, 0x40, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4a, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x04, 0x08, 0x83, 0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x47, 0x3b, 0x1f, 0x3b, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 
  0x43, 0x80, 0x80, 0x37, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x47, 0x3c, 
  0x21, 0x3e, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x48, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x47, 0x80, 0x80, 0x3e, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x40, 0x80, 0x80, 0x3c, 0x80, 0x80, 0xa0, 0x04, 
  0x08, 0x83, 0x80, 0x3b, 0x1f, 0x3b, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 
  0x80, 0x39, 0x1d, 0x39, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x80, 0x80, 
  0x80, 0x3b, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x80, 0x80, 0x80, 0x3c, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x3b, 0x1f, 0x3b, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x80, 0x80, 0x3c, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x3e, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x3e, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x45, 0x3c, 
  0x21, 0x40, 0x80, 0x80, 0xa1, 0x02, 0x08, 0x83, 0x40, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x45, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x4c, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x3c, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x3b, 
  0x1f, 0x47, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x80, 0x39, 0x1d, 0x48, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4a, 0x80, 0x80, 0x47, 0x80, 0x80, 
  0xa1, 0x01, 0x39, 0x83, 0x48, 0x80, 0x80, 0x45, 0x80, 0x80, 0xa1, 0x01, 
  0x39, 0x83, 0x47, 0x3b, 0x1f, 0x43, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 
  0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x4a, 0x80, 
  0x80, 0x40, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4c, 0x3c, 0x24, 0x43, 
  0x80, 0x80, 0xa0, 0x04, 0x0e, 0x83, 0x4f, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x80, 0x80, 0x4c, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x4e, 0x80, 0x80, 0x4a, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x4d, 0x80, 0x80, 0x4b, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4c, 0x80, 
  0x80, 0x4c, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x50, 0x3e, 0x1c, 0x50, 
  0x34, 0x1c, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x36, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x38, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x39, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x80, 0x1c, 0x4e, 0x3b, 0x1c, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 
  0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x40, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x1c, 0x4c, 0x40, 0x1c, 0xa0, 0x20, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x42, 0x80, 0xa0, 0x20, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x80, 0x44, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x45, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 
  0x47, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x48, 0x80, 
  0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x1e, 0x4e, 0x4a, 0x1e, 0xa0, 0x20, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x4c, 0x80, 0xa0, 0x20, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x80, 0x4e, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x50, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 
  0x51, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x53, 0x80, 
  0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 0x20, 0x50, 0x54, 0x20, 0xa0, 0x20, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x56, 0x80, 0xa0, 0x20, 0x08, 0x83, 
  0xff, 0xff, 0x80, 0x80, 0x58, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x5a, 0x80, 0xa0, 0x20, 0x08, 0x83, 0x51, 0x29, 0x1d, 0xff, 
  0x41, 0xff, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x4f, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x4d, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4c, 0x80, 
  0x80, 0x80, 0xff, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4a, 0x29, 0x1d, 0x80, 
  0x45, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x30, 0x24, 0x43, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x44, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x29, 0x1d, 0x45, 0x48, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 
  0x1f, 0x47, 0x47, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4c, 0x2b, 0x1f, 0x47, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x4d, 0x2b, 0x1f, 0x47, 0x43, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x51, 0x2b, 
  0x1f, 0x4a, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4f, 0x30, 0x24, 0x48, 0x40, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x37, 0x2b, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x4c, 0x37, 0x2b, 0x43, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x30, 
  0x24, 0x80, 0x43, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4d, 0x37, 0x2b, 0x45, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4e, 0x80, 0x80, 0x46, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x4f, 0x2f, 0x23, 0x47, 0x47, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x35, 0x29, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x48, 0x2d, 0x21, 0x48, 0x48, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x45, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x80, 0x45, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 0x28, 0x47, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x2d, 0x21, 0x48, 0x43, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x4a, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x48, 0x2b, 
  0x1f, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x47, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x45, 0x29, 0x1d, 0x3c, 0x45, 0x80, 
  0xa1, 0x01, 0x39, 0x83, 0x80, 0x30, 0x24, 0x3b, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x29, 0x1d, 0x39, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x29, 
  0x1d, 0x80, 0x48, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x48, 0x29, 0x1d, 0x80, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x47, 0x29, 0x1d, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x45, 0x29, 0x1d, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x43, 0x2b, 0x1f, 0x3b, 0x4a, 0x80, 0xa1, 0x01, 0x39, 0x83, 
  0x80, 0x32, 0x26, 0x3c, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x32, 
  0x26, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x47, 0x2b, 0x1f, 0x3e, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 0x1f, 0x80, 0x47, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x45, 0x2b, 0x1f, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x44, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x43, 0x2b, 0x1f, 0x80, 0x43, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 
  0x1f, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x45, 0x2d, 0x21, 0x3c, 
  0x45, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 0x28, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x34, 0x28, 0x3e, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x2d, 0x21, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x3b, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 0x28, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x3c, 0x45, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x3e, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x34, 0x28, 0x40, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x3e, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x3c, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x3e, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x34, 0x28, 0x40, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x3e, 0xff, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x2d, 0x21, 0x3c, 0x47, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x47, 0x80, 
  0x80, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x48, 0x2b, 0x1f, 0x80, 
  0x4a, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4a, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x4c, 0x29, 0x1d, 0x80, 0x3c, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x29, 0x1d, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x80, 
  0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x4a, 0x30, 0x24, 0x80, 0x3c, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 
  0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x4f, 0x80, 0x80, 0x80, 0x40, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x2d, 0x21, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4c, 0x29, 0x1d, 0x80, 
  0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x80, 0x3c, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x4a, 0x80, 0x80, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x29, 0x1d, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x48, 0x30, 0x24, 0x80, 
  0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x24, 0x80, 0x3c, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x48, 0x80, 0x24, 0x80, 
  0x40, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x4a, 0x80, 0x80, 0x80, 0x3e, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x2b, 0x1f, 0x80, 0x3c, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x47, 0x28, 0x1c, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x80, 
  0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x39, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x80, 0x3b, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x4f, 0x2f, 0x23, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x23, 0x80, 
  0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x39, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3b, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x4a, 0x80, 0x23, 0x80, 0x3e, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x2b, 0x1f, 0x80, 
  0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x80, 0x3b, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x28, 0x1c, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x39, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x80, 
  0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x2f, 0x23, 0x80, 0x3b, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x80, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x80, 0x23, 0x80, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x80, 0x39, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x47, 
  0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0xff, 0x80, 0x80, 0x48, 0x3c, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x23, 0x4a, 0x3e, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x48, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x2b, 0x1f, 0x47, 0x3b, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x43, 0x3c, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x45, 0x29, 0x1d, 0x3c, 
  0xff, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x47, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x48, 0x80, 0x80, 0x40, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x47, 0x2b, 0x1f, 0x43, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x43, 0x2b, 
  0x1f, 0x3e, 0x80, 0x80, 0xa0, 0x04, 0x08, 0x83, 0x48, 0x30, 0x24, 0x45, 
  0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x4a, 0x80, 0x80, 0x47, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x4c, 0x80, 0x80, 0x48, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x4b, 0x33, 0x27, 0x47, 0x80, 0x80, 0xa1, 0x01, 0x39, 0x83, 0x4c, 0x80, 
  0x80, 0x48, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x33, 0x27, 0x80, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x4e, 0x80, 0x80, 0x4b, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x4c, 0x34, 0x28, 0x44, 0x80, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x34, 0x28, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x80, 0x80, 0x45, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 0x28, 0x47, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x45, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x44, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 
  0x26, 0x42, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x40, 
  0x80, 0x1c, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 0x80, 0x38, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x80, 0x28, 0x1c, 0x3b, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x40, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x34, 0x28, 0x44, 0x80, 0x28, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x80, 
  0x80, 0x3b, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x80, 0x34, 0x28, 0x40, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0xff, 0x80, 0x80, 0x44, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x4c, 0x32, 0x26, 0x47, 0x80, 0x26, 0xa0, 0x10, 
  0x08, 0x83, 0x47, 0x80, 0x80, 0x40, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x44, 0x32, 0x26, 0x44, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x40, 0x80, 
  0x80, 0x47, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x47, 0x2f, 0x23, 0x4c, 
  0x80, 0x23, 0xa0, 0x10, 0x08, 0x83, 0x44, 0x80, 0x80, 0x47, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x40, 0x2f, 0x23, 0x44, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x3b, 0x80, 0x80, 0x40, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x45, 0x2d, 0x21, 0x40, 0x45, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2d, 0x21, 0x80, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 
  0xa0, 0x10, 0x08, 0x83, 0x45, 0x34, 0x28, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x48, 0x80, 0x80, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x4c, 0x2d, 0x21, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 0x1f, 0x3e, 
  0x47, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x40, 0x48, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x4a, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x29, 0x1d, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x48, 0x30, 
  0x24, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x47, 0x2b, 0x1f, 0x3b, 
  0x47, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x43, 0x2b, 0x1f, 0x37, 0x43, 0x80, 0xa0, 0x08, 
  0x08, 0x83, 0x80, 0x32, 0x26, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x47, 0x2d, 0x21, 0x3e, 0x45, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 
  0x28, 0x80, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 0x48, 0x80, 0x80, 0x80, 
  0x80, 0x80, 0xa0, 0x10, 0x08, 0x51, 0x00, 0x09, 0x51, 0x01, 0x08, 0x51, 
  0x02, 0x08, 0x51, 0x03, 0x08, 0x51, 0x04, 0x09, 0x51, 0x05, 0x08, 0x83, 
  0x80, 0x2d, 0x21, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x47, 0x34, 
  0x28, 0x3e, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x40, 0x2d, 0x21, 0x3c, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x34, 0x28, 0x80, 0x80, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 0x1f, 0x3b, 0x47, 0x80, 0xa0, 0x08, 
  0x08, 0x51, 0x00, 0x07, 0x51, 0x01, 0x06, 0x51, 0x02, 0x06, 0x51, 0x03, 
  0x06, 0x51, 0x04, 0x07, 0x51, 0x05, 0x06, 0x83, 0x80, 0x32, 0x26, 0x80, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x29, 0x1d, 0x39, 0x45, 0x80, 
  0xa0, 0x08, 0x08, 0x83, 0x80, 0x30, 0x24, 0x80, 0x80, 0x80, 0xa0, 0x10, 
  0x08, 0x83, 0x80, 0x80, 0x80, 0x3b, 0x80, 0x80, 0xa0, 0x10, 0x08, 0x83, 
  0x80, 0x29, 0x1d, 0x80, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x30, 
  0x24, 0x3c, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x51, 0x00, 0x04, 0x51, 0x01, 
  0x03, 0x51, 0x02, 0x03, 0x51, 0x03, 0x03, 0x51, 0x04, 0x04, 0x51, 0x05, 
  0x03, 0x83, 0x80, 0x2b, 0x1f, 0x3b, 0x43, 0x80, 0xa0, 0x08, 0x08, 0x83, 
  0x80, 0x32, 0x26, 0x3c, 0x80, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x2b, 
  0x1f, 0x80, 0x47, 0x80, 0xa0, 0x08, 0x08, 0x83, 0x80, 0x32, 0x26, 0x3e, 
  0x80, 0x80, 0xa0, 0x08, 0x08, 0x60, 0xa0, 0x01, 0x08, 0x00
};


void setup() {
  Serial.begin(9600);
  Serial.println("Endless Battlefield - Final Fantasy Adventure by Kenji Ito");
  
}

void loop() {
  YMZ.setTempo(148);
  YMZ.playBlock(ffa);
}


