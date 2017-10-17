/* Test for latfor: rand */
#define NX 400
#define NK 5
#define FNAME "t8"
#define MAXERROR 10

DATA x[NX] ={
3086,
-5033,
-3710,
6984,
-4347,
-6096,
-1432,
2207,
-5218,
-1586,
3092,
-2853,
6935,
4212,
-1621,
-4979,
-1634,
-5662,
-7135,
-6221,
-7712,
5983,
-1406,
4783,
5183,
-1716,
5340,
-2661,
-4959,
164,
-4754,
1310,
7851,
-539,
4949,
-1099,
-4241,
2205,
-2177,
-1123,
-3246,
-1112,
3121,
201,
8050,
-5177,
966,
-213,
-1680,
-118,
7681,
5358,
-6089,
5607,
4742,
-2543,
3907,
-7217,
960,
4632,
-5886,
944,
-4826,
5906,
-3976,
-3644,
-3471,
3846,
-49,
-7297,
-5058,
3679,
7760,
3350,
4940,
-4813,
4467,
6106,
5036,
4204,
6629,
-1295,
2595,
-8171,
7897,
-1437,
-2497,
2755,
-923,
5568,
483,
-3979,
-5632,
947,
7557,
7393,
3848,
-4546,
-56,
-8077,
-3012,
3906,
4756,
-1634,
-1641,
-4069,
-6687,
1674,
5446,
-3384,
-565,
-7447,
-6788,
215,
3529,
-7612,
7857,
-42,
3288,
4966,
273,
44,
4173,
-4291,
7259,
-6740,
704,
6610,
5919,
2154,
-3894,
-1983,
-2666,
-3038,
7325,
576,
3308,
6144,
7966,
6312,
-1560,
2083,
-1877,
5699,
439,
5036,
-1745,
7565,
-7699,
7433,
3512,
2401,
-875,
-5331,
5492,
7702,
-5981,
-4080,
6717,
2891,
2017,
200,
-8135,
-4475,
7839,
5918,
-7957,
-234,
-1370,
4471,
-195,
369,
4621,
1494,
-6122,
-6395,
2669,
8144,
-2521,
-5308,
-7080,
-3123,
-2708,
-2029,
7408,
3593,
4576,
1927,
2445,
4198,
-5770,
1629,
6530,
-5376,
5225,
-7057,
7465,
-2993,
-8107,
4258,
-3135,
3526,
-6866,
5666,
3577,
6068,
6097,
4285,
2776,
6586,
5266,
5450,
2292,
-5633,
4639,
3791,
1060,
3659,
-4265,
-167,
-1252,
4844,
4315,
-4279,
2213,
-4399,
1899,
-3793,
8048,
4265,
-293,
7294,
-2282,
-6810,
7348,
3126,
1892,
6471,
-7987,
-3262,
7619,
-6520,
1573,
-509,
3560,
5879,
-5152,
-617,
6607,
-7830,
4266,
4847,
-3050,
-4329,
-91,
3035,
7284,
-995,
-43,
-6577,
891,
-1054,
-5223,
-5672,
7106,
-5960,
8168,
3123,
7553,
4513,
-8181,
-2860,
722,
-3171,
2829,
-2528,
7874,
-2393,
-7873,
5124,
7910,
-3083,
-1984,
4063,
-937,
-6556,
8071,
594,
-5988,
-6041,
5963,
3412,
8163,
5173,
4624,
4319,
6635,
-6503,
-4724,
5752,
3980,
-1556,
-3195,
-423,
-5821,
-93,
493,
167,
-4466,
7126,
289,
-668,
4534,
3830,
1677,
-7260,
-7013,
2223,
6165,
-1189,
3414,
-7043,
-7880,
136,
6052,
4891,
4902,
-4979,
3512,
-4670,
4694,
-5372,
-4815,
-583,
-6971,
1582,
-5063,
7124,
-3154,
-625,
5402,
-3275,
3434,
-6970,
4099,
-510,
7289,
-7964,
-7305,
3906,
2221,
7061,
-640,
211,
-1238,
-1378,
-1832,
5825,
5292,
6781,
5505,
6030,
4515,
-1116,
-1047,
-4517,
-7976,
-2033,
5547,
-3503,
-3537,
-2834,
-390,
-4490,
7569,
-3171,
4569,
6477,
-4035,
-5804,
-2597,
3819,
-7638,
724,
957,
2780,
1375,
3045,
4357,
6515,
7647,
6648,
-5267,
7839,
6520,
-7711,
-3572,
-5114,
1781,
-4762,
};

#pragma DATA_SECTION (k,".coeffs")
DATA k[NK] ={
8173,
137,
3601,
1216,
5091,
};

DATA rtest[] ={
3087,
-4227,
-4863,
6142,
-3104,
-7237,
-3443,
940,
-4722,
-4153,
1629,
-2829,
6096,
5327,
-529,
-4061,
-2403,
-5144,
-8783,
-9209,
-11303,
2077,
-2442,
2180,
5545,
-1031,
6576,
-563,
-4450,
73,
-5153,
89,
7176,
228,
5037,
503,
-3533,
2837,
-1659,
-1419,
-3872,
-2775,
2701,
131,
7702,
-3268,
122,
1275,
-1680,
408,
6808,
7280,
-4473,
4980,
7129,
-170,
4551,
-6255,
199,
5539,
-5621,
-179,
-5354,
4469,
-2298,
-5818,
-4114,
1963,
935,
-8440,
-7317,
1735,
8147,
4367,
5149,
-2891,
5050,
9101,
7160,
6786,
8339,
2439,
4456,
-5631,
6901,
1456,
-3483,
2788,
-1175,
6276,
1816,
-3858,
-5594,
-382,
7923,
8483,
5232,
-3025,
603,
-6105,
-4242,
2948,
3906,
-1195,
-2822,
-4157,
-7063,
131,
4654,
-3275,
-2104,
-8000,
-8501,
-1421,
1742,
-8183,
4403,
1017,
3040,
6763,
1153,
1997,
5063,
-2274,
7153,
-4503,
-886,
7669,
6732,
4736,
-3199,
-1534,
-1633,
-3234,
6186,
1242,
2946,
7301,
9901,
10300,
1604,
3977,
937,
6845,
2950,
5129,
479,
7569,
-4270,
6053,
6644,
3051,
1442,
-5624,
5780,
9482,
-4046,
-5105,
5897,
5134,
3348,
468,
-7738,
-5069,
6883,
7050,
-7159,
-2636,
-1197,
4785,
1182,
-875,
5122,
2825,
-4768,
-7341,
1285,
8583,
-1291,
-6656,
-8369,
-4516,
-3474,
-4574,
4985,
3745,
4950,
3651,
3883,
6931,
-3400,
1504,
7668,
-3604,
4572,
-5930,
5980,
-157,
-9815,
3189,
-3336,
2851,
-6665,
2735,
5562,
6223,
8590,
6000,
6117,
9311,
9071,
8784,
5682,
-3163,
5393,
6233,
2610,
4632,
-3303,
54,
-389,
4425,
5735,
-3734,
1800,
-3327,
1418,
-2906,
6115,
6411,
225,
8442,
164,
-5488,
7002,
4923,
3197,
7162,
-6307,
-3395,
7794,
-4902,
252,
-977,
2776,
7661,
-4390,
-1009,
7107,
-5775,
3006,
5531,
-2129,
-3918,
-1663,
3444,
8053,
244,
-229,
-5514,
82,
-109,
-6426,
-7488,
4274,
-4989,
5710,
4584,
7711,
8307,
-6526,
-2313,
1182,
-2626,
1758,
-3353,
6577,
-248,
-8681,
4173,
8756,
-695,
-2720,
3541,
1041,
-5845,
6188,
2249,
-5673,
-7217,
3755,
5212,
8242,
6825,
6336,
7994,
9799,
-2310,
-4382,
6061,
5610,
-277,
-4053,
-1133,
-5089,
-1530,
-369,
-961,
-4920,
5121,
1963,
-691,
4945,
4868,
3956,
-6067,
-8099,
1228,
6206,
-634,
2032,
-6365,
-8870,
-990,
4885,
5487,
4808,
-3910,
3560,
-2084,
4174,
-3571,
-7059,
-1343,
-8403,
-547,
-6285,
4226,
-1985,
-2672,
5821,
-2530,
3645,
-6109,
2369,
1216,
6256,
-5580,
-9837,
3097,
2354,
7455,
4,
-151,
440,
-882,
-1180,
5040,
6484,
7936,
7916,
8636,
8525,
2399,
1120,
-2968,
-8063,
-3859,
3792,
-3661,
-5731,
-4641,
-1636,
-4583,
5211,
-2243,
3104,
8042,
-2622,
-5022,
-3655,
3549,
-6799,
-2465,
128,
2007,
2247,
2536,
5755,
8341,
10487,
9967,
-1522,
8936,
10720,
-4564,
-3643,
-5847,
1024,
-4583,
};

#pragma DATA_SECTION (dbuffer,".dbuffer")
DATA dbuffer[NK];
DATA *dp = dbuffer;

DATA r[NX];
