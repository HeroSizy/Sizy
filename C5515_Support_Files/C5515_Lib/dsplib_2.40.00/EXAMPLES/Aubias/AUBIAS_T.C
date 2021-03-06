//=============================================================================
//  Filename:	 aubias_t.c
//  Version:	 2.00
//  Description: test for real auto-correlation (unbiased)
//=============================================================================
#include <math.h>
#include <stdio.h>
#include <tms320.h>
#include <dsplib.h>
#include <dsplib_c.h>

//#include "t1.h"
//#include "t2.h"
//#include "t3.h"
#include "t4.h"
//#include "t5.h"
//#include "t6.h"
//#include "t7.h"
//#include "t8.h"	
//#include "test.h"


short i;
short eflag=PASS; 	       // error flag (-1: no error; else error)
DATA elevel;		       // error level detected
DATA emax=0;
DATA r[NLAGS];

//array for C model 
DATA CMODELERROR=0;
DATA rc[NLAGS];

void main()
{
ushort of;
    //clear
    for (i=0;i<NLAGS;i++) r[i] =0;

    // compute
    of = acorr(x,r,NX,NLAGS,unbias);
    acorr_c(x,rc,NX,NLAGS,unbias);

    // test  
    eflag=test(r, rtest, NLAGS, MAXERROR);

    if(eflag != PASS)
    {
        exit(-1);
    }

    // C model test
    eflag=test(r, rc, NLAGS, CMODELERROR);
    
    if(eflag != PASS)
    {
        exit(-1);
    }

    return;
}
