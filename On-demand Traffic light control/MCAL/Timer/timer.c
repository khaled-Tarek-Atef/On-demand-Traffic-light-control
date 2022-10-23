/*
 * timer.c
 *
 * Created: 10/6/2022 5:27:26 PM
 * Author: khaled
 */ 
#include "timer.h"

void Timer0_init_N()
{
	TCCR0 = 0x00;    //Normal mode
	TCNT0 = 0x00;
}
void Timer0_N_delay_ms(uint16_t delay_ms)
{
	/* 265 p_rescalier
	 * FCPU 1Mhz
	 * using normal mode
	 */
	double Ttick, TmaxDelay;
	uint16_t Noverflows,TInitial; 
	uint32_t overFlowcnt=0;
	Ttick = 256.0/1000.0;
	TmaxDelay = Ttick*pow(2,8);
	if(delay_ms < TmaxDelay)
	{
		TInitial = (TmaxDelay-delay_ms)/Ttick;
		Noverflows = 1;
	}
	else if(delay_ms == TmaxDelay)
	{
		TInitial = 0;
		Noverflows = 1;
	}
	else
	{
		Noverflows = ceil(delay_ms/TmaxDelay);
		TInitial = 256.0 - ((delay_ms/Ttick)/Noverflows);
	}
	TCNT0 = TInitial;
		TCCR0 |= (1<<2);    //set 256 p_rescaling
		while(overFlowcnt<Noverflows)
		{
			while(READ_BIT(TIFR,0)==0);
			SET_BIT(TIFR,0);
			overFlowcnt++;
		}
		TCCR0 = 0x00;
		TCNT0 = 0x00;
}