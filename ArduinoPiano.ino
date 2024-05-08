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

void melodyDurationLogic(int m){

  int size = sizeof(melody)/sizeof(int);

  // Loop through the melody array and play each note with the corresponding tempo
  for(int thisNote = 0; thisNote < size; thisNote++){

    int noteDuration = 1000 / lucidDreamsMelody[thisNote];
    tone(melodyPin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBewteenNotes);
    noTone(melodyPin);

  }

  if(s == 1){
    Serial.println(" Lucid Dreams ");
  }
  return;

}

void playPiano(){

  int buttons[] = {4, 5, 6, 7, 8, 9, 10, 11};
  const char notes[] = {"DO", "RE", "MI", "FA", "SOL", "LA", "TI", "Lucid Dreams"};
  int numButtons = sizeof(buttons)/ sizeof(int);
  int melodySize = sizeof(melody)/ sizeof(int);

  // Loop through each button pin
  // Check if the button is pressed
  // If pressed, play the corresponding note

  for(i = 0; i < numButtons; i++){

    if(digitalRead(buttons[i]) == HIGH){
      Serial.print.ln(notes[i]);

      if(i = 7){
        melodyDurationLogic(1);
        delay(Delay);

       } else{
          tone(Speaker, melody[i % melodySize]);
          delay(Delay);
          noTone(Speaker);

        }

    }

  }
  
}