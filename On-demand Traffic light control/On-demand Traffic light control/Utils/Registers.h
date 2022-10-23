/*
 * Registers.h
 *
 * Created: 10/5/2022 5:20:26 PM
 * Author: khaled
 */ 
#include "types.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_

/**************************************     DIO Registers   *************************************/

/*********   PORT A Registers   ***************/

#define DDRA *((volatile uint8_t*)(0x3A))
#define PORTA *((volatile uint8_t*)(0x3B))
#define PINA *((volatile uint8_t*)(0x39))

/*********   PORT B Registers   ***************/

#define DDRB *((volatile uint8_t*)(0x37))
#define PORTB *((volatile uint8_t*)(0x38))
#define PINB *((volatile uint8_t*)(0x36))

/*********   PORT C Registers   ***************/

#define DDRC *((volatile uint8_t*)(0x34))
#define PORTC *((volatile uint8_t*)(0x35))
#define PINC *((volatile uint8_t*)(0x33))

/*********   PORT D Registers   ***************/

#define DDRD *((volatile uint8_t*)(0x31))
#define PORTD *((volatile uint8_t*)(0x32))
#define PIND *((volatile uint8_t*)(0x30))


/**************************************     Timer0 Registers   *************************************/

#define TCCR0 (*(volatile uint8_t*)(0x53))
#define TCNT0 (*(volatile uint8_t*)(0x52))
#define TIFR (*(volatile uint8_t*)(0x58))
#define TIMSK (*(volatile uint8_t*)(0x59))
#define OCR0 (*(volatile uint8_t*)(0x5C))


/**************************************     Interrupt REGISTERS   *************************************/

#define SREG (*(volatile uint8_t*)(0x5F))
#define GICR (*(volatile uint8_t*)(0x5B))
#define MCUCR (*(volatile uint8_t*)(0x55))

#endif /* REGISTERS_H_ */