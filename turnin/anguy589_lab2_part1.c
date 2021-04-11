/*	Author: anguy589
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;
	
    /*temproary variables */
	unsigned char tmpA0 = 0x00;
        unsigned char tmpA1 = 0x00;
        unsigned char tmpB = 0x00;

    /* Insert your solution below */
    while (1) {
	tmpA0 = PINA & 0x01; //reading from ports
	tmpA1 = PINA & 0x02;

	if(!tmpA1 && tmpA0) {
		tmpB = tmpB || 0x01; //output 1 on B0

	} 
	
	else {
		tmpB = tmpB & 0x00;


	}
	
	PORTB = tmpB; //write to output





    }
    return 1;
}
