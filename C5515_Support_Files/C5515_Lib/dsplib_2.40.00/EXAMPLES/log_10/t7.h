/* Test for logn: rand */
#define NX 500
#define FNAME "t7"
#define MAXERROR 20

DATA x[NX] ={
9327,
24407,
9082,
21924,
14431,
8111,
14991,
15724,
23627,
1386,
28751,
22612,
15072,
21697,
15164,
18678,
28268,
27382,
29437,
23797,
6890,
16211,
27254,
15695,
12872,
4645,
8126,
20326,
28028,
24656,
7253,
14242,
18513,
22996,
7396,
24524,
13455,
10115,
15849,
20160,
11443,
21095,
22550,
13645,
18453,
7450,
10399,
20176,
14041,
16584,
23254,
25457,
28747,
7223,
16112,
20315,
11112,
18926,
14687,
12709,
12978,
13053,
21559,
24065,
12257,
15736,
3788,
21551,
9348,
10033,
16597,
22947,
6921,
17428,
22077,
26069,
24689,
15656,
11382,
10051,
19233,
15848,
14729,
28878,
6948,
10696,
13988,
16498,
16932,
20719,
27608,
22404,
14027,
22444,
22451,
13453,
11246,
15566,
20692,
27484,
20368,
15484,
23871,
23331,
14804,
16221,
29146,
24069,
8199,
12358,
23768,
18245,
18670,
10204,
21007,
10344,
19900,
12191,
9896,
14245,
23534,
21028,
8430,
9901,
15302,
20958,
9501,
24551,
4403,
8413,
13295,
16667,
28875,
25166,
11711,
26419,
15105,
19353,
13341,
8363,
8999,
15726,
11313,
18712,
25442,
17498,
17736,
23083,
9518,
13260,
13043,
26075,
21136,
24385,
6199,
9094,
17510,
14189,
25162,
8327,
20469,
14944,
22963,
22390,
16347,
28701,
15231,
25618,
26242,
13819,
20141,
14570,
7127,
12261,
15618,
26671,
6045,
10811,
8651,
18380,
5732,
24074,
6750,
13237,
15498,
7150,
10737,
16204,
20359,
10371,
14427,
21001,
12905,
18082,
27540,
17682,
22992,
29268,
19732,
14534,
30274,
25466,
14606,
19800,
18457,
20879,
13222,
22972,
2470,
12149,
9972,
18426,
24857,
20066,
19282,
20622,
10574,
17208,
14398,
14919,
6460,
25026,
5717,
25743,
17811,
14813,
13381,
25968,
22878,
17623,
17873,
19921,
20795,
16288,
20126,
22027,
10192,
15331,
25551,
1275,
12259,
13581,
24667,
17050,
22837,
15785,
16268,
20873,
19719,
3612,
11131,
20987,
9170,
16624,
15603,
10476,
13630,
23310,
13036,
8400,
25887,
12330,
25172,
9756,
15123,
24131,
20092,
19676,
15353,
26675,
19402,
19213,
19352,
28109,
10748,
3188,
11691,
6842,
9008,
26769,
5032,
5447,
8000,
21174,
14456,
22231,
26369,
18535,
17760,
20703,
27896,
19782,
19395,
14215,
15890,
13760,
14165,
4255,
10830,
18350,
21710,
17110,
24420,
6425,
14422,
11469,
12775,
10577,
10526,
20997,
3473,
16942,
16410,
17188,
8699,
22873,
9846,
6099,
7859,
18296,
11547,
16160,
11834,
9619,
11452,
22970,
14771,
15388,
26762,
23115,
14236,
21106,
15579,
16580,
23083,
23846,
18383,
17351,
22221,
17961,
19884,
15758,
14595,
4231,
7989,
21864,
5101,
12921,
8756,
8932,
8195,
13897,
25494,
24012,
26376,
11578,
25410,
32382,
8937,
21346,
8685,
18417,
19630,
6716,
16091,
19442,
23778,
20296,
11974,
15615,
17971,
8568,
16209,
13040,
21019,
15071,
21864,
15673,
16750,
19454,
7851,
20767,
27021,
18064,
7068,
20719,
14730,
24999,
14855,
23101,
22235,
19318,
3971,
19444,
14495,
17289,
22635,
20469,
13222,
15915,
14029,
4089,
6491,
22117,
17892,
22611,
20066,
15884,
18975,
24950,
19713,
26624,
17195,
12633,
20320,
12737,
20301,
23816,
18467,
23840,
14731,
7135,
9269,
14832,
20084,
20102,
12100,
24677,
7552,
15155,
17338,
18286,
7110,
5934,
12694,
17610,
20607,
13069,
15518,
12869,
8501,
13082,
6633,
29077,
17531,
6490,
19651,
15287,
14232,
24667,
19216,
25640,
29070,
11317,
11300,
10403,
22536,
29236,
15603,
8002,
11493,
7309,
12409,
18106,
23610,
28235,
17733,
12830,
10244,
21418,
8487,
19092,
23691,
13301,
17737,
19596,
17617,
4621,
27304,
20963,
9267,
17176,
28755,
18106,
14620,
12208,
23183,
6950,
8425,
21772,
8306,
31129,
19756,
7592,
24315,
11210,
18066,
22476,
18686,
4537,
};

long rtest[] ={
-17882,
-4192,
-18261,
-5719,
-11671,
-19870,
-11129,
-10449,
-4654,
-45010,
-1861,
-5280,
-11052,
-5867,
-10965,
-7999,
-2102,
-2555,
-1525,
-4552,
-22191,
-10016,
-2622,
-10475,
-13297,
-27802,
-19844,
-6796,
-2224,
-4048,
-21461,
-11858,
-8126,
-5040,
-21182,
-4124,
-12667,
-16727,
-10337,
-6913,
-14972,
-6268,
-5318,
-12468,
-8172,
-21080,
-16333,
-6901,
-12060,
-9691,
-4881,
-3593,
-1863,
-21520,
-10103,
-6804,
-15390,
-7812,
-11420,
-13479,
-13181,
-13099,
-5958,
-4393,
-13994,
-10439,
-30706,
-5963,
-17850,
-16844,
-9681,
-5070,
-22127,
-8985,
-5620,
-3255,
-4029,
-10511,
-15048,
-16818,
-7582,
-10338,
-11379,
-1798,
-22071,
-15933,
-12114,
-9766,
-9396,
-6524,
-2439,
-5411,
-12075,
-5385,
-5381,
-12669,
-15219,
-10593,
-6542,
-2503,
-6767,
-10668,
-4508,
-4834,
-11307,
-10006,
-1667,
-4391,
-19717,
-13877,
-4570,
-8333,
-8006,
-16603,
-6327,
-16408,
-7098,
-14071,
-17039,
-11855,
-4711,
-6313,
-19321,
-17032,
-10837,
-6360,
-17619,
-4109,
-28565,
-19350,
-12837,
-9621,
-1800,
-3757,
-14642,
-3065,
-11021,
-7494,
-12788,
-19434,
-18391,
-10447,
-15135,
-7973,
-3601,
-8928,
-8736,
-4986,
-17593,
-12875,
-13109,
-3251,
-6240,
-4205,
-23696,
-18241,
-8918,
-11911,
-3759,
-19495,
-6696,
-11173,
-5060,
-5420,
-9896,
-1886,
-10902,
-3503,
-3161,
-12287,
-6926,
-11534,
-21711,
-13989,
-10545,
-2930,
-24054,
-15781,
-18953,
-8228,
-24811,
-4387,
-22484,
-12899,
-10655,
-21664,
-15878,
-10021,
-6773,
-16372,
-11674,
-6331,
-13261,
-8461,
-2474,
-8779,
-5042,
-1607,
-7218,
-11569,
-1126,
-3588,
-11499,
-7169,
-8169,
-6414,
-12916,
-5054,
-36789,
-14120,
-16930,
-8193,
-3932,
-6979,
-7546,
-6590,
-16096,
-9165,
-11703,
-11197,
-23108,
-3836,
-24847,
-3434,
-8676,
-11298,
-12746,
-3310,
-5113,
-8827,
-8627,
-7082,
-6471,
-9948,
-6936,
-5653,
-16620,
-10810,
-3540,
-46197,
-13991,
-12534,
-4042,
-9297,
-5138,
-10394,
-9965,
-6418,
-7228,
-31382,
-15365,
-6341,
-18123,
-9658,
-10559,
-16228,
-12484,
-4847,
-13117,
-19372,
-3354,
-13910,
-3753,
-17242,
-11004,
-4354,
-6961,
-7258,
-10789,
-2927,
-7458,
-7598,
-7495,
-2182,
-15864,
-33158,
-14666,
-22291,
-18376,
-2877,
-26662,
-25535,
-20065,
-6215,
-11646,
-5521,
-3092,
-8109,
-8717,
-6534,
-2291,
-7182,
-7463,
-11885,
-10300,
-12348,
-11935,
-29050,
-15755,
-8251,
-5859,
-9247,
-4185,
-23185,
-11679,
-14940,
-13405,
-16093,
-16161,
-6334,
-31942,
-9388,
-9842,
-9183,
-18874,
-5116,
-17111,
-23926,
-20318,
-8294,
-14843,
-10060,
-14493,
-17443,
-14961,
-5056,
-11339,
-10757,
-2881,
-4966,
-11864,
-6260,
-10581,
-9695,
-4986,
-4523,
-8226,
-9048,
-5528,
-8556,
-7109,
-10419,
-11510,
-29132,
-20085,
-5758,
-26470,
-13243,
-18780,
-18497,
-19722,
-12207,
-3572,
-4424,
-3088,
-14806,
-3619,
-169,
-18490,
-6099,
-18897,
-8199,
-7292,
-22555,
-10121,
-7429,
-4564,
-6817,
-14327,
-10548,
-8548,
-19089,
-10017,
-13113,
-6319,
-11053,
-5758,
-10495,
-9550,
-7420,
-20334,
-6490,
-2744,
-8475,
-21829,
-6523,
-11379,
-3851,
-11258,
-4975,
-5518,
-7520,
-30033,
-7427,
-11607,
-9099,
-5265,
-6696,
-12916,
-10277,
-12072,
-29618,
-23041,
-5594,
-8611,
-5280,
-6979,
-10305,
-7775,
-3879,
-7232,
-2955,
-9176,
-13564,
-6800,
-13447,
-6814,
-4541,
-8161,
-4527,
-11377,
-21694,
-17971,
-11280,
-6967,
-6954,
-14177,
-4036,
-20886,
-10974,
-9059,
-8301,
-21745,
-24317,
-13496,
-8837,
-6601,
-13081,
-10637,
-13301,
-19202,
-13068,
-22733,
-1701,
-8901,
-23042,
-7276,
-10851,
-11868,
-4042,
-7595,
-3491,
-1704,
-15130,
-15151,
-16328,
-5327,
-1623,
-10559,
-20063,
-14911,
-21351,
-13818,
-8442,
-4664,
-2119,
-8738,
-13344,
-16547,
-6052,
-19225,
-7688,
-4616,
-12831,
-8735,
-7316,
-8832,
-27875,
-2596,
-6357,
-17973,
-9192,
-1859,
-8442,
-11485,
-14051,
-4924,
-22068,
-19329,
-5818,
-19531,
-730,
-7201,
-20810,
-4246,
-15265,
-8474,
-5365,
-7993,
-28137,
};

long r[NX];

