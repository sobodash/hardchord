
/**
 * Sinistral Battle Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.3.0
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
  PSG.setVolume(0xc);
  PSG.setVolume(2, 0xb);
  PSG.setVolume(5, 0xb);
  PSG.setTempo(106);
 
  // Measure 1
  PSG.setChannels( OFF,  OFF,  OFF,  OFF,   38,  OFF); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   55, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(  72, SKIP,   60, SKIP, SKIP,   36); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat( 8);
  PSG.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   53, SKIP, SKIP,   29); PSG.beat( 8);
  
  // Measure 2
  PSG.setChannels(  67, SKIP,   55, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(  72, SKIP,   60, SKIP,   43,   36); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  70, SKIP,   58, SKIP, SKIP,   34); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   57, SKIP, SKIP,   33); PSG.beat( 8);
  PSG.setChannels(  67, SKIP,   55, SKIP, SKIP,   31); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   53, SKIP,   38,   29); PSG.beat( 8);
  
  // Measure 3
  PSG.setChannels(  67,   70,   55, SKIP,   43,   58); PSG.beat(16);
  PSG.setChannels(  69,   72,   57, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   62); PSG.beat(16);
  PSG.setChannels(  72,   75,   60, SKIP, SKIP,   63); PSG.beat( 8);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   62); PSG.beat(16);
  PSG.setChannels(  69,   72,   57, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   62); PSG.beat( 8);
  PSG.setChannels(  69,   72,   57, SKIP, SKIP,   60); PSG.beat(16);
  PSG.setChannels(  67,   70,   55, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(  69,   72,   57, SKIP, SKIP,   60); PSG.beat( 8);
  PSG.setChannels(  67,   70,   55, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(  65,   69,   53, SKIP, SKIP,   57); PSG.beat( 8);
  
  // Measure 4
  PSG.setChannels(  67,   70,   55, SKIP,   43,   34); PSG.beat(16);
  PSG.setChannels(  69,   72,   57, SKIP, SKIP,   36); PSG.beat(16);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   38); PSG.beat(16);
  PSG.setChannels(  69,   72,   57, SKIP,   43,   36); PSG.beat( 8);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   38); PSG.beat(16);
  PSG.setChannels(  72,   75,   60, SKIP, SKIP,   39); PSG.beat(16);
  PSG.setChannels(  70,   74,   58, SKIP, SKIP,   38); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   38, SKIP); PSG.beat(16);
  PSG.setChannels(  72,   75,   60, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(  74,   77,   62, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(  72,   75,   60, SKIP,   39,   39); PSG.beat( 8);
  PSG.setChannels(  74,   77,   62, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(  75,   78,   66, SKIP,   42,   45); PSG.beat( 8);
  
  // Measure 5-6
  PSG.setChannels(  79,   82,   67, SKIP,   43,   43); PSG.beat( 2);
  PSG.setVolume(0xb); PSG.beat( 2);
  PSG.setVolume(0xa); PSG.beat( 2);
  PSG.setVolume(0x9); PSG.beat( 4); PSG.setVolume(0xc);
  
  // Measure 7
  PSG.setChannels(  70,   58,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  70,   58,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  72,   60,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  74,   62,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  70,   58,   36, SKIP,   46,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   45,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   41,   31); PSG.beat(16);
  
  // Measure 8
  PSG.setChannels(  74,   62,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(  72,   60,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(  70,   58,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   43,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   46,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  
  // Measure 9
  PSG.setChannels(  69,   57,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); PSG.beat(16);
  PSG.setChannels(  70,   58,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(  72,   60,   53, SKIP,   41,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(  69,   57,   53, SKIP,   39,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   39,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   39,   29); PSG.beat(16);
  PSG.setChannels(  65,   53,   53, SKIP,   36,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   36,   29); PSG.beat(16);
  
  // Measure 10
  PSG.setChannels(  75,   63,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   45, SKIP,   38,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   45, SKIP,   38,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  PSG.setChannels(  75,   63,   45, SKIP,   38,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   42,   50); PSG.beat(16);
  PSG.setChannels(  77,   65,   33, SKIP,   45,   50); PSG.beat(16);
  PSG.setChannels(  74,   62,   45, SKIP,   42,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   45,   50); PSG.beat(16);
  PSG.setChannels(  72,   60,   33, SKIP,   48,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   45, SKIP,   50,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   33, SKIP,   38,   50); PSG.beat(16);
  
  // Measure 11
  PSG.setChannels(  70,   58,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  70,   58,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  72,   60,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  74,   62,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  70,   58,   36, SKIP,   46,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   45,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   36, SKIP,   41,   31); PSG.beat(16);
  
  // Measure 12
  PSG.setChannels(  74,   62,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(  72,   60,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(  70,   58,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   39,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   43,   27); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   51, SKIP,   46,   46); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   39,   27); PSG.beat(16);
  
  // Measure 13
  PSG.setChannels(  69,   57,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   48); PSG.beat(16);
  PSG.setChannels(  67,   55,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   41, SKIP,   41,   29); PSG.beat(16);
  PSG.setChannels(  66,   54,   54, SKIP,   42,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); PSG.beat(16);
  PSG.setChannels(  67,   55,   54, SKIP,   42,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); PSG.beat(16);
  PSG.setChannels(  69,   57,   54, SKIP,   42,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   42, SKIP,   42,   31); PSG.beat(16);
  
  // Measure 14
  PSG.setChannels(  69,   57, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,  OFF, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,  OFF, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(  67,   55,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   55, SKIP,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   36); PSG.beat( 8, DOUBLEDOT);
  
  // Measure 15
  PSG.setChannels(  70,   55,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,  OFF); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,  OFF); PSG.beat(16);
  PSG.setChannels(  70,   55,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  72,   57,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  74,   58,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  70,   55,   31, SKIP,   46, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   45,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   41,  OFF); PSG.beat(16);
  
  // Measure 16
  PSG.setChannels(  74,   58,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(  72,   57,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(  70,   55,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   43,   39); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   46,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   39); PSG.beat(16);
  
  // Measure 17
  PSG.setChannels(  69,   53,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(  70,   55,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(  72,   57,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   34); PSG.beat(16);
  PSG.setChannels(  69,   53,   48, SKIP,   39,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   39,   34); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   39,   34); PSG.beat(16);
  PSG.setChannels(  65,   48,   48, SKIP,   36,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   36,   34); PSG.beat(16);
  
  // Measure 18
  PSG.setChannels(  75,   60,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   54, SKIP,   38,   45); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   54, SKIP,   38,   45); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  PSG.setChannels(  75,   60,   54, SKIP,   38,   45); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   42,   31); PSG.beat(16);
  PSG.setChannels(  77,   62,   50, SKIP,   45,   31); PSG.beat(16);
  PSG.setChannels(  74,   58,   54, SKIP,   42,   45); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   45,   31); PSG.beat(16);
  PSG.setChannels(  72,   57,   50, SKIP,   48,   31); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   54, SKIP,   50,   45); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   38,   31); PSG.beat(16);
  
  // Measure 19
  PSG.setChannels(  70,   55,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(  70,   55,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(  72,   57,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(  74,   58,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   43,   36); PSG.beat(16);
  PSG.setChannels(  70,   55,   31, SKIP,   46,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   45,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   31, SKIP,   41,   36); PSG.beat(16);
  
  // Measure 20
  PSG.setChannels(  74,   58,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(  72,   57,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(  70,   55,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   43,   33); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   46,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   33); PSG.beat(16);
  
  // Measure 21
  PSG.setChannels(  69,   53,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(  67,   51,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(  66,   50,   50, SKIP,   42,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   50, SKIP,   42,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   42,   42); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   42,   42); PSG.beat(32);
  PSG.setChannels(SKIP, SKIP,   30, SKIP, SKIP, SKIP); PSG.beat(32);
  PSG.setChannels(  69, SKIP,   50, SKIP,   42,   54); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   42,  OFF); PSG.beat(16);
  
  // Measure 22
  PSG.setChannels(  69,   48,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43,  OFF); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43,  OFF); PSG.beat(16);
  PSG.setChannels(  67,   46,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   30, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   50, SKIP,   43,   55); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   34, SKIP,   41,   53); PSG.beat( 8, DOUBLEDOT);
  
  // Measure 23
  PSG.setChannels( OFF,   55,   27,   63,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   67,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   74,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP,  OFF,   46,   72,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP,   55,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   72,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP,   58,   46,   74,   46,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   75,   39,   36); PSG.beat(16);
  
  // Measure 24
  PSG.setChannels(SKIP,   60,   29,   77,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP,   58,   29,   75,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   48,   74,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP,   53,   29,   69,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   45,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   48,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   41,   58); PSG.beat(16);
  
  // Measure 25
  PSG.setVolume(0, 0x9);
  PSG.setChannels(  79,   55,   55,  OFF,   43,   50); PSG.beat(16);
  PSG.setChannels(SKIP,   57, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   58, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   57,   54, SKIP,   43,   49); PSG.beat(16);
  PSG.setChannels(SKIP,   58, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   60, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   58,   50, SKIP,   43,   45); PSG.beat(16);
  PSG.setChannels( OFF,   60, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   62, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   60,   53, SKIP,   43,   48); PSG.beat(16);
  PSG.setChannels(SKIP,   62, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels( OFF,   63, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   62,   52, SKIP,   43,   46); PSG.beat(16);
  PSG.setChannels(SKIP,   63, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   65,   48, SKIP,   43,   43); PSG.beat(16);
  PSG.setChannels( OFF,   66, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  
  // Measure 26
  PSG.setChannels(  79,   67,   51, SKIP,   43,   46); PSG.beat(16);
  PSG.setChannels(SKIP,   69, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   70, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   69,   50, SKIP,   43,   45); PSG.beat(16);
  PSG.setChannels(SKIP,   70, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   72, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   70,   46, SKIP,   43,   41); PSG.beat(16);
  PSG.setChannels( OFF,   72, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(SKIP,   74, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   72,   50, SKIP,   43,   45); PSG.beat(16);
  PSG.setChannels(SKIP,   74, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels( OFF,   75, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   74,   49, SKIP,   43,   44); PSG.beat(16);
  PSG.setChannels(SKIP,   75, SKIP, SKIP,   46, SKIP); PSG.beat(16);
  PSG.setChannels(  79,   77,   45, SKIP,   45,   39); PSG.beat(16);
  PSG.setChannels( OFF,   78, SKIP, SKIP,   41, SKIP); PSG.beat(16);
  
  // Measure 27
  PSG.setChannels(SKIP,   55,   27,   63,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   67,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   74,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46,   72,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP,   55,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   46, SKIP,   39,   51); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   27, SKIP,   39,   36); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   72,   43,   36); PSG.beat(16);
  PSG.setChannels(SKIP,   58,   46,   74,   46,   51); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   27,   75,   39,   36); PSG.beat(16);
  
  // Measure 28
  PSG.setChannels(SKIP,   60,   29,   77,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP,   58,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   48,   78,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   41,   53); PSG.beat(16);
  PSG.setChannels(SKIP,   53,   29,   81,   41,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   29, SKIP,   40,   41); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   48, SKIP,   39,   53); PSG.beat(16);
  PSG.setChannels(SKIP, SKIP,   53, SKIP,   36,   58); PSG.beat(16);
  
  // Measure 29
  PSG.setChannels(  79,   50,   50,  OFF,   38,   50); PSG.beat(16);
  PSG.setChannels(SKIP,   52,   41, SKIP, SKIP,   52); PSG.beat(16);
  PSG.setChannels(SKIP,   54,   41, SKIP, SKIP,   54); PSG.beat(16);
  PSG.setChannels(  79,   52,   50, SKIP,   38,   52); PSG.beat(16);
  PSG.setChannels(SKIP,   54,   41, SKIP, SKIP,   54); PSG.beat(16);
  PSG.setChannels(SKIP,   55,   41, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  79,   54,   50, SKIP,   38,   54); PSG.beat(16);
  PSG.setChannels( OFF,   55,   41, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   50, SKIP, SKIP,   57); PSG.beat(16);
  PSG.setChannels(  79,   55,   41, SKIP,   38,   55); PSG.beat(16);
  PSG.setChannels(SKIP,   57,   41, SKIP, SKIP,   57); PSG.beat(16);
  PSG.setChannels( OFF,   58,   50, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(  79,   57,   41, SKIP,   38,   57); PSG.beat(16);
  PSG.setChannels(SKIP,   58,   41, SKIP, SKIP,   58); PSG.beat(16);
  PSG.setChannels(  79,   60,   50, SKIP,   38,   60); PSG.beat(16);
  PSG.setChannels( OFF,   62,   41, SKIP, SKIP,   62); PSG.beat(16);
  
  // Measure 30
  PSG.setChannels(  78,   62,   50, SKIP,   38,   62); PSG.beat(16);
  PSG.setChannels(SKIP,   64,   41, SKIP, SKIP,   64); PSG.beat(16);
  PSG.setChannels(SKIP,   66,   41, SKIP, SKIP,   66); PSG.beat(16);
  PSG.setChannels(  78,   64,   50, SKIP,   38,   64); PSG.beat(16);
  PSG.setChannels(SKIP,   66,   41, SKIP, SKIP,   66); PSG.beat(16);
  PSG.setChannels(SKIP,   67,   41, SKIP, SKIP,   67); PSG.beat(16);
  PSG.setChannels(  78,   66,   50, SKIP,   38,   66); PSG.beat(16);
  PSG.setChannels( OFF,   67,   41, SKIP, SKIP,   67); PSG.beat(16);
  PSG.setChannels(SKIP,   69,   50, SKIP,   38,   69); PSG.beat(16);
  PSG.setChannels(  78,   67,   41, SKIP, SKIP,   67); PSG.beat(16);
  PSG.setChannels(SKIP,   69,   41, SKIP, SKIP,   69); PSG.beat(16);
  PSG.setChannels(SKIP,   70,   50, SKIP, SKIP,   70); PSG.beat(16);
  PSG.setChannels(  81,   72,   41, SKIP, SKIP,   72); PSG.beat(16);
  PSG.setChannels(SKIP,   74,   41, SKIP, SKIP,   74); PSG.beat(16);
  PSG.setChannels(SKIP,   76,   50, SKIP,   38,   76); PSG.beat(16);
  PSG.setChannels(SKIP,   78,   41, SKIP, SKIP,   66); PSG.beat(16);
  
  // Measure 31
  PSG.setVolume(0, 0xc);
  PSG.setChannels(  67, SKIP,   67, SKIP,   39,   55); PSG.beat( 8);
  PSG.setChannels(  70,  OFF,   70, SKIP, SKIP,   58); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP,   43,   55); PSG.beat( 8);
  PSG.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); PSG.beat( 8);
  PSG.setChannels(  72, SKIP,   72, SKIP, SKIP,   60); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   70, SKIP,   43,   58); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat( 8);
  
  // Measure 32
  PSG.setChannels(  67, SKIP,   67, SKIP,   39,   55); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP,   43,   55); PSG.beat( 8);
  PSG.setChannels(  60, SKIP,   60, SKIP, SKIP,   48); PSG.beat(16);
  PSG.setChannels(  59, SKIP,   59, SKIP, SKIP,   47); PSG.beat( 8, DOUBLEDOT);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  60, SKIP,   60, SKIP,   41,   48); PSG.beat(16);
  
  // Measure 33
  PSG.setChannels(  62, SKIP,   62, SKIP, SKIP,   50); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP,   39,   55); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP,   43,   55); PSG.beat( 8);
  PSG.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); PSG.beat( 8);
  PSG.setChannels(  72, SKIP,   72, SKIP, SKIP,   60); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   70, SKIP,   43,   58); PSG.beat(16);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat( 8);
  
  // Measure 34
  PSG.setChannels(  67, SKIP,   67, SKIP,   39,   55); PSG.beat( 8);
  PSG.setChannels(  70, SKIP,   70, SKIP, SKIP,   58); PSG.beat( 8);
  PSG.setChannels(  69, SKIP,   69, SKIP,   41,   57); PSG.beat(16);
  PSG.setChannels(  67, SKIP,   67, SKIP, SKIP,   55); PSG.beat(16);
  PSG.setChannels(  65, SKIP,   65, SKIP, SKIP,   53); PSG.beat(16);
  PSG.setChannels(  71, SKIP,   71, SKIP,   43,   59); PSG.beat( 4, DOUBLEDOT);
  PSG.setChannels(  71, SKIP,   71, SKIP,   43,   59); PSG.beat(16);
  PSG.setChannels(  72, SKIP,   72, SKIP,   41,   60); PSG.beat(16);
  
  // Measure 35
  PSG.setChannels(  74, SKIP,   74, SKIP, SKIP,   62); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP,   39,   70); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP, SKIP,   74); PSG.beat( 8);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP, SKIP,   70); PSG.beat(16);
  PSG.setChannels(  65,   69,   65, SKIP, SKIP,   69); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP,   43,   70); PSG.beat( 8);
  PSG.setChannels(  74,   77,   74, SKIP, SKIP,   77); PSG.beat( 8);
  PSG.setChannels(  72,   75,   72, SKIP, SKIP,   75); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP,   43,   74); PSG.beat(16);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat( 8);
  
  // Measure 36
  PSG.setChannels(  67,   70,   67, SKIP,   39,   70); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP, SKIP,   74); PSG.beat( 8);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP, SKIP,   70); PSG.beat(16);
  PSG.setChannels(  65,   69,   65, SKIP, SKIP,   69); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP,   43,   70); PSG.beat( 8);
  PSG.setChannels(  60,   67,   60, SKIP, SKIP,   67); PSG.beat(16);
  PSG.setChannels(  59,   67,   59, SKIP, SKIP,   67); PSG.beat( 8, DOUBLEDOT);
  PSG.setChannels(SKIP, SKIP, SKIP, SKIP,   43, SKIP); PSG.beat(16);
  PSG.setChannels(  60,   69,   60, SKIP,   41,   67); PSG.beat(16);
  
  // Measure 37
  PSG.setChannels(  62,   70,   62, SKIP, SKIP,   67); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP,   39,   70); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP, SKIP,   74); PSG.beat( 8);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP, SKIP,   70); PSG.beat(16);
  PSG.setChannels(  65,   69,   65, SKIP, SKIP,   69); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP,   43,   70); PSG.beat( 8);
  PSG.setChannels(  74,   77,   74, SKIP, SKIP,   77); PSG.beat( 8);
  PSG.setChannels(  72,   75,   72, SKIP, SKIP,   75); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP,   43,   74); PSG.beat(16);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat( 8);
  
  // Measure 38
  PSG.setChannels(  67,   70,   67, SKIP,   39,   70); PSG.beat( 8);
  PSG.setChannels(  70,   74,   70, SKIP, SKIP,   74); PSG.beat( 8);
  PSG.setChannels(  69,   72,   69, SKIP,   41,   72); PSG.beat(16);
  PSG.setChannels(  67,   70,   67, SKIP, SKIP,   70); PSG.beat(16);
  PSG.setChannels(  65,   69,   65, SKIP, SKIP,   69); PSG.beat(16);
  PSG.setChannels(  62,   67,   58, SKIP,   43,   67); PSG.beat( 4);
  PSG.setVolume(0xb); PSG.beat( 4);
  PSG.setVolume(0xa); PSG.beat( 4);
  PSG.setVolume(0x9); PSG.beat( 4); PSG.setVolume(0xc);
  
  PSG.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); PSG.mute();
}
