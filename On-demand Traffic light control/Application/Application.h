/*
 * Application.h
 *
 * Created: 10/8/2022 4:50:02 PM
 * Author: khaled
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../ECUAL/LED Driver/LED.h"
#include "../ECUAL/Button Driver/Button.h"
#include "../MCAL/Timer/timer.h"
#include "../Utils/interruptes.h"

void APP_init(void);
void APP_start(void);
#endif /* APPLICATION_H_ */