/* Test for rand: rand */
#define NX 256
#define FNAME "t7"
#define MAXERROR 5.000000e-004

DATA x[NX] = {
3452,
-6549,
-19740,
8205,
15294,
-8134,
-32121,
-5252,
16624,
19259,
27522,
22592,
-8667,
7917,
15157,
-20061,
26530,
4535,
8637,
-17406,
3197,
28284,
-10801,
10193,
-7084,
8344,
13047,
-6738,
-5660,
10172,
22124,
-8414,
-4899,
6204,
4308,
14191,
741,
18114,
-698,
-20585,
13149,
31635,
20096,
13341,
-985,
-25257,
10804,
-8823,
-23590,
4376,
21169,
11400,
32732,
30254,
-28910,
-9155,
3179,
-15613,
6380,
-29539,
4657,
13163,
30297,
16418,
15728,
-4465,
8799,
19859,
-27271,
29194,
27259,
6684,
-16151,
24474,
878,
15247,
-5097,
30236,
-28046,
3500,
-13633,
23459,
-10764,
11810,
-29265,
-9394,
-111,
-4297,
4093,
7643,
-25340,
26100,
16682,
19079,
20641,
11141,
-19603,
-14871,
8273,
2415,
-28868,
-26938,
-14988,
-5959,
-1701,
26804,
6308,
-11210,
-1429,
6368,
-22187,
21592,
29892,
6262,
-30884,
20455,
7216,
13205,
-26726,
-4922,
-8154,
-21879,
21833,
22193,
-3171,
29924,
-23124,
24244,
17658,
-3659,
7905,
29602,
9176,
-16559,
-9653,
-20456,
-613,
-5946,
-2390,
7271,
-28104,
-12171,
7103,
-21298,
7932,
-16649,
5725,
397,
-2308,
2714,
28988,
-10370,
-6435,
-12603,
-5795,
-14029,
-6938,
198,
14548,
-12700,
-25417,
-3717,
-2178,
-31807,
10751,
14684,
-14311,
-15609,
13662,
18603,
31861,
-1747,
26399,
-3207,
19957,
21552,
-21871,
-6953,
1360,
14295,
4534,
-2569,
-3584,
-27018,
-3704,
-8762,
-12941,
23058,
17005,
29475,
3797,
-31835,
6303,
20723,
31267,
-18225,
13349,
1446,
28370,
13982,
-17823,
-3300,
-21483,
30725,
-9456,
-29554,
16734,
25874,
-14015,
-16305,
28360,
-24184,
28890,
13229,
22785,
-19053,
-2943,
-27455,
23011,
4066,
-11843,
-8199,
24104,
-8377,
-27939,
-19671,
-29524,
4372,
-24778,
1449,
-25096,
17689,
-8188,
21194,
-29712,
6417,
29436,
-13841,
25483,
-26110,
-28488,
-17413,
28384,
-28631,
-15452,
32737,
-18875,
-104,
-13731,
11322,
30015,
17469,
10887,
-24186,
-26515,
-31794,
};

float xf[NX] = {
1.053465e-001,
-1.998530e-001,
-6.024230e-001,
2.504020e-001,
4.667256e-001,
-2.482290e-001,
-9.802471e-001,
-1.602844e-001,
5.073393e-001,
5.877435e-001,
8.399144e-001,
6.894430e-001,
-2.644942e-001,
2.416027e-001,
4.625545e-001,
-6.122136e-001,
8.096247e-001,
1.384115e-001,
2.635799e-001,
-5.311741e-001,
9.756425e-002,
8.631667e-001,
-3.296051e-001,
3.110621e-001,
-2.161916e-001,
2.546296e-001,
3.981603e-001,
-2.056321e-001,
-1.727422e-001,
3.104259e-001,
6.751702e-001,
-2.567839e-001,
-1.494937e-001,
1.893267e-001,
1.314771e-001,
4.330848e-001,
2.262290e-002,
5.528024e-001,
-2.130905e-002,
-6.281911e-001,
4.012708e-001,
9.654176e-001,
6.132755e-001,
4.071353e-001,
-3.007256e-002,
-7.707744e-001,
3.297111e-001,
-2.692522e-001,
-7.199111e-001,
1.335456e-001,
6.460166e-001,
3.478973e-001,
9.988946e-001,
9.232728e-001,
-8.822757e-001,
-2.793777e-001,
9.702563e-002,
-4.764609e-001,
1.946897e-001,
-9.014440e-001,
1.421150e-001,
4.017145e-001,
9.245765e-001,
5.010365e-001,
4.799861e-001,
-1.362532e-001,
2.685319e-001,
6.060527e-001,
-8.322380e-001,
8.909256e-001,
8.318849e-001,
2.039748e-001,
-4.928788e-001,
7.469016e-001,
2.680142e-002,
4.653013e-001,
-1.555468e-001,
9.227400e-001,
-8.558815e-001,
1.068159e-001,
-4.160322e-001,
7.159270e-001,
-3.284897e-001,
3.604077e-001,
-8.931112e-001,
-2.866889e-001,
-3.390808e-003,
-1.311189e-001,
1.249168e-001,
2.332423e-001,
-7.733200e-001,
7.965035e-001,
5.091028e-001,
5.822464e-001,
6.299041e-001,
3.400077e-001,
-5.982472e-001,
-4.538237e-001,
2.524693e-001,
7.370339e-002,
-8.809919e-001,
-8.220765e-001,
-4.573837e-001,
-1.818554e-001,
-5.191710e-002,
8.179787e-001,
1.924943e-001,
-3.420894e-001,
-4.361115e-002,
1.943416e-001,
-6.771025e-001,
6.589485e-001,
9.122448e-001,
1.910960e-001,
-9.425036e-001,
6.242356e-001,
2.202272e-001,
4.029852e-001,
-8.156076e-001,
-1.502217e-001,
-2.488467e-001,
-6.676918e-001,
6.663029e-001,
6.772794e-001,
-9.677194e-002,
9.132028e-001,
-7.056935e-001,
7.398659e-001,
5.388728e-001,
-1.116768e-001,
2.412402e-001,
9.033786e-001,
2.800193e-001,
-5.053447e-001,
-2.945960e-001,
-6.242790e-001,
-1.871128e-002,
-1.814513e-001,
-7.294883e-002,
2.218871e-001,
-8.576631e-001,
-3.714394e-001,
2.167673e-001,
-6.499596e-001,
2.420549e-001,
-5.080801e-001,
1.747164e-001,
1.210691e-002,
-7.044215e-002,
8.283786e-002,
8.846531e-001,
-3.164818e-001,
-1.963913e-001,
-3.846241e-001,
-1.768641e-001,
-4.281215e-001,
-2.117448e-001,
6.028971e-003,
4.439597e-001,
-3.875829e-001,
-7.756726e-001,
-1.134201e-001,
-6.647490e-002,
-9.706622e-001,
3.281037e-001,
4.481234e-001,
-4.367328e-001,
-4.763626e-001,
4.169428e-001,
5.677180e-001,
9.723156e-001,
-5.331459e-002,
8.056377e-001,
-9.788248e-002,
6.090336e-001,
6.577290e-001,
-6.674598e-001,
-2.121880e-001,
4.151497e-002,
4.362479e-001,
1.383790e-001,
-7.838765e-002,
-1.093859e-001,
-8.245108e-001,
-1.130336e-001,
-2.674003e-001,
-3.949324e-001,
7.036894e-001,
5.189588e-001,
8.995186e-001,
1.158770e-001,
-9.715340e-001,
1.923542e-001,
6.324114e-001,
9.541847e-001,
-5.561838e-001,
4.073673e-001,
4.412183e-002,
8.657941e-001,
4.267089e-001,
-5.439222e-001,
-1.007158e-001,
-6.556006e-001,
9.376403e-001,
-2.885678e-001,
-9.019063e-001,
5.106771e-001,
7.896255e-001,
-4.277007e-001,
-4.975989e-001,
8.654724e-001,
-7.380351e-001,
8.816391e-001,
4.037063e-001,
6.953529e-001,
-5.814567e-001,
-8.981662e-002,
-8.378525e-001,
7.022448e-001,
1.240974e-001,
-3.614074e-001,
-2.502015e-001,
7.355914e-001,
-2.556475e-001,
-8.526199e-001,
-6.003240e-001,
-9.010134e-001,
1.334196e-001,
-7.561505e-001,
4.422353e-002,
-7.658797e-001,
5.398370e-001,
-2.498884e-001,
6.467744e-001,
-9.067277e-001,
1.958265e-001,
8.983008e-001,
-4.224047e-001,
7.776652e-001,
-7.968290e-001,
-8.693710e-001,
-5.314005e-001,
8.661968e-001,
-8.737442e-001,
-4.715647e-001,
9.990633e-001,
-5.760241e-001,
-3.180403e-003,
-4.190234e-001,
3.455088e-001,
9.159822e-001,
5.331031e-001,
3.322475e-001,
-7.381104e-001,
-8.091740e-001,
-9.702713e-001,
};

float rtest[NX] = {
9.492486e+000,
-5.003678e+000,
-1.659963e+000,
3.993578e+000,
2.142587e+000,
-4.028538e+000,
-1.020151e+000,
-6.238911e+000,
1.971068e+000,
1.701422e+000,
1.190597e+000,
1.450446e+000,
-3.780801e+000,
4.139027e+000,
2.161907e+000,
-1.633417e+000,
1.235140e+000,
7.224833e+000,
3.793917e+000,
-1.882622e+000,
1.024966e+001,
1.158525e+000,
-3.033933e+000,
3.214792e+000,
-4.625527e+000,
3.927274e+000,
2.511551e+000,
-4.863054e+000,
-5.788973e+000,
3.221381e+000,
1.481108e+000,
-3.894325e+000,
-6.689246e+000,
5.281874e+000,
7.605885e+000,
2.309017e+000,
4.420301e+001,
1.808965e+000,
-4.692842e+001,
-1.591872e+000,
2.492083e+000,
1.035821e+000,
1.630589e+000,
2.456186e+000,
-3.325290e+001,
-1.297397e+000,
3.032958e+000,
-3.713990e+000,
-1.389060e+000,
7.488079e+000,
1.547948e+000,
2.874412e+000,
1.001107e+000,
1.083103e+000,
-1.133433e+000,
-3.579384e+000,
1.030656e+001,
-2.098808e+000,
5.136379e+000,
-1.109331e+000,
7.036555e+000,
2.489330e+000,
1.081576e+000,
1.995863e+000,
2.083394e+000,
-7.339276e+000,
3.723952e+000,
1.650022e+000,
-1.201579e+000,
1.122428e+000,
1.202089e+000,
4.902565e+000,
-2.028896e+000,
1.338864e+000,
3.731146e+001,
2.149145e+000,
-6.428932e+000,
1.083729e+000,
-1.168386e+000,
9.361899e+000,
-2.403660e+000,
1.396790e+000,
-3.044235e+000,
2.774635e+000,
-1.119681e+000,
-3.488101e+000,
-2.949150e+002,
-7.626664e+000,
8.005326e+000,
4.287388e+000,
-1.293126e+000,
1.255487e+000,
1.964240e+000,
1.717486e+000,
1.587543e+000,
2.941110e+000,
-1.671550e+000,
-2.203499e+000,
3.960878e+000,
1.356790e+001,
-1.135084e+000,
-1.216432e+000,
-2.186348e+000,
-5.498875e+000,
-1.926148e+001,
1.222526e+000,
5.194960e+000,
-2.923213e+000,
-2.292992e+001,
5.145580e+000,
-1.476881e+000,
1.517569e+000,
1.096197e+000,
5.232972e+000,
-1.061004e+000,
1.601959e+000,
4.540766e+000,
2.481481e+000,
-1.226080e+000,
-6.656827e+000,
-4.018539e+000,
-1.497697e+000,
1.500819e+000,
1.476495e+000,
-1.033357e+001,
1.095047e+000,
-1.417046e+000,
1.351596e+000,
1.855726e+000,
-8.954414e+000,
4.145245e+000,
1.106956e+000,
3.571182e+000,
-1.978847e+000,
-3.394479e+000,
-1.601848e+000,
-5.344369e+001,
-5.511119e+000,
-1.370824e+001,
4.506796e+000,
-1.165959e+000,
-2.692229e+000,
4.613242e+000,
-1.538557e+000,
4.131295e+000,
-1.968193e+000,
5.723560e+000,
8.259747e+001,
-1.419605e+001,
1.207177e+001,
1.130387e+000,
-3.159739e+000,
-5.091875e+000,
-2.599941e+000,
-5.654059e+000,
-2.335785e+000,
-4.722667e+000,
1.658658e+002,
2.252457e+000,
-2.580093e+000,
-1.289204e+000,
-8.816781e+000,
-1.504327e+001,
-1.030224e+000,
3.047817e+000,
2.231528e+000,
-2.289730e+000,
-2.099241e+000,
2.398410e+000,
1.761438e+000,
1.028473e+000,
-1.875659e+001,
1.241253e+000,
-1.021633e+001,
1.641945e+000,
1.520383e+000,
-1.498218e+000,
-4.712802e+000,
2.408770e+001,
2.292274e+000,
7.226528e+000,
-1.275711e+001,
-9.141947e+000,
-1.212840e+000,
-8.846929e+000,
-3.739711e+000,
-2.532079e+000,
1.421082e+000,
1.926935e+000,
1.111706e+000,
8.629839e+000,
-1.029300e+000,
5.198744e+000,
1.581249e+000,
1.048015e+000,
-1.797967e+000,
2.454787e+000,
2.266452e+001,
1.155009e+000,
2.343518e+000,
-1.838498e+000,
-9.928930e+000,
-1.525319e+000,
1.066507e+000,
-3.465390e+000,
-1.108763e+000,
1.958184e+000,
1.266423e+000,
-2.338084e+000,
-2.009651e+000,
1.155438e+000,
-1.354949e+000,
1.134251e+000,
2.477048e+000,
1.438119e+000,
-1.719818e+000,
-1.113380e+001,
-1.193527e+000,
1.424005e+000,
8.058190e+000,
-2.766960e+000,
-3.996779e+000,
1.359450e+000,
-3.911636e+000,
-1.172856e+000,
-1.665767e+000,
-1.109861e+000,
7.495153e+000,
-1.322488e+000,
2.261240e+001,
-1.305688e+000,
1.852411e+000,
-4.001786e+000,
1.546134e+000,
-1.102867e+000,
5.106561e+000,
1.113213e+000,
-2.367398e+000,
1.285900e+000,
-1.254974e+000,
-1.150257e+000,
-1.881820e+000,
1.154472e+000,
-1.144500e+000,
-2.120600e+000,
1.000938e+000,
-1.736039e+000,
-3.144256e+002,
-2.386502e+000,
2.894282e+000,
1.091724e+000,
1.875810e+000,
3.009805e+000,
-1.354811e+000,
-1.235828e+000,
-1.030640e+000,
};

