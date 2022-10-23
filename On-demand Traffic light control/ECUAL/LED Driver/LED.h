/*
 * LED.h
 *
 * Created: 10/7/2022 12:24:40 PM
 *  Author: khaled
 */ 
#include "../../MCAL/DIO Driver/dio.h"

#ifndef LED_H_
#define LED_H_
#define LED_CAR_PORT PORT_A
#define LED_PED_PORT PORT_B
#define LED_CAR_RED_PIN 2
#define LED_CAR_YELLOW_PIN 1
#define LED_CAR_GREEN_PIN 0
#define LED_PED_RED_PIN 2
#define LED_PED_YELLOW_PIN 1
#define LED_PED_GREEN_PIN 0

void LED_init(uint8_t LedPort,uint8_t LedPin);
void LED_on(uint8_t LedPort,uint8_t LedPin);
void LED_off(uint8_t LedPort,uint8_t LedPin);
void LED_toggle(uint8_t LedPort,uint8_t LedPin);



#endif /* LED_H_ */