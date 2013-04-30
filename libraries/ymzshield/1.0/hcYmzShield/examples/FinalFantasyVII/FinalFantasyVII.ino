/**
 * Final Fantasy VII Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.3.5
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


void setup() {
  Serial.begin(9600);
  Serial.println("Those Who Fight - Final Fantasy VII by Nobuo Uematsu");
}


void loop() {
  YMZ.setVolume(0xd);
  
  YMZ.setArticulation(LEGATO);
  YMZ.setTempo(185);
  
  YMZ.setChannels(  77,   65,   65, SKIP,   41);       YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   67, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   72, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   71, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  77,   65,   65, SKIP,   41,   77); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66,   63,  OFF,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63,   60,   56,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   58,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41,   72); YMZ.beat( 8);
  YMZ.setChannels(  72,   70, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   68, SKIP, SKIP,   42,   75); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   75); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP,   42,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   75); YMZ.beat( 8);
  YMZ.setChannels(  53,   48, SKIP,   53,   41,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  53,   48, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  53,   48, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55,   58,   51,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  60,   56,   60,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  60,   56, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   58,   63,   55,   39, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   58, SKIP, SKIP,   39, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   61,   65,   53,   37,   65); YMZ.beat( 8);
  YMZ.setChannels(  65,   61, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   61, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37,   67); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37,   68); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   68, SKIP, SKIP,   37,   72); YMZ.beat( 8);
  YMZ.setChannels(  72,   68, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   36,   75); YMZ.beat( 8);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   36, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73,   70, SKIP,   34,   77); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  80,   77,   68, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  82,   79,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84,   80,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP,   68, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels( OFF,   77,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,  OFF, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   42, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   77,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   79,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65,   80,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80,   65, SKIP,   41,   77); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   75, SKIP, SKIP,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   78,   60,   54, SKIP,   78); YMZ.beat( 8);
  YMZ.setChannels(  63, SKIP, SKIP,  OFF,   42,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   60,   54, SKIP,   78); YMZ.beat( 8);
  YMZ.setChannels(  66, SKIP,   59,   54,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  53,   48, SKIP,   53,   41,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  53,   48, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  53,   48, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  55,   51, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  56,   53, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55,   58,   51,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  58,   55, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  60,   56,   60,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  60,   56, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   58,   63,   55,   39, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   58, SKIP, SKIP,   39, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   61,   65,   53,   37,   65); YMZ.beat( 8);
  YMZ.setChannels(  65,   61, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   61, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37,   67); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  67,   63, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37,   68); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   65, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   67, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   68, SKIP, SKIP,   37,   72); YMZ.beat( 8);
  YMZ.setChannels(  72,   68, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   36,   75); YMZ.beat( 8);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   36, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73,   70, SKIP,   34,   77); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  80,   77,   68, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  82,   79,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84,   80,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP,   68, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels( OFF,   77,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,  OFF, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   42, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   77,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   79,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65,   80,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82,   65, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80,   65, SKIP,   41,   77); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  63,   75, SKIP, SKIP,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   78,   60,   54, SKIP,   78); YMZ.beat( 8);
  YMZ.setChannels(  63, SKIP, SKIP,  OFF,   42,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   60,   54, SKIP,   78); YMZ.beat( 8);
  YMZ.setChannels(  66, SKIP,   59,   54,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  65, SKIP, SKIP,  OFF,   41,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels( OFF,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,  OFF, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   42, SKIP); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65,   77, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   79, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65,   80, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   72, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   76, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   76, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65,   77, SKIP, SKIP,   41,   77); YMZ.beat(16);
  YMZ.setChannels(SKIP,   77, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  64,   80, SKIP, SKIP,   40,   76); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   79, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  63,   80, SKIP, SKIP,   39,   75); YMZ.beat(16);
  YMZ.setChannels(SKIP,   80, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   82, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,  OFF, SKIP, SKIP,   37,   73); YMZ.beat( 8);
  YMZ.setChannels(  84,   72, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83,   71, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84,   72, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  82,   70, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  80,   68, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   67, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  80,   68, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61,   61,   53,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   63,   56,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   68, SKIP,   37,   68); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   67); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   68); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   70); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   72); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   73); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   75); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   73); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   75); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   37,   77); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   36,   79); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   36,   80); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34,   82); YMZ.beat( 8);
  YMZ.setChannels(  80,   68, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  76,   64, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   67, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   58, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   58,   61, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   60,   53,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   58,   49,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   34, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70,   58, SKIP,   56,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70,   58, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   60, SKIP, SKIP,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   60, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  73,   61, SKIP, SKIP,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  73,   61, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  75,   63, SKIP,   55,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  75,   63, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  77,   65, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   67, SKIP,   51,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  80,   68, SKIP, SKIP,   34, SKIP); YMZ.beat(16);
  YMZ.setChannels(  80,   68, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(  77,   72, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72,   72, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   97); YMZ.beat( 8);
  YMZ.setChannels(  77,   72,   70, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP,   41,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   73,   68, SKIP,   37,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   97); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP,   37,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP,   39,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   87); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   70, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP,   39,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   87); YMZ.beat( 8);
  YMZ.setChannels(  77,   72,   68, SKIP,   41,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   97); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP,   41,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   72, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP,   37,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73,   72, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   97); YMZ.beat( 8);
  YMZ.setChannels(  77,   73,   68, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP,   37,   92); YMZ.beat( 8);
  YMZ.setChannels(  77,   73, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP,   39,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   87); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   89); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75, SKIP, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP,   92); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP,   96); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP,   94); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP,   39,   91); YMZ.beat( 8);
  YMZ.setChannels(  79,   75,   67, SKIP, SKIP,   87); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   68, SKIP,   41,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63, SKIP, SKIP,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  68,   67, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   72, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   71, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   70, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  77,   65,   65, SKIP,   41,   77); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,  OFF, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   65, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72,   60,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63,   60,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66,   63,  OFF,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75,   63,   60,   56,   42, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   56,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   55,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP,   53,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77,   65, SKIP, SKIP,   41,   72); YMZ.beat( 8);
  YMZ.setChannels(  72,   70, SKIP, SKIP,   42,   75); YMZ.beat( 4);
  YMZ.setChannels(  75,   68, SKIP, SKIP,   42,   75); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   75); YMZ.beat( 8);
  YMZ.setChannels(  78,   66, SKIP, SKIP,   42,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   75); YMZ.beat( 8);
  
  YMZ.mute();
}


