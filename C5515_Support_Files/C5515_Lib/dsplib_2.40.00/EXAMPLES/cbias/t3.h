#define NA 128
#define NB 128  // NB <= NA 
#define FNAME "t3"
#define MAXERROR 10  // max absolute error 

DATA a[NA] ={
-2122,
-1697,
620,
752,
-751,
435,
-282,
-2643,
-2739,
-1086,
-2822,
-673,
1060,
-2359,
-2692,
651,
628,
-2806,
-2802,
-1796,
503,
-2563,
-768,
761,
1260,
1116,
-2410,
-265,
-337,
-851,
-2007,
1017,
1153,
1317,
-126,
317,
-2196,
-286,
1250,
2275,
-1315,
-1421,
2117,
-1551,
1766,
2365,
-1554,
-1511,
-2609,
-2443,
815,
-1791,
1991,
-1889,
-1907,
2863,
-349,
-927,
-1077,
-782,
-619,
530,
-2203,
-2676,
-240,
2142,
2515,
-1365,
-1968,
2159,
-1519,
844,
2704,
955,
2145,
-2839,
-2103,
1846,
-405,
2260,
1360,
1085,
-892,
-1935,
-1995,
-1790,
-450,
2062,
-57,
1830,
-228,
-248,
-286,
-509,
2326,
-2864,
-1174,
-2612,
1119,
869,
2797,
305,
-579,
-1745,
725,
1351,
-719,
-2840,
-465,
1469,
1702,
2432,
1996,
-767,
699,
1339,
-1774,
2344,
400,
763,
-1539,
282,
2499,
-955,
900,
-627,
737,
1153,
};

DATA b[NB] ={
-596,
-501,
899,
1955,
-744,
-433,
548,
380,
1254,
65,
1601,
-62,
-1820,
1162,
2796,
1776,
1179,
-88,
-2233,
954,
-780,
-2086,
386,
1871,
1007,
2893,
2674,
-2556,
-810,
281,
-1380,
563,
-2611,
411,
1163,
2677,
1451,
1390,
-395,
777,
1755,
-2411,
2580,
2409,
590,
-1428,
2163,
77,
1347,
-451,
2672,
-2479,
309,
-1205,
2073,
-952,
1043,
-2587,
-831,
-10,
-380,
361,
675,
-2240,
2306,
1474,
1686,
1824,
984,
-1733,
-1315,
731,
213,
-2552,
-2381,
-1325,
-527,
-151,
2369,
557,
-991,
-127,
562,
-1962,
1908,
2642,
553,
-2730,
1807,
637,
1167,
-2363,
-436,
-721,
-1934,
1929,
1961,
-281,
2644,
-2044,
2142,
1560,
-324,
698,
2616,
811,
-1464,
-854,
-1809,
-55,
-526,
-212,
642,
-2485,
-1076,
627,
-1883,
701,
-1472,
506,
35,
-205,
239,
2562,
-917,
-569,
-1114,
-513,
};

DATA rtest[NA+NB-1] ={
0,
1,
1,
0,
-1,
-1,
0,
1,
0,
2,
2,
0,
-1,
0,
0,
1,
1,
0,
0,
4,
4,
3,
1,
-1,
2,
-1,
0,
3,
6,
2,
-1,
0,
1,
-2,
-2,
3,
-2,
-1,
0,
-3,
-3,
-1,
-2,
0,
-3,
-5,
-1,
3,
-2,
-1,
-2,
0,
-5,
-6,
13,
-1,
-8,
2,
-1,
-3,
0,
3,
9,
-3,
3,
8,
-1,
0,
3,
-4,
3,
5,
-4,
-1,
2,
-4,
8,
1,
-6,
-5,
-10,
5,
2,
1,
8,
-13,
-5,
7,
-6,
-2,
-8,
-11,
-9,
2,
0,
0,
1,
-1,
-4,
-10,
0,
-6,
-11,
3,
14,
-6,
0,
-4,
1,
-13,
-1,
-7,
-5,
-8,
-4,
3,
17,
2,
-1,
-9,
-10,
-2,
-5,
3,
-12,
-6,
-2,
-2,
-4,
6,
-10,
-11,
0,
-7,
-7,
2,
5,
7,
-14,
-5,
2,
-6,
1,
3,
-3,
-9,
4,
-5,
1,
7,
-1,
-3,
-4,
6,
3,
-9,
7,
4,
1,
2,
2,
-1,
-3,
0,
-1,
-3,
-3,
0,
-5,
-3,
-3,
6,
-3,
7,
-4,
-4,
-8,
5,
0,
1,
-7,
-1,
3,
6,
0,
6,
-7,
-12,
-5,
0,
13,
4,
7,
2,
-1,
-1,
1,
-4,
-1,
-1,
-4,
6,
12,
4,
1,
0,
3,
1,
-5,
-6,
-3,
4,
4,
9,
1,
-1,
1,
-2,
3,
0,
-2,
-4,
3,
5,
1,
3,
-1,
-3,
1,
5,
3,
0,
-1,
-1,
3,
3,
2,
-2,
1,
2,
0,
1,
0,
1,
-1,
0,
2,
0,
0,
-1,
0,
1,
0,
0,
0,
};
