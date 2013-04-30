/**
 * Pacman Demo (Round Start!)
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
  Serial.println("Round Start! - Pacman");
}


void loop() {
  YMZ.setVolume(13);
  YMZ.setArticulation(LEGATO);
  
  YMZ.setNote(0, 71); YMZ.setNote(1, 35); delay(1);
  YMZ.setNote(0, 83); YMZ.setNote(1, 35); delay(69);
  YMZ.setNote(0, 83); delay(70);
  YMZ.setNote(0, 78); delay(71);
  YMZ.setNote(0, 78); delay(70);
  YMZ.setNote(0, 75); YMZ.setNote(1, 47); delay(70);
  YMZ.setNote(0, 75); delay(70);
  YMZ.setNote(0, 83); YMZ.setNote(1, 35); delay(70);
  YMZ.setNote(0, 78); delay(69);
  YMZ.setNote(0, 78); YMZ.setNote(1, 35); delay(141);
  YMZ.setNote(0, 75); delay(140);
  YMZ.setNote(1, 47); delay(71);
  YMZ.setNote(0, 75); delay(70);
  YMZ.setNote(0, 72); YMZ.setNote(1, 36); delay(70);
  YMZ.setNote(0, 72); delay(71);
  YMZ.setNote(0, 84); YMZ.setNote(1, 36); delay(69);
  YMZ.setNote(0, 84); delay(70);
  YMZ.setNote(0, 79); delay(70);
  YMZ.setNote(0, 79); delay(71);
  YMZ.setNote(0, 76); YMZ.setNote(1, 48); delay(69);
  YMZ.setNote(0, 76); delay(70);
  YMZ.setNote(0, 84); YMZ.setNote(1, 36); delay(70);
  YMZ.setNote(0, 79); delay(70);
  YMZ.setNote(0, 79); YMZ.setNote(1, 36); delay(140);
  YMZ.setNote(0, 76); delay(141);
  YMZ.setNote(1, 48); delay(69);
  YMZ.setNote(0, 76); delay(70);
  YMZ.setNote(0, 71); YMZ.setNote(1, 35); delay(70);
  YMZ.setNote(0, 71); delay(70);
  YMZ.setNote(0, 83); YMZ.setNote(1, 35); delay(69);
  YMZ.setNote(0, 83); delay(70);
  YMZ.setNote(0, 78); delay(70);
  YMZ.setNote(0, 78); delay(71);
  YMZ.setNote(0, 75); YMZ.setNote(1, 47); delay(69);
  YMZ.setNote(0, 75); delay(70);
  YMZ.setNote(0, 83); YMZ.setNote(1, 35); delay(70);
  YMZ.setNote(0, 78); delay(70);
  YMZ.setNote(0, 78); YMZ.setNote(1, 35); delay(140);
  YMZ.setNote(0, 75); delay(141);
  YMZ.setNote(1, 47); delay(69);
  YMZ.setNote(0, 75); delay(71);
  YMZ.setNote(0, 75); YMZ.setNote(1, 42); delay(70);
  YMZ.setNote(0, 76); delay(70);
  YMZ.setNote(0, 77); YMZ.setNote(1, 42); delay(69);
  YMZ.setNote(0, 77); delay(70);
  YMZ.setNote(0, 77); YMZ.setNote(1, 44); delay(70);
  YMZ.setNote(0, 78); delay(70);
  YMZ.setNote(0, 79); YMZ.setNote(1, 44); delay(69);
  YMZ.setNote(0, 79); delay(70);
  YMZ.setNote(0, 79); YMZ.setNote(1, 46); delay(70);
  YMZ.setNote(0, 80); delay(70);
  YMZ.setNote(0, 81); YMZ.setNote(1, 46); delay(69);
  YMZ.setNote(0, 81); delay(70);
  YMZ.setNote(0, 83); YMZ.setNote(1, 47); delay(141);
  
  YMZ.mute();
  
  delay(3000);
}


