#include <MIDI.h>

/*
  Keyboard

  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/
MIDI_CREATE_DEFAULT_INSTANCE();

int pos = 0;
int c = 0;
int d = 0;
int e = 0;

void setup()
{
	pinMode(1, INPUT);
	pinMode(8, OUTPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
}

void loop()
{
	// if button press on A0 is detected
	if (digitalRead(1) == HIGH) {
		tone(8, 130, 100); // play tone 57 (A4 = 440 Hz)
		c = 1;
	}
	// if button press on A1 is detected
	if (digitalRead(2) == HIGH) {
		tone(8, 146, 100); // play tone 59 (B4 = 494 Hz)
		d = 1;
	}
	// if button press on A0 is detected
	if (digitalRead(3) == HIGH) {
		tone(8, 164, 100); // play tone 60 (C5 = 523 Hz)
		e = 1;
	}
	
	
	delay(10); // Delay a little bit to improve simulation performance
	
}