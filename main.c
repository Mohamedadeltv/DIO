/*********************************
 * Author:	Mohamed Adel
 * SWC:		MDIO
 * Version:	1.0
 * Date:
 *******************************/

#define F_CPU 16000000UL
#include<util/delay.h>
#include "stdfiles.h"
#include "bitmath.h"


#include "MDIO_interface.h"

int main()
{
	MDIO_voidSetPortDirection(MDIO_PORTA,0b11111111);
	while(1)
	{
		for(int i=0;i<8;i++){
			MDIO_voidSetPinValue(MDIO_PORTA,i,1);
			_delay_ms(500);
		}
		for(int i=7;i>=0;i--){
			MDIO_voidSetPinValue(MDIO_PORTA,i,0);
			_delay_ms(500);
		}


	}
}
