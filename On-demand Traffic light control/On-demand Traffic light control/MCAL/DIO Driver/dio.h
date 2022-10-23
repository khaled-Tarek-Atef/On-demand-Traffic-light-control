/*
 * dio.h
 *
 * Created: 10/5/2022 5:59:20 PM
 * Author: khaled
 */ 

#ifndef DIO_H_
#define DIO_H_

#include "../../Utils/types.h"
#include "../../Utils/Registers.h"
#include "../../Utils/bit_manipulation.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1

void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction);
void DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t *value);
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value);
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber);



#endif /* DIO_H_ */