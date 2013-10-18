

#include <msp430.h> 
#include "PongHelper.h"


/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    volatile int xposition = 200;
    volatile int yposition = 200;
    volatile int xvelocity = 10;
    volatile int yvelocity = 10;
    volatile char radius = 10;

    ball_t ball = creation(xposition, yposition, xvelocity, yvelocity, radius);

while(1){
	ball = movement(ball);
}


}
