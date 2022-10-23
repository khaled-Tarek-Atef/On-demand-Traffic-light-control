/*
 * timer.h
 *
 * Created: 10/6/2022 5:10:26 PM
 * Author: khaled
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Utils/types.h"
#include "../../Utils/Registers.h"
#include "../../Utils/bit_manipulation.h"
#include "../DIO Driver/dio.h"
#include <math.h>

void Timer0_init_N();
void Timer0_N_delay_ms(uint16_t millisec);

#endif /* TIMER_H_ */