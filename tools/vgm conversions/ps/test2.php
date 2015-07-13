<?php

$file = explode("\n", trim(file_get_contents("temp")));
$data = array();
for($i=0;$i<count($file);$i++)
	$data[] = explode(" ", $file[$i]);

function volume($value) {
	if($value == 0xf) return(0);
	else if($value & 1) return(2);
	else if(($value >> 1) & 1) return(4);
        else if(($value >> 2) & 1) return(8);
        else if(($value >> 3) & 1) return(15);
}

for($i=0;$i<count($file);$i++){
	if($data[$i][0] == "TONEFREQ0") {
		$freq = ($data[$i][1] << 7) + $data[$i+1][1];
		if($freq != 0)
			$freq = 3579540 / (32 * $freq);
		$i++;
		print "ymzShield.setToneFrequency(0, $freq);\n";
	}
	else if($data[$i][0] == "TONEFREQ1") {
                $freq = ($data[$i][1] << 7) + $data[$i+1][1];
		if($freq != 0)
			$freq = 3579540 / (32*$freq);
                $i++;
		print "ymzShield.setToneFrequency(1, $freq);\n";
	}
        else if($data[$i][0] == "TONEFREQ2") {
                $freq = ($data[$i][1] << 7) + $data[$i+1][1];
		if($freq != 0)
	                $freq = 3579540 / (32*$freq);
                $i++;
                print "ymzShield.setToneFrequency(2, $freq);\n";
	}
	else if($data[$i][0] == "TONEATTEN0")
		print "ymzShield.setVolume(0, " . volume($data[$i][1]) . ");\n";
        else if($data[$i][0] == "TONEATTEN1")
                print "ymzShield.setVolume(1, " . volume($data[$i][1]) . ");\n";
        else if($data[$i][0] == "TONEATTEN2")
                print "ymzShield.setVolume(2, " . volume($data[$i][1]) . ");\n";
	else if($data[$i][0] == "WAIT")
		print "delay(" . $data[$i][1] . ");\n";
}
