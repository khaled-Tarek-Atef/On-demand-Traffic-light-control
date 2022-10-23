/*
 * Button.c
 *
 * Created: 10/7/2022 10:25:10 PM
 *  Author: khaled
 */ 

#include "Button.h"

void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin)
{
	DIO_init(buttonPort,buttonPin,IN);
}

void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value)
{
	DIO_read(buttonPort,buttonPin,value);
}