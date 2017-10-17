/*Test for cfft: rand*/
#define NX 16
#define FNAME "t16"
#define MAXERROR 16
#pragma DATA_SECTION (x,".input")
LDATA x[2*NX] ={
27367743, -72835750,
23887679, -1986014,
43293598, -33911240,
22434510, 20617959,
39957895, 17036954,
-40347765, 56788523,
-664027, 19840151,
-5258560, -21595471,
-53824180, 12762000,
8633697, -33860298,
-35449349, -654669,
47484269, -1618021,
-27014351, 1449,
17741671, -10665593,
7359181, 36742228,
-30933885, -62880679,
};


#pragma DATA_SECTION (rtest,".test")
LDATA rtest[2*NX] ={
44668126, -76218471,
53132777, -67329895,
489712, -93079734,
4561611, 16805232,
-103805126, -88862869,
-31418926, -25612502,
-109704947, 166881376,
10237403, -249289618,
-42615106, 34180717,
268820973, 106962954,
103006902, -58846382,
140122412, -198803663,
47700534, -41240765,
-33909152, -88522573,
-151391591, -323403872,
237988285, -178991935,
};
