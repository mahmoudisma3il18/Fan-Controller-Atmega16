/*
 * Fan Controller.c
 *
 * Created: 3/6/2023 11:06:21 PM
 * Author : Mahmoud Ismail
 */ 

#include <avr/io.h>
#include "PWM.h"

#define F_CPU            1000000


int main(void)
{
    /* Replace with your application code */
	PWM_Timer0_start(100);
    while (1) 
    {
    }
}

