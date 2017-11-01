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
#include <Dsplib.h>
#include "firc.h"

#define TCR0		*((ioport volatile Uint16 *) 0x1810)
#define TIMCNT1_0	*((ioport volatile Uint16 *) 0x1814)
#define TIME_START	0x8001
#define TIME_STOP	0x8000

Int16 LP[TAPS] = { 
	#include "lpf.dat" 
};

void main(void)
{
	Int16 right[1], left[1]; 					//AIC inputs
	Int16 out_left[1], out_right[1]; 			//AIC output
	Int16 dbuffer_left[TAPS + 2], dbuffer_right[TAPS + 2]; 	//debuffer
//	Uint16 start_time;
//	Uint16 end_time;
//	Uint16 delta_time;
	USBSTK5515_init(); 					//Initializing the Processor
	AIC_init(); 						//Initializing the Audio Codec
	


	
	while(1)
	{
		AIC_read2(&right[0], &left[0]);
//		start_time = TIMCNT1_0;
		fir(&right[0], &LP[0], &out_right[0], &dbuffer_right[0], 1, TAPS);
		fir(&left[0], &LP[0], &out_left[0], &dbuffer_left[0], 1, TAPS);
//		end_time = TIMCNT1_0;
//		delta_time = start_time - end_time;
		AIC_write2(out_right[0], out_left[0]);
	}
}
