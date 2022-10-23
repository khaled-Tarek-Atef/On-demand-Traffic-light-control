/*
 * Application.c
 *
 * Created: 10/8/2022 4:50:40 PM
 * Author: khaled
 */ 
#include "Application.h"
uint8_t car,flag=0,flag2=0;

void APP_init(void)
{
		car=1;
		LED_init(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_init(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_init(LED_CAR_PORT,LED_CAR_RED_PIN);
		
		//Pedestrian LED initialization
		LED_init(LED_PED_PORT,LED_PED_RED_PIN);
		LED_init(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_init(LED_PED_PORT,LED_PED_GREEN_PIN);
		
		//Button initialization
		BUTTON_init(BUTTON_PORT,BUTTON_PIN);
		
		//Timer initialization
		Timer0_init_N();
			
		//Enable Global interrupts & setup rising edge detection for button
		sei();
		RISING_EDGE_SETUP();
		SETUP_INT0();
}

void APP_start(void)
{
	// Red
	if(flag || flag2)
	{
	}
	else
	{
	for(int i =0;i<10;i++)
    {
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
	if(car)
	{
	LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
	Timer0_N_delay_ms(500);
	}
	else
	{
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		car=1;
		break;
	  }
     }
	}
	//  Yellow
	if(flag2)
	{
		flag2=0;
	}
	else{
	for(int i =0;i<10;i++)
	{
	flag2=0;
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);                                                                                           
	LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);                                                                                                   
		if(car){
	LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	Timer0_N_delay_ms(500);
	}
	else
	{
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++)
		{
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
		}
			LED_off(LED_PED_PORT,LED_PED_RED_PIN);
			LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
			LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
			LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
			Timer0_N_delay_ms(5000);
			LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
			LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
			car=1;
			flag2=1;
			break;
	}
}
	}
	//Green
	if(flag2)
	{
	}
	else{
	for(int i =0;i<10;i++)
	{
		flag=0;
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		if(car)
		{
	LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
	LED_on(LED_CAR_PORT,LED_CAR_GREEN_PIN);
	Timer0_N_delay_ms(500);
	}
	else
	{
		//LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++)
		{
			LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);  
			LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);  
			LED_off(LED_PED_PORT,LED_PED_RED_PIN);  
			LED_off(LED_PED_PORT,LED_PED_GREEN_PIN); 
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
		}
		LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		car=1;
		flag=1;
		break;
	   }
      }
	}
	
	//Yellow
	if(flag)
	{
		
	}
	else{
	for(int i =0;i<10;i++)
	{
	LED_on(LED_PED_PORT,LED_PED_RED_PIN);
	LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN); 
	LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);  
		if(car){
		LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		Timer0_N_delay_ms(500);
	}
	else
	{
		LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN);
		LED_on(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		for(int i =0;i<10;i++)
		{
			LED_off(LED_CAR_PORT,LED_CAR_GREEN_PIN); 
			LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);  
			LED_off(LED_PED_PORT,LED_PED_RED_PIN); 
			LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);  
			LED_toggle(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
			LED_toggle(LED_PED_PORT,LED_PED_YELLOW_PIN);
			Timer0_N_delay_ms(500);
		}
		LED_off(LED_PED_PORT,LED_PED_RED_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_YELLOW_PIN);
		LED_off(LED_PED_PORT,LED_PED_YELLOW_PIN);
		LED_on(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_on(LED_CAR_PORT,LED_CAR_RED_PIN);
		Timer0_N_delay_ms(5000);
		LED_off(LED_PED_PORT,LED_PED_GREEN_PIN);
		LED_off(LED_CAR_PORT,LED_CAR_RED_PIN);
		car=1;
		break;
	}
  }
	}
}

ISR(EXT_INT_0){car = 0;}