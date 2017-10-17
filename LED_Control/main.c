/*
 * main.c
 *      Toggle LEDs: Blue, Yellow, Red, Green
 * 		TI C5515 eZDSP
 * 		EE4413 - NTU Singapore - EEE
 * 		7/7/2017 
 */

#include <usbstk5515.h>
#include <stdio.h>
#include "sar.h"
#include "AIC_func.h"

//Addresses of the MMIO for the GPIO out registers: 1,2 
#define LED_OUT1 *((ioport volatile Uint16*) 0x1C0A /*__GPIO_Data_Out_Register1_*/  )
#define LED_OUT2 *((ioport volatile Uint16*) 0x1C0B /*__GPIO_Data_Out_Register2_*/ )
//Addresses of the MMIO for the GPIO direction registers: 1,2
#define LED_DIR1 *((ioport volatile Uint16*) 0x1C06 /*__GPIO_Direction_Register1_*/ )
#define LED_DIR2 *((ioport volatile Uint16*) 0x1C07 /*__GPIO_Direction_Register2_*/ )


//Toggles LED specified by index Range 0 to 3
void toggle_LED(int index)
{
	if(index == 3)  //Blue
		LED_OUT1 = LED_OUT1 ^ (Uint16)(1<< 14);
	else if(index == 2)  //Yellow(ish)
		LED_OUT1 = LED_OUT1 ^ (Uint16)(1<< 15);
	else if(index == 1)  //Red
		LED_OUT2 = LED_OUT2 ^ (Uint16)(1<< 0);
	else if(index == 0)  //Green
		LED_OUT2 = LED_OUT2 ^ (Uint16)(1<< 1);
}

//Makes the GPIO associated with the LEDs the correct direction; turns them off
void My_LED_init()
{
	Uint16 temp=0x00;
	Uint16 temp2=0x01;
	temp |=(1<<14);
	temp |=(Uint16)(1<<15);
	LED_DIR1 |= temp; // set Yellow, Blue (14,15) as OUTPUT
	temp2 |=(1<<1);
	LED_DIR2 |= temp2; // set Red, Green (0,1) as OUTPUT

	LED_OUT1 |= temp;  //Set LEDs 0, 1 to off
	LED_OUT2 |= temp2;  //Set LEDs 2, 3 to off
}

void switch_LED(Uint16 sar) {
	if (sar == SW1) {
		toggle_LED(0);
		toggle_LED(1);
	}
	
	if (sar == SW2) {
		toggle_LED(2);
		toggle_LED(3);
	}
	
	if (sar == SW12) {
		toggle_LED(0);
		toggle_LED(2);
	}
}

void main(void)
{
	Int16 x_right[1], x_left[1];	//inputs
	Int16 r_right[1], r_left[1];	//outputs
//	Uint16 value;
	USBSTK5515_init(); //Initializing the Processor
//	Init_SAR();
	AIC_init();
//	My_LED_init();
	while(1)
	{
		/*printf("Which LED shall we toggle(0, 1, 2, or 3)?\n");
		scanf("%d",&value);
		value = Get_Sar_Key();
		switch_LED(value);
		toggle_LED(value);*/
		AIC_read2(x_right, x_left);
		r_right[0] = x_right[0];
		r_left[0] = x_left[0];
		AIC_write2(r_right[0], r_left[0]);
	}
}
