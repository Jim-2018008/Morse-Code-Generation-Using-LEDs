# Morse Code Generation Using LEDs

## Description

This repository contains the code and simulation files for a personal project focused on generating Morse code using LEDs and interfacing them with an ATmega32 microcontroller. The main objective of this project is to explore how to upload code into a microcontroller and interface output devices with it.

## Objectives

1. Uploading code into the microcontroller.
2. Interfacing output devices with the microcontroller.

## Components

### Software
- Microchip Studio
- AVRpal
- Proteus

### Hardware
- Breadboard
- ATmega32A
- USBasp / AVR burner
- Wires
- LED (4)
- Resistors (1kΩ) (4)

## Experimental Setup

1. Place the microcontroller appropriately into the burner.
2. Connect the USBasp / AVR burner to the PC and upload the code.
3. Place the microcontroller into the breadboard.
4. Connect the LEDs to any PORT of the microcontroller.
5. Power on the microcontroller and observe the output.
6. (Optional) If the output is okay, conduct the experiment again, but connect all the LEDs to different PORTs this time.

## Explanation

The project demonstrates a given sequence of Morse code by glowing LEDs. Morse code consists of dots (.) and dashes (–), with 1 unit equaling 0.5 seconds. Using 4 LEDs, any letter can be encoded. The LEDs glow one by one to express the sequence. For example, if the sequence is “I am”, the glowing sequence of LEDs should be like the following table:

| Character | LED Sequence                                    | Gaps                    |
|-----------|-------------------------------------------------|-------------------------|
| I         | LED1 (1 unit) – Gap (1 unit) – LED2 (1 unit)    | Gap (7 units) [word end]|
| a         | LED1 (1 unit) – Gap (1 unit) – LED2 (3 units)   | Gap (3 units) [letter end] |
| m         | LED1 (3 units) – Gap (1 unit) – LED2 (3 units)  | Gap (7 units) [word end] |
| End       | All LEDs on for 7 units                         | All LEDs off for 7 units |


## Contact

For any questions or further information, please contact [er.nafish.ahanaf@gmail.com](mailto:er.nafish.ahanaf@gmail.com).

---
