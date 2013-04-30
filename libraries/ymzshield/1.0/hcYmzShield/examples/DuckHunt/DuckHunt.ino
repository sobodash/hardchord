/**
 * Duck Hunt Demo (Title Screen)
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
  Serial.println("Duck Hunt title screen");
}


void loop() {
  YMZ.setVolume(0, 13); // Enable Channels 0-2
  YMZ.setVolume(1, 13);
  YMZ.setVolume(2, 13);

  YMZ.setTempo(110);    // 110bpm, key of Ab Minor
  
  // Measure 1
  YMZ.setChannels(68, 65);        YMZ.beat(16);
  YMZ.setChannels(68, 65);        YMZ.beat(16);
  YMZ.setChannels(67, 64);        YMZ.beat(8);
  YMZ.setChannels(66, 63);        YMZ.beat(8);
  YMZ.setChannels(65, 62);        YMZ.beat(8);
  YMZ.setChannels(64, 55, 48);    YMZ.beat(8, DOT);
  YMZ.setChannels(65, 56, 49);    YMZ.beat(8);
  YMZ.setChannels(OFF, OFF, OFF); YMZ.beat(8, DOT); // Rest
  
  // Measure 2
  YMZ.setChannels(77, 68);        YMZ.beat(16);
  YMZ.setChannels(73, 65, 68);    YMZ.beat(16);
  YMZ.setChannels(68, 61, 65);    YMZ.beat(16);
  YMZ.setChannels(68, 60, 63);    YMZ.beat(16);
  YMZ.setChannels(67, 59, 62);    YMZ.beat(16);
  YMZ.setChannels(66, 58, 61);    YMZ.beat(16);
  YMZ.setChannels(65, 56, 60);    YMZ.beat(16);
  YMZ.setChannels(64, 55, 48);    YMZ.beat(8, DOT);
  YMZ.setChannels(65, 56, 49);    YMZ.beat(8);
  YMZ.setChannels(OFF, OFF, OFF); YMZ.beat(8, DOT); // Rest
  
  YMZ.mute();
  
  delay(3000);
}


