#define NX 128
#define NH 32
#define FNAME "t6"
#define MAXERROR 15

DATA x[2*NX] ={
-2470, -19580, 
-20381, -4441, 
-23519, -23140, 
-12801, -11342, 
-22268, -19903, 
-8601, -9844, 
-1173, -17394, 
-13328, -22333, 
-11382, -12122, 
-22942, -2848, 
-12439, -9448, 
-14315, -23436, 
-17394, -1182, 
-17458, -20422, 
-6050, -4260, 
-22198, -9551, 
-22686, -3753, 
-6859, -21772, 
-5778, -8621, 
-8407, -21755, 
-4660, -12942, 
-15379, -7787, 
-17051, -21301, 
-15466, -13171, 
-7207, -22825, 
-20439, -10292, 
-4578, -10667, 
-13118, -18303, 
-6826, -18715, 
-127, -24184, 
-15668, -15121, 
-6616, -5965, 
-8610, -10441, 
-7832, -14547, 
-24389, -19767, 
-8500, -11989, 
-1346, -7045, 
-9505, -3260, 
-5335, -6346, 
-24499, -127, 
-4990, -3275, 
-8803, -12637, 
-20190, -2377, 
-11566, -24077, 
-19201, -8927, 
-11108, -1375, 
-23145, -23574, 
-10136, -17556, 
-14350, -7932, 
-19994, -10171, 
-23006, -22980, 
-22739, -2969, 
-16957, -12586, 
-1375, -2668, 
-474, -5842, 
-10934, -8472, 
-282, -701, 
-7581, -20371, 
-18637, -21235, 
-4675, -6016, 
-1610, -16879, 
-21411, -13192, 
-7697, -16235, 
-17271, -24340, 
-8670, -16373, 
-13179, -18511, 
-1898, -146, 
-18636, -2321, 
-8352, -15981, 
-16410, -17742, 
-12860, -22293, 
-13056, -18665, 
-7228, -2418, 
-18679, -16608, 
-6951, -10502, 
-3313, -20028, 
-14476, -6442, 
-14137, -21830, 
-1124, -15145, 
-2915, -3383, 
-7408, -3513, 
-17071, -4440, 
-4195, -18538, 
-723, -2517, 
-17201, -9730, 
-48, -21142, 
-13745, -20612, 
-24423, -2872, 
-17403, -527, 
-7573, -9799, 
-12464, -15685, 
-22525, -18890, 
-19765, -13524, 
-551, -8772, 
-15577, -18550, 
-21150, -13075, 
-24214, -12352, 
-8832, -22734, 
-6446, -5737, 
-23919, -23462, 
-22066, -20519, 
-2622, -5476, 
-5803, -19456, 
-10257, -18389, 
-7731, -14832, 
-808, -12763, 
-11051, -12060, 
-5476, -9221, 
-9577, -9203, 
-281, -218, 
-23390, -15748, 
-360, -17794, 
-19545, -7911, 
-2151, -12073, 
-8220, -17772, 
-13214, -10351, 
-23389, -4354, 
-13261, -1439, 
-4917, -13657, 
-17463, -14175, 
-7494, -94, 
-18204, -9484, 
-7048, -1375, 
-6873, -2161, 
-6555, -4548, 
-9282, -7628, 
-252, -16991, 
-20832, -10858, 
};

#pragma DATA_SECTION(h,".coeffs")
DATA h[2*NH] ={ /* b0 b1 b2 ... b(NH-1) */
-792, -1929, 
-503, -1484, 
-2061, -824, 
-1929, -230, 
-336, -80, 
-1803, -2135, 
-2098, -1938, 
-1498, -1301, 
-399, -1967, 
-1668, -1540, 
-899, -700, 
-166, -45, 
-1460, -1309, 
-1731, -391, 
-1385, -1892, 
-53, -338, 
-617, -1672, 
-777, -2032, 
-474, -1457, 
-1163, -926, 
-1673, -1881, 
-1486, -288, 
-461, -1462, 
-797, -1116, 
-742, -1239, 
-1008, -1611, 
-176, -38, 
-479, -75, 
-1467, -113, 
-570, -1195, 
-1225, -1456, 
-890, -2162, 
};

#pragma DATA_SECTION(db,".dbuffer")
DATA db[2*NH + 2] ;

DATA rtest[2*NX] ={
-1093, 618, 
-617, 1719, 
-1019, 4227, 
133, 4408, 
1093, 5202, 
-131, 5951, 
282, 6863, 
-30, 9240, 
-1278, 9656, 
-279, 13421, 
566, 12863, 
-70, 11739, 
-1431, 12431, 
-94, 14857, 
1198, 14028, 
2637, 14474, 
163, 17707, 
882, 17072, 
507, 17686, 
-2103, 18293, 
-2809, 20198, 
1405, 21669, 
-401, 21238, 
-1120, 22261, 
-2479, 23773, 
-2459, 24460, 
-1351, 24005, 
-3577, 26101, 
-692, 24022, 
-3178, 25747, 
-2150, 27286, 
-4873, 28691, 
-379, 29624, 
-4436, 28718, 
-3528, 27572, 
-4643, 27876, 
-4089, 26034, 
-2627, 24258, 
-4717, 25297, 
-1617, 27196, 
-1564, 25752, 
-3173, 25222, 
-4264, 24401, 
-2463, 24111, 
-1668, 24327, 
8, 23351, 
-1274, 25494, 
-1996, 26378, 
-2722, 25431, 
-2763, 25178, 
-2423, 26327, 
-87, 25653, 
-1006, 27928, 
651, 25808, 
514, 23938, 
86, 25530, 
1257, 25547, 
-954, 24412, 
-1369, 23974, 
-1691, 24369, 
-1444, 23234, 
779, 21805, 
276, 22897, 
-1972, 26635, 
-706, 27149, 
-1944, 24212, 
-3626, 25808, 
721, 25387, 
-1333, 24901, 
-1236, 25540, 
-516, 26672, 
-1218, 26790, 
-925, 24551, 
-297, 25399, 
-1996, 25616, 
-2546, 27103, 
-1877, 24646, 
-5463, 27664, 
-3660, 24897, 
-2707, 24031, 
-3775, 24838, 
-3634, 25895, 
-4158, 24846, 
-4162, 23867, 
-3647, 21629, 
-5927, 22162, 
-2953, 21998, 
-5763, 24826, 
-3678, 24648, 
-1421, 24539, 
-1906, 22928, 
-4997, 24865, 
-3813, 26125, 
-1753, 24919, 
-3170, 24878, 
-3481, 24509, 
-781, 26560, 
1151, 24773, 
-1022, 26388, 
-4236, 26064, 
-3026, 26995, 
789, 26272, 
-3189, 25654, 
-2568, 25408, 
-2480, 27911, 
-2191, 27716, 
-3543, 27503, 
-4154, 24774, 
-3761, 26151, 
-2320, 24601, 
-3295, 24392, 
-4805, 25047, 
-672, 26666, 
-3470, 25615, 
-4615, 23874, 
-2714, 25278, 
-4040, 28072, 
-1484, 27174, 
-907, 24500, 
-2252, 24826, 
-3195, 26018, 
-1970, 24983, 
-1594, 24306, 
-772, 22037, 
-993, 25025, 
-1276, 22107, 
-1666, 21748, 
-2572, 22507, 
};
