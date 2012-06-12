// this file seems pointless since it only works if .c file is also included

#ifndef UTILS_H_
#define UTILS_H_

#include "Arduino.h" // for pow function

/** @defgroup util Mozzi utility functions
*/

/** @ingroup util
Set digital pin 13 to output for testing timing with an oscilloscope.*/
#define SET_PIN13_OUT	(DDRB = DDRB | B00100000)
/** @ingroup util
Set pin 13 high for testing timing with an oscilloscope.*/
#define SET_PIN13_HIGH 	(PORTB = PORTB | B00100000)
/** @ingroup util
Set pin 13 low for testing timing with an oscilloscope.*/
#define SET_PIN13_LOW	(PORTB = B00000000)

// macros for setting and clearing register bits
#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

float mtof(float x);
unsigned long xorshift96();

byte _mod(byte n, byte d);
byte _div(byte n, byte d);
byte _rnd(byte min, byte max);

void setupFastADC();


#endif /* UTILS_H_ */