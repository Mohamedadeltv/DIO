/*********************************
 * Author:	Mohamed Adel
 * SWC:		MDIO
 * Version:	1.0
 * Date: 	
 *******************************/

#ifndef _MDIO_interface_H_
#define _MDIO_interface_H_

//magic numbers

#define MDIO_PORTA    12
#define MDIO_PORTB    35
#define MDIO_PORTC    20
#define MDIO_PORTD    50

#define MDIO_OUTPUT 1
#define MDIO_INPUT	0

//port methods
void MDIO_voidSetPortDirection(u8 ARG_u8Port,u8 ARG_u8Direction);
void MDIO_voidSetPortValue(u8 ARG_u8Port,u8 ARG_u8Value);
u8   MDIO_u8GetPortValue(u8 ARG_u8Port);

//pin methods
void MDIO_voidSetPinDirection(u8 ARG_u8Port, u8 ARG_u8Pin,u8 ARG_u8Direction);
void MDIO_voidSetPinValue(u8 ARG_u8Port,u8 ARG_u8Pin,u8 ARG_u8Value);
u8 MDIO_u8GetPinValue(u8 ARG_u8Port,u8 ARG_u8Pin);

#endif
