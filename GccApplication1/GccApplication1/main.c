/*
 * GccApplication1.c
 *
 * Created: 01.04.2021 23:44:36
 * Author : Leo
 */ 

#include <avr/io.h>


int main(void)
{
    DDRA = 0b00000001;
	PORTA = 0b00000001;
    while (1) 
    {
    }
}

