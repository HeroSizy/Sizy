//*****************************************************************************
//  Filename:	 cifft_t.c
//  Version:	 1.0
//  Description: test for cifft routine
//*****************************************************************************

#include <math.h>
#include <tms320.h>
#include <dsplib.h>

//#include "t1_SCALE.h"
//#include "t2_SCALE.h"
//#include "t3_SCALE.h"
//#include "t4_SCALE.h"
//#include "t5_SCALE.h"
//#include "t6_SCALE.h"
//#include "t7_SCALE.h"
//#include "t8_SCALE.h"
//#include "t10_SCALE.h"
//#include "t11_SCALE.h"
//#include "t12_SCALE.h"

//#include "t2_NOSCALE.h"
//#include "t3_NOSCALE.h"
//#include "t4_NOSCALE.h"
//#include "t5_NOSCALE.h"
//#include "t6_NOSCALE.h"	
//#include "t7_NOSCALE.h"
#include "t8_NOSCALE.h"

short i;
short eflag= PASS;

void main()
{
    // compute
    //cifft(x,NX,SCALE);
    cifft(x,NX,NOSCALE);
    cbrev(x,x,NX);
    // test
    eflag = test(x,rtest, NX, MAXERROR);

    if(eflag != PASS)
    {
        exit(-1);
    }

    return;
}
