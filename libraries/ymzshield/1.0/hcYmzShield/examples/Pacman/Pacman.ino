/**
 * Pacman Demo (Round Start!)
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
  Serial.println("Pacman round start");
  PSG.setVolume(0xd);
  
  demoPacman();
  
  PSG.mute();
  delay(3000);
}


/**
 * playNote()
 *
 * Tries to minimize some popping.
 */
void playNote(uint8_t channel, uint8_t note) {
  if(note == 0) {
    PSG.setVolume(channel, 8); delayMicroseconds(25);
    PSG.setTone(channel, false);
    PSG.setVolume(channel, 0);
    return;
  }
  
  PSG.setToneMidi(channel, note);
  
  if(PSG.isTone(channel) == false) {
    PSG.setTone(channel);
    PSG.setVolume(channel, 8); delayMicroseconds(25);
    PSG.setVolume(channel, 15); delayMicroseconds(25);
  }
}


/**
 * demoPacman()
 *
 * Plays the Round Start music from the original Pacman.
 */
void demoPacman() {
  playNote(0, 71); playNote(1, 35);
  delay(1);
  playNote(0, 83); playNote(1, 35);
  delay(69);
  playNote(0, 83);
  delay(70);
  playNote(0, 78);
  delay(71);
  playNote(0, 78);
  delay(70);
  playNote(0, 75); playNote(1, 47);
  delay(70);
  playNote(0, 75);
  delay(70);
  playNote(0, 83); playNote(1, 35);
  delay(70);
  playNote(0, 78);
  delay(69);
  playNote(0, 78); playNote(1, 35);
  delay(141);
  playNote(0, 75);
  delay(140);
  playNote(1, 47);
  delay(71);
  playNote(0, 75);
  delay(70);
  playNote(0, 72); playNote(1, 36);
  delay(70);
  playNote(0, 72);
  delay(71);
  playNote(0, 84); playNote(1, 36);
  delay(69);
  playNote(0, 84);
  delay(70);
  playNote(0, 79);
  delay(70);
  playNote(0, 79);
  delay(71);
  playNote(0, 76); playNote(1, 48);
  delay(69);
  playNote(0, 76);
  delay(70);
  playNote(0, 84); playNote(1, 36);
  delay(70);
  playNote(0, 79);
  delay(70);
  playNote(0, 79); playNote(1, 36);
  delay(140);
  playNote(0, 76);
  delay(141);
  playNote(1, 48);
  delay(69);
  playNote(0, 76);
  delay(70);
  playNote(0, 71); playNote(1, 35);
  delay(70);
  playNote(0, 71);
  delay(70);
  playNote(0, 83); playNote(1, 35);
  delay(69);
  playNote(0, 83);
  delay(70);
  playNote(0, 78);
  delay(70);
  playNote(0, 78);
  delay(71);
  playNote(0, 75); playNote(1, 47);
  delay(69);
  playNote(0, 75);
  delay(70);
  playNote(0, 83); playNote(1, 35);
  delay(70);
  playNote(0, 78);
  delay(70);
  playNote(0, 78); playNote(1, 35);
  delay(140);
  playNote(0, 75);
  delay(141);
  playNote(1, 47);
  delay(69);
  playNote(0, 75);
  delay(71);
  playNote(0, 75); playNote(1, 42);
  delay(70);
  playNote(0, 76);
  delay(70);
  playNote(0, 77); playNote(1, 42);
  delay(69);
  playNote(0, 77);
  delay(70);
  playNote(0, 77); playNote(1, 44);
  delay(70);
  playNote(0, 78);
  delay(70);
  playNote(0, 79); playNote(1, 44);
  delay(69);
  playNote(0, 79);
  delay(70);
  playNote(0, 79); playNote(1, 46);
  delay(70);
  playNote(0, 80);
  delay(70);
  playNote(0, 81); playNote(1, 46);
  delay(69);
  playNote(0, 81);
  delay(70);
  playNote(0, 83); playNote(1, 47);
  delay(141);
  playNote(0, 83); playNote(1, 47);
}

