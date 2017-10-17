/* Test for latfor: rand */
#define NX 600
#define NK 12
#define FNAME "t5"
#define MAXERROR 10

DATA x[NX] ={
6288,
-698,
4902,
-5995,
-7122,
-2046,
-2072,
-262,
7692,
-2588,
-4052,
1391,
388,
-5515,
-223,
-65,
5623,
5017,
5862,
1798,
1077,
1833,
-6505,
-5598,
-1415,
990,
-3790,
4657,
-1837,
-7684,
1401,
959,
-4904,
-6760,
7098,
-3942,
-4847,
-7386,
1739,
759,
-6622,
2245,
-935,
-7104,
-2060,
-4111,
6961,
2122,
6198,
2321,
4889,
-1065,
7883,
-6620,
450,
748,
-3533,
-2117,
-7132,
734,
5511,
-5811,
-5382,
-7077,
5309,
-5997,
6304,
241,
7596,
-6218,
-7401,
-1964,
-1429,
-1616,
-1294,
-2016,
6674,
2788,
7567,
-5522,
4074,
-2063,
-750,
-7560,
1023,
-2092,
4797,
4837,
-1918,
-4050,
-2573,
7665,
-331,
-2157,
4335,
-2013,
6559,
-5187,
-2157,
6840,
261,
-6712,
3855,
-8115,
1690,
7485,
-1680,
3794,
3025,
7840,
-4853,
1529,
7398,
-3928,
240,
2234,
-1623,
-219,
4104,
-6124,
-7486,
-2115,
3167,
7141,
-367,
-6077,
-265,
7301,
-2167,
-2810,
4471,
-3321,
-5278,
3126,
-3868,
-692,
5631,
6250,
3277,
4189,
7774,
-1603,
-6041,
3682,
6546,
-5395,
-7487,
-341,
-6653,
2458,
7410,
-693,
604,
-7103,
-100,
-1351,
-3404,
-3446,
4159,
-6606,
-6932,
3619,
4340,
2588,
5086,
-2060,
-3175,
-2118,
3387,
-5433,
5140,
-553,
3642,
8108,
-2253,
3782,
2452,
2971,
-8067,
2526,
7295,
1856,
4635,
-8140,
4865,
2324,
-5268,
482,
-4608,
787,
-7238,
1435,
-1375,
-5137,
-7145,
-6967,
-3112,
7276,
7876,
903,
8004,
3139,
-4233,
5076,
7119,
-6082,
3061,
-3322,
2412,
-594,
6927,
-4232,
2624,
-2748,
-381,
-512,
3374,
-4261,
3559,
5983,
-1458,
-1232,
7443,
6249,
3254,
-3188,
5396,
7710,
-3275,
8160,
-971,
-8090,
-3409,
3144,
-117,
-6824,
-4984,
7825,
-2192,
-5908,
-7950,
2304,
3895,
-7754,
-6518,
6444,
4323,
1354,
3038,
7654,
825,
4542,
1808,
8005,
-7401,
7953,
-4838,
6758,
2712,
-617,
-7400,
-648,
4914,
-3450,
3197,
-3944,
3494,
3611,
3822,
2004,
8025,
-5695,
-4861,
5232,
-7235,
631,
-5077,
1630,
-3404,
-6696,
111,
6294,
1893,
-7432,
7404,
-5423,
5352,
1825,
5690,
-6322,
2445,
-6311,
-436,
3001,
-6008,
-589,
-7025,
1331,
1081,
-4010,
-4285,
-7931,
-1888,
4216,
1231,
-1506,
-4986,
199,
3495,
6019,
3962,
8107,
6009,
-232,
6608,
-7859,
2241,
7275,
-7524,
-3512,
2904,
1412,
-7128,
6213,
-198,
6414,
4297,
2545,
7725,
-5388,
-5964,
4181,
-3060,
-602,
-2631,
-8034,
-2723,
-4148,
8095,
6645,
-2461,
-3635,
-6670,
-4251,
6581,
-2880,
1191,
-5160,
3898,
-6361,
-1905,
5937,
5850,
5232,
-4167,
6514,
1706,
-5903,
-5549,
6278,
7841,
1660,
-2264,
-4401,
-824,
2345,
-4174,
-524,
-42,
-6964,
4368,
-7449,
-5487,
4542,
-4778,
-4067,
-1695,
-316,
152,
2045,
2057,
8047,
-2307,
-3670,
2918,
144,
-3656,
1292,
5289,
7233,
-912,
-1258,
8130,
1870,
7276,
6752,
5161,
3107,
-3135,
953,
2241,
4409,
-7307,
-6311,
5669,
-5368,
-7586,
-3071,
5198,
-4348,
1433,
6950,
-2784,
-4824,
-2220,
7794,
3554,
2348,
4630,
-549,
-4386,
-2984,
4732,
2203,
2618,
616,
6868,
4596,
-2839,
3912,
-1020,
1504,
-6316,
-2963,
1996,
6464,
7595,
-7863,
-6379,
-1589,
-6600,
-3391,
2928,
7861,
-1648,
5257,
-6036,
5651,
-4379,
-7092,
-2761,
1233,
-5950,
6026,
-2797,
-197,
-1122,
-3923,
7914,
7630,
7349,
-791,
-2758,
-8065,
-5475,
5377,
2349,
-2912,
-7760,
-2368,
3996,
-3299,
-5223,
-1389,
6018,
2047,
-7288,
-1571,
-3245,
-5696,
-3127,
-8139,
-1025,
2890,
5291,
4192,
-5527,
853,
411,
6871,
-952,
-7458,
7612,
-7971,
852,
7116,
6531,
1933,
3276,
7194,
-785,
-5297,
1913,
301,
-2220,
4478,
5378,
-2975,
1573,
4617,
-7642,
5849,
2992,
4946,
6844,
-1833,
-459,
-6749,
6965,
2924,
2311,
8125,
-7,
-1146,
5393,
-6280,
1617,
-4567,
-1660,
-3258,
2188,
7291,
-8096,
5187,
3127,
7880,
-7049,
-7455,
3931,
5228,
-3918,
3343,
-3335,
-6844,
6150,
-6923,
3948,
-6143,
-922,
1515,
2234,
536,
-4772,
2846,
-4229,
3613,
-1639,
-1736,
-1450,
-5739,
6197,
-7836,
6944,
2173,
-7096,
2174,
4157,
4418,
5047,
710,
-244,
-963,
2073,
-6918,
722,
-4766,
-3768,
-3413,
5279,
-1450,
442,
6885,
-1980,
2276,
-5345,
4683,
-2202,
4537,
-2586,
4492,
-5770,
-5763,
2278,
-6662,
7025,
-244,
-5517,
-3664,
-6046,
-7812,
};

#pragma DATA_SECTION (k,".coeffs")
DATA k[NK] ={
0,
3790,
13849,
11901,
11382,
6277,
7862,
15845,
12837,
6713,
15685,
3227,
};

DATA rtest[] ={
6288,
-7536,
2501,
-9207,
-22,
11389,
2814,
-2925,
3456,
-13261,
-4910,
12675,
298,
-4227,
4597,
129,
7902,
-4634,
-12706,
-1927,
7517,
6067,
-3433,
-1438,
2708,
4721,
-11533,
2278,
-3301,
-3410,
14517,
4028,
-9893,
-8263,
12150,
-7877,
-1058,
-6141,
14772,
9318,
-15915,
-1217,
-142,
-4415,
3147,
3732,
11522,
-1106,
-7623,
-9948,
7130,
-5014,
9940,
-8744,
7516,
7394,
-8956,
-6247,
-7213,
11096,
10339,
-9681,
-8632,
5755,
15354,
-14079,
1902,
-8524,
12914,
-8392,
-5446,
10383,
6248,
-5063,
-8320,
1017,
9036,
637,
-5231,
-11163,
14713,
142,
-1658,
-10299,
7759,
2427,
5812,
-4184,
-12207,
823,
5010,
17168,
-10146,
-10660,
3962,
2650,
8605,
-15276,
-2206,
16497,
1577,
-16294,
7910,
-9411,
10279,
11271,
-17609,
4436,
3424,
1417,
-10582,
5490,
4377,
-1936,
-593,
-779,
2240,
-2535,
1923,
-10058,
2477,
8690,
8009,
808,
-17107,
-11327,
13200,
18490,
-13031,
-8308,
7951,
837,
-2405,
244,
-8639,
7588,
10840,
-2093,
-4412,
-5608,
322,
-2192,
-1900,
11778,
10464,
-17335,
-10662,
11333,
-334,
7459,
-128,
-11407,
5666,
-4645,
3563,
3853,
-6011,
-4229,
16145,
-10518,
-6691,
11638,
-649,
-231,
-1256,
-10999,
4800,
8613,
481,
-6987,
7179,
-7754,
6114,
3641,
-15602,
7832,
4786,
1730,
-10355,
7691,
4418,
-2029,
-5795,
-15881,
22843,
5243,
-12747,
-675,
-518,
6133,
-5721,
1616,
-2222,
3307,
-6713,
2642,
8422,
6140,
-5491,
-15924,
8743,
2784,
-4956,
7404,
6944,
-13870,
5598,
-6682,
5000,
2253,
763,
-9288,
11845,
-4574,
-1892,
1921,
-1650,
-3626,
8452,
3854,
-9786,
-1060,
5963,
5255,
-5166,
-13248,
11380,
13876,
-14313,
2490,
-6232,
-5828,
10648,
8959,
-5768,
-8825,
-3798,
17498,
-1076,
-19117,
-5100,
23139,
10523,
-20027,
-12253,
16537,
10217,
-11022,
-8444,
8792,
3314,
1134,
-7343,
7110,
-12324,
10948,
-7159,
13299,
-2715,
-11996,
-6764,
13515,
12830,
-15499,
706,
-8643,
17512,
643,
-8489,
-6180,
11188,
-9573,
-32,
15740,
-15680,
7210,
-7584,
6791,
-3,
-8001,
830,
17499,
-4625,
-21565,
17471,
-9619,
14403,
-4832,
-3687,
-7641,
12463,
-9941,
6615,
7297,
-19009,
10896,
-5028,
8864,
695,
-10832,
-6606,
9199,
8000,
3339,
-5384,
-15430,
3087,
11448,
5214,
-1445,
-8239,
2445,
4684,
-7562,
2018,
-10197,
12820,
14580,
-17156,
-6661,
8574,
671,
-9130,
12228,
-5864,
12259,
-4886,
-12299,
9474,
-10586,
-4152,
20263,
495,
-6724,
-2539,
-13230,
10493,
6095,
2820,
1007,
-10758,
-6633,
6099,
5564,
7134,
-9892,
-3547,
254,
13135,
-13296,
-2433,
10342,
4805,
-846,
-17393,
9070,
3466,
-6536,
-4762,
20103,
5358,
-15209,
-14569,
-1082,
19508,
5631,
-13741,
633,
7785,
-8723,
6711,
-14480,
-340,
21010,
-6652,
-4586,
2446,
-4139,
-484,
5200,
-6326,
12173,
-7832,
-9477,
14773,
-263,
-11334,
4152,
6457,
4398,
-7515,
-12490,
15758,
4313,
-3597,
-3500,
-393,
-395,
-2891,
2869,
4952,
5497,
-18896,
-82,
20130,
-8673,
-11856,
2577,
16393,
-3916,
-4069,
-3876,
-3091,
502,
1055,
16379,
-2426,
-11086,
-3982,
1678,
-712,
1949,
8571,
601,
462,
-9713,
3931,
-313,
-10139,
8079,
5326,
6085,
-10767,
-3124,
4425,
8511,
-5172,
-20771,
7009,
17721,
1441,
-7385,
-1119,
3184,
-8139,
1741,
-9478,
20148,
-4333,
-8412,
5573,
5939,
-12732,
5149,
-6352,
3793,
9886,
-9520,
11882,
1565,
-11502,
-13028,
4881,
1547,
14106,
10920,
-11881,
-10098,
-12120,
8560,
16224,
-7542,
-9837,
11781,
13482,
-9950,
-23987,
-2154,
16243,
10437,
-1048,
-9839,
5025,
3153,
-4748,
-7829,
-8962,
13728,
12774,
8152,
-17143,
-17638,
14293,
-5026,
8180,
7326,
-50,
-6788,
73,
-728,
-6721,
-5107,
7566,
15374,
-1083,
-3159,
-7047,
-11630,
4767,
9362,
-7797,
15973,
656,
-4764,
-2001,
-17231,
-286,
7648,
20321,
-328,
-4830,
-7494,
-8776,
-1272,
7278,
-4093,
11630,
1965,
-1109,
-4548,
-4426,
-294,
-12953,
16955,
9093,
8534,
-24896,
-9453,
17401,
9728,
-16336,
-1928,
4698,
3666,
16209,
-25519,
3138,
-4104,
5678,
9657,
3286,
-11937,
-7384,
11791,
-6629,
11512,
-13157,
-443,
8903,
-1565,
6825,
-16211,
7898,
-682,
-4129,
4720,
8733,
-2789,
-4595,
-5877,
-2722,
9336,
1466,
-9069,
9592,
-2541,
-2381,
-927,
4553,
-6285,
2287,
6369,
-5912,
4792,
-12161,
10768,
-1078,
3369,
-10126,
8325,
-7629,
-997,
12113,
-10967,
13793,
-9776,
-9484,
3510,
5286,
-4416,
};

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[NK];
DATA *dp = dbuffer;

DATA r[NX];

