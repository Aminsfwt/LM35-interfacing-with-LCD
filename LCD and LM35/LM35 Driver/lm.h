/*
 * lm.h
 *
 * Created: 1/22/2023 6:42:54 AM
 *  Author: amen safwat
 */ 


#ifndef LM_H_
#define LM_H_

#include <avr/io.h>
typedef unsigned char  uint8_t;


/************************************ADC REGISTERS*************************/
#define  LM_Ctrl			DDRA
#define  Adc_Ctrl			ADCSRA
#define  Adc_Selct			ADMUX
#define  Start_Convert		ADSC
#define  Adc_Inter_flag		ADIF
#define  Adc_High_Store     ADCH

void LM_init();
void Read_LM();
void Convert_n_Display(uint8_t value);



#endif /* LM_H_ */