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

hcYmzShield ymzShield;

void setup() {
  Serial.begin(9600);
  ymzShield.mute();
}

void loop() {
  Serial.println("Descending an 8-bit staricase");
  
  ymzShield.setVolume(0xe);
  ymzShield.setEnvelopePeriod(0xc00);
  ymzShield.setNoisePeriod(0x4);
  ymzShield.setNoise(0);
  ymzShield.setEnvelope(0);
  ymzShield.startEnvelope(__CONT__ | __ATT__);
  delay(1700);
  ymzShield.setNoise(0, false);
  ymzShield.setEnvelope(0, false);
  ymzShield.setVolume(0x0);
  
  ymzShield.mute();
  delay(3000);
}

