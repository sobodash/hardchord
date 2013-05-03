#!/usr/bin/php5 -q
<?php

$version = "0.1.2";

$pulses_per_quarter = 0;
$title = "";
$tempo = 0;
$midi_map = array();
$song_end = 0;
$fix_tempo =  0;

$last_notes = array(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);

function parse_midi($line) {
  for($i=0; $i<count($line); $i++)
    $line[$i] = trim($line[$i]);
  
  global $pulses_per_quarter;
  global $title;
  global $tempo;
  global $midi_map;
  global $song_end;

  global $last_notes;
  
  if($line[0] == 0 && @$line[2] == "Header") {
    $pulses_per_quarter = (int)$line[5];
  }
  
  if($line[0] == 1) {
    if($line[2] == "Title_t") $title = $line[3];
    else if($line[2] == "Tempo") $tempo = (int)round(60000000/$line[3]);    
  }

  if(@$line[2] == "End_track") {
    if($line[1] > $song_end) $song_end = $line[1];
  }
  
  else {
    if(@$line[2] == "Note_on_c") {
      $channel = $line[3];
      $note = $line[4];
      $velocity = $line[5];
      $time = $line[1];
      if(!isset($midi_map[$time]))
        $midi_map[$time] = array(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
      if($velocity == 0 && $last_notes[$channel] == $note)
        $midi_map[$time][$channel] = 255;
      else if(($midi_map[$time][$channel] == 255) || ($midi_map[$time][$channel] < $note)) {
        $midi_map[$time][$channel] = (int)$note;
        $last_notes[$channel] = (int)$note;
      }
    }
    else if(@$line[2] == "Note_off_c") {
      $channel = $line[3];
      $note = $line[4];
      $velocity = $line[5];
      $time = $line[1];
      // Check to make sure we are turning of the current note:
      if($last_notes[$channel] == $note) {
        if(!isset($midi_map[$time]))
          $midi_map[$time] = array(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
        $midi_map[$time][$channel] = 255;
      }
      // Otherwise skip it. It's a out of order.
    }
    //else if(@isset($line[2])) print "Got " . $line[2] . "\n";
  }
}

function ms_to_beats($value) {
  global $pulses_per_quarter;
  global $fix_tempo;
  $cleantime = 240000/($fix_tempo*$value);

  if($cleantime > 0.564 && $cleantime < 0.688) // Was 594
    print(" YMZ.beat( 1, DOUBLEDOT);");
  else if($cleantime > 0.688 && $cleantime < 0.875)
    print(" YMZ.beat( 1, DOT);");
  else if($cleantime > 0.750 && $cleantime < 1.062)
    print(" YMZ.beat( 1);");
  
  else if($cleantime > 1.062 && $cleantime < 1.188)
    print(" YMZ.beat( 2, TRIPLEDOT);");
  else if($cleantime > 1.188 && $cleantime < 1.375)
    print(" YMZ.beat( 2, DOUBLEDOT);");
  else if($cleantime > 1.375 && $cleantime < 1.750)
    print(" YMZ.beat( 2, DOT);");
  else if($cleantime > 1.750 && $cleantime < 2.125)
    print(" YMZ.beat( 2);");
  
  else if($cleantime > 2.125 && $cleantime < 2.375)
    print(" YMZ.beat( 4, TRIPLEDOT);");
  else if($cleantime > 2.375 && $cleantime < 2.750)
    print(" YMZ.beat( 4, DOUBLEDOT);");
  else if($cleantime > 2.750 && $cleantime < 3.500)
    print(" YMZ.beat( 4, DOT);");    
  else if($cleantime > 3.500 && $cleantime < 4.250)
    print(" YMZ.beat( 4);");
  
  else if($cleantime > 4.250 && $cleantime < 4.750)
    print(" YMZ.beat( 8, TRIPLEDOT);");
  else if($cleantime > 4.750 && $cleantime < 5.500)
    print(" YMZ.beat( 8, DOUBLEDOT);");
  else if($cleantime > 5.500 && $cleantime < 7.000)
    print(" YMZ.beat( 8, DOT);");
  else if($cleantime > 7.000 && $cleantime < 8.500)
    print(" YMZ.beat( 8);");
  
  else if($cleantime > 8.500 && $cleantime < 9.500)
    print(" YMZ.beat(16, TRIPLEDOT);");
  else if($cleantime > 9.500 && $cleantime < 11.00)
    print(" YMZ.beat(16, DOUBLEDOT);");
  else if($cleantime > 11.00 && $cleantime < 14.00)
    print(" YMZ.beat(16, DOT);");
  else if($cleantime > 14.00 && $cleantime < 17.00)
    print(" YMZ.beat(16);");
  
  else if($cleantime > 17.00 && $cleantime < 19.00)
    print(" YMZ.beat(32, TRIPLEDOT);");
  else if($cleantime > 19.00 && $cleantime < 22.00)
    print(" YMZ.beat(32, DOUBLEDOT);");
  else if($cleantime > 22.00 && $cleantime < 28.00)
    print(" YMZ.beat(32, DOT);");
  else if($cleantime > 28.00 && $cleantime < 34.00)
    print(" YMZ.beat(32);");
  
  else if($cleantime > 34.00 && $cleantime < 38.00)
    print(" YMZ.beat(64, TRIPLEDOT);");
  else if($cleantime > 38.00 && $cleantime < 44.00)
    print(" YMZ.beat(64, DOUBLEDOT);");
  else if($cleantime > 44.00 && $cleantime < 56.00)
    print(" YMZ.beat(64, DOT);");
  else if($cleantime > 56.00 && $cleantime < 68.00)
    print(" YMZ.beat(64);");
  
  else if($cleantime > 68.00 && $cleantime < 76.00)
    print(" YMZ.beat(128, TRIPLEDOT);");
  else if($cleantime > 76.00 && $cleantime < 88.00)
    print(" YMZ.beat(128, DOUBLEDOT);");
  else if($cleantime > 88.00 && $cleantime < 112.0)
    print(" YMZ.beat(128, DOT);");
  else if($cleantime > 112.0 && $cleantime < 136.0)
    print(" YMZ.beat(128);");
  
  else if($cleantime > 136.0 && $cleantime < 152.0)
    print(" YMZ.beat(255, TRIPLEDOT);");
  else if($cleantime > 152.0 && $cleantime < 176.0)
    print(" YMZ.beat(255, DOUBLEDOT);");
  else if($cleantime > 176.0 && $cleantime < 224.0)
    print(" YMZ.beat(255, DOT);");
  else if($cleantime > 224.0 && $cleantime < 272.0)
    print(" YMZ.beat(255);");
  else
    print(" delay($value);");
}

$options = getopt("ht:");

if(isset($options["h"]) || $argc < 2) {
?>
Hardchord MIDI Converter <?php print("$version\n"); ?>

Usage:
  hcmidi [options] filename

  Use ">" to redirect output to Arduino .ino sketch

Options:
  -t#    - Adjust tempo to # beats per minute. This option is used to "fix"
           MIDI files that use an unusually low tempo, causing hcmidi to be
           unable to resolve their notes' beat durations.
  -h     - Display this help message
<?
  die();
}
if(isset($options["t"])) {
  if(is_numeric($options["t"]))
    $fix_tempo = $options["t"];
  else {
    print("Hardchord MIDI Converter $version\n\n");
    print("Error: Tempo is not an integer\n");
    die();
  }
}

if(!file_exists($argv[$argc-1])) {
  print("Hardchord MIDI Converter $version\n\n");
  print("Error: Unable to open ".$argv[$argc-1]." for input\n");
  die();
}

$fd = fopen($argv[$argc-1], "r");
while(!feof($fd)) {
  $line = fgetcsv($fd, 1000);
  parse_midi($line);
}

if($title == "")
  $title = basename($argv[$argc-1]);

$lasttime = 0;
$midi = array();
$channels = array();
$last_note = 0;

for($i=0; $i<600000; $i++) {
  if(isset($midi_map[$i])) {
    $sent_a_note = false;
    for($k=0; $k<16; $k++){
      if($midi_map[$i][$k] < 128 && $midi_map[$i][$k] > 0)
        $sent_a_note = true;
    }
    if($sent_a_note == false) {
      if(isset($channels)) {
        for($k=0; $k<16; $k++)
          if($channels[$k] != 255)
            $channels[$k] = $midi_map[$i][$k];
      }
      else {
        $channels = $midi_map[$i];
        $last_note = $i;
      }
    }
    else {
      if(isset($channels)) {
        for($k=0; $k<16; $k++) {
          if(@$channels[$k] == 255 && @(@$midi_map[$i][$k] == 0 || @$midi_map[$i][$k] > 127))
            $midi_map[$i][$k] = 255;
        }
        $midi[$i] = $midi_map[$i];
        unset($channels);
      }
      else
        $midi[$i] = $midi_map[$i];
    }
  }
}
$midi[$song_end] = array(255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255);
$midi_map = $midi;

if($fix_tempo == 0)
  $fix_tempo = $tempo;

?>/**
 * Hardchord MIDI Converter (hcmidi.php)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version <?php print("$version\n"); ?>
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

#include <hcYmzShield.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Generated by Hardchord MIDI Converter!");
}


void loop() {
<?

print("  // $title\n");
print("  YMZ.setVolume(8);\n");
print("  YMZ.setTempo($fix_tempo);\n ");

$firstline=TRUE;
foreach($midi_map as $key => $value) {
  $cyclelength = $key - $lasttime;
  $lasttime = $key;
  if($cyclelength != 0) {
    $milliseconds = round(($cyclelength * ((60000000/$tempo)/$pulses_per_quarter))/1000);
    if(@$DO_EXACT == false) {
      $skip = ms_to_beats($milliseconds);
      print("\n");
    }
    else
      print(" delay($milliseconds);\n");
  }
  print("  YMZ.setChannels(");
  for($i=0; $i<6; $i++) {
    if($value[$i]==0 && $firstline===TRUE) print(" OFF");
    elseif($value[$i]==0) print("SKIP");
    else if($value[$i]==255) print(" OFF");
    else {
      print(str_pad($value[$i], 4, " ", STR_PAD_LEFT));
    }
    if($i<5) print(", ");
  }
  print(");");
  $firstline=FALSE;
}

print(" YMZ.mute();\n");

?>
  delay(3000); // Repeat every 3 seconds
}
