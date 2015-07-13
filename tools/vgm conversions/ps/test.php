<?php

$lastLatch = array(0, 0);
$regTone   = array(0, 0, 0, 0);

$fo = fopen("Phantasy Star - Intro.vgm", "rb");
fseek($fo, 0x40);

//print("YMZ.setNoise(4, true);\n");

while(ftell($fo) < 0x38b5) {
	$command = ord(fgetc($fo));
	// Bus write
	if($command == 0x50) {
		$byte = ord(fgetc($fo));
		$stateLatch    = $byte >> 7;
		$stateChannel  = ($byte >> 5) & 3;
		$stateType     = ($byte >> 4) & 1;
		
		if($stateLatch == 1) {
			if($stateType == 1) {
				print("YMZ.setVolume($stateChannel, " . ($byte & 0xf) . ");\n");
			}
			else if($stateChannel == 3) {
				$regTone[$stateChannel] &= 0xf;
				$regTone[$stateChannel] += ($byte << 4);
				//print("YMZ.setNoiseFrequency(" . round(3579545 / (32 * $regTone[$stateChannel]), 3) .");\n");
			}
			else {
				$regTone[$stateChannel] &= 0x3f0;
				$regTone[$stateChannel] += ($byte & 0xf);
			}
		}
		else {
			$stateChannel = $lastLatch[0];
			$stateType    = $lastLatch[1];
			if($stateType == 1) {
				print("YMZ.setVolume($stateChannel, " . ($byte & 0xf) . ");\n");
			}
			else if($stateChannel == 3) {
				$regTone[$stateChannel] &= 0xf;
				$regTone[$stateChannel] += ($byte << 4);
				//print("YMZ.setNoiseFrequency(" . round(3579545 / (32 * $regTone[$stateChannel]), 3) . ");\n");
			}
			else {
				$regTone[$stateChannel] &= 0xf;
				$regTone[$stateChannel] += ($byte << 4);
				if($regTone[$stateChannel] == 0) {
					print("YMZ.setToneFrequency($stateChannel, 0);\n");
				}
				else {
					print("YMZ.setToneFrequency($stateChannel, " . round(3579545 / (32 * $regTone[$stateChannel]), 3) . ");\n");
				}
			}
		}
	}
	// Delays
	else if($command == 0x61) {
		$temp1 = ord(fgetc($fo));
		$temp2 = ord(fgetc($fo));
		print("delay(" . round((($temp2 << 8) + $temp1) / 44, 0) . ");\n");
	}
	else if($command == 0x62) {
		print("delay(16);\n");
	}
	else if($command == 0x63) {
		print("delay(20);\n");
	}
	else if($command == 0x66) {
		print("WAIT\n");
	}
	// Game Gear command
	else if($command == 0x4f) {
		$null = fgetc($fo);
		//print("GAMEGEAR " . bindec(strrev(decbin(ord(fgetc($fo))))) . "\n");
	}
	else
		die("Error, found command 0x" . dechex($command) . "\n");

}

fclose($fo);

?>
