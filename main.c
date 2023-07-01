/*
 * DIO.c
 *
 * Created: 6/30/2023 11:44:48 PM
 * Author : Abdallah Medhat
 */ 


#include "DIO_INTERFACE.h"


int main(void)
{
   Dio_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_PIN_OUTPUT);
    while (1) 
    {
			Dio_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_PIN_HIGH);
    }
}

