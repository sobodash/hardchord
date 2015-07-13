#!/usr/bin/php5 -q
<?php
/**
 * Hardchord VGM Converter 0.0.2 (hcmidi.php)
 * Derrick Sobodash <derrick@sobodash.com>
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

$version = "0.0.2";

// Variable name of the target shield
$target_shield = "YMZ";

// Set the clock speed of target board in Hz
$target_clock = 4000000;


define("MSBFIRST", 1);
define("LSBFIRST", 0);

// Store commands for output. We do this for pruning.
$commands = array();


// Ugly fix for double writes
$lastwrote = array();


/**
 * AY-3-8910 Register Map
 */
$ay8910reg0 = array(0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0);
$ay8910reg1 = $ay8910reg0;
$ay8910reg_mask = array(0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x1f, 0x3f, 0x1f, 0x1f, 0x1f, 0xff, 0xff, 0x0f, 0xf0);


/**
 * SN76489 Register Map
 */
$sn76489reg0 = array(array(0, 0), array(0, 0), array(0, 0), array(0, 0));
$sn76489reg1 = $sn76489reg0;
$sn76489reg_mask = array(array(0x0f, 0x03ff), array(0x0f, 0x03ff), array(0x0f, 0x03ff), array(0x0f, 0x0007));


// Default delays
$delays = array(0x62 => 735, 0x63 => 882);


/**
 * AY-3-8910 parser
 */
function ay8910($register, $data) {
  global $ay8910reg0, $ay8910reg1, $ay8910reg_mask, $target_shield, $target_clock, $header, $commands;
  $mixer0 = $ay8910reg0[0x7];
  $mixer1 = $ay8910reg1[0x7];
  
  if($register & 0x80)
    $ay8910reg1[$register & ~0x80] = $data & $ay8910reg_mask[$register & ~0x80];
  else
    $ay8910reg0[$register] = $data & $ay8910reg_mask[$register];

  // Translate the command into something Hardchord compatible
  $offset = ($register & 0x80 ? 3 : 0);
  $chip = ($register & 0x80 ? $ay8910reg1 : $ay8910reg0);
  $register &= ~0x80;
  switch($register) {
    case 0x00:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x1] << 8) + $chip[0x0]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (0 + $offset) . ", $reclock);";
      break;
    case 0x01:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x1] << 8) + $chip[0x0]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (0 + $offset) . ", $reclock);";
      break;
    case 0x02:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x3] << 8) + $chip[0x2]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (1 + $offset) . ", $reclock);";
      break;
    case 0x03:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x3] << 8) + $chip[0x2]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (1 + $offset) . ", $reclock);";
      break;
    case 0x04:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x5] << 8) + $chip[0x4]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (2 + $offset) . ", $reclock);";
      break;
    case 0x05:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * (($chip[0x5] << 8) + $chip[0x4]));
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setTonePeriod(" . (2 + $offset) . ", $reclock);";
      break;
    case 0x06:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (32 * $chip[0x6]);
        $reclock = round(($target_clock/32) / $reclock);
      }
      $commands[] = "$target_shield.setNoisePeriod($reclock);";
      break;
    case 0x07:
      if($ay8910reg0[0x7] == 63 && $ay8910reg1[0x7] == 63)
        $commands[] = "$target_shield.mute();";
      else {
        if($offset > 0)
          uglyMixer($mixer1, $ay8910reg1[0x7], 3);
        else
          uglyMixer($mixer0, $ay8910reg0[0x7], 0);
      }
      break;
    case 0x08:
      if($data > 0xf)
        $commands[] = "$target_shield.setEnvelope(" . (0 + $offset) . ", " . ($chip[0x8]) . ");";
      else
        $commands[] = "$target_shield.setVolume(" . (0 + $offset) . ", " . ($chip[0x8] & 0xf) . ");";
      break;
    case 0x09:
      if($data > 0xf)
        $commands[] = "$target_shield.setEnvelope(" . (1 + $offset) . ", " . ($chip[0x9]) . ");";
      else
        $commands[] = "$target_shield.setVolume(" . (1 + $offset) . ", " . ($chip[0x9] & 0xf) . ");";
      break;
    case 0x0a:
      if($data > 0xf)
        $commands[] = "$target_shield.setEnvelope(" . (2 + $offset) . ", " . ($chip[0x9]) . ");";
      else
        $commands[] = "$target_shield.setVolume(" . (2 + $offset) . ", " . ($chip[0x9] & 0xf) . ");";
      break;
    case 0x0c:
      $reclock = 0;
      if($data !== 0) {
        $reclock = $header["ay8910Clock"] / (512 * (($chip[0xc] << 8) + $chip[0xb]));
        $reclock = round(($target_clock/512) / $reclock);
      }
      $commands[] = "$target_shield.setEnvelopePeriod($reclock);";
      break;
    case 0x0d:
      $commands[] = "$target_shield.setEnvelope(" . ($chip[0xd]) . ");";
      break;

  }
}


function uglyMixer($oldState, $newState, $offset) {
  global $commands, $target_shield;
  
  // Channel 0/3
  if(($oldState & 1) == 0 && ($newState & 1) == 1)
    $commands[] = "$target_shield.setTone(" . (0 + $offset) . ", false);";
  else if(($oldState & 1) == 1 && ($newState & 1) == 0)
    $commands[] = "$target_shield.setTone(" . (0 + $offset) . ", true);";
  
  // Channel 1/4
  if((($oldState >> 1) & 1) == 0 && (($newState >> 1) & 1) == 1)
    $commands[] = "$target_shield.setTone(" . (1 + $offset) . ", false);";
  else if((($oldState >> 1) & 1) == 1 && (($newState >> 1) & 1) == 0)
    $commands[] = "$target_shield.setTone(" . (1 + $offset) . ", true);";
  
  // Channel 2/5
  if((($oldState >> 2) & 1) == 0 && (($newState >> 2) & 1) == 1)
    $commands[] = "$target_shield.setTone(" . (2 + $offset) . ", false);";
  else if((($oldState >> 2) & 1) == 1 && (($newState >> 2) & 1) == 0)
    $commands[] = "$target_shield.setTone(" . (2 + $offset) . ", true);";
  
  // Noise 0/3
  if((($oldState >> 3) & 1) == 0 && (($newState >> 3) & 1) == 1)
    $commands[] = "$target_shield.setNoise(" . (0 + $offset) . ", false);";
  else if((($oldState >> 3) & 1) == 1 && (($newState >> 3) & 1) == 0)
    $commands[] = "$target_shield.setNoise(" . (0 + $offset) . ", true);";
  
  // Noise 1/4
  if((($oldState >> 4) & 1) == 0 && (($newState >> 4) & 1) == 1)
    $commands[] = "$target_shield.setNoise(" . (1 + $offset) . ", false);";
  else if((($oldState >> 4) & 1) == 1 && (($newState >> 4) & 1) == 0)
    $commands[] = "$target_shield.setNoise(" . (1 + $offset) . ", true);";
  
  // Noise 2/5
  if((($oldState >> 5) & 1) == 0 && (($newState >> 5) & 1) == 1)
    $commands[] = "$target_shield.setNoise(" . (2 + $offset) . ", false);";
  else if((($oldState >> 5) & 1) == 1 && (($newState >> 5) & 1) == 0)
    $commands[] = "$target_shield.setNoise(" . (2 + $offset) . ", true);";
}


function delaySamples($length) {
  global $commands;
  $microseconds = round($length * (1/44100) * 1000000);
  if($microseconds > 1000)
    $commands[] = "delay(" . round($microseconds/1000) . ");";

  // Let's skip on these super-short delays for now. They are natural delays in
  // the Z80 write cycle rather than planed delays in the composition.

  //else
  //  print("  delayMicroseconds($microseconds);\n");
}


/**
 * readInt()
 * 
 * Reads an integer of any length from a file stream.
 */
function readInt($handler, $length, $endian = LSBFIRST) {
  $bytes = array();
  for($i = 0; $i < $length; $i++)
    $bytes[] = ord(fread($handler, 1));
  $value = 0;
  if($endian == LSBFIRST) {
    for($i = $length-1; $i >= 0; $i--)
      $value += $bytes[$i] << (8 * $i);
  }
  else {
    for($i = 0; $i < $length; $i++)
      $value += $bytes[$i] << (8 * $i);
  }
  return($value);
}


/**
 * readHeader()
 * 
 * Returns the header of a VGM file in an associative array.
 */
function readHeader($fd) {
  // Initialize header elements to 0
  $header = array(
    "eof" => 0,               "version" => 0,
    "sn76489Clock" => 0,      "ym2413Clock" => 0,
    "gd3Offset" => 0,         "totalSamples" => 0,
    "loopOffset" => 0,        "loopSamples" => 0,
    "rate" => 0,              "sn76489Feedback" => 0,
    "sn76489ShiftWidth" => 0, "sn76489Flags" => 0,
    "ym2612Clock" => 0,       "ym2151Clock" => 0,
    "vgmOffset" => 0,         "segaPcmClock" => 0,
    "segaPcmInterface" => 0,  "rf5c68Clock" => 0,
    "ym2203Clock" => 0,       "ym2608Clock" => 0,
    "ym2610Clock" => 0,       "ym3812Clock" => 0,
    "ym3526Clock" => 0,       "y8950Clock" => 0,
    "ymf262Clock" => 0,       "ymf278Clock" => 0,
    "ymf271Clock" => 0,       "ymz280Clock" => 0,
    "rf5c164Clock" => 0,      "pwmClock" => 0,
    "ay8910Clock" => 0,       "ay8910Type" => 0,
    "ay8910Flags1" => 0,      "ay8910Flags2" => 0,
    "ay8910Flags3" => 0,      "volumeModifier" => 0,
    "loopBase" => 0,          "loopModifier" => 0,
    "gameboyDMGClock" => 0,   "nesAPUClock" => 0,
    "multiPCMClock" => 0,     "upd7759Clock" => 0,
    "okim6258Clock" => 0,     "okim6258Flags" => 0,
    "ko54389Flags" => 0,      "c140ChipType" => 0,
    "okim6295Clock" => 0,     "ko51649Clock" => 0,
    "ko54539Clock" => 0,      "huc6280Clock" => 0,
    "c140Clock" => 0,         "ko53260Clock" => 0,
    "pokeyClock" => 0,        "qsoundClock" => 0,
    "extraHeaderOffset" => 0,
    
    // Dual-chip hacks
    "sn76489Dual" => false,   "ym2413Dual" => false,
    "ym2612Dual" => false,    "ym2151Dual" => false,
    "segaPcmDual" => false,   "rf5c68Dual" => false,
    "ym2203Dual" => false,    "ym2608Dual" => false,
    "ym2610Dual" => false,    "ym3812Dual" => false,
    "ym3526Dual" => false,    "y8950Dual" => false,
    "ymf262Dual" => false,    "ymf278Dual" => false,
    "ymf271Dual" => false,    "ymz280Dual" => false,
    "rf5c164Dual" => false,   "pwmDual" => false,
    "ay8910Dual" => false,    "gameboyDMGDual" => false,
    "nesAPUDual" => false,    "multiPCMDual" => false,
    "upd7759Dual" => false,   "okim6258Dual" => false, 
    "okim6295Dual" => false,  "ko51649Dual" => false,
    "ko54539Dual" => false,   "huc6280Dual" => false,
    "c140Dual" => false,      "ko53260Dual" => false,
    "pokeyDual" => false,     "qsoundDual" => false );
  
  // Seek to start
  fseek($fd, 0x04);
  
  // $0004
  $header["eof"] = readInt($fd, 4) + 0x04;
  $header["version"] = readInt($fd, 4);
  $header["sn76489Clock"] = readInt($fd, 4);
  // $0010
  $header["ym2413Clock"] = readInt($fd, 4);
  $header["gd3Offset"] = readInt($fd, 4) + 0x14;
  $header["totalSamples"] = readInt($fd, 4);
  $header["loopOffset"] = readInt($fd, 4);
  // $0020
  $header["loopSamples"] = readInt($fd, 4);
  $header["rate"] = readInt($fd, 4);
  $header["sn76489Feedback"] = readInt($fd, 2);
  $header["sn76489ShiftWidth"] = ord(fread($fd, 1));
  $header["sn76489Flags"] = ord(fread($fd, 1));
  // $0030
  $header["ym2612Clock"] = readInt($fd, 4);
  $header["ym2151Clock"] = readInt($fd, 4);
  $header["vgmOffset"] = readInt($fd, 4);
  $header["segaPcmClock"] = readInt($fd, 4);
  $header["segaPcmInterface"] = readInt($fd, 4);
  // End of early vesion headers
  
  if($header["version"] < 0x0150)
    $header["vgmOffset"] = 0x40; // Default for revisions < 1.50
  else {
    $header["vgmOffset"] += 0x34;
    
    // $0040
    if(ftell($fd) < $header["vgmOffset"])
      $header["rf5c68Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ym2203Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ym2608Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ym2610Clock"] = readInt($fd, 4);
    // $0050
    if(ftell($fd) < $header["vgmOffset"])
      $header["ym3812Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ym3526Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["y8950Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ymf262Clock"] = readInt($fd, 4);
    // $0060
    if(ftell($fd) < $header["vgmOffset"])
      $header["ymf278Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ymf271Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ymz280Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["rf5c164Clock"] = readInt($fd, 4);
    // $0070
    if(ftell($fd) < $header["vgmOffset"])
      $header["pwmClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ay8910Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ay8910Type"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["ay8910Flags1"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["ay8910Flags2"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["ay8910Flags3"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["volumeModifier"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $null = fread($fd, 1);
    if(ftell($fd) < $header["vgmOffset"])
      $header["loopBase"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["loopModifier"] = ord(fread($fd, 1));
    // $0080
    if(ftell($fd) < $header["vgmOffset"])
      $header["gameboyDMGClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["nesAPUClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["multiPCMClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["upd7759Clock"] = readInt($fd, 4);
    // $0090
    if(ftell($fd) < $header["vgmOffset"])
      $header["okim6258Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["okim6258Flags"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["ko54389Flags"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $header["c140ChipType"] = ord(fread($fd, 1));
    if(ftell($fd) < $header["vgmOffset"])
      $null = fread($fd, 1);
    if(ftell($fd) < $header["vgmOffset"])
      $header["okim6295Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ko51649Clock"] = readInt($fd, 4);
    // $00a0
    if(ftell($fd) < $header["vgmOffset"])
      $header["ko54539Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["huc6280Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["c140Clock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["ko53260Clock"] = readInt($fd, 4);
    // $00b0
    if(ftell($fd) < $header["vgmOffset"])
      $header["pokeyClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["qsoundClock"] = readInt($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $null = fread($fd, 4);
    if(ftell($fd) < $header["vgmOffset"])
      $header["extraHeaderOffset"] = readInt($fd, 4);
  }
  
  // Detect dual-chip setups
  $clocks = array(
    "sn76489Clock",   "ym2413Clock",    "ym2612Clock",    "ym2151Clock",
    "segaPcmClock",   "rf5c68Clock",    "ym2203Clock",    "ym2608Clock",
    "ym2610Clock",    "ym3812Clock",    "ym3526Clock",    "y8950Clock",
    "ymf262Clock",    "ymf278Clock",    "ymf271Clock",    "ymz280Clock",
    "rf5c164Clock",   "pwmClock",       "ay8910Clock",    "gameboyDMGClock",
    "nesAPUClock",    "multiPCMClock",  "upd7759Clock",   "okim6258Clock",
    "okim6295Clock",  "ko51649Clock",   "ko54539Clock",   "huc6280Clock",
    "c140Clock",      "ko53260Clock",   "pokeyClock",     "qsoundClock" );

  $duals = array(
    "sn76489Dual",    "ym2413Dual",     "ym2612Dual",     "ym2151Dual",
    "segaPcmDual",    "rf5c68Dual",     "ym2203Dual",     "ym2608Dual",
    "ym2610Dual",     "ym3812Dual",     "ym3526Dual",     "y8950Dual",
    "ymf262Dual",     "ymf278Dual",     "ymf271Dual",     "ymz280Dual",
    "rf5c164Dual",    "pwmDual",        "ay8910Dual",     "gameboyDMGDual",
    "nesAPUDual",     "multiPCMDual",   "upd7759Dual",    "okim6258Dual", 
    "okim6295Dual",   "ko51649Dual",    "ko54539Dual",    "huc6280Dual",
    "c140Dual",       "ko53260Dual",    "pokeyDual",      "qsoundDual" );
  for($i = 0; $i < count($clocks); $i++) {
    if($header[$clocks[$i]] & 0x80000000) {
      $header[$duals[$i]] = true;
      $header[$clocks[$i]] &= ~0x80000000;
    }
    else if($header[$clocks[$i]] & 0x40000000) {
      $header[$duals[$i]] = true;
      $header[$clocks[$i]] &= ~0x40000000;
    }
  }
  
  return($header);
}


/**
 * Main code
 */
$options = getopt("hc:s:");

if(isset($options["h"]) || $argc < 2) {
?>
Hardchord VGM Converter <?php print("$version\n"); ?> (cli)

Usage:
  hcvgm [options] filename

  Use ">" to redirect output to Arduino .ino sketch

Options:
  -s#    - Prefix for the shield's variable. Default is "YMZ".
  -c#    - Shield's clock speed in Hz.
  -h     - Display this help message
<?
  die();
}
if(isset($options["c"])) {
  if(is_numeric($options["c"]))
    $target_clock = $options["c"];
  else {
    print("Hardchord VGM Converter $version (cli)\n\n");
    print("Error: Clock speed is not an integer\n");
    die();
  }
}

if(isset($options["s"])) {
  if(is_string($options["s"]))
    $target_shield = $options["s"];
  else {
    print("Hardchord VGM Converter $version (cli)\n\n");
    print("Error: Shield variable name is not a string\n");
    die();
  }
}

if(!file_exists($argv[$argc-1])) {
  print("Hardchord VGM Converter $version (cli)\n\n");
  print("Error: Unable to open ".$argv[$argc-1]." for input\n");
  die();
}


$fd = fopen($argv[$argc-1], "rb");
if(fread($fd, 4) != "Vgm ") {
  print("Error: Failed to detect VGM header\n");
  die();
}

// Pull all header elements into a neat array
$header = readHeader($fd);

// Seek to to the start of the VGM block, and parse until we hit the GD3 footer
fseek($fd, $header["vgmOffset"]);
while(ftell($fd) < $header["gd3Offset"]) {
  $command = ord(fread($fd, 1));
  switch($command) {
    
    /**
     * Texas Instruments SN76489
     */
    case 0x4f: // Game Gear PSG Stereo Mixer
      gameGearStereo(ord(fread($fd, 1)));
      break;
    case 0x50: // SN76489 register write
      sn76489(ord(fread($fd, 1)));
      break;
    
    /**
     * Yamaha FM Synthesizers
     */
    case 0x51: // YM2413 (OPLL) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x52: // YM2612 (OPN2) Part 1 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x53: // YM2612 (OPN2) Part 2 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x54: // YM2151 (OPM) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x55: // YM2203 (OPN) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x56: // YM2608 (OPNA) Part 1 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x57: // YM2608 (OPNA) Part 2 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x58: // YM2610 (OPNB) Part 1 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x59: // YM2610 (OPNB) Part 2 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5a: // YM3812 (OPL2) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5b: // YM3526 (OPL) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5c: // Y8950 (MSX-Audio) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5d: // YMZ280B (PCM Decoder) register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5e: // YMF262 (OPL3) Part 1 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0x5f: // YMF262 (OPL3) Part 2 register write
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0xd0: // YMF278B (OPL4) Part N register write
      // Unsupported, skip
      fseek($fd, 3, SEEK_CUR);
      break;
    case 0xd1: // YMF271 (OPX) Part N register write
      // Unsupported, skip
      fseek($fd, 3, SEEK_CUR);
      break;
    
    /**
     * AY-3-8910 compatible
     */
    case 0xa0:
      ay8910(ord(fread($fd, 1)), ord(fread($fd, 1)));
      break;
    
    /**
     * Ricoh sound chips
     */
    case 0xb0: // Ricoh RF5c68 (FM-TOWNS)
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0xb1: // Ricoh RF5c164 (Mega CD)
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    
    /**
     * PWM
     */
    case 0xb2:
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    
    /**
     * Nintendo systems
     */
    case 0xb3: // Game Boy DMG
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    case 0xb4: // Famicom 2A03
      // Unsupported, skip
      fseek($fd, 2, SEEK_CUR);
      break;
    
/*    case
  0xB5 aa dd : MultiPCM, write value dd to register aa
  0xB6 aa dd : uPD7759, write value dd to register aa
  0xB7 aa dd : OKIM6258, write value dd to register aa
  0xB8 aa dd : OKIM6295, write value dd to register aa
  0xB9 aa dd : HuC6280, write value dd to register aa
  0xBA aa dd : K053260, write value dd to register aa
  0xBB aa dd : Pokey, write value dd to register aa
  0xC0 aaaa dd : Sega PCM, write value dd to memory offset aaaa
  0xC1 aaaa dd : RF5C68, write value dd to memory offset aaaa
  0xC2 aaaa dd : RF5C164, write value dd to memory offset aaaa
  0xC3 cc aaaa : MultiPCM, write set bank offset aaaa to channel cc
  0xC4 mmll rr : QSound, write value mmll to register rr
                 (mm - data MSB, ll - data LSB)
  0xD2 pp aa dd : SCC1 port pp, write value dd to register aa
  0xD3 pp aa dd : K054539 write value dd to register ppaa
  0xD4 pp aa dd : C140 write value dd to register ppaa
*/

    /**
     * Sample-based delays
     */
    case 0x61:
      delaySamples(readInt($fd, 2));
      break;
    case 0x62:
      delaySamples($delays[0x62]);
      break;
    case 0x63:
      delaySamples($delays[0x63]);
      break;
    case 0x64: // Override length of 0x62 and 0x63
      if(ord(fread($fd, 1)) == 0x62)
        $delays[0x62] = readInt($fd, 2);
      else
        $delays[0x63] = readInt($fd, 2);
      break;
    case 0x70:
      delaySamples(1);
      break;
    case 0x71:
      delaySamples(2);
      break;
    case 0x72:
      delaySamples(3);
      break;
    case 0x73:
      delaySamples(4);
      break;
    case 0x74:
      delaySamples(5);
      break;
    case 0x75:
      delaySamples(6);
      break;
    case 0x76:
      delaySamples(7);
      break;
    case 0x77:
      delaySamples(8);
      break;
    case 0x78:
      delaySamples(9);
      break;
    case 0x79:
      delaySamples(10);
      break;
    case 0x7a:
      delaySamples(11);
      break;
    case 0x7b:
      delaySamples(12);
      break;
    case 0x7c:
      delaySamples(13);
      break;
    case 0x7d:
      delaySamples(14);
      break;
    case 0x7e:
      delaySamples(15);
      break;
    case 0x7f:
      delaySamples(16);
      break;
    
    /**
     * PCM data block
     */
    case 0x67:
      // Do nothing. Next byte will be 0x66 and terminate the stream. We don't
      // have any way to support PCM streams yet.
      break;
    case 0x68:
      break;
    case 0xe0: // We should never hit this. It's a PCM seek.
      fseek($fd, 4, SEEK_CUR);
      break;
    case 0x80: // Write PCM data bank to YM2612 with no wait
      break;
    case 0x81: // Write PCM data bank to YM2612 and wait 1 sample
      break;
    case 0x82: // Write PCM data bank to YM2612 and wait 2 samples
      break;
    case 0x83: // Write PCM data bank to YM2612 and wait 3 samples
      break;
    case 0x84: // Write PCM data bank to YM2612 and wait 4 samples
      break;
    case 0x85: // Write PCM data bank to YM2612 and wait 5 samples
      break;
    case 0x86: // Write PCM data bank to YM2612 and wait 6 samples
      break;
    case 0x87: // Write PCM data bank to YM2612 and wait 7 samples
      break;
    case 0x88: // Write PCM data bank to YM2612 and wait 8 samples
      break;
    case 0x89: // Write PCM data bank to YM2612 and wait 9 samples
      break;
    case 0x8a: // Write PCM data bank to YM2612 and wait 10 samples
      break;
    case 0x8b: // Write PCM data bank to YM2612 and wait 11 samples
      break;
    case 0x8c: // Write PCM data bank to YM2612 and wait 12 samples
      break;
    case 0x8d: // Write PCM data bank to YM2612 and wait 13 samples
      break;
    case 0x8e: // Write PCM data bank to YM2612 and wait 14 samples
      break;
    case 0x8f: // Write PCM data bank to YM2612 and wait 15 samples
      break;
    case 0x90: // DAC stream control
      break;
    case 0x91: // DAC stream control
      break;
    case 0x92: // DAC stream control
      break;
    case 0x93: // DAC stream control
      break;
    case 0x94: // DAC stream control
      break;
    case 0x95: // DAC stream control
      break;
    case 0x96: // DAC stream control
      break;
    case 0x97: // DAC stream control
      break;
    case 0x98: // DAC stream control
      break;
    case 0x99: // DAC stream control
      break;
    case 0x9a: // DAC stream control
      break;
    case 0x9b: // DAC stream control
      break;
    case 0x9c: // DAC stream control
      break;
    case 0x9d: // DAC stream control
      break;
    case 0x9e: // DAC stream control
      break;
    case 0x9f: // DAC stream control
      break;
    
    // Terminate stream
    case 0x66:
      fseek($fd, $header["gd3Offset"]);
      break;
  }
}

// Get the header info
$gd3 = array();
fseek($fd, $header["gd3Offset"]);
if(fread($fd, 4) == "Gd3 ") {
  
  $gd3["version"] = readInt($fd, 4);
  $gd3["size"] = readInt($fd, 4);
  
  $gd3["title"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["title"] .= substr($char, 0, 1);
  $gd3["title_j"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["title_j"] .= $char;
  
  $gd3["game"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["game"] .= substr($char, 0, 1);
  $gd3["game_j"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["game_j"] .= $char;

  $gd3["system"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["system"] .= substr($char, 0, 1);
  $gd3["system_j"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["system_j"] .= $char;

  $gd3["composer"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["composer"] .= substr($char, 0, 1);
  $gd3["composer_j"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["composer_j"] .= $char;

  $gd3["date"] = "";
  while(($char = fread($fd, 2)) != "\0\0")
    $gd3["date"] .= substr($char, 0, 1);
}

fclose($fd);

?>/**
 * <?php print $gd3["title"]; ?> from <?php print $gd3["game"] . "\n"; ?>
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
  Serial.println("<?php print $gd3["title"]; ?> - <?php print $gd3["game"]; ?> by <?php print $gd3["composer"]; ?>"); 
}

void loop() {
<?php
for($i = 0; $i < count($commands); $i++) {
  if(substr($commands[$i], 0, 20) != @substr($commands[$i+1], 0, 20))
  //  $i++;
  //else
    print("  " . $commands[$i] . "\n");
}
?>}

