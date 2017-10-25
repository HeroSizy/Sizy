/*
 * FIR Implementation in C Project
 */

#include <usbstk5515.h>
#include <usbstk5515_i2c.h>
#include <AIC_func.h>
#include <stdio.h>
#include <math.h>
#include <tms320.h>
#include <dsplib.h>
#include "firc.h"

#define TCR0		*((ioport volatile Uint16 *) 0x1810)
#define TIMCNT1_0	*((ioport volatile Uint16 *) 0x1814)
#define TIME_START	0x8001
#define TIME_STOP	0x8000

DATA LP[TAPS] = { 
	#include "lpf.dat" 
};

Uint16 in_left[TAPS]/* = {0}*/;
Uint16 in_right[TAPS]/* = {0}*/;

DATA dbuffer_left[TAPS + 2]/* = {0}*/;
DATA dbuffer_right[TAPS + 2]/* = {0}*/;

void main(void)
{
	DATA right, left; //AIC inputs
	DATA out_left, out_right; //AIC output
	Uint16 start_time;
	Uint16 end_time;
	Uint16 delta_time;
	USBSTK5515_init(); 	//Initializing the Processor
	AIC_init(); 		//Initializing the Audio Codec
	


	
	while(1)
	{
		AIC_read2(&right, &left);
		start_time = TIMCNT1_0;
		fir(&right, &LP, &out_right, &dbuffer_right, 1, TAPS);
		fir(&left, &LP, &out_left, &dbuffer_left, 1, TAPS);
		end_time = TIMCNT1_0;
		delta_time = start_time - end_time;
		AIC_write2(out_right, out_left);
	}
}
