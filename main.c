/*
 * 3led.c
 *
 * Created: 07.06.2025 19:36:39
 * Author : Nikitos
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
   DDRD |= (1<<PD0) | (1<<PD1) | (1<<PD2);
   
    while (1) 
    {
		PORTD = (1<<PD0);
		_delay_ms(500);
		
		PORTD = (1<<PD1);
		_delay_ms(500);
		
		PORTD = (1<<PD2);
		_delay_ms(500);
		
		PORTD = 0;
		_delay_ms(500);
    }
}

