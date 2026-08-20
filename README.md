# Arduino Piano

A physical Arduino piano that maps push buttons to musical notes and can play a programmed melody through a speaker.

## Overview

The project uses eight buttons connected to an Arduino. Each button corresponds to a note, while the final button triggers a longer pre-programmed melody. Note frequencies are handled through a `pitches.h` mapping and played through the Arduino `tone()` API.

## Tech

- Arduino / C++
- Digital input with internal pull-up resistors
- Piezo speaker output
- `tone()` / `noTone()`
- Serial output for note feedback

## Hardware Behavior

- Buttons are configured on digital pins `4` through `11`.
- The speaker is connected through pin `3`.
- Standard buttons play individual notes.
- The final button triggers the stored melody sequence.

## Running

1. Open `ArduinoPiano.ino` in the Arduino IDE.
2. Make sure the required `pitches.h` note definitions are available.
3. Connect the buttons and speaker to the matching pins.
4. Upload the sketch to the Arduino.
5. Open the Serial Monitor at `9600` baud for note feedback.

## What I Practiced

This project was an early hands-on exercise in embedded programming, digital I/O, arrays, loops, functions, and translating musical timing into code.
