/*	Author: anguy589
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or exampl
*/

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
     //initializations
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;

      //temporary variables
     unsigned char tmpA0 = 0x00;
     unsigned char tmpA1 = 0x00;
     unsigned char tmpA2 = 0x00;
     unsigned char tmpA3 = 0x00;

     unsigned char cntavail = 4;

     while(1) {
      tmpA0 = PINA & 0x01;
      tmpA1 = PINA & 0x02;
      tmpA2 = PINA & 0x04;
      tmpA3 = PINA & 0x08;

      if(tmpA0) {
        cntavail -= 1;

      }
      if(tmpA1) {
        cntavail -= 1;

      }
      if(tmpA2) {
        cntavail -= 1;

      }
      if(tmpA3) {
        cntavail -= 1;
      }

	if(!cntavail) {
	cntavail = 128;	
	}

        PORTC = cntavail;

        cntavail = 4;
     }

     return 1;
}
