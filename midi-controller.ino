
#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

int button1 = 2; //button1 on digital pin 2
int button2 = 3; //button2 on digital pin 3
int button3 = 4; //button3 on digital pin 4
int button4 = 5; //button4 on digital pin 5
int button5 = 6; //button5 on digital pin 6
int button6 = 7; //button6 on digital pin 7
int button7 = 8; //button7 on digital pin 8
int button8 = 9; //button7 on digital pin 8
int led = 11;


void setup()
{
  MIDI.begin();
//Serial.begin(9600);
pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(button3, INPUT_PULLUP);
pinMode(button4, INPUT_PULLUP);
pinMode(button5, INPUT_PULLUP);
pinMode(button6, INPUT_PULLUP);
pinMode(button7, INPUT_PULLUP);
pinMode(button8, INPUT_PULLUP);
pinMode(led, OUTPUT);
pinMode(A0, INPUT);
}



void loop()
{
  int pitch = map(analogRead(A0), 0, 1023, 0, 79);
  //Serial.println(pitch);
  if (digitalRead(button1) == LOW)
  { MIDI.sendNoteOn(pitch + 36,127,1); analogWrite(led, 300);} //turn midi note on 36 velocity 127, midi channel 1. 
  if (digitalRead(button1) == HIGH)
  { MIDI.sendNoteOff(pitch + 36,0,1);analogWrite(led, 0);}  //turn midi note off 36 velocity 127, midi channel 1. 
  
  if (digitalRead(button2) == LOW)
  { MIDI.sendNoteOn(pitch + 38,127,1);} //turn midi note on 38 velocity 127, midi channel 1.  
  if (digitalRead(button2) == HIGH)
  { MIDI.sendNoteOff(pitch + 38,0,1);}  //turn midi note off 38 velocity 127, midi channel 1. 

  if (digitalRead(button3) == LOW)
  { MIDI.sendNoteOn(pitch + 40,127,1);} //turn midi note on 40 velocity 127, midi channel 1.  
  if (digitalRead(button3) == HIGH)
  { MIDI.sendNoteOff(pitch + 40,0,1);}  //turn midi note off 40 velocity 127, midi channel 1. 

  if (digitalRead(button4) == LOW)
  { MIDI.sendNoteOn(pitch + 41,127,1);} //turn midi note on 41 velocity 127, midi channel 1.  
  if (digitalRead(button4) == HIGH)
  { MIDI.sendNoteOff(pitch + 41,0,1);}  //turn midi note off 41 velocity 127, midi channel 1. 

  if (digitalRead(button5) == LOW)
  { MIDI.sendNoteOn(pitch + 43,127,1);} //turn midi note on 43 velocity 127, midi channel 1.  
  if (digitalRead(button5) == HIGH)
  { MIDI.sendNoteOff(pitch + 43,0,1);}  //turn midi note off 43 velocity 127, midi channel 1. 

  if (digitalRead(button6) == LOW)
  { MIDI.sendNoteOn(pitch + 45,127,1);} //turn midi note on 45 velocity 127, midi channel 1.  
  if (digitalRead(button6) == HIGH)
  { MIDI.sendNoteOff(pitch + 45,0,1);}  //turn midi note off 45 velocity 127, midi channel 1. 

  if (digitalRead(button7) == LOW)
  { MIDI.sendNoteOn(pitch + 47,127,1);} //turn midi note on 47 velocity 127, midi channel 1.  
  if (digitalRead(button7) == HIGH)
  { MIDI.sendNoteOff(pitch + 47,0,1);}  //turn midi note off 47 velocity 127, midi channel 1. 

  if (digitalRead(button8) == LOW)
  { MIDI.sendNoteOn(pitch + 48,127,1);} //turn midi note on 48 velocity 127, midi channel 1.  
  if (digitalRead(button8) == HIGH)
  { MIDI.sendNoteOff(pitch + 48,0,1);}  //turn midi note off 48 velocity 127, midi channel 1. 
  //delay(100);
  }
