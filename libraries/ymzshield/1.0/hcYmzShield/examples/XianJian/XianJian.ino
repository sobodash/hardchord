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

  PSG.setVolume(0, 8);
  PSG.setVolume(1, 10);
  PSG.setVolume(2, 8);
  PSG.setVolume(3, 10);
  PSG.setVolume(4, 9);
  PSG.setVolume(5, 10);

  PSG.setEnvelopePeriod(0x50);
  PSG.setNoisePeriod(0xf);
  PSG.setEnvelope(5);
  PSG.startEnvelope(CONT | ATT | HOLD);

  PSG.setTempo(130);
  demoXianJian();
}


/**
 * demoXianJian()
 *
 * Plays a song from the old Chinese DOS game Xian Jian Qi Xia Zhuan.
 */
void demoXianJian() {
  PSG.setChannels(64, 64, 59, 64, 40, 76); PSG.beat(8); // 239
  PSG.setChannels(67, SKIP, SKIP, 67, SKIP, 79); PSG.beat(8); // 479
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(8); // 720
  PSG.setChannels(64, 64, 59, 64, 40, 76); PSG.beat(8); // 960
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(2); // 1920
  PSG.setChannels(62, 64, 59, 62, 40, 74); PSG.beat(8); // 2159
  PSG.setChannels(64, SKIP, SKIP, 64, SKIP, 76); PSG.beat(8); // 2399
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(8); // 2640
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 2880
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(2); // 3840
  PSG.setChannels(55, 60, 55, 55, 36, 67); PSG.beat(8); // 4080
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(8); // 4319
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(8); // 4559
  PSG.setChannels(59, 62, 57, 59, 38, 71); PSG.beat(8); // 4800
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(8); // 5040
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 5159
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 5279
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(8); // 5519
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(8); // 5760
  PSG.setChannels(59, 64, 59, 59, 40, 71); PSG.beat(16); // 5879
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6000
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6119
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6240
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6360
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6479
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6600
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6719
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6839
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 6960
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 7079
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 7200
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 7320
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); delay(345); // 7679
  PSG.setChannels(64, 64, 59, 64, 40, 76); PSG.beat(8); // 7920
  PSG.setChannels(67, SKIP, SKIP, 67, SKIP, 79); PSG.beat(8); // 8160
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(8); // 8399
  PSG.setChannels(64, 64, 59, 64, 40, 76); PSG.beat(8); // 8639
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 8760
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 8880
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 8999
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(4, DOT); // 9599
  PSG.setChannels(62, 64, 59, 62, 40, 74); PSG.beat(8); // 9839
  PSG.setChannels(64, SKIP, SKIP, 64, SKIP, 76); PSG.beat(8); // 10080
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(8); // 10320
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 10559
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(16); // 10680
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(16); // 10799
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(16); // 10920
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(16); // 11040
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(16); // 11159
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); delay(346); // 11519
  PSG.setChannels(55, 60, 55, 55, 36, 67); PSG.beat(8); // 11759
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(8); // 12000
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(8); // 12240
  PSG.setChannels(59, 62, 57, 59, 38, 71); PSG.beat(8); // 12480
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(8); // 12719
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 12840
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(16); // 12959
  PSG.setChannels(57, SKIP, SKIP, 57, SKIP, 69); PSG.beat(8); // 13200
  PSG.setChannels(59, SKIP, SKIP, 59, SKIP, 71); PSG.beat(8); // 13440
  PSG.setChannels(52, 64, 59, 52, 40, 64); PSG.beat(16); // 13560
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 13679
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 13800
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 13919
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14040
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14160
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14279
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14400
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14519
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14639
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(16); // 14760
  PSG.setChannels(52, SKIP, SKIP, 52, SKIP, 64); PSG.beat(4, DOT); // 15360
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 15600
  PSG.setChannels(70, SKIP, SKIP, 70, SKIP, 82); PSG.beat(8); // 15839
  PSG.setChannels(65, SKIP, SKIP, 65, SKIP, 77); PSG.beat(8); // 16079
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 16320
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 16439
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 16560
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 16680
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 16799
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 16920
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 17039
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 17160
  PSG.setChannels(62, OFF, OFF, 62, OFF, 74); PSG.beat(16); // 17280
  PSG.setChannels(65, 67, 62, 65, 43, 77); PSG.beat(8); // 17520
  PSG.setChannels(67, SKIP, SKIP, 67, SKIP, 79); PSG.beat(8); // 17759
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(8); // 17999
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 18240
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 18359
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 18480
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 18599
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 18720
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 18840
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); delay(345); // 19199
  PSG.setChannels(58, 63, 58, 58, 39, 70); PSG.beat(8); // 19440
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(8); // 19680
  PSG.setChannels(58, SKIP, SKIP, 58, SKIP, 70); PSG.beat(8); // 19919
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 20159
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(8); // 20400
  PSG.setChannels(65, SKIP, SKIP, 65, SKIP, 77); PSG.beat(16); // 20519
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 20640
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(8); // 20879
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(8); // 21119
  PSG.setChannels(62, 67, 62, 62, 43, 74); PSG.beat(16); // 21240
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21360
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21479
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21600
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21719
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21840
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 21960
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22079
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22200
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22319
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22439
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22560
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 22679
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); delay(346); // 23039
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 23279
  PSG.setChannels(70, SKIP, SKIP, 70, SKIP, 82); PSG.beat(8); // 23520
  PSG.setChannels(65, SKIP, SKIP, 65, SKIP, 77); PSG.beat(8); // 23760
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 23999
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24120
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24239
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24360
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24480
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24599
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24720
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 24839
  PSG.setChannels(62, OFF, OFF, 62, OFF, 74); PSG.beat(16); // 24960
  PSG.setChannels(65, 67, 62, 65, 43, 77); PSG.beat(8); // 25199
  PSG.setChannels(67, SKIP, SKIP, 67, SKIP, 79); PSG.beat(8); // 25439
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(8); // 25680
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 25920
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 26040
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 26159
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 26280
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 26399
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(16); // 26520
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); delay(346); // 26880
  PSG.setChannels(58, 63, 58, 58, 39, 70); PSG.beat(8); // 27119
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(8); // 27359
  PSG.setChannels(58, SKIP, SKIP, 58, SKIP, 70); PSG.beat(8); // 27600
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 27840
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(8); // 28080
  PSG.setChannels(65, SKIP, SKIP, 65, SKIP, 77); PSG.beat(16); // 28200
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(16); // 28319
  PSG.setChannels(60, SKIP, SKIP, 60, SKIP, 72); PSG.beat(8); // 28559
  PSG.setChannels(62, SKIP, SKIP, 62, SKIP, 74); PSG.beat(8); // 28800
  PSG.setChannels(55, 67, 62, 55, 43, 67); PSG.beat(16); // 28919
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29040
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29160
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29279
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29400
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29519
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29640
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29760
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 29879
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 30000
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(16); // 30119
  PSG.setChannels(55, SKIP, SKIP, 55, SKIP, 67); PSG.beat(4, DOT); // 30720
  PSG.setChannels(53, 65, 60, 53, 41, 65); PSG.beat(8); // 30960
  PSG.setChannels(57, 65, 60, 57, 41, 69); PSG.beat(8); // 31200
  PSG.setChannels(60, 65, 60, 60, 41, 72); PSG.beat(8); // 31439
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 31679
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 31920
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 32160
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 32399
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 32639
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 32880
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 33120
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 33359
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 33599
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 33840
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 34080
  PSG.setChannels(60, 62, 57, 60, 38, 72); PSG.beat(8); // 34320
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 34559
  PSG.setChannels(53, 65, 60, 53, 41, 65); PSG.beat(8); // 34799
  PSG.setChannels(57, 65, 60, 57, 41, 69); PSG.beat(8); // 35040
  PSG.setChannels(60, 65, 60, 60, 41, 72); PSG.beat(8); // 35280
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 35519
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 35759
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 36000
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 36240
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 36479
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 36719
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 36960
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 37200
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 37440
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 37679
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 37919
  PSG.setChannels(62, 62, 57, 62, 38, 74); PSG.beat(8); // 38160
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 38400
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 38639
  PSG.setChannels(70, 67, 62, 70, 43, 82); PSG.beat(8); // 38879
  PSG.setChannels(65, 67, 62, 65, 43, 77); PSG.beat(8); // 39120
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 39360
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 39599
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 39839
  PSG.setChannels(60, 65, 60, 60, 41, 72); PSG.beat(8); // 40080
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 40320
  PSG.setChannels(58, 63, 58, 58, 39, 70); PSG.beat(8); // 40560
  PSG.setChannels(60, 63, 58, 60, 39, 72); PSG.beat(8); // 40799
  PSG.setChannels(62, 63, 58, 62, 39, 74); PSG.beat(8); // 41039
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 41280
  PSG.setChannels(60, 65, 60, 60, 41, 72); PSG.beat(8); // 41520
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 41759
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 41999
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 42240
  PSG.setChannels(67, 67, 62, 67, 43, 79); PSG.beat(8); // 42480
  PSG.setChannels(70, 67, 62, 70, 43, 82); PSG.beat(8); // 42719
  PSG.setChannels(65, 67, 62, 65, 43, 77); PSG.beat(8); // 42959
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 43200
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 43440
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 43680
  PSG.setChannels(60, 65, 60, 60, 41, 72); PSG.beat(8); // 43919
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 44159
  PSG.setChannels(58, 63, 58, 58, 39, 70); PSG.beat(8); // 44400
  PSG.setChannels(60, 63, 58, 60, 39, 72); PSG.beat(8); // 44640
  PSG.setChannels(62, 63, 58, 62, 39, 74); PSG.beat(8); // 44879
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 45119
  PSG.setChannels(62, 65, 60, 62, 41, 74); PSG.beat(8); // 45360
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 45600
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 45839
  PSG.setChannels(65, 65, 60, 65, 41, 77); PSG.beat(8); // 46079
  PSG.setChannels(63, 63, 58, 63, 39, 75); PSG.beat(8); // 46320
  PSG.setChannels(SKIP, 63, 58, SKIP, 39, SKIP); PSG.beat(8); // 46560
  PSG.setChannels(SKIP, 63, 58, SKIP, 39, SKIP); PSG.beat(8); // 46800
  PSG.setChannels(63, 63, 58, 63, 39, 75); PSG.beat(8); // 47039
  PSG.setChannels(SKIP, 63, 58, SKIP, 39, SKIP); PSG.beat(8); // 47279
  PSG.setChannels(SKIP, 63, 58, SKIP, 39, SKIP); PSG.beat(8); // 47520
  PSG.setChannels(65, 63, 58, 65, 39, 77); PSG.beat(8); // 47760
  PSG.setChannels(SKIP, 63, 58, SKIP, 39, SKIP); PSG.beat(8); // 47999
  PSG.setChannels(67, 65, 60, 67, 41, 79); PSG.beat(8); // 48239
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 48480
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 48720
  PSG.setChannels(69, 65, 60, 69, 41, 81); PSG.beat(8); // 48959
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 49199
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 49440
  PSG.setChannels(70, 65, 60, 70, 41, 82); PSG.beat(8); // 49680
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 49920
  PSG.setChannels(72, 65, 60, 72, 41, 84); PSG.beat(8); // 50159
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 50399
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 50640
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 50880
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 51119
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 51359
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 51600
  PSG.setChannels(SKIP, 65, 60, SKIP, 41, SKIP); PSG.beat(8); // 51840
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 52079
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 52319
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 52560
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 52800
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 53040
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8); // 53279
  PSG.setChannels(SKIP, 62, 57, SKIP, 38, SKIP); PSG.beat(8);
  PSG.mute();
}
