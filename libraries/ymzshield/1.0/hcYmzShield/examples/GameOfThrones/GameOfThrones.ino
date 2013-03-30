/**
 * Game of Thrones Demo
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


void setup() {
  Serial.begin(9600);
  Serial.println("Main Title by Ramin Djawadi");
}


void loop() {
  PSG.setTempo(95);
  PSG.setArticulation(15);
  PSG.beat(1);

  PSG.setVolume( 0,  8); PSG.setVolume( 3,  8);
  PSG.setVolume( 1,  8); PSG.setVolume( 4,  8);
  PSG.setVolume( 2, 10); PSG.setVolume( 5,  9);
  
  // Measure 1
  PSG.setChannels(  55,   36,   67, SKIP,   24,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63,   51, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65,   53, SKIP,   48); PSG.beat(16);
  PSG.setChannels(  55, SKIP,   67,  OFF, SKIP,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63,   51, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   65,   53,  OFF, SKIP); PSG.beat(16);
  
  // Measure 2
  PSG.setChannels(  55,   36,   67,  OFF,   24,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63,   51, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65,   53, SKIP,   48); PSG.beat(16);
  PSG.setChannels(  55, SKIP,   67,  OFF, SKIP,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63,   51, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   65,   53,  OFF, SKIP); PSG.beat(16);
  
  // Measure 3
  PSG.setChannels(  55,   36,   67,  OFF,   24,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   64,   52, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65,   53, SKIP,   48); PSG.beat(16);
  PSG.setChannels(  55, SKIP,   67,  OFF, SKIP,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   64,   52, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   65,   53,  OFF, SKIP); PSG.beat(16);
  
  // Measure 4
  PSG.setChannels(  55,   36,   67,  OFF,   24,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   64,   52, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65,   53, SKIP,   48); PSG.beat(16);
  PSG.setChannels(  55, SKIP,   67,  OFF, SKIP,   48); PSG.beat( 8);
  PSG.setChannels( OFF, SKIP,   60,   48, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   64,   52, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   65,   53,  OFF, SKIP); PSG.beat(16);
  
  PSG.setVolume( 0, 10); PSG.setVolume( 3, 10);
  PSG.setVolume( 1,  7); PSG.setVolume( 4,  7);
  PSG.setVolume( 2, 10); PSG.setVolume( 5, 9);
  
  // Measure 5
  PSG.setChannels(  55,   48,   55,  OFF,   24,   36); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55,   48, SKIP,   36); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   36); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   53, SKIP,  OFF,   36); PSG.beat(16);
  
  // Measure 6
  PSG.setChannels(SKIP,   48,   55,   51,   24,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  55, SKIP,   48,  OFF, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55,   48, SKIP,   36); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51,   51, SKIP,   36); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   53,   53,  OFF,   36); PSG.beat(16);
  
  // Measure 7
  PSG.setChannels(SKIP,   55,   62,   50,   31,   43); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   43); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   60,  OFF,  OFF,   43); PSG.beat(16);
  
  // Measure 8
  PSG.setChannels(SKIP,   55,   62,   50,   31,   43); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   43); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   43); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   60,  OFF,  OFF, SKIP); PSG.beat(16);
  
  // Measure 9
  PSG.setChannels(SKIP,   46,   53,   53,   22,   34); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53,   46, SKIP,   34); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   51, SKIP,  OFF,   34); PSG.beat(16);
  
  // Measure 10
  PSG.setChannels(SKIP,   46,   53,   51,   22,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP,   50, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53,   46, SKIP,   34); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   51, SKIP,  OFF,   34); PSG.beat(16);
  
  // Measure 11
  PSG.setChannels(SKIP,   53,   60,   51,   29,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP,   50, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   41); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   58, SKIP,  OFF,   41); PSG.beat(16);
  
  // Measure 12
  PSG.setChannels(SKIP,   53,   60,   48,   29,   41); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   41); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   58,  OFF,  OFF, SKIP); PSG.beat(16);
  
  PSG.setVolume( 0, 13); PSG.setVolume( 3, 13);
  PSG.setVolume( 1,  9); PSG.setVolume( 4,  9);
  PSG.setVolume( 2, 12); PSG.setVolume( 5, 11);
  
  // Measure 13
  PSG.setChannels(  67,   36,   55, SKIP,   24,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  60, SKIP,   55,   48, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   53, SKIP,  OFF,   55); PSG.beat(16);
  
  // Measure 14
  PSG.setChannels(  63,   36,   55,   51,   24,   55); PSG.beat(16);
  PSG.setChannels(  65, SKIP, SKIP,   53, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   48,  OFF, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  60, SKIP,   55,   48, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  63, SKIP,   51,   51, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  65,  OFF,   53,   53,  OFF,   55); PSG.beat(16);
  
  // Measure 15
  PSG.setChannels(  62,   43,   62,   50,   31,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels( OFF,  OFF,   60,  OFF,  OFF,   55); PSG.beat(16);
  
  // Measure 16
  PSG.setChannels(SKIP,   43,   62, SKIP,   31,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   60, SKIP,  OFF, SKIP); PSG.beat(16);
  
  // Measure 17
  PSG.setChannels(  65,   34,   53,   53,   22,   58); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  58, SKIP,   53,   46, SKIP,   58); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   51, SKIP,  OFF,   58); PSG.beat(16);
  
  // Measure 18
  PSG.setChannels(  63,   34,   53,   51,   22,   58); PSG.beat(16);
  PSG.setChannels(  62, SKIP, SKIP,   50, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  65, SKIP, SKIP,   53, SKIP, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  58, SKIP,   53,   46, SKIP,   58); PSG.beat( 4);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   51, SKIP,  OFF,   58); PSG.beat(16);
  
  // Measure 19
  PSG.setChannels(  63,   36,   60,   51,   24,   55); PSG.beat(16);
  PSG.setChannels(  62, SKIP, SKIP,   50, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  60, SKIP,   55,   48, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   58, SKIP,  OFF,   55); PSG.beat(16);
  
  // Measure 20
  PSG.setChannels(SKIP,   36,   60, SKIP,   24,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   55); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   58, SKIP,  OFF, SKIP); PSG.beat(16);
  
  PSG.setVolume( 0, 14); PSG.setVolume( 3, 14);
  PSG.setVolume( 1, 10); PSG.setVolume( 4, 10);
  PSG.setVolume( 2, 13); PSG.setVolume( 5, 12);
  
  // Measure 21
  PSG.setChannels(  79,   36,   67,   51,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  72,   36,   67,   51,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65, SKIP, SKIP,   60); PSG.beat(16);
  
  // Measure 22
  PSG.setChannels(  75,   36,   67,   51,   24,   60); PSG.beat(16);
  PSG.setChannels(  77, SKIP, SKIP,   51, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  79, SKIP,   60,   51, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   65, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  72,   36,   67,   51,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  75, SKIP,   63,   51, SKIP,   60); PSG.beat(16);
  PSG.setChannels(  77, SKIP,   65,   51, SKIP,   60); PSG.beat(16);
  
  // Measure 23
  PSG.setChannels(  74,   43,   62,   50,   31,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   62, SKIP,   31,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   60,  OFF, SKIP,   58); PSG.beat(16);
  
  // Measure 24
  PSG.setChannels(SKIP,   43,   62, SKIP,   31,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   62, SKIP,   31,   58); PSG.beat( 8);
  PSG.setChannels(SKIP,   43,   55, SKIP,   31,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   58, SKIP,   31,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 25
  PSG.setChannels(  77,   34,   65,   53,   22,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70,   34,   65,   53,   22,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   58); PSG.beat(16);
  
  // Measure 26
  PSG.setChannels(  74,   34,   65,   53,   22,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  75, SKIP,   58,   53, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  74,   34,   65,   53,   22,   58); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70, SKIP,   58,   53, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   58); PSG.beat(16);
  
  // Measure 27
  PSG.setChannels(  72,   36,   60,   51,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   60, SKIP,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   58,  OFF, SKIP,   60); PSG.beat(16);
  
  // Measure 28
  PSG.setChannels(SKIP,   36,   60, SKIP,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   60, SKIP,   24,   60); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   55, SKIP,   24,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   56, SKIP,   24,   60); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  
  PSG.setVolume( 0, 15); PSG.setVolume( 3, 14);
  PSG.setVolume( 1, 11); PSG.setVolume( 4, 11);
  PSG.setVolume( 2, 14); PSG.setVolume( 5, 13);
  
  // Measure 29
  PSG.setChannels(  84,   44,   60, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   51, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   56, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   44,   60, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   51, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   56, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   58, SKIP, SKIP,   44); PSG.beat(16);
  
  // Measure 30
  PSG.setChannels(  82,   39,   58, SKIP,   27,   39); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   31, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   34,   55, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   58, SKIP,   27,   39); PSG.beat( 8);
  PSG.setChannels(SKIP,   34,   51, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   31,   39); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   56, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 31
  PSG.setChannels(  80,   41,   56, SKIP,   29,   41); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   32, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   53, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   41,   56, SKIP,   29,   41); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   32,   41); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   55, SKIP, SKIP,   41); PSG.beat(16);
  
  // Measure 32
  PSG.setChannels(  79,   48,   55, SKIP,  OFF,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   51, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   43,   48, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   51, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 33
  PSG.setChannels(  80,   44,   51, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36, SKIP, SKIP,  OFF, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   48, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   44,   51, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   39, SKIP, SKIP,  OFF, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   48, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   50, SKIP, SKIP,   44); PSG.beat(16);
  
  // Measure 34
  PSG.setChannels(  87,   44,   63, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   63, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   63, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(  89,   46,   62, SKIP, SKIP,   46); PSG.beat( 8);
  PSG.setChannels(SKIP,   41,   62, SKIP, SKIP,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   38,   62, SKIP, SKIP,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 35
  PSG.setChannels(  91,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   43,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   60, SKIP, SKIP,   48); PSG.beat(16);
  
  // Measure 36
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   43,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   60, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 37
  PSG.setChannels(  84,   44,   60, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   51, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   56, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   44,   60, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   51, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   56, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   58, SKIP, SKIP,   44); PSG.beat(16);
  
  // Measure 38
  PSG.setChannels(  82,   39,   58, SKIP,   27,   39); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   31, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   34,   55, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   56, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   58, SKIP,   27,   39); PSG.beat( 8);
  PSG.setChannels(SKIP,   34,   51, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   31,   39); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   56, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 39
  PSG.setChannels(  80,   41,   56, SKIP,   29,   41); PSG.beat( 8);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   32, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   36,   53, SKIP, SKIP,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   41,   56, SKIP,   29,   41); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   32,   41); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   55, SKIP, SKIP,   41); PSG.beat(16);
  
  // Measure 40
  PSG.setChannels(  79,   48,   55, SKIP,  OFF,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   43,   51, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   43,   48, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   51, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   53, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 41
  PSG.setChannels(  80,   44,   51, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36, SKIP, SKIP,  OFF, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP,   39,   48, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   44,   51, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   39, SKIP, SKIP,  OFF, SKIP); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   48, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   50, SKIP, SKIP,   44); PSG.beat(16);
  
  PSG.setVolume( 0, 14); PSG.setVolume( 3, 14);
  PSG.setVolume( 1, 10); PSG.setVolume( 4, 10);
  PSG.setVolume( 2, 13); PSG.setVolume( 5, 12);
  
  // Measure 42
  PSG.setChannels(  87,   44,   63, SKIP,   32,   44); PSG.beat( 8);
  PSG.setChannels(SKIP,   36,   63, SKIP,  OFF, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   39,   63, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   63, SKIP, SKIP,   44); PSG.beat(16);
  PSG.setChannels(  86,   46,   62, SKIP, SKIP,   46); PSG.beat( 8);
  PSG.setChannels(SKIP,   41,   62, SKIP, SKIP,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   38,   62, SKIP, SKIP,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   62, SKIP, SKIP, SKIP); PSG.beat(16);
  
  // Measure 43
  PSG.setChannels(  84,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   56, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   56, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels( OFF, SKIP,   58, SKIP, SKIP,   48); PSG.beat(16);
  
  // Measure 44
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   56, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   60, SKIP, SKIP,   48); PSG.beat( 8);
  PSG.setChannels(SKIP,   48,   55, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   48,   56, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   58, SKIP, SKIP, SKIP); PSG.beat(16);
  
  PSG.setVolume( 0, 12); PSG.setVolume( 3,  1);
  PSG.setVolume( 1,  1); PSG.setVolume( 4,  1);
  PSG.setVolume( 2,  1); PSG.setVolume( 5, 10);
  
  // Measure 45
  PSG.setChannels(  72,  OFF,  OFF, SKIP, SKIP,   24); PSG.beat( 8);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat( 8);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70, SKIP, SKIP, SKIP, SKIP,  OFF); PSG.beat(16);
  
  // Measure 46
  PSG.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat( 8);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat( 8);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  PSG.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); PSG.beat(16);
  
  PSG.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); PSG.mute();
  
  PSG.beat(1); PSG.beat(1);
}


