/**
 * Sinistral Battle Demo
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
  Serial.println("Battle 3 - Estpolis II by Yasunori Shiono");
}


void loop() {
  YMZ.setVolume(12);
  YMZ.setVolume(2, 11);
  YMZ.setVolume(5, 11);
  YMZ.setTempo(106);
 
  // Measure 1
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,   38,  OFF); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   55, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat(16);
  YMZ.setChannels(  72, SKIP,   60, SKIP, SKIP,   36); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   53, SKIP, SKIP,   29); YMZ.beat( 8);
  
  // Measure 2
  YMZ.setChannels(  67, SKIP,   55, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat(16);
  YMZ.setChannels(  72, SKIP,   60, SKIP,   43,   36); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   53, SKIP,   38,   29); YMZ.beat( 8);
  
  // Measure 3
  YMZ.setChannels(  67,   70,   55, SKIP,   43,   58); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   57, SKIP, SKIP,   60); YMZ.beat(16);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   62); YMZ.beat(16);
  YMZ.setChannels(  72,   75,   60, SKIP, SKIP,   63); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   62); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   57, SKIP, SKIP,   60); YMZ.beat(16);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   62); YMZ.beat( 8);
  YMZ.setChannels(  69,   72,   57, SKIP, SKIP,   60); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   55, SKIP, SKIP,   58); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   57, SKIP, SKIP,   60); YMZ.beat( 8);
  YMZ.setChannels(  67,   70,   55, SKIP, SKIP,   58); YMZ.beat(16);
  YMZ.setChannels(  65,   69,   53, SKIP, SKIP,   57); YMZ.beat( 8);
  
  // Measure 4
  YMZ.setChannels(  67,   70,   55, SKIP,   43,   34); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   57, SKIP, SKIP,   36); YMZ.beat(16);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   38); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   57, SKIP,   43,   36); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   38); YMZ.beat(16);
  YMZ.setChannels(  72,   75,   60, SKIP, SKIP,   39); YMZ.beat(16);
  YMZ.setChannels(  70,   74,   58, SKIP, SKIP,   38); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   38, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   75,   60, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(  74,   77,   62, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(  72,   75,   60, SKIP,   39,   39); YMZ.beat( 8);
  YMZ.setChannels(  74,   77,   62, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(  75,   78,   66, SKIP,   42,   45); YMZ.beat( 8);
  
  // Measure 5-6
  YMZ.setChannels(  79,   82,   67, SKIP,   43,   43); YMZ.beat( 2);
  YMZ.setVolume(0xb); YMZ.beat( 2);
  YMZ.setVolume(0xa); YMZ.beat( 2);
  YMZ.setVolume(0x9); YMZ.beat( 4); YMZ.setVolume(0xc);
  
  // Measure 7
  YMZ.setChannels(  70,   58,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  74,   62,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   36, SKIP,   46,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   45,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   41,   31); YMZ.beat(16);
  
  // Measure 8
  YMZ.setChannels(  74,   62,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   43,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   46,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  
  // Measure 9
  YMZ.setChannels(  69,   57,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   53, SKIP,   41,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(  69,   57,   53, SKIP,   39,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   39,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   39,   29); YMZ.beat(16);
  YMZ.setChannels(  65,   53,   53, SKIP,   36,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   36,   29); YMZ.beat(16);
  
  // Measure 10
  YMZ.setChannels(  75,   63,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   45, SKIP,   38,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   45, SKIP,   38,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  YMZ.setChannels(  75,   63,   45, SKIP,   38,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   42,   50); YMZ.beat(16);
  YMZ.setChannels(  77,   65,   33, SKIP,   45,   50); YMZ.beat(16);
  YMZ.setChannels(  74,   62,   45, SKIP,   42,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   45,   50); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   33, SKIP,   48,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   45, SKIP,   50,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); YMZ.beat(16);
  
  // Measure 11
  YMZ.setChannels(  70,   58,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  74,   62,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   36, SKIP,   46,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   45,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   36, SKIP,   41,   31); YMZ.beat(16);
  
  // Measure 12
  YMZ.setChannels(  74,   62,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(  72,   60,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(  70,   58,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   43,   27); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   51, SKIP,   46,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); YMZ.beat(16);
  
  // Measure 13
  YMZ.setChannels(  69,   57,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); YMZ.beat(16);
  YMZ.setChannels(  67,   55,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); YMZ.beat(16);
  YMZ.setChannels(  66,   54,   54, SKIP,   42,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); YMZ.beat(16);
  YMZ.setChannels(  67,   55,   54, SKIP,   42,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); YMZ.beat(16);
  YMZ.setChannels(  69,   57,   54, SKIP,   42,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); YMZ.beat(16);
  
  // Measure 14
  YMZ.setChannels(  69,   57, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,  OFF, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,  OFF, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(  67,   55,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   36); YMZ.beat( 8, DOUBLEDOT);
  
  // Measure 15
  YMZ.setChannels(  70,   55,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,  OFF); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,  OFF); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  74,   58,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   31, SKIP,   46, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   45,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   41,  OFF); YMZ.beat(16);
  
  // Measure 16
  YMZ.setChannels(  74,   58,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   43,   39); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   46,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); YMZ.beat(16);
  
  // Measure 17
  YMZ.setChannels(  69,   53,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); YMZ.beat(16);
  YMZ.setChannels(  69,   53,   48, SKIP,   39,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   39,   34); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   39,   34); YMZ.beat(16);
  YMZ.setChannels(  65,   48,   48, SKIP,   36,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   36,   34); YMZ.beat(16);
  
  // Measure 18
  YMZ.setChannels(  75,   60,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   54, SKIP,   38,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   54, SKIP,   38,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  YMZ.setChannels(  75,   60,   54, SKIP,   38,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   42,   31); YMZ.beat(16);
  YMZ.setChannels(  77,   62,   50, SKIP,   45,   31); YMZ.beat(16);
  YMZ.setChannels(  74,   58,   54, SKIP,   42,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   45,   31); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   50, SKIP,   48,   31); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   54, SKIP,   50,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); YMZ.beat(16);
  
  // Measure 19
  YMZ.setChannels(  70,   55,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(  74,   58,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   31, SKIP,   46,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   45,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   31, SKIP,   41,   36); YMZ.beat(16);
  
  // Measure 20
  YMZ.setChannels(  74,   58,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(  72,   57,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(  70,   55,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   43,   33); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   46,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); YMZ.beat(16);
  
  // Measure 21
  YMZ.setChannels(  69,   53,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(  67,   51,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(  66,   50,   50, SKIP,   42,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   50, SKIP,   42,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   42,   42); YMZ.beat(32);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  69, SKIP,   50, SKIP,   42,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   42,  OFF); YMZ.beat(16);
  
  // Measure 22
  YMZ.setChannels(  69,   48,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43,  OFF); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43,  OFF); YMZ.beat(16);
  YMZ.setChannels(  67,   46,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   34, SKIP,   41,   53); YMZ.beat( 8, DOUBLEDOT);
  
  // Measure 23
  YMZ.setChannels( OFF,   55,   27,   63,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   67,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   74,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP,  OFF,   46,   72,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP,   55,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   72,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58,   46,   74,   46,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   75,   39,   36); YMZ.beat(16);
  
  // Measure 24
  YMZ.setChannels(SKIP,   60,   29,   77,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58,   29,   75,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   48,   74,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP,   53,   29,   69,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   45,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   48,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   41,   58); YMZ.beat(16);
  
  // Measure 25
  YMZ.setVolume(0, 0x9);
  YMZ.setChannels(  79,   55,   55,  OFF,   43,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   57,   54, SKIP,   43,   49); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   58,   50, SKIP,   43,   45); YMZ.beat(16);
  YMZ.setChannels( OFF,   60, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   62, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   60,   53, SKIP,   43,   48); YMZ.beat(16);
  YMZ.setChannels(SKIP,   62, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   63, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   62,   52, SKIP,   43,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP,   63, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   65,   48, SKIP,   43,   43); YMZ.beat(16);
  YMZ.setChannels( OFF,   66, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  
  // Measure 26
  YMZ.setChannels(  79,   67,   51, SKIP,   43,   46); YMZ.beat(16);
  YMZ.setChannels(SKIP,   69, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   70, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   69,   50, SKIP,   43,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP,   70, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   72, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   70,   46, SKIP,   43,   41); YMZ.beat(16);
  YMZ.setChannels( OFF,   72, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   74, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   72,   50, SKIP,   43,   45); YMZ.beat(16);
  YMZ.setChannels(SKIP,   74, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   75, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   74,   49, SKIP,   43,   44); YMZ.beat(16);
  YMZ.setChannels(SKIP,   75, SKIP, SKIP,   46, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   77,   45, SKIP,   45,   39); YMZ.beat(16);
  YMZ.setChannels( OFF,   78, SKIP, SKIP,   41, SKIP); YMZ.beat(16);
  
  // Measure 27
  YMZ.setChannels(SKIP,   55,   27,   63,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   67,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   74,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46,   72,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP,   55,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   27, SKIP,   39,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   72,   43,   36); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58,   46,   74,   46,   51); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   27,   75,   39,   36); YMZ.beat(16);
  
  // Measure 28
  YMZ.setChannels(SKIP,   60,   29,   77,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   48,   78,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP,   53,   29,   81,   41,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   29, SKIP,   40,   41); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   48, SKIP,   39,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   53, SKIP,   36,   58); YMZ.beat(16);
  
  // Measure 29
  YMZ.setChannels(  79,   50,   50,  OFF,   38,   50); YMZ.beat(16);
  YMZ.setChannels(SKIP,   52,   41, SKIP, SKIP,   52); YMZ.beat(16);
  YMZ.setChannels(SKIP,   54,   41, SKIP, SKIP,   54); YMZ.beat(16);
  YMZ.setChannels(  79,   52,   50, SKIP,   38,   52); YMZ.beat(16);
  YMZ.setChannels(SKIP,   54,   41, SKIP, SKIP,   54); YMZ.beat(16);
  YMZ.setChannels(SKIP,   55,   41, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(  79,   54,   50, SKIP,   38,   54); YMZ.beat(16);
  YMZ.setChannels( OFF,   55,   41, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   50, SKIP, SKIP,   57); YMZ.beat(16);
  YMZ.setChannels(  79,   55,   41, SKIP,   38,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57,   41, SKIP, SKIP,   57); YMZ.beat(16);
  YMZ.setChannels( OFF,   58,   50, SKIP, SKIP,   58); YMZ.beat(16);
  YMZ.setChannels(  79,   57,   41, SKIP,   38,   57); YMZ.beat(16);
  YMZ.setChannels(SKIP,   58,   41, SKIP, SKIP,   58); YMZ.beat(16);
  YMZ.setChannels(  79,   60,   50, SKIP,   38,   60); YMZ.beat(16);
  YMZ.setChannels( OFF,   62,   41, SKIP, SKIP,   62); YMZ.beat(16);
  
  // Measure 30
  YMZ.setChannels(  78,   62,   50, SKIP,   38,   62); YMZ.beat(16);
  YMZ.setChannels(SKIP,   64,   41, SKIP, SKIP,   64); YMZ.beat(16);
  YMZ.setChannels(SKIP,   66,   41, SKIP, SKIP,   66); YMZ.beat(16);
  YMZ.setChannels(  78,   64,   50, SKIP,   38,   64); YMZ.beat(16);
  YMZ.setChannels(SKIP,   66,   41, SKIP, SKIP,   66); YMZ.beat(16);
  YMZ.setChannels(SKIP,   67,   41, SKIP, SKIP,   67); YMZ.beat(16);
  YMZ.setChannels(  78,   66,   50, SKIP,   38,   66); YMZ.beat(16);
  YMZ.setChannels( OFF,   67,   41, SKIP, SKIP,   67); YMZ.beat(16);
  YMZ.setChannels(SKIP,   69,   50, SKIP,   38,   69); YMZ.beat(16);
  YMZ.setChannels(  78,   67,   41, SKIP, SKIP,   67); YMZ.beat(16);
  YMZ.setChannels(SKIP,   69,   41, SKIP, SKIP,   69); YMZ.beat(16);
  YMZ.setChannels(SKIP,   70,   50, SKIP, SKIP,   70); YMZ.beat(16);
  YMZ.setChannels(  81,   72,   41, SKIP, SKIP,   72); YMZ.beat(16);
  YMZ.setChannels(SKIP,   74,   41, SKIP, SKIP,   74); YMZ.beat(16);
  YMZ.setChannels(SKIP,   76,   50, SKIP,   38,   76); YMZ.beat(16);
  YMZ.setChannels(SKIP,   78,   41, SKIP, SKIP,   66); YMZ.beat(16);
  
  // Measure 31
  YMZ.setVolume(0, 0xc);
  YMZ.setChannels(  67, SKIP,   67, SKIP,   39,   55); YMZ.beat( 8);
  YMZ.setChannels(  70,  OFF,   70, SKIP, SKIP,   58); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP,   43,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP, SKIP,   60); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   70, SKIP,   43,   58); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat( 8);
  
  // Measure 32
  YMZ.setChannels(  67, SKIP,   67, SKIP,   39,   55); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP,   43,   55); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP,   60, SKIP, SKIP,   48); YMZ.beat(16);
  YMZ.setChannels(  59, SKIP,   59, SKIP, SKIP,   47); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   41,   48); YMZ.beat(16);
  
  // Measure 33
  YMZ.setChannels(  62, SKIP,   62, SKIP, SKIP,   50); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP,   39,   55); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP,   43,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP, SKIP,   60); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   70, SKIP,   43,   58); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat( 8);
  
  // Measure 34
  YMZ.setChannels(  67, SKIP,   67, SKIP,   39,   55); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   41,   57); YMZ.beat(16);
  YMZ.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); YMZ.beat(16);
  YMZ.setChannels(  71, SKIP,   71, SKIP,   43,   59); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  71, SKIP,   71, SKIP,   43,   59); YMZ.beat(16);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   41,   60); YMZ.beat(16);
  
  // Measure 35
  YMZ.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP,   39,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP, SKIP,   74); YMZ.beat( 8);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP, SKIP,   70); YMZ.beat(16);
  YMZ.setChannels(  65,   69,   65, SKIP, SKIP,   69); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP,   43,   70); YMZ.beat( 8);
  YMZ.setChannels(  74,   77,   74, SKIP, SKIP,   77); YMZ.beat( 8);
  YMZ.setChannels(  72,   75,   72, SKIP, SKIP,   75); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP,   43,   74); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat( 8);
  
  // Measure 36
  YMZ.setChannels(  67,   70,   67, SKIP,   39,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP, SKIP,   74); YMZ.beat( 8);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP, SKIP,   70); YMZ.beat(16);
  YMZ.setChannels(  65,   69,   65, SKIP, SKIP,   69); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP,   43,   70); YMZ.beat( 8);
  YMZ.setChannels(  60,   67,   60, SKIP, SKIP,   67); YMZ.beat(16);
  YMZ.setChannels(  59,   67,   59, SKIP, SKIP,   67); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); YMZ.beat(16);
  YMZ.setChannels(  60,   69,   60, SKIP,   41,   67); YMZ.beat(16);
  
  // Measure 37
  YMZ.setChannels(  62,   70,   62, SKIP, SKIP,   67); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP,   39,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP, SKIP,   74); YMZ.beat( 8);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP, SKIP,   70); YMZ.beat(16);
  YMZ.setChannels(  65,   69,   65, SKIP, SKIP,   69); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP,   43,   70); YMZ.beat( 8);
  YMZ.setChannels(  74,   77,   74, SKIP, SKIP,   77); YMZ.beat( 8);
  YMZ.setChannels(  72,   75,   72, SKIP, SKIP,   75); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP,   43,   74); YMZ.beat(16);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat( 8);
  
  // Measure 38
  YMZ.setChannels(  67,   70,   67, SKIP,   39,   70); YMZ.beat( 8);
  YMZ.setChannels(  70,   74,   70, SKIP, SKIP,   74); YMZ.beat( 8);
  YMZ.setChannels(  69,   72,   69, SKIP,   41,   72); YMZ.beat(16);
  YMZ.setChannels(  67,   70,   67, SKIP, SKIP,   70); YMZ.beat(16);
  YMZ.setChannels(  65,   69,   65, SKIP, SKIP,   69); YMZ.beat(16);
  YMZ.setChannels(  62,   67,   58, SKIP,   43,   67); YMZ.beat( 4);
  YMZ.setVolume(0xb); YMZ.beat( 4);
  YMZ.setVolume(0xa); YMZ.beat( 4);
  YMZ.setVolume(0x9); YMZ.beat( 4); YMZ.setVolume(0xc);
  
  YMZ.mute();
}
