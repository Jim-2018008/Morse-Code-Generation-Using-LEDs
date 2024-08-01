/*
 * code.c
 *
 * Created: 28/11/2023 23:31:19
 * Author : Nafish Ahanaf
 */ 

#define F_CPU 8000000UL // Assuming a clock frequency of 8MHz
#include <avr/io.h>
#include <util/delay.h>

// Function to turn on an LED for a specified duration
void LED_On(int LED, int duration) {
	if (duration < 0) {
		return; // If duration is negative, exit the function
	}

	PORTA = (1 << LED); // Turn on LED

	while (duration > 0) {
		_delay_ms(500); // Wait for 500 milliseconds
		duration--;
	}

	PORTA &= ~(1 << LED); // Turn off LED
	_delay_ms(500); // Gap between signals (500 milliseconds)
}
// Function to transmit a dot
void Dot(int LED) {
	LED_On(LED, 1); // Dot duration is 1 unit
}

// Function to transmit a dash
void Dash(int LED) {
	LED_On(LED, 3); // Dash duration is 3 units
}

// Function to transmit a space between characters
void CharGap() {
	_delay_ms(1500); // Gap between characters is 3 units (1500 ms)
}

// Function to transmit a space between words
void WordGap() {
	_delay_ms(3500); // Gap between words is 7 units (3500 ms)
}

int main() {
	// Initialize PORTA for LEDs
	DDRA = 0b11111111; // Set PORTA as output
	PORTA=0x00; // Initializing the PORTA with 0
	while (1) {
		// Transmit Morse code for "I"
		Dot(0); // LED1 for "I"
		Dot(1); // LED2 for "I"
		WordGap(); // Gap between words

		// Transmit Morse code for "s"
		Dot(0); // LED1 for "s"
		Dot(0); // LED1 for "s"
		Dot(0); // LED1 for "s"
		CharGap(); // Gap between characters

		// Transmit Morse code for "i"
		Dot(0); // LED1 for "i"
		Dot(0); // LED1 for "i"
		CharGap(); // Gap between characters

		// Transmit Morse code for "t"
		Dash(1); // LED2 for "t"
		WordGap(); // Gap between words
	}

}

