/*
 * Button.h
 *
 * Created: 10/7/2022 10:24:26 PM
 *  Author: khaled
 */ 

#include "../../MCAL/DIO Driver/dio.h"

#ifndef BUTTON_H_
#define BUTTON_H_
#define BUTTON_PORT PORT_D
#define BUTTON_PIN 2

void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);


#endif /* BUTTON_H_ */