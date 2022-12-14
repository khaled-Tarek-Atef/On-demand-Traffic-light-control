/*
 * interruptes.h
 *
 * Created: 10/5/2022 5:27:26 PM
 * Author: khaled
 */ 
#ifndef INTERRUPTES_H_
#define INTERRUPTES_H_
#include "Registers.h"

//Interrupt vectors
#define EXT_INT_0 __vector_1

//Enable interrupts
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")

//Rising edge
#define RISING_EDGE_SETUP() MCUCR|= (1<<1) | (1<<0)

//Setup use INT0
#define SETUP_INT0() GICR|=(1<<6)

//ISR macro
#define ISR(INT_VECT) \
void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)

#endif /* INTERRUPTES_H_ */