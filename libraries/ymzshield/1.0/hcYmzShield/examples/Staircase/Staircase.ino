/**
 * Staircase Demo
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

#include <hcYmzShield.h>


void setup() {
  Serial.begin(9600);
}


void loop() {
  Serial.println("Descending an 8-bit staricase");
  
  PSG.setVolume(0xe);
  PSG.setEnvelopePeriod(0xc00);
  PSG.setNoisePeriod(0x4);
  PSG.setNoise(0);
  PSG.setEnvelope(0);
  PSG.startEnvelope(CONT | ATT);
  delay(1700);
  PSG.setNoise(0, false);
  PSG.setEnvelope(0, false);
  PSG.setVolume(0x0);
  
  PSG.mute();
  delay(3000);
}

