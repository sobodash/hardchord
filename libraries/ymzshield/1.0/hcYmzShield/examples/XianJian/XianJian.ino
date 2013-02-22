/**
 * Xian Jian Qi Xia Demo
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
  Serial.println("Now heading for the streets of Suzhou...");
  PSG.setVolume(0xd);

  PSG.setEnvelopePeriod(0x50);
  PSG.setNoisePeriod(0xf);
  PSG.setEnvelope(5);
  PSG.setVolume(5, 0x4);
  PSG.startEnvelope(CONT | ATT | HOLD);

  demoXianJian();
}


/**
 * playNote()
 *
 * Tries to minimize some popping.
 */
void playNote(uint8_t channel, uint8_t note) {
  if(note == 0) {
    if(!PSG.isEnvelope(channel)) {
      PSG.setVolume(channel, 0);
    }
    PSG.setTone(channel, false);
    return;
  }

  // Restart the envelope on each note
  PSG.startEnvelope(CONT | ATT | HOLD);
  PSG.setToneMidi(channel, note);

  PSG.setTone(channel);
  if(!PSG.isEnvelope(channel)) {
    PSG.setVolume(channel, 4); 
    delayMicroseconds(25);
    PSG.setVolume(channel, 14);
  }
}


/**
 * demoShanzhaiFighter()
 *
 * Plays a song from the old Chinese DOS game Xian Jian Qi Xia Zhuan.
 */
void demoXianJian() {
  playNote(0, 64), playNote(5, 40), playNote(3, 64), playNote(1, 64), playNote(4, 64), playNote(2, 59);
  delay(205);
  playNote(4, 64), playNote(0, 67), playNote(4, 67);
  delay(229);
  playNote(0, 67), playNote(3, 64), playNote(4, 67), playNote(3, 64), playNote(4, 62), playNote(0, 62);
  delay(229);
  playNote(0, 62), playNote(1, 64), playNote(2, 59), playNote(5, 40), playNote(4, 64);
  playNote(0, 64), playNote(5, 40), playNote(2, 59), playNote(1, 64);
  delay(229);
  playNote(0, 64), playNote(4, 59), playNote(0, 59);
  delay(460);
  playNote(0, 59), playNote(3, 64), playNote(4, 59), playNote(3, 62);
  delay(461);
  playNote(3, 62), playNote(2, 59), playNote(1, 64), playNote(5, 40), playNote(4, 62);
  playNote(1, 64), playNote(2, 59), playNote(3, 59), playNote(0, 62);
  delay(113);
  playNote(3, 59);
  delay(115);
  playNote(3, 59), playNote(0, 62), playNote(4, 62), playNote(3, 59), playNote(4, 64), playNote(0, 64);
  delay(114);
  playNote(3, 59);
  delay(115);
  playNote(3, 59), playNote(0, 64), playNote(4, 59), playNote(3, 59), playNote(0, 59);
  delay(114);
  playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(5, 40), playNote(1, 64), playNote(2, 59), playNote(0, 59), playNote(4, 62);
  playNote(0, 62), playNote(2, 57), playNote(3, 59), playNote(1, 62), playNote(5, 38);
  delay(113);
  playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(0, 62), playNote(4, 57), playNote(0, 57), playNote(3, 59);
  delay(113);
  playNote(3, 59);
  delay(115);
  playNote(3, 59);
  delay(115);
  playNote(3, 59);
  delay(115);
  playNote(3, 59);
  delay(229);
  playNote(0, 57), playNote(4, 57);
  delay(230);
  playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(3, 52), playNote(2, 55), playNote(4, 55), playNote(5, 36);
  playNote(1, 60), playNote(0, 55);
  delay(114);
  playNote(3, 52);
  delay(114);
  playNote(3, 52), playNote(0, 55), playNote(4, 55), playNote(0, 52), playNote(4, 52), playNote(3, 52);
  delay(114);
  playNote(3, 52);
  delay(115);
  playNote(3, 52), playNote(0, 52), playNote(4, 55), playNote(3, 52), playNote(0, 55);
  delay(114);
  playNote(3, 52);
  delay(114);
  playNote(3, 52), playNote(4, 55), playNote(1, 60), playNote(5, 36), playNote(2, 55);
  playNote(0, 55), playNote(5, 38), playNote(0, 59), playNote(3, 52), playNote(4, 59), playNote(2, 57), playNote(1, 62);
  delay(113);
  playNote(3, 52);
  delay(114);
  playNote(3, 52), playNote(0, 59), playNote(4, 57), playNote(0, 57), playNote(3, 52);
  delay(115);
  playNote(3, 52);
  delay(114);
  playNote(3, 52), playNote(0, 57), playNote(4, 62), playNote(0, 62), playNote(3, 52);
  delay(113);
  playNote(3, 52), playNote(0, 62), playNote(4, 62), playNote(0, 59), playNote(3, 52), playNote(4, 59);
  delay(115);
  playNote(4, 59), playNote(3, 52), playNote(0, 59), playNote(3, 52), playNote(0, 57), playNote(4, 57);
  delay(230);
  playNote(4, 57), playNote(0, 57), playNote(4, 52), playNote(0, 52);
  delay(229);
  playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(4, 52), playNote(3, 52);
  playNote(0, 52), playNote(3, 55), playNote(2, 59), playNote(4, 59), playNote(5, 40), playNote(1, 64), playNote(0, 59);
  delay(114);
  playNote(0, 59), playNote(4, 59), playNote(0, 59);
  delay(114);
  playNote(0, 59), playNote(4, 59), playNote(3, 55), playNote(0, 59), playNote(3, 55), playNote(4, 59);
  delay(113);
  playNote(4, 59), playNote(0, 59), playNote(3, 55), playNote(4, 59), playNote(0, 59);
  delay(115);
  playNote(0, 59), playNote(3, 55), playNote(4, 59), playNote(0, 59), playNote(4, 59), playNote(3, 57);
  delay(114);
  playNote(4, 59), playNote(0, 59), playNote(4, 59), playNote(0, 59);
  delay(116);
  playNote(0, 59), playNote(4, 59), playNote(3, 57), playNote(4, 59), playNote(0, 59), playNote(3, 57);
  delay(114);
  playNote(3, 57), playNote(0, 59), playNote(4, 59), playNote(3, 57), playNote(0, 59);
  delay(114);
  playNote(0, 59), playNote(3, 57), playNote(4, 59), playNote(3, 59), playNote(0, 59), playNote(4, 59);
  delay(114);
  playNote(4, 59), playNote(0, 59), playNote(4, 59), playNote(0, 59);
  delay(114);
  playNote(0, 59), playNote(4, 59), playNote(3, 59), playNote(0, 59), playNote(4, 59), playNote(3, 59);
  delay(115);
  playNote(3, 59), playNote(4, 59), playNote(0, 59), playNote(3, 59), playNote(4, 59);
  delay(113);
  playNote(3, 59), playNote(4, 59), playNote(0, 59), playNote(3, 62), playNote(0, 59), playNote(4, 59);
  delay(114);
  playNote(4, 59), playNote(0, 59), playNote(4, 59);
  delay(115);
  playNote(0, 59), playNote(4, 59), playNote(3, 62);
  delay(115);
  playNote(3, 62);
  delay(115);
  playNote(1, 64), playNote(2, 59), playNote(5, 40), playNote(3, 62), playNote(2, 59);
  playNote(0, 64), playNote(5, 40), playNote(1, 64), playNote(4, 64), playNote(3, 64);
  delay(229);
  playNote(4, 64), playNote(0, 67), playNote(4, 67);
  delay(230);
  playNote(4, 67), playNote(0, 67), playNote(4, 62), playNote(0, 62);
  delay(231);
  playNote(1, 64), playNote(0, 62), playNote(5, 40), playNote(3, 64), playNote(2, 59), playNote(4, 62), playNote(5, 40);
  playNote(0, 64), playNote(2, 59), playNote(3, 67), playNote(1, 64), playNote(4, 64);
  delay(113);
  playNote(3, 67);
  delay(115);
  playNote(3, 67), playNote(4, 64), playNote(0, 64), playNote(3, 67), playNote(0, 59);
  delay(1);
  playNote(4, 59);
  delay(112);
  playNote(4, 59), playNote(0, 59), playNote(3, 67), playNote(0, 59), playNote(3, 67), playNote(4, 59);
  delay(114);
  playNote(4, 59), playNote(0, 59), playNote(3, 67), playNote(0, 59), playNote(3, 67), playNote(4, 59);
  delay(114);
  playNote(4, 59), playNote(3, 67), playNote(0, 59), playNote(4, 59), playNote(0, 59), playNote(3, 67);
  delay(114);
  playNote(3, 67), playNote(0, 59), playNote(4, 59), playNote(3, 67);
  delay(114);
  playNote(3, 67);
  delay(116);
  playNote(3, 67);
  delay(115);
  playNote(3, 67);
  delay(115);
  playNote(3, 67), playNote(2, 59), playNote(1, 64), playNote(5, 40), playNote(2, 59), playNote(4, 62), playNote(3, 62);
  playNote(1, 64), playNote(0, 62);
  delay(228);
  playNote(0, 62), playNote(4, 64), playNote(0, 64);
  delay(230);
  playNote(0, 64), playNote(4, 59), playNote(0, 59);
  delay(230);
  playNote(0, 59), playNote(1, 64), playNote(3, 62), playNote(5, 40), playNote(2, 59), playNote(4, 59), playNote(5, 38), playNote(4, 62);
  playNote(3, 59), playNote(0, 62);
  delay(1);
  playNote(1, 62), playNote(2, 57);
  delay(112);
  playNote(3, 59);
  delay(115);
  playNote(3, 59), playNote(4, 62), playNote(0, 62), playNote(3, 59), playNote(4, 57), playNote(0, 57);
  delay(114);
  playNote(0, 57), playNote(4, 57), playNote(3, 59), playNote(0, 57), playNote(3, 59), playNote(4, 57);
  delay(114);
  playNote(4, 57), playNote(0, 57), playNote(3, 59), playNote(0, 57), playNote(4, 57), playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(4, 57), playNote(0, 57), playNote(4, 57), playNote(0, 57), playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(0, 57), playNote(4, 57), playNote(3, 59), playNote(0, 57);
  delay(114);
  playNote(0, 57), playNote(3, 59), playNote(4, 57), playNote(0, 57), playNote(4, 57), playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(4, 57), playNote(0, 57);
  delay(229);
  playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(5, 36), playNote(2, 55), playNote(4, 55), playNote(0, 55), playNote(1, 60), playNote(3, 55);
  delay(229);
  playNote(4, 55), playNote(3, 55), playNote(0, 52), playNote(4, 52), playNote(3, 52);
  delay(229);
  playNote(3, 52), playNote(4, 52), playNote(0, 55), playNote(4, 55), playNote(3, 57);
  delay(230);
  playNote(3, 57), playNote(1, 60), playNote(4, 55), playNote(5, 36), playNote(2, 55), playNote(0, 55), playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(0, 59), playNote(3, 62), playNote(4, 59);
  delay(229);
  playNote(4, 59), playNote(0, 59), playNote(3, 62), playNote(4, 57), playNote(3, 59), playNote(0, 57);
  delay(229);
  playNote(0, 57), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 59), playNote(0, 59);
  delay(114);
  playNote(0, 59);
  delay(1);
  playNote(3, 59), playNote(4, 57), playNote(3, 57), playNote(0, 57);
  delay(228);
  playNote(0, 57), playNote(3, 57), playNote(4, 59), playNote(3, 59), playNote(0, 59);
  delay(229);
  playNote(1, 62), playNote(2, 57), playNote(5, 38), playNote(3, 59), playNote(4, 59), playNote(0, 59), playNote(3, 52), playNote(0, 52), playNote(5, 40), playNote(4, 52), playNote(1, 64);
  delay(1);
  playNote(2, 59);
  delay(112);
  playNote(0, 52), playNote(4, 52), playNote(0, 52), playNote(4, 52);
  delay(115);
  playNote(4, 52), playNote(3, 52), playNote(0, 52), playNote(3, 55), playNote(0, 52), playNote(4, 52);
  delay(113);
  playNote(4, 52);
  delay(2);
  playNote(0, 52), playNote(3, 55), playNote(4, 52), playNote(0, 52), playNote(3, 55);
  delay(111);
  playNote(3, 55), playNote(0, 52), playNote(4, 52), playNote(0, 52), playNote(3, 57);
  delay(114);
  playNote(0, 52), playNote(4, 52), playNote(0, 52), playNote(4, 52);
  delay(114);
  playNote(4, 52), playNote(0, 52), playNote(3, 57), playNote(4, 52), playNote(3, 59), playNote(0, 52);
  delay(114);
  playNote(0, 52), playNote(3, 59), playNote(4, 52), playNote(3, 59), playNote(0, 52), playNote(4, 52);
  delay(113);
  playNote(4, 52), playNote(0, 52), playNote(3, 59), playNote(4, 52), playNote(0, 52), playNote(3, 57);
  delay(112);
  playNote(0, 52), playNote(4, 52), playNote(0, 52);
  delay(115);
  playNote(0, 52), playNote(4, 52), playNote(3, 57), playNote(0, 52), playNote(3, 59), playNote(4, 52);
  delay(114);
  playNote(4, 52), playNote(0, 52), playNote(3, 59), playNote(4, 52), playNote(0, 52), playNote(3, 59);
  delay(114);
  playNote(3, 59), playNote(0, 52), playNote(4, 52), playNote(3, 62);
  delay(229);
  playNote(3, 64);
  delay(115);
  playNote(3, 64);
  delay(114);
  playNote(2, 59), playNote(5, 40), playNote(1, 64), playNote(3, 64), playNote(5, 43), playNote(4, 67), playNote(1, 67), playNote(2, 62), playNote(0, 67), playNote(3, 91);
  delay(228);
  playNote(4, 67), playNote(0, 67), playNote(4, 70), playNote(0, 70);
  delay(230);
  playNote(0, 70), playNote(4, 70), playNote(0, 65), playNote(4, 65);
  delay(229);
  playNote(2, 62), playNote(5, 43), playNote(1, 67), playNote(4, 65), playNote(0, 65), playNote(1, 67), playNote(4, 67), playNote(0, 67), playNote(5, 43), playNote(2, 62);
  delay(229);
  playNote(4, 67), playNote(0, 67), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(3, 91), playNote(4, 62), playNote(0, 62), playNote(4, 62), playNote(3, 89);
  delay(113);
  playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(1);
  playNote(0, 62);
  delay(113);
  playNote(0, 62), playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(5, 43), playNote(3, 89), playNote(2, 62), playNote(1, 67), playNote(0, 62), playNote(4, 62), playNote(1, 67), playNote(4, 65), playNote(3, 86), playNote(0, 65), playNote(5, 43), playNote(2, 62);
  delay(229);
  playNote(0, 65), playNote(4, 67), playNote(0, 67);
  delay(230);
  playNote(0, 67), playNote(4, 62), playNote(0, 62);
  delay(230);
  playNote(2, 62), playNote(5, 43), playNote(1, 67), playNote(0, 62), playNote(4, 62), playNote(5, 41), playNote(1, 65), playNote(4, 65), playNote(2, 60), playNote(0, 65);
  delay(226);
  playNote(0, 65), playNote(4, 60), playNote(0, 60);
  delay(115);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(113);
  playNote(0, 60);
  delay(1);
  playNote(4, 60), playNote(0, 60);
  delay(113);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(115);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(114);
  playNote(0, 60), playNote(4, 60), playNote(0, 60), playNote(4, 60);
  delay(115);
  playNote(4, 60), playNote(0, 60);
  delay(229);
  playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(3, 86), playNote(4, 58), playNote(5, 39), playNote(2, 58), playNote(0, 58), playNote(3, 79), playNote(1, 63);
  delay(229);
  playNote(0, 58), playNote(4, 58), playNote(0, 55), playNote(4, 55);
  delay(230);
  playNote(4, 55), playNote(0, 55), playNote(4, 58), playNote(0, 58);
  delay(230);
  playNote(1, 63), playNote(2, 58), playNote(5, 39), playNote(0, 58), playNote(4, 58), playNote(5, 41), playNote(4, 62), playNote(1, 65), playNote(0, 62), playNote(2, 60);
  delay(228);
  playNote(4, 62), playNote(0, 60);
  delay(1);
  playNote(4, 60);
  delay(229);
  playNote(4, 60), playNote(0, 65), playNote(4, 65);
  delay(115);
  playNote(4, 65), playNote(0, 65), playNote(4, 62), playNote(0, 62);
  delay(113);
  playNote(0, 62), playNote(4, 60), playNote(0, 60);
  delay(230);
  playNote(4, 60), playNote(0, 60), playNote(4, 55), playNote(0, 55);
  delay(230);
  playNote(3, 79), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(4, 55), playNote(0, 55), playNote(4, 62), playNote(1, 67), playNote(2, 62), playNote(0, 62), playNote(5, 43), playNote(3, 82);
  delay(113);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(3, 82), playNote(4, 62), playNote(0, 62), playNote(3, 82);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(113);
  playNote(4, 62), playNote(3, 82), playNote(0, 62), playNote(3, 84), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(4, 62), playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62), playNote(3, 84), playNote(0, 62), playNote(4, 62);
  delay(115);
  playNote(4, 62), playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(3, 84), playNote(4, 62), playNote(3, 86), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(3, 86), playNote(4, 62), playNote(3, 86), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(4, 62), playNote(3, 86), playNote(0, 62), playNote(3, 89), playNote(4, 62);
  delay(115);
  playNote(4, 62), playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(113);
  playNote(3, 89), playNote(0, 62), playNote(4, 62), playNote(3, 89);
  delay(230);
  playNote(1, 67), playNote(5, 43), playNote(2, 62), playNote(3, 89), playNote(5, 43), playNote(1, 67), playNote(3, 91), playNote(0, 67), playNote(4, 67), playNote(2, 62);
  delay(228);
  playNote(4, 67), playNote(0, 67), playNote(4, 70);
  delay(1);
  playNote(0, 70);
  delay(229);
  playNote(0, 70), playNote(4, 65), playNote(0, 65);
  delay(230);
  playNote(2, 62), playNote(5, 43), playNote(3, 91), playNote(0, 65), playNote(4, 65), playNote(1, 67), playNote(5, 43), playNote(3, 94), playNote(0, 67), playNote(4, 67), playNote(2, 62), playNote(1, 67);
  delay(228);
  playNote(4, 67), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(4, 62), playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(4, 62), playNote(0, 62), playNote(4, 62);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(113);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(115);
  playNote(0, 62), playNote(4, 62), playNote(0, 62);
  delay(116);
  playNote(3, 94), playNote(2, 62), playNote(5, 43), playNote(1, 67), playNote(4, 62), playNote(0, 62), playNote(3, 89), playNote(1, 67), playNote(2, 62), playNote(5, 43), playNote(0, 65), playNote(4, 65);
  delay(227);
  playNote(4, 65), playNote(0, 67), playNote(4, 67);
  delay(229);
  playNote(4, 67), playNote(0, 62), playNote(4, 62);
  delay(229);
  playNote(2, 62), playNote(3, 89), playNote(5, 43), playNote(1, 67), playNote(4, 62), playNote(0, 62), playNote(1, 65), playNote(5, 41), playNote(3, 86), playNote(2, 60), playNote(4, 65), playNote(0, 65);
  delay(229);
  playNote(0, 65), playNote(4, 65), playNote(0, 60), playNote(4, 60);
  delay(114);
  playNote(4, 60), playNote(0, 60), playNote(4, 60);
  delay(115);
  playNote(4, 60), playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(116);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(111);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(115);
  playNote(0, 60), playNote(4, 60), playNote(0, 60);
  delay(113);
  playNote(3, 86), playNote(0, 60), playNote(4, 60);
  delay(232);
  playNote(1, 65), playNote(2, 60), playNote(5, 39), playNote(1, 63), playNote(0, 58), playNote(2, 58), playNote(4, 58);
  delay(6);
  playNote(3, 82);
  delay(223);
  playNote(4, 58), playNote(0, 55), playNote(4, 55);
  delay(2);
  playNote(3, 79);
  delay(3);
  playNote(3, 82);
  delay(216);
  playNote(3, 84);
  delay(7);
  playNote(4, 55), playNote(0, 55);
  delay(1);
  playNote(4, 58), playNote(0, 58);
  delay(1);
  playNote(3, 79);
  delay(219);
  playNote(3, 89);
  delay(7);
  playNote(1, 63), playNote(4, 58), playNote(5, 39), playNote(2, 58), playNote(0, 58), playNote(4, 62), playNote(5, 41), playNote(0, 62), playNote(1, 65), playNote(2, 60);
  delay(219);
  playNote(3, 86);
  delay(8);
  playNote(4, 62), playNote(0, 62), playNote(4, 60), playNote(0, 60);
  delay(229);
  playNote(0, 60), playNote(4, 60);
  delay(1);
  playNote(4, 65), playNote(0, 65);
  delay(113);
  playNote(0, 65), playNote(4, 62), playNote(0, 62);
  delay(107);
  playNote(3, 84);
  delay(7);
  playNote(0, 62), playNote(4, 62), playNote(0, 60), playNote(4, 60);
  delay(222);
  playNote(3, 86);
  delay(6);
  playNote(0, 60), playNote(4, 62), playNote(0, 62);
  delay(221);
  playNote(3, 79);
  delay(9);
  playNote(5, 41), playNote(4, 62), playNote(1, 65), playNote(2, 60), playNote(0, 62), playNote(1, 67), playNote(5, 43), playNote(0, 55), playNote(2, 62), playNote(4, 55);
  delay(112);
  playNote(4, 55), playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(114);
  playNote(0, 55), playNote(4, 55), playNote(0, 55), playNote(4, 55);
  delay(114);
  playNote(4, 55), playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(115);
  playNote(0, 55), playNote(4, 55), playNote(0, 55), playNote(4, 55);
  delay(115);
  playNote(4, 55), playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(114);
  playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(117);
  playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(113);
  playNote(0, 55), playNote(4, 55), playNote(0, 55), playNote(4, 55);
  delay(115);
  playNote(4, 55), playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(114);
  playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(114);
  playNote(0, 55), playNote(4, 55), playNote(0, 55);
  delay(115);
  playNote(0, 55), playNote(4, 55);
  delay(222);
  playNote(3, 79);
  delay(237);
  playNote(1, 67), playNote(2, 62), playNote(5, 43), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(4, 53), playNote(0, 53);
  delay(229);
  playNote(2, 60), playNote(4, 53), playNote(5, 41), playNote(1, 65), playNote(0, 53), playNote(1, 65), playNote(0, 57), playNote(2, 60), playNote(4, 57), playNote(5, 41);
  delay(229);
  playNote(4, 57), playNote(1, 65), playNote(0, 57), playNote(2, 60), playNote(5, 41), playNote(4, 60), playNote(1, 65), playNote(2, 60), playNote(0, 60), playNote(5, 41);
  delay(230);
  playNote(4, 60), playNote(1, 65), playNote(5, 41), playNote(0, 60), playNote(2, 60), playNote(0, 62), playNote(5, 41), playNote(1, 65), playNote(4, 62), playNote(2, 60);
  delay(229);
  playNote(2, 60), playNote(1, 65), playNote(0, 62), playNote(5, 41), playNote(4, 62), playNote(5, 41), playNote(1, 65), playNote(4, 67), playNote(0, 67), playNote(2, 60);
  delay(230);
  playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65);
  delay(230);
  playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(2, 60), playNote(5, 41);
  delay(230);
  playNote(0, 67), playNote(1, 65), playNote(4, 67), playNote(5, 41), playNote(2, 60), playNote(5, 41), playNote(2, 60), playNote(4, 65), playNote(1, 65), playNote(0, 65);
  delay(229);
  playNote(4, 65), playNote(5, 41), playNote(2, 60), playNote(0, 65), playNote(1, 65), playNote(5, 38), playNote(0, 62), playNote(4, 62), playNote(1, 62), playNote(2, 57);
  delay(221);
  playNote(3, 79);
  delay(8);
  playNote(2, 57), playNote(1, 62), playNote(5, 38), playNote(1, 62), playNote(5, 38), playNote(2, 57);
  delay(222);
  playNote(3, 77);
  delay(7);
  playNote(2, 57), playNote(5, 38), playNote(1, 62), playNote(5, 38), playNote(2, 57), playNote(1, 62);
  delay(221);
  playNote(3, 72);
  delay(8);
  playNote(1, 62), playNote(5, 38), playNote(2, 57), playNote(5, 38), playNote(1, 62), playNote(2, 57);
  delay(222);
  playNote(3, 74);
  delay(7);
  playNote(1, 62), playNote(2, 57), playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(5, 38);
  delay(222);
  playNote(3, 74);
  delay(6);
  playNote(0, 62), playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(4, 62), playNote(1, 62), playNote(2, 57), playNote(5, 38);
  delay(106);
  playNote(3, 74);
  delay(114);
  playNote(3, 72);
  delay(7);
  playNote(1, 62), playNote(5, 38), playNote(2, 57), playNote(0, 60), playNote(1, 62), playNote(4, 60), playNote(5, 38);
  delay(221);
  playNote(3, 74);
  delay(7);
  playNote(4, 60), playNote(1, 62), playNote(2, 57), playNote(5, 38), playNote(0, 62), playNote(1, 62), playNote(4, 62), playNote(5, 38), playNote(2, 57);
  delay(221);
  playNote(3, 74);
  delay(8);
  playNote(5, 38), playNote(4, 62), playNote(0, 62), playNote(2, 57), playNote(1, 62), playNote(4, 53), playNote(5, 41), playNote(2, 60), playNote(0, 53), playNote(1, 65);
  delay(229);
  playNote(0, 53), playNote(4, 53);
  delay(1);
  playNote(5, 41);
  delay(1);
  playNote(2, 60), playNote(1, 65);
  delay(1);
  playNote(5, 41), playNote(4, 57), playNote(0, 57), playNote(1, 65), playNote(2, 60);
  delay(222);
  playNote(0, 57), playNote(5, 41), playNote(4, 57), playNote(2, 60), playNote(1, 65);
  delay(1);
  playNote(2, 60), playNote(4, 60), playNote(1, 65), playNote(0, 60), playNote(5, 41);
  delay(227);
  playNote(1, 65), playNote(2, 60), playNote(4, 60), playNote(5, 41), playNote(0, 60), playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(4, 62), playNote(0, 62);
  delay(229);
  playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(0, 62), playNote(4, 65), playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(0, 65);
  delay(228);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(5, 41);
  delay(230);
  playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65);
  delay(230);
  playNote(2, 60), playNote(4, 65), playNote(0, 65), playNote(1, 65), playNote(5, 41), playNote(0, 67), playNote(4, 67), playNote(1, 65), playNote(2, 60);
  delay(228);
  playNote(0, 67), playNote(4, 67), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(0, 62), playNote(5, 38), playNote(4, 62), playNote(1, 62), playNote(2, 57);
  delay(221);
  playNote(3, 79);
  delay(6);
  playNote(5, 38), playNote(2, 57), playNote(1, 62), playNote(2, 57), playNote(5, 38);
  delay(223);
  playNote(3, 77);
  delay(7);
  playNote(5, 38), playNote(2, 57), playNote(1, 62), playNote(2, 57), playNote(1, 62), playNote(5, 38);
  delay(222);
  playNote(3, 72);
  delay(7);
  playNote(1, 62), playNote(5, 38), playNote(2, 57), playNote(1, 62), playNote(2, 57), playNote(5, 38);
  delay(222);
  playNote(3, 74);
  delay(7);
  playNote(5, 38), playNote(2, 57), playNote(1, 62), playNote(5, 38), playNote(1, 62), playNote(2, 57);
  delay(222);
  playNote(3, 74);
  delay(7);
  playNote(2, 57), playNote(5, 38), playNote(4, 62), playNote(0, 62), playNote(1, 62), playNote(5, 38), playNote(2, 57);
  delay(105);
  playNote(3, 74);
  delay(115);
  playNote(3, 72);
  delay(7);
  playNote(2, 57), playNote(1, 62), playNote(5, 38), playNote(4, 62), playNote(0, 62), playNote(1, 62), playNote(2, 57);
  delay(221);
  playNote(3, 74);
  delay(7);
  playNote(2, 57), playNote(5, 38), playNote(1, 62), playNote(2, 57), playNote(5, 38);
  delay(222);
  playNote(3, 82);
  delay(7);
  playNote(2, 57), playNote(5, 38), playNote(1, 62), playNote(0, 62), playNote(4, 62), playNote(1, 67), playNote(0, 67), playNote(2, 62), playNote(5, 43), playNote(4, 67);
  delay(221);
  playNote(3, 82);
  delay(8);
  playNote(0, 67), playNote(1, 67), playNote(4, 67), playNote(5, 43), playNote(2, 62), playNote(1, 67), playNote(2, 62), playNote(5, 43), playNote(4, 70), playNote(0, 70);
  delay(227);
  playNote(1, 67), playNote(4, 70), playNote(2, 62), playNote(5, 43), playNote(0, 65), playNote(1, 67), playNote(5, 43), playNote(2, 62), playNote(4, 65);
  delay(228);
  playNote(1, 67), playNote(0, 65), playNote(4, 65), playNote(2, 62), playNote(5, 41), playNote(2, 60), playNote(4, 67), playNote(0, 67), playNote(1, 65);
  delay(230);
  playNote(1, 65), playNote(4, 67), playNote(2, 60), playNote(5, 41), playNote(0, 67), playNote(5, 41), playNote(0, 62), playNote(1, 65), playNote(2, 60), playNote(4, 62);
  delay(229);
  playNote(4, 62), playNote(1, 65), playNote(5, 41), playNote(0, 62), playNote(2, 60), playNote(5, 41), playNote(4, 65), playNote(0, 65), playNote(2, 60), playNote(1, 65);
  delay(229);
  playNote(1, 65), playNote(0, 65), playNote(5, 41), playNote(4, 65), playNote(2, 60), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(0, 60), playNote(4, 60);
  delay(231);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(4, 60), playNote(0, 60), playNote(1, 65), playNote(4, 62), playNote(2, 60), playNote(5, 41), playNote(0, 62);
  delay(114);
  playNote(0, 62), playNote(4, 62);
  delay(114);
  playNote(2, 60), playNote(5, 41), playNote(1, 63), playNote(4, 58), playNote(2, 58), playNote(5, 39), playNote(0, 58);
  delay(229);
  playNote(1, 63), playNote(0, 58), playNote(4, 58), playNote(2, 58), playNote(5, 39), playNote(0, 60), playNote(4, 60), playNote(1, 63), playNote(5, 39), playNote(2, 58);
  delay(230);
  playNote(2, 58), playNote(0, 60), playNote(4, 60), playNote(1, 63), playNote(5, 39), playNote(0, 62), playNote(1, 63), playNote(5, 39), playNote(4, 62), playNote(2, 58);
  delay(229);
  playNote(5, 39), playNote(0, 62), playNote(2, 58), playNote(4, 62), playNote(1, 63), playNote(2, 60), playNote(5, 41), playNote(0, 65), playNote(4, 65), playNote(1, 65);
  delay(229);
  playNote(0, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(4, 65), playNote(2, 60), playNote(5, 41), playNote(0, 60), playNote(1, 65), playNote(4, 60);
  delay(231);
  playNote(4, 60), playNote(0, 60), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(0, 62), playNote(1, 65), playNote(4, 62);
  delay(229);
  playNote(4, 62), playNote(0, 62), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(5, 41), playNote(0, 65), playNote(4, 65), playNote(2, 60);
  delay(228);
  playNote(5, 41), playNote(0, 65), playNote(1, 65), playNote(2, 60), playNote(4, 65), playNote(0, 62), playNote(4, 62), playNote(5, 41), playNote(1, 65), playNote(2, 60);
  delay(228);
  playNote(2, 60), playNote(5, 41), playNote(0, 62), playNote(4, 62), playNote(1, 65), playNote(0, 67), playNote(5, 43), playNote(1, 67), playNote(2, 62), playNote(4, 67);
  delay(228);
  playNote(4, 67), playNote(5, 43), playNote(0, 67), playNote(2, 62), playNote(1, 67), playNote(5, 43), playNote(0, 70), playNote(1, 67), playNote(2, 62), playNote(4, 70);
  delay(230);
  playNote(4, 70), playNote(5, 43), playNote(0, 70), playNote(2, 62), playNote(1, 67), playNote(5, 43), playNote(2, 62), playNote(4, 65), playNote(1, 67), playNote(0, 65);
  delay(227);
  playNote(2, 62), playNote(5, 43), playNote(0, 65), playNote(4, 65), playNote(1, 67), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(0, 67), playNote(4, 67);
  delay(227);
  playNote(4, 67), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(0, 62), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(4, 62);
  delay(229);
  playNote(4, 62), playNote(2, 60), playNote(0, 62), playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(0, 65), playNote(5, 41), playNote(4, 65);
  delay(229);
  playNote(4, 65), playNote(0, 65), playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(4, 60);
  playNote(1, 65), playNote(0, 60), playNote(2, 60);
  delay(229);
  playNote(2, 60), playNote(4, 60), playNote(5, 41), playNote(0, 60), playNote(1, 65), playNote(0, 62), playNote(5, 41);
  playNote(1, 65), playNote(4, 62), playNote(2, 60);
  delay(113);
  playNote(4, 62), playNote(0, 62);
  delay(114);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(2, 58), playNote(5, 39), playNote(4, 58);
  playNote(0, 58), playNote(1, 63);
  delay(229);
  playNote(4, 58), playNote(2, 58), playNote(1, 63), playNote(5, 39);
  playNote(0, 58), playNote(2, 58), playNote(5, 39), playNote(4, 60), playNote(1, 63), playNote(0, 60);
  delay(229);
  playNote(0, 60), playNote(4, 60), playNote(2, 58), playNote(5, 39), playNote(1, 63), playNote(5, 39);
  playNote(1, 63), playNote(0, 62), playNote(2, 58), playNote(4, 62);
  delay(229);
  playNote(0, 62), playNote(5, 39), playNote(4, 62), playNote(2, 58), playNote(1, 65), playNote(5, 41), playNote(4, 65);
  playNote(0, 65), playNote(2, 60);
  delay(228);
  playNote(2, 60), playNote(0, 65), playNote(1, 65), playNote(5, 41), playNote(4, 62);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(0, 62);
  delay(229);
  playNote(0, 62), playNote(2, 60), playNote(4, 62), playNote(1, 65), playNote(5, 41), playNote(4, 65);
  playNote(1, 65), playNote(0, 65), playNote(2, 60);
  delay(229);
  playNote(2, 60), playNote(5, 41), playNote(4, 65), playNote(1, 65), playNote(0, 67), playNote(5, 41);
  playNote(1, 65), playNote(2, 60), playNote(4, 67);
  delay(228);
  playNote(5, 41), playNote(1, 65), playNote(4, 67), playNote(0, 67), playNote(2, 60);
  playNote(1, 65), playNote(5, 41), playNote(4, 65), playNote(0, 65), playNote(2, 60);
  delay(228);
  playNote(2, 60), playNote(4, 65), playNote(1, 65), playNote(5, 41), playNote(0, 65), playNote(5, 39);
  playNote(1, 63), playNote(4, 63), playNote(2, 58), playNote(0, 63);
  delay(229);
  playNote(1, 63), playNote(5, 39), playNote(2, 58), playNote(1, 63), playNote(2, 58), playNote(5, 39);
  delay(228);
  playNote(5, 39), playNote(1, 63), playNote(2, 58), playNote(1, 63), playNote(2, 58), playNote(5, 39);
  delay(229);
  playNote(4, 63), playNote(1, 63), playNote(5, 39), playNote(2, 58), playNote(0, 63);
  playNote(1, 63), playNote(5, 39), playNote(0, 63), playNote(2, 58), playNote(4, 63);
  delay(229);
  playNote(2, 58), playNote(1, 63), playNote(5, 39), playNote(2, 58), playNote(1, 63);
  delay(229);
  playNote(1, 63), playNote(5, 39), playNote(2, 58), playNote(1, 63), playNote(5, 39), playNote(2, 58);
  delay(231);
  playNote(2, 58), playNote(1, 63), playNote(4, 63), playNote(0, 63), playNote(5, 39), playNote(1, 63);
  playNote(4, 65), playNote(2, 58), playNote(0, 65), playNote(5, 39);
  delay(229);
  playNote(5, 39), playNote(1, 63), playNote(2, 58), playNote(5, 39), playNote(1, 63);
  delay(230);
  playNote(2, 58), playNote(0, 65), playNote(4, 65), playNote(1, 63), playNote(5, 39), playNote(4, 67);
  playNote(2, 60), playNote(1, 65), playNote(0, 67), playNote(5, 41);
  delay(227);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(5, 41);
  delay(230);
  playNote(5, 41), playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(2, 60);
  delay(230);
  playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(4, 67), playNote(0, 67), playNote(5, 41);
  playNote(0, 69), playNote(4, 69), playNote(1, 65), playNote(2, 60);
  delay(229);
  playNote(2, 60), playNote(5, 41);
  delay(1);
  playNote(1, 65), playNote(5, 41), playNote(1, 65), playNote(2, 60);
  delay(227);
  playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65);
  delay(230);
  playNote(4, 69), playNote(5, 41), playNote(0, 69), playNote(1, 65), playNote(2, 60), playNote(5, 41);
  playNote(2, 60), playNote(4, 70), playNote(1, 65), playNote(0, 70);
  delay(229);
  playNote(1, 65), playNote(2, 60), playNote(5, 41), playNote(1, 65), playNote(2, 60);
  delay(230);
  playNote(5, 41), playNote(4, 70), playNote(2, 60), playNote(1, 65), playNote(0, 70);
  playNote(1, 65), playNote(4, 72), playNote(2, 60), playNote(5, 41), playNote(0, 72);
  delay(229);
  playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(5, 41);
  delay(229);
  playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(5, 41);
  delay(230);
  playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(2, 60);
  delay(229);
  playNote(2, 60), playNote(1, 65), playNote(5, 41), playNote(2, 60), playNote(5, 41), playNote(1, 65);
  PSG.mute();
}
