/**
 * Duck Hunt Demo (Title Screen)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.3
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
  Serial.println("Duck Hunt title screen");
  
  demoDuckHunt();
  
  delay(3000);
}


/**
 * demoDuckHunt()
 *
 * Plays the Round Start music from the NES Duck Hunt.
 */
void demoDuckHunt() {
  PSG.setVolume(13);
  PSG.setTempo(110);
  
  // Key of Ab Minor
  
  PSG.setChannels(68, 65);
  PSG.beat(16);
  PSG.setChannels(68, 65);
  PSG.beat(16);
  PSG.setChannels(67, 64);
  PSG.beat(8);
  PSG.setChannels(66, 63);
  PSG.beat(8);
  PSG.setChannels(65, 62);
  PSG.beat(8);
  PSG.setChannels(64, 55, 48);
  PSG.beat(8, DOT);
  PSG.setChannels(65, 56, 49);
  PSG.beat(8);
  PSG.setChannels(OFF, OFF, OFF);
  PSG.beat(8, DOT); // Rest
  
  PSG.setChannels(77, 68);
  PSG.beat(16);
  PSG.setChannels(73, 65, 68);
  PSG.beat(16);
  PSG.setChannels(68, 61, 65);
  PSG.beat(16);
  PSG.setChannels(68, 60, 63);
  PSG.beat(16);
  PSG.setChannels(67, 59, 62);
  PSG.beat(16);
  PSG.setChannels(66, 58, 61);
  PSG.beat(16);
  PSG.setChannels(65, 56, 60);
  PSG.beat(16);
  PSG.setChannels(64, 55, 48);
  PSG.beat(8, DOT);
  PSG.setChannels(65, 56, 49);
  PSG.beat(8);
  PSG.setChannels(OFF, OFF, OFF);
  PSG.beat(8, DOT); // Rest
  
  PSG.mute();
}

