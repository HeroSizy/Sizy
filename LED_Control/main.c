/*
 * FIR Implementation in C Project
 */

#include <usbstk5515.h>
#include <usbstk5515_i2c.h>
#include <AIC_func.h>
#include <stdio.h>
#include "firc.h"

#define TCR0		*((ioport volatile Uint16 *) 0x1810)
#define TIMCNT1_0	*((ioport volatile Uint16 *) 0x1814)
#define TIME_START	0x8001
#define TIME_STOP	0x8000

Int16 in_left[TAPS] = {0};
Int16 in_right[TAPS] = {0};
void main(void)
{
	Uint16 i=0;
	Int16 right, left; //AIC inputs
	Int16 out_left, out_right; //AIC output
	USBSTK5515_init(); 	//Initializing the Processor
	AIC_init(); 		//Initializing the Audio Codec
	TCR0 = TIME_STOP;
	TCR0 = TIME_START;
	
	while(1)
	{
		if (i >= TAPS) {
			i=0;
			}
		AIC_read2(&right, &left);
		in_right[i] = right; 
		out_right = firc(in_right);
		in_left[i] = left;
		out_left = firc(in_left);
		
		//r_right[0]=x_right[0]; //Audio Bypass
		// POSTFILTER:
		AIC_write2(out_right, out_left);
		i++;
	}
}
