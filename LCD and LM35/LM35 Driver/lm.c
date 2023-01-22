/*
 * lm.c
 *
 * Created: 1/22/2023 6:42:42 AM
 *  Author: amen safwat
 */ 
  #include <util/delay.h>7
  #include "../DIO Driver/dio.h"
  #include "../LCD driver/lcd.h"
  #include "lm.h"
  
  
  
  uint8_t data;
  
  void LM_init()
  {
	  Clear_Bit(LM_Ctrl, 0);			//use PA0 as Input Pin
	  Adc_Ctrl = 0x87;				//enable ADC & 128 prescaler
	  Adc_Selct = 0xE0;				//use 2.56 internal Vref & single ended data will be left justified
  }

  void Read_LM()
  {
	  
	  Set_Bit(Adc_Ctrl, Start_Convert);
	  while(Is_Bit_Clear(Adc_Ctrl,Adc_Inter_flag));

	  data = Adc_High_Store;
	  Convert_n_Display(data);
	  _delay_ms(1000);
  }

  void Convert_n_Display(uint8_t value)
  {
	  uint8_t x, d1, d2;

	  //Split data and convert it to HEX
	  d1 = (value / 10) + 0x30;
	  
	  d2 = (value % 10) + 0x30;

	  LCD_SendCommand(0x8D);             //start displaying beside Temperature word

	  //display HEX data
	  LCD_DisplayString(&d1);
	  LCD_DisplayString(&d2);

  }