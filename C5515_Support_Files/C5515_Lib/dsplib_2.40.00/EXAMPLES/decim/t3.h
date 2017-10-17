/* Test for decimate: nois */
#define NX 500
#define NH 31
#define D 20
#define FNAME "t3"
#define MAXERROR 100

DATA x[NX] ={
-15897,
-6941,
10378,
15908,
-15816,
10465,
3969,
1973,
-8388,
10551,
-7760,
8311,
5231,
-9370,
3346,
3438,
5226,
-10376,
4474,
-10804,
1297,
4043,
6091,
5811,
12347,
-15962,
-6213,
9144,
-6315,
13981,
5856,
-13949,
-14069,
-15994,
-8941,
532,
-1370,
6658,
2702,
301,
-13950,
-10053,
-3946,
-7326,
8876,
-6098,
4528,
15943,
94,
14670,
10748,
13682,
-12679,
10227,
13377,
-11260,
-12383,
8607,
7267,
4968,
8323,
5346,
12566,
-7466,
-2641,
-9405,
-15218,
-13725,
11487,
-5237,
-1110,
13558,
-8894,
11863,
5132,
12818,
-389,
16142,
-4151,
1028,
-10443,
63,
-2550,
5256,
5690,
14985,
-10097,
-12740,
2131,
15373,
-15606,
12131,
-15504,
639,
-10083,
7067,
-8170,
14216,
-11889,
708,
12949,
14496,
-5404,
-2053,
-946,
-11492,
-11932,
1064,
7398,
-3320,
-4640,
-7036,
12079,
4142,
-8482,
15665,
4603,
-8853,
5941,
5433,
-11970,
-15647,
-7793,
-12567,
-14113,
11564,
-10475,
-15322,
7665,
1196,
-7340,
-4311,
-15962,
12753,
11993,
-8053,
2276,
-11166,
3092,
-5535,
5197,
11915,
2215,
15744,
9562,
-11384,
10912,
-10098,
4554,
5537,
8915,
-3939,
-1915,
-556,
3542,
-10617,
-16318,
9510,
445,
-9397,
-12995,
-11229,
-3031,
-3023,
-14658,
14477,
-11470,
-3789,
-6192,
-10862,
12997,
-5809,
7667,
-2920,
-3284,
180,
-10837,
810,
4626,
-15854,
11037,
9943,
6481,
-1249,
-13677,
10509,
-10060,
-1791,
-15960,
-6268,
12299,
10985,
-5470,
12474,
-666,
1992,
3798,
5305,
3821,
6066,
332,
7011,
498,
3469,
15292,
10555,
-5972,
2873,
-12118,
-8050,
9929,
5499,
-15938,
2017,
-1489,
13269,
-7139,
-14253,
-768,
15850,
13839,
2005,
4991,
8935,
-12905,
-16349,
1368,
-16160,
-1595,
-9973,
9409,
3885,
-15876,
12807,
8575,
13337,
8472,
-3909,
-5535,
133,
2115,
8755,
9170,
-522,
9902,
-950,
-9740,
2608,
5455,
5792,
14500,
8852,
7779,
12001,
16087,
128,
4229,
9588,
-1683,
798,
-10766,
-12103,
-9215,
-12928,
-11750,
-1411,
9441,
-7175,
-9019,
13397,
-16144,
2907,
1380,
5030,
-6114,
-8810,
-2751,
-6593,
5650,
14360,
-5140,
2063,
-12489,
-10846,
-7246,
1861,
-473,
14818,
-8785,
-700,
869,
9591,
-10060,
13421,
13834,
-15950,
8767,
14658,
10266,
13888,
-9864,
5710,
13995,
-5118,
3096,
3784,
-16274,
15794,
13091,
6316,
-1978,
6587,
3595,
-6558,
11666,
-12712,
-6831,
-13191,
-3361,
-5463,
14556,
11093,
-7916,
-14979,
-16192,
2438,
7992,
10054,
4507,
-8151,
-11655,
4966,
14617,
10350,
14098,
-6228,
-7576,
1194,
-11034,
-9471,
-9280,
4973,
-14655,
-8871,
5486,
-6196,
-6337,
7231,
14889,
-12087,
-14147,
-12281,
-10940,
13481,
-11920,
3833,
-7571,
-9154,
6976,
1605,
14462,
-5575,
6700,
14530,
2673,
12456,
8179,
-3945,
7391,
-11050,
14948,
-9954,
9050,
3712,
-11067,
-15367,
-6927,
15435,
14761,
-8912,
15024,
5893,
-14583,
3271,
-3502,
-9327,
-10408,
-13869,
-16141,
9462,
-15802,
12384,
-4832,
7279,
15350,
-11284,
-11045,
-6115,
-15422,
-4666,
-15494,
9622,
16358,
-12772,
4017,
-12040,
-6225,
-11968,
-9067,
-3390,
-11956,
-8485,
14008,
-3569,
369,
-13340,
-15673,
-11157,
11289,
12424,
-10257,
16099,
6947,
12168,
-668,
-131,
-6963,
-14388,
-7784,
-10281,
13667,
-12345,
-15944,
-4270,
6509,
12758,
3072,
-11250,
-6007,
-8737,
-16109,
-3379,
4910,
-13599,
8808,
15391,
7038,
9239,
-8600,
-9971,
-7759,
7005,
15649,
4493,
1504,
11405,
9899,
5515,
5602,
10506,
15416,
-429,
10402,
4638,
-6346,
5273,
-4653,
14358,
-405,
-13403,
5696,
487,
-9124,
7373,
-14148,
15208,
-9580,
-11105,
4529,
-16377,
-5386,
-7370,
-14925,
-13308,
-2950,
10383,
12141,
-15645,
7444,
11403,
7490,
14912,
5123,
7939,
-5081,
12583,
-5006,
-14436,
7157,
15014,
};

#pragma DATA_SECTION (h,".coeffs")
DATA h[NH] ={
-57,
-65,
-79,
-88,
-69,
0,
145,
385,
724,
1151,
1639,
2146,
2619,
3004,
3257,
3344,
3257,
3004,
2619,
2146,
1639,
1151,
724,
385,
145,
0,
-69,
-88,
-79,
-65,
-57,
};

DATA rtest[] ={
28,
1080,
469,
1932,
-1651,
197,
-1243,
-5786,
3412,
-4279,
-1058,
2275,
-2239,
3581,
-4786,
-1238,
3609,
-673,
-3737,
4738,
-4050,
-4762,
-716,
416,
2605,
};

#pragma DATA_SECTION (db,".dbuffer")
DATA db[NH+1];
DATA r[NX/D];
