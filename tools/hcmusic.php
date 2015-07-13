#!/usr/bin/php5 -q
/**
 * Hardchord Music Packer (hcmusic.php)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1.0
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 */

<?php

define("SKIP", 128);
define("OFF",  255);

define("DOT", 12);
define("DOUBLEDOT", 14);
define("TRIPLEDOT", 15);

$master = array(ord("H"), ord("C"));
$master[] = 1;

function setVolume($channel, $volume = 255) {
  global $master;
  if($volume == 255) { $master[] = 0x50; $master[] = $channel; }
  else { $master[] = 0x51; $master[] = $channel; $master[] = $volume; }
}

function setTempo($speed) {
  global $master;
  $master[] = 0x52; $master[] = $speed;
}

function setArticulation($artic) {
  global $master;
  $master[] = 0x53; $master[] = $artic;
}

function mute() {
  global $master;
  $master[] = 0x60;
}

function setTone($channel, $bool) {
  global $master;
  $master[] = 0x61; $master[] = $channel; $master[] = $bool;
}

function setNoise($channel, $bool) {
  global $master;
  $master[] = 0x62; $master[] = $channel; $master[] = $bool;
}

function setEnvelope($channel, $bool) {
  global $master;
  $master[] = 0x63; $master[] = $channel; $master[] = $bool;
}

function startEnvelope($shape) {
  global $master;
  $master[] = 0x70; $master[] = $shape;
}

function restartEnvelope() {
  global $master;
  $master[] = 0x71;
}

function setEnvelopePeriod($period) {
  global $master;
  $master[] = 0x72; $master[] = ($period & 0xff00) >> 8; $master[] = $period & 0xff;
}

function setTonePeriod($channel, $period) {
  global $master;
  $master[] = 0x80; $master[] = $channel; $master[] = ($period & 0xff00) >> 8; $master[] = $period & 0xff;
}

function setToneMidi($channel, $note) {
  global $master;
  $master[] = 0x81; $master[] = $channel; $master[] = $note;
}

function setNote($channel, $note) {
  global $master;
  $master[] = 0x82; $master[] = $channel; $master[] = $note;
}

function setChannels($channel0, $channel1=255, $channel2=255, $channel3=255, $channel4=255, $channel5=255) {
  global $master;
  $master[] = 0x83; $master[] = $channel0; $master[] = $channel1; $master[] = $channel2; $master[] = $channel3; $master[] = $channel4; $master[] = $channel5;
}

function setNoisePeriod($period) {
  global $master;
  $master[] = 0x90; $master[] = $period;
}

function beat($duration, $dot = 8) {
  global $master;
  $master[] = 0xa0; $master[] = $duration; $master[] = $dot;
}

function delay($length) {
  global $master;
  $master[] = 0xa1; $master[] = ($length & 0xff00) >> 8; $master[] = $length & 0xff;
}


$title = basename($argv[$argc-1]);
if(strpos($title, "."))
  $title = substr($title, 0, strpos($title, "."));
$code = "<?php\n" . str_replace("YMZ.", "", file_get_contents($argv[$argc-1])) . "\n?>";
file_put_contents("temp0000.php", $code);
include("temp0000.php");

$master[] = 0;

print "static const uint8_t {$title}[" . count($master) . "] PROGMEM = {\n  ";
for($i=0; $i<count($master); $i++) {
  print "0x" . str_pad(dechex($master[$i]), 2, "0", STR_PAD_LEFT);
  if(count($master)-1 != $i) print ", ";
  if(($i + 1) % 12 == 0 && $i != 0) print "\n  ";
}
print "\n};\n";

unlink("temp0000.php");

?>