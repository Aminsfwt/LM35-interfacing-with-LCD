/*
 * dio.h
 *
 * Created: 1/22/2023 6:46:51 AM
 *  Author: amen safwat
 */ 


#ifndef DIO_H_
#define DIO_H_

/************************FUNCTION MACROS********************************/
#define Set_Bit(port, pin)      (port |= (1<<pin))
#define Clear_Bit(port, pin)    (port &= ~(1<<pin))
#define Toggle_Bit(port, pin)   (port |^= (1<<pin))
#define Is_Bit_Set(port,pin)    (port & (1<<pin))
#define Is_Bit_Clear(port,pin)  (!(port & (1<<pin)))



#endif /* DIO_H_ */