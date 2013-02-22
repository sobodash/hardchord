/**
 * Staircase Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2
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
  
  // This time we will screw with the envelope generator
  PSG.setVolume(14);
  
  // Set up the envelope and noise
  PSG.setEnvelopePeriod(0xc00);
  PSG.setNoisePeriod(0x4);
  
  // Enable noise on Channel 0
  PSG.setNoise(0);
  
  // Enable envelope on Channel 0
  PSG.setEnvelope(0);
  
  // Begin the envelope pattern
  PSG.startEnvelope(CONT | ATT);
  delay(1700);
  
  // Tuin our noise and sound back off
  PSG.setNoise(0, false);
  PSG.setEnvelope(0, false);
  PSG.setVolume(0);
  PSG.mute();
  
  delay(3000);
}

