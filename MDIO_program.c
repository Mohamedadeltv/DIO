/*********************************
 * Author:	Mohamed Adel
 * SWC:		MDIO
 * Version:	1.0
 * Date:
 *******************************/

#include "stdfiles.h"
#include "bitmath.h"

#include "MDIO_private.h"
#include "MDIO_interface.h"

void MDIO_voidSetPortDirection(u8 ARG_u8Port,u8 ARG_u8Direction)
{
	switch(ARG_u8Port)
	{
		case MDIO_PORTA:
		{
			GPIOA->DDR = ARG_u8Direction;
			break;
		}
		case MDIO_PORTB:
		{
			GPIOB->DDR = ARG_u8Direction;
			break;
		}
		case MDIO_PORTC:
		{
			GPIOC->DDR = ARG_u8Direction;
			break;
		}
		case MDIO_PORTD:
		{
			GPIOD->DDR = ARG_u8Direction;
			break;
		}
		default:
		{
			break;
		}
	}
	return;
}
void MDIO_voidSetPortValue(u8 ARG_u8Port,u8 ARG_u8Value)
{
	switch(ARG_u8Port)
	{
		case MDIO_PORTA:
		{
			GPIOA->PORT = ARG_u8Value;
			break;
		}
		case MDIO_PORTB:
		{
			GPIOB->PORT = ARG_u8Value;
			break;
		}
		case MDIO_PORTC:
		{
			GPIOC->PORT = ARG_u8Value;
			break;
		}
		case MDIO_PORTD:
		{
			GPIOD->PORT = ARG_u8Value;
			break;
		}
		default:
		{
			break;
		}
	}
	return;
}
u8   MDIO_u8GetPortValue(u8 ARG_u8Port)
{
	u8 L_MDIO_PortInput;
	switch(ARG_u8Port)
	{
		case MDIO_PORTA:
		{
			L_MDIO_PortInput = GPIOA->PIN;
			break;
		}
		case MDIO_PORTB:
		{
			L_MDIO_PortInput = GPIOB->PIN;
			break;
		}
		case MDIO_PORTC:
		{
			L_MDIO_PortInput = GPIOC->PIN;
			break;
		}
		case MDIO_PORTD:
		{
			L_MDIO_PortInput = GPIOD->PIN;
			break;
		}
	}
	return L_MDIO_PortInput;
}

/******************************************************/

void MDIO_voidSetPinDirection(u8 ARG_u8Port, u8 ARG_u8Pin,u8 ARG_u8Direction)
{
	switch(ARG_u8Port)
	{
	case MDIO_PORTA:
	{
		if(MDIO_OUTPUT==ARG_u8Direction)
		{
			SET_BIT(GPIOA -> DDR,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Direction)
		{
			CLEAR_BIT(GPIOA -> DDR,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTB:
	{
		if(MDIO_OUTPUT==ARG_u8Direction)
		{
			SET_BIT(GPIOB -> DDR,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Direction)
		{
			CLEAR_BIT(GPIOB -> DDR,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTC:
	{
		if(MDIO_OUTPUT==ARG_u8Direction)
		{
			SET_BIT(GPIOC -> DDR,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Direction)
		{
			CLEAR_BIT(GPIOC -> DDR,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTD:
	{
		if(MDIO_OUTPUT==ARG_u8Direction)
		{
			SET_BIT(GPIOD -> DDR,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Direction)
		{
			CLEAR_BIT(GPIOD -> DDR,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	default:
	{
		break;
	}
		}
		return;
}
void MDIO_voidSetPinValue(u8 ARG_u8Port, u8 ARG_u8Pin,u8 ARG_u8Value)
{
	switch(ARG_u8Port)
	{
	case MDIO_PORTA:
	{
		if(MDIO_OUTPUT==ARG_u8Value)
		{
			SET_BIT(GPIOA -> PORT,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Value)
		{
			CLEAR_BIT(GPIOA -> PORT,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTB:
	{
		if(MDIO_OUTPUT==ARG_u8Value)
		{
			SET_BIT(GPIOB -> PORT,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Value)
		{
			CLEAR_BIT(GPIOB -> PORT,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTC:
	{
		if(MDIO_OUTPUT==ARG_u8Value)
		{
			SET_BIT(GPIOC -> PORT,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Value)
		{
			CLEAR_BIT(GPIOC -> PORT,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	case MDIO_PORTD:
	{
		if(MDIO_OUTPUT==ARG_u8Value)
		{
			SET_BIT(GPIOD -> PORT,ARG_u8Pin);
		}
		else if(MDIO_INPUT==ARG_u8Value)
		{
			CLEAR_BIT(GPIOD -> PORT,ARG_u8Pin);
		}
		else
		{
			//error
		}
		break;
	}
	default:
	{
		break;
	}
	}
	return;
}

u8 MDIO_u8GetPinValue(u8 ARG_u8Port,u8 ARG_u8Pin)
{

	u8 L_MDIO_PortInput;
	switch(ARG_u8Port)
	{
	case MDIO_PORTA:
	{
		L_MDIO_PortInput =GET_BIT(GPIOA->PORT,ARG_u8Pin);
		break;
	}
	case MDIO_PORTB:
	{
		L_MDIO_PortInput =GET_BIT(GPIOB->PORT,ARG_u8Pin);
		break;
	}
	case MDIO_PORTC:
	{
		L_MDIO_PortInput =GET_BIT(GPIOC->PORT,ARG_u8Pin);
		break;
	}
	case MDIO_PORTD:
	{
		L_MDIO_PortInput =GET_BIT(GPIOD->PORT,ARG_u8Pin);
		break;
	}
	}
	return L_MDIO_PortInput;
}






