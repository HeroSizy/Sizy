/* Test for logn: rand */
#define NX 300
#define FNAME "t8"
#define MAXERROR 100

DATA x[NX] ={
26873,
25939,
2572,
13893,
6073,
20509,
19309,
20043,
18235,
10369,
19879,
5603,
18083,
9133,
18925,
8864,
17861,
14640,
26818,
18576,
17854,
8316,
25592,
19280,
17568,
19405,
22872,
26222,
16726,
19299,
5423,
17292,
16159,
26433,
14783,
19537,
19017,
7267,
18004,
21980,
23703,
18014,
20161,
5433,
15907,
18249,
24368,
13022,
13798,
14290,
4286,
6467,
1413,
21325,
8527,
15980,
13486,
11873,
20861,
16607,
25951,
18879,
25557,
29253,
11781,
5105,
18516,
11769,
19622,
21299,
20946,
10438,
16973,
5456,
23678,
15654,
18169,
13671,
24434,
10746,
18920,
16154,
29294,
16176,
17204,
17432,
16590,
16096,
18834,
10592,
21251,
2076,
21527,
15991,
5533,
14442,
10996,
23374,
17295,
17490,
17374,
23765,
12777,
10066,
23532,
5155,
13301,
17320,
23344,
26106,
8516,
18497,
12925,
13086,
15374,
12429,
13156,
20077,
9282,
4998,
20223,
14110,
25366,
12236,
12604,
6908,
28019,
21588,
17747,
6467,
18571,
20400,
24260,
10973,
26526,
24295,
13700,
17240,
21351,
28261,
14334,
11233,
14020,
18985,
15897,
17259,
19059,
26255,
23929,
20647,
16693,
19335,
22746,
12614,
13267,
8086,
15720,
28844,
27655,
17907,
16738,
9740,
8654,
11049,
15448,
14459,
8410,
15055,
7077,
22975,
16362,
14940,
24799,
24971,
14271,
10905,
15508,
17447,
18747,
27299,
23892,
23888,
17768,
13090,
6048,
5955,
23757,
18544,
16293,
6782,
15385,
6079,
19105,
16695,
17467,
7573,
23018,
12399,
15139,
6164,
5570,
22166,
15528,
21151,
9362,
25178,
8481,
13632,
26339,
8298,
23388,
16711,
13382,
13419,
16011,
20155,
19928,
21340,
15791,
20797,
16109,
19580,
23531,
13667,
5528,
5480,
7721,
16273,
22447,
7110,
27805,
12227,
5139,
6760,
14997,
18220,
11037,
6227,
6502,
2671,
21344,
9729,
13469,
19427,
31469,
24313,
7508,
32175,
14175,
18533,
20083,
28879,
22395,
5534,
10090,
16631,
15647,
9399,
31184,
22987,
11578,
25120,
19348,
22326,
14084,
22626,
20305,
18294,
2354,
13416,
11409,
13599,
9365,
13166,
16227,
20124,
11355,
14540,
13927,
11507,
24919,
17587,
16540,
16193,
19629,
4871,
11933,
7828,
7157,
28253,
10599,
28140,
14001,
5208,
6317,
12064,
22332,
8044,
2074,
15011,
};

long rtest[] ={
-9375,
-11049,
-120309,
-40565,
-79685,
-22152,
-25003,
-23240,
-27709,
-54394,
-23628,
-83495,
-28104,
-60395,
-25952,
-61807,
-28688,
-38087,
-9473,
-26832,
-28707,
-64825,
-11685,
-25074,
-29471,
-24768,
-16997,
-10534,
-31791,
-25027,
-85034,
-30217,
-33422,
-10156,
-37630,
-24447,
-25722,
-71198,
-28310,
-18877,
-15310,
-28283,
-22961,
-84948,
-34164,
-27671,
-14002,
-43624,
-40890,
-39232,
-96165,
-76713,
-148608,
-20309,
-63642,
-33947,
-41971,
-47991,
-21347,
-32128,
-11027,
-26066,
-11749,
-5364,
-48359,
-87891,
-26986,
-48407,
-24243,
-20364,
-21156,
-54083,
-31097,
-84750,
-15359,
-34924,
-27878,
-41327,
-13873,
-52707,
-25965,
-33435,
-5298,
-33373,
-30460,
-29838,
-32176,
-33606,
-26181,
-53390,
-20472,
-130435,
-19863,
-33917,
-84087,
-38732,
-51619,
-15970,
-30209,
-29680,
-29994,
-15187,
-44525,
-55800,
-15653,
-87434,
-42623,
-30141,
-16032,
-10745,
-63702,
-27034,
-43980,
-43394,
-35777,
-45829,
-43141,
-23158,
-59628,
-88895,
-22817,
-39832,
-12103,
-46567,
-45169,
-73594,
-7402,
-19729,
-28990,
-76715,
-26844,
-22404,
-14211,
-51718,
-9990,
-14143,
-41225,
-30361,
-20250,
-6995,
-39086,
-50610,
-40135,
-25803,
-34193,
-30310,
-25618,
-10476,
-14860,
-21834,
-31885,
-24939,
-17259,
-45130,
-42745,
-66152,
-34725,
-6030,
-8020,
-28566,
-31757,
-57355,
-62940,
-51393,
-35550,
-38675,
-64295,
-36766,
-72455,
-16786,
-32832,
-37129,
-13174,
-12846,
-39296,
-52011,
-35367,
-29797,
-26400,
-8633,
-14934,
-14942,
-28934,
-43381,
-79880,
-80613,
-15203,
-26914,
-33031,
-74463,
-35742,
-79635,
-25506,
-31879,
-29742,
-69253,
-16695,
-45944,
-36503,
-78983,
-83774,
-18480,
-35305,
-20695,
-59226,
-12457,
-63899,
-41461,
-10324,
-64929,
-15943,
-31835,
-42335,
-42205,
-33857,
-22976,
-23511,
-20275,
-34510,
-21492,
-33570,
-24344,
-15654,
-41339,
-84132,
-84542,
-68336,
-33090,
-17884,
-72234,
-7764,
-46602,
-87578,
-74618,
-36949,
-27747,
-51443,
-78500,
-76460,
-118521,
-20265,
-57409,
-42031,
-24715,
-1912,
-14108,
-69655,
-863,
-39614,
-26941,
-23144,
-5972,
-17993,
-84080,
-55685,
-32060,
-34944,
-59038,
-2343,
-16760,
-49180,
-12565,
-24907,
-18138,
-39919,
-17508,
-22625,
-27554,
-124491,
-42215,
-49876,
-41575,
-59210,
-43104,
-33223,
-23049,
-50102,
-38414,
-40450,
-49473,
-12944,
-29417,
-32319,
-33321,
-24224,
-90107,
-47755,
-67683,
-71923,
-7009,
-53359,
-7197,
-40199,
-86953,
-77821,
-47239,
-18127,
-66399,
-130487,
-36907,
};

long r[NX];

