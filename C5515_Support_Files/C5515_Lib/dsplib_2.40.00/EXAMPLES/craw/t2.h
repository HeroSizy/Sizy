#define NA 64
#define NB 64  // NB <= NA 
#define FNAME "t2"
#define MAXERROR 10  // max absolute error 

DATA a[NA] ={
3567,
3415,
-736,
3224,
-3622,
-1206,
2565,
-4016,
-2959,
-2435,
-2469,
850,
-1867,
-2468,
-3971,
2021,
-450,
3537,
-279,
-667,
2836,
206,
-2436,
1410,
2769,
-3936,
1485,
-988,
2718,
23,
1715,
-583,
-1601,
-2543,
-2512,
1492,
-1616,
341,
-2861,
1621,
-997,
2949,
2897,
766,
-29,
3274,
2634,
1187,
2604,
1312,
-1295,
-1723,
-1301,
279,
1860,
-1563,
2772,
557,
-1062,
1660,
381,
-452,
1593,
993,
};

DATA b[NB] ={
2415,
3742,
185,
3114,
-2680,
3930,
-1873,
-2029,
3078,
1944,
-2978,
-4000,
3226,
-2465,
-1649,
1322,
-1767,
-253,
-3566,
4000,
678,
-627,
127,
-1361,
-550,
-2246,
653,
2132,
244,
1151,
-2384,
-985,
2321,
1481,
-319,
555,
2410,
-3612,
842,
-3685,
-694,
-1598,
3066,
-3974,
2195,
3857,
4014,
2366,
-503,
-14,
-2344,
1175,
-1475,
3769,
1856,
-722,
2003,
-1901,
-493,
3550,
1501,
-2355,
2779,
1055,
};

DATA rtest[NA+NB-1] ={
115,
413,
10,
-40,
753,
-295,
51,
389,
-943,
-104,
1066,
-648,
-253,
-149,
-1427,
280,
141,
-473,
855,
195,
174,
276,
-324,
-1625,
451,
-1179,
-2439,
1308,
19,
-673,
71,
191,
-489,
1220,
750,
-832,
1371,
-368,
958,
-1032,
348,
-1879,
1106,
-1779,
-411,
1667,
262,
1565,
-1286,
1379,
-2030,
1238,
-674,
-736,
803,
7,
-195,
1696,
1380,
340,
2407,
899,
-434,
2253,
1879,
-976,
1992,
-1474,
-1623,
-2021,
-1132,
80,
349,
-650,
-261,
1387,
-1685,
553,
1297,
749,
-1207,
904,
-561,
483,
697,
-147,
703,
-1228,
-241,
-127,
1642,
-526,
-193,
261,
-1759,
-991,
-550,
568,
-1382,
10,
396,
-547,
-9,
1014,
617,
315,
-210,
823,
624,
-173,
388,
520,
-489,
-704,
520,
-661,
158,
528,
34,
182,
137,
60,
234,
80,
154,
231,
73,
};
