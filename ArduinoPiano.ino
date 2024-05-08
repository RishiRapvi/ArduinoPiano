#include "pitches.h" //this library helps us use the musical notes and initalize them
#define melodyPin 3
#define Delay 120
#define Speaker melodyPin

//Synopisis: This code is intended to play the simple piano notes, as well as play a special theme if the last button is pressed

int melodyArray[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4_ NOTE_C5}; //do, re, mi, fa, sol, la, ti, theme


int melody[] = {
  NOTE_F5, NOTE_D5, NOTE_B4, NOTE_G4,
  NOTE_D4, NOTE_E4, NOTE_B4,
  NOTE_D5, NOTE_B4, NOTE_G4, NOTE_D4,
  NOTE_E4, NOTE_B4, 0,
  NOTE_E4, NOTE_B4, 0,
  NOTE_F5, NOTE_D5, NOTE_B4, NOTE_G4,
  NOTE_D4, NOTE_E4, NOTE_B4,
  NOTE_D5, NOTE_B4, NOTE_G4, NOTE_D4,
  NOTE_E4, NOTE_B4, 0,
  NOTE_E4, NOTE_B4, 0,
  NOTE_D5, NOTE_F5, NOTE_D5, NOTE_B4,
  NOTE_A4, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_E5, NOTE_B4, NOTE_D5, NOTE_F5,
  NOTE_D5, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_E5, NOTE_B4, NOTE_D5, NOTE_F5,
  NOTE_D5, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_G4, NOTE_E4,
  NOTE_G5, NOTE_E5, NOTE_C5, NOTE_A4,
  NOTE_E5, NOTE_C5, NOTE_B4, NOTE_G4,
  NOTE_D5, NOTE_C5, NOTE_A4, NOTE_B4,
  0
}; // zeros are used to initalize the specific frequencies which were definied above.

//Used MIDI sequencing to transpose the correct musical notes.
int lucidDreamsMelody[] = {
  4, 4, 4, 4,
  4, 4, 2,
  4, 4, 4, 4,
  4, 4, 2,
  4, 4, 2,
  4, 4, 4, 4,
  4, 4, 2,
  4, 4, 4, 4,
  4, 4, 2,
  4, 4, 2,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,
  2
};


void setup() {
  Serial.begin(9600);
  pinMode(melodyPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    playPiano(); //This code will run contuniously in order to fully initalize the specific notes when the buttons are pressed.
}











