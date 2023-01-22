/*
 * LCD and LM35.c
 *
 * Created: 1/22/2023 6:41:40 AM
 * Author : amen safwat
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "DIO Driver/dio.h"
#include "LCD driver/lcd.h"
#define  F_CPU 16000000ul

int main(void)
{
	LCD_Init();
	LCD_DisplayString(" Temperature= ");

	LM_init();
	while (1)
	{
		Read_LM();		
	}
}

