#include <usbstk5515.h>
#include <usbstk5515_interrupts.h>
#include <usbstk5515_led.h>
#include <AIC_func.h>
#include <stdio.h>
#include <usbstk5515_spi.h>


Uint32 Timer_count = 0;
Int16  Data_In_Buff[64];
Int16  Data_Out_Buff[64];
Uint16 mask = 512;
Uint32 DBO_index = 0;
Int16* Data_Out_ptr = Data_Out_Buff;
Uint32 Out_going = 0;
void Reset();

interrupt void Timer_Handler()
{
	Timer_count++;
//	T_INT_0 = 0x0001;
	TIAFR = 0x0001;
	//printf("In interrupt Handler\n");
}

Uint16 time_set;
Uint32 reset_loc = (Uint32)Reset;

void Timer_setup()
{

	//Set up Interrupt Vector Pointer Table
	IVPD = reset_loc >> 8;
	IVPH = reset_loc >> 8;

	*((Uint32*)((reset_loc + TINT)>>1)) = (Uint32)Timer_Handler; //Table points to our handler


	IER0 |= (1 << TINT_BIT);//enable interrupt
	IFR0 &= (1 << TINT_BIT);//clear the flag

	TCR0 = TIME_STOP;
	TPR0_0  = 199; //Set all counters and period regs to the same value
	TPR1_0 = TCR0_0 = TCR1_0 = 0;

	TIAFR = 0x0007;//Set the three bits to zero
	TCR0 |= TIME_START_AUTOLOAD;
}

interrupt void SPI_ISR(void)
{
	IFR0 &= (1 << SPI_BIT);//clear the flag
	Out_going++;
}

void SPI_Setup()
{
	SPICDR = 99; //	clock divide 100MHz to 1MHz
	SPIDCR1 = 1 << 1;//Chip select 0 active high
	SPICMD1 = 1 << 14; //Character Interrupt
	SPICMD2 = (0xF << 3); //Set character Length to 16bits

	//Make interrupt
	*((Uint32*)((reset_loc + SPI_OFFSET)>>1)) = (Uint32)SPI_ISR;

	IER0 |= (1 << SPI_BIT);//enable interrupt
	IFR0 &= (1 << SPI_BIT);//clear the flag
}
void SPI_Send(Int16 *data)
{
	//Frame length in Command register 1

	//Set Character length

	//save data into data reg 2 then data reg 1
	SPIDAT2 = *data;
	//then set the Command register 2 to write
	SPICMD2 |=  0x2;
}

interrupt void I2S_ISR()
{
	Int16 right, left, /*out,*/ x;
	x = (Int16)((1L << 16) / 480);
	AIC_read2(&right, &left);
	//out = fir_filter(right);
	if(right < 0) right = right * -1;
	right = right / x;
	right += 31;
	Data_Out_Buff[DBO_index++] = right;
}

void I2S_Setup()
{
	*((Uint32*)((reset_loc + I2S_ISR_OFFSET)>>1)) = (Uint32)I2S_ISR;

	IER0 |= (1 << I2S_BIT_POS);//enable interrupt
	IFR0 &= (1 << I2S_BIT_POS);//clear the flag
}

void main(void)
{
//	printf("Timer Setup\n");
	USBSTK5515_init();
	USBSTK5515_ULED_init();
	SPI_Setup();

	Timer_setup();
	I2S_Setup();
	AIC_init();
	_enable_interrupts();

	if(IER0 == 0)
	{
		printf("WTF, no enabled interrupts\n");
		goto TERMINATE;
	}

	while(1)
	{
		/*if(Timer_count >= (Uint32)(1000L * 48L))
		{
			Timer_count = 0;
			LEDs = LEDs << 1;
			if(LEDs >= 0xF) LEDs = 1;
			USBSTK5515_ULED_setall(LEDs);
			SPI_Send(LEDs);
		}*/
		if(DBO_index >= 512)
		{
			DBO_index = 0;
			while(Out_going < 512)
			{
				SPI_Send(Data_Out_Buff + Out_going);
			}
			Out_going = 0;
		}
	}
TERMINATE:
printf("TERMINATING\n");

}

