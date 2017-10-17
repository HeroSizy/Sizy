/* Test for cfft: rand */
#define NX 512
#define FNAME "t7"
#define MAXERROR 16

#pragma DATA_SECTION (x,".input")

DATA x[2*NX] ={
22,	-18,	/* 0 */ 
14,	-47,	/* 1 */ 
40,	-6,	/* 2 */ 
30,	16,	/* 3 */ 
-3,	29,	/* 4 */ 
12,	23,	/* 5 */ 
-42,	-32,	/* 6 */ 
3,	4,	/* 7 */ 
-5,	2,	/* 8 */ 
33,	38,	/* 9 */ 
32,	-6,	/* 10 */ 
-3,	-43,	/* 11 */ 
26,	43,	/* 12 */ 
14,	-46,	/* 13 */ 
-47,	4,	/* 14 */ 
-35,	40,	/* 15 */ 
-1,	37,	/* 16 */ 
-43,	10,	/* 17 */ 
-26,	18,	/* 18 */ 
-16,	40,	/* 19 */ 
37,	-5,	/* 20 */ 
-18,	-31,	/* 21 */ 
-24,	10,	/* 22 */ 
-7,	1,	/* 23 */ 
31,	-13,	/* 24 */ 
-30,	25,	/* 25 */ 
0,	30,	/* 26 */ 
-5,	-17,	/* 27 */ 
-17,	8,	/* 28 */ 
-12,	26,	/* 29 */ 
35,	-44,	/* 30 */ 
24,	33,	/* 31 */ 
35,	16,	/* 32 */ 
-4,	28,	/* 33 */ 
27,	38,	/* 34 */ 
-34,	-11,	/* 35 */ 
-41,	-3,	/* 36 */ 
-12,	-39,	/* 37 */ 
-12,	39,	/* 38 */ 
-2,	16,	/* 39 */ 
43,	13,	/* 40 */ 
-15,	46,	/* 41 */ 
-23,	-1,	/* 42 */ 
7,	-7,	/* 43 */ 
2,	30,	/* 44 */ 
-32,	-36,	/* 45 */ 
-2,	9,	/* 46 */ 
-1,	-26,	/* 47 */ 
31,	-10,	/* 48 */ 
28,	-19,	/* 49 */ 
33,	12,	/* 50 */ 
10,	41,	/* 51 */ 
6,	-46,	/* 52 */ 
10,	29,	/* 53 */ 
-37,	17,	/* 54 */ 
-32,	44,	/* 55 */ 
-9,	-40,	/* 56 */ 
5,	-43,	/* 57 */ 
-22,	22,	/* 58 */ 
26,	29,	/* 59 */ 
-11,	-23,	/* 60 */ 
-44,	18,	/* 61 */ 
7,	-19,	/* 62 */ 
5,	-39,	/* 63 */ 
-28,	34,	/* 64 */ 
-39,	-40,	/* 65 */ 
40,	22,	/* 66 */ 
-23,	-35,	/* 67 */ 
-28,	-6,	/* 68 */ 
-42,	8,	/* 69 */ 
9,	12,	/* 70 */ 
4,	3,	/* 71 */ 
-38,	-28,	/* 72 */ 
12,	16,	/* 73 */ 
-6,	-24,	/* 74 */ 
-41,	20,	/* 75 */ 
-12,	-10,	/* 76 */ 
-24,	-10,	/* 77 */ 
39,	-9,	/* 78 */ 
12,	-33,	/* 79 */ 
35,	35,	/* 80 */ 
13,	-45,	/* 81 */ 
27,	39,	/* 82 */ 
-7,	12,	/* 83 */ 
44,	-41,	/* 84 */ 
-38,	12,	/* 85 */ 
2,	23,	/* 86 */ 
4,	25,	/* 87 */ 
-21,	28,	/* 88 */ 
-12,	4,	/* 89 */ 
-41,	-2,	/* 90 */ 
4,	-6,	/* 91 */ 
31,	11,	/* 92 */ 
-33,	-40,	/* 93 */ 
-31,	4,	/* 94 */ 
-41,	-28,	/* 95 */ 
30,	-22,	/* 96 */ 
-34,	-20,	/* 97 */ 
35,	29,	/* 98 */ 
1,	-9,	/* 99 */ 
43,	2,	/* 100 */ 
-36,	39,	/* 101 */ 
-42,	-12,	/* 102 */ 
-12,	12,	/* 103 */ 
-9,	-31,	/* 104 */ 
-10,	26,	/* 105 */ 
-8,	-13,	/* 106 */ 
-12,	25,	/* 107 */ 
37,	-15,	/* 108 */ 
15,	25,	/* 109 */ 
42,	-33,	/* 110 */ 
-32,	-33,	/* 111 */ 
23,	12,	/* 112 */ 
-12,	-38,	/* 113 */ 
-5,	39,	/* 114 */ 
-43,	-2,	/* 115 */ 
5,	-32,	/* 116 */ 
-12,	-21,	/* 117 */ 
27,	-35,	/* 118 */ 
27,	-45,	/* 119 */ 
-11,	-25,	/* 120 */ 
-23,	32,	/* 121 */ 
-15,	21,	/* 122 */ 
43,	18,	/* 123 */ 
-2,	-11,	/* 124 */ 
-13,	-2,	/* 125 */ 
24,	43,	/* 126 */ 
-12,	26,	/* 127 */ 
37,	-9,	/* 128 */ 
-30,	42,	/* 129 */ 
-13,	-29,	/* 130 */ 
38,	2,	/* 131 */ 
1,	0,	/* 132 */ 
-39,	-2,	/* 133 */ 
21,	-12,	/* 134 */ 
-46,	1,	/* 135 */ 
9,	29,	/* 136 */ 
42,	-28,	/* 137 */ 
-10,	-11,	/* 138 */ 
21,	-43,	/* 139 */ 
17,	-19,	/* 140 */ 
44,	29,	/* 141 */ 
-28,	16,	/* 142 */ 
8,	35,	/* 143 */ 
41,	-39,	/* 144 */ 
-23,	-1,	/* 145 */ 
1,	-7,	/* 146 */ 
12,	-15,	/* 147 */ 
-10,	38,	/* 148 */ 
-2,	-32,	/* 149 */ 
23,	-11,	/* 150 */ 
-35,	43,	/* 151 */ 
-43,	-41,	/* 152 */ 
-12,	-18,	/* 153 */ 
17,	-35,	/* 154 */ 
40,	-36,	/* 155 */ 
-3,	-32,	/* 156 */ 
-35,	-38,	/* 157 */ 
-2,	2,	/* 158 */ 
41,	24,	/* 159 */ 
-13,	-8,	/* 160 */ 
-16,	31,	/* 161 */ 
25,	28,	/* 162 */ 
-19,	-46,	/* 163 */ 
-30,	13,	/* 164 */ 
17,	-36,	/* 165 */ 
-22,	-27,	/* 166 */ 
-4,	38,	/* 167 */ 
31,	-33,	/* 168 */ 
35,	-28,	/* 169 */ 
18,	32,	/* 170 */ 
23,	19,	/* 171 */ 
44,	-39,	/* 172 */ 
-10,	29,	/* 173 */ 
-35,	-15,	/* 174 */ 
20,	-32,	/* 175 */ 
37,	3,	/* 176 */ 
-31,	39,	/* 177 */ 
-43,	-6,	/* 178 */ 
-2,	3,	/* 179 */ 
-38,	18,	/* 180 */ 
13,	-47,	/* 181 */ 
41,	31,	/* 182 */ 
-4,	36,	/* 183 */ 
3,	-45,	/* 184 */ 
-41,	-38,	/* 185 */ 
-1,	-12,	/* 186 */ 
-8,	43,	/* 187 */ 
-20,	11,	/* 188 */ 
-20,	15,	/* 189 */ 
23,	-5,	/* 190 */ 
-38,	31,	/* 191 */ 
-40,	29,	/* 192 */ 
20,	3,	/* 193 */ 
24,	-38,	/* 194 */ 
14,	-20,	/* 195 */ 
28,	9,	/* 196 */ 
-12,	-30,	/* 197 */ 
-18,	21,	/* 198 */ 
-13,	4,	/* 199 */ 
19,	-32,	/* 200 */ 
-31,	39,	/* 201 */ 
29,	-28,	/* 202 */ 
-4,	-46,	/* 203 */ 
20,	17,	/* 204 */ 
45,	-10,	/* 205 */ 
-13,	-12,	/* 206 */ 
21,	37,	/* 207 */ 
13,	41,	/* 208 */ 
16,	-3,	/* 209 */ 
-46,	-45,	/* 210 */ 
14,	29,	/* 211 */ 
41,	-42,	/* 212 */ 
10,	-39,	/* 213 */ 
26,	18,	/* 214 */ 
-47,	-33,	/* 215 */ 
27,	-42,	/* 216 */ 
13,	-41,	/* 217 */ 
-30,	20,	/* 218 */ 
2,	-44,	/* 219 */ 
-27,	18,	/* 220 */ 
4,	-26,	/* 221 */ 
-42,	11,	/* 222 */ 
8,	1,	/* 223 */ 
-8,	7,	/* 224 */ 
-30,	-20,	/* 225 */ 
-41,	36,	/* 226 */ 
-40,	-38,	/* 227 */ 
-18,	-20,	/* 228 */ 
41,	29,	/* 229 */ 
44,	45,	/* 230 */ 
5,	-41,	/* 231 */ 
45,	43,	/* 232 */ 
17,	39,	/* 233 */ 
-24,	42,	/* 234 */ 
28,	5,	/* 235 */ 
40,	41,	/* 236 */ 
-35,	-17,	/* 237 */ 
17,	-22,	/* 238 */ 
-19,	-41,	/* 239 */ 
13,	-16,	/* 240 */ 
-4,	-20,	/* 241 */ 
39,	-10,	/* 242 */ 
-24,	-44,	/* 243 */ 
14,	-20,	/* 244 */ 
-16,	-27,	/* 245 */ 
-3,	6,	/* 246 */ 
-3,	34,	/* 247 */ 
19,	-23,	/* 248 */ 
-25,	8,	/* 249 */ 
20,	2,	/* 250 */ 
33,	-35,	/* 251 */ 
-9,	-47,	/* 252 */ 
-7,	-17,	/* 253 */ 
42,	-13,	/* 254 */ 
35,	45,	/* 255 */ 
18,	40,	/* 256 */ 
-19,	-7,	/* 257 */ 
30,	40,	/* 258 */ 
43,	-1,	/* 259 */ 
-19,	43,	/* 260 */ 
46,	42,	/* 261 */ 
-6,	20,	/* 262 */ 
-46,	13,	/* 263 */ 
-20,	33,	/* 264 */ 
17,	-44,	/* 265 */ 
-1,	-13,	/* 266 */ 
-39,	-38,	/* 267 */ 
-29,	-16,	/* 268 */ 
44,	-46,	/* 269 */ 
-13,	29,	/* 270 */ 
-34,	-45,	/* 271 */ 
-46,	-8,	/* 272 */ 
13,	-44,	/* 273 */ 
22,	16,	/* 274 */ 
-44,	-16,	/* 275 */ 
-37,	5,	/* 276 */ 
36,	-7,	/* 277 */ 
24,	-33,	/* 278 */ 
7,	-41,	/* 279 */ 
17,	10,	/* 280 */ 
43,	11,	/* 281 */ 
4,	-31,	/* 282 */ 
25,	-9,	/* 283 */ 
10,	19,	/* 284 */ 
45,	-7,	/* 285 */ 
-42,	-27,	/* 286 */ 
45,	8,	/* 287 */ 
-28,	31,	/* 288 */ 
38,	36,	/* 289 */ 
15,	35,	/* 290 */ 
-4,	42,	/* 291 */ 
-42,	25,	/* 292 */ 
-4,	-13,	/* 293 */ 
27,	-41,	/* 294 */ 
-20,	-37,	/* 295 */ 
18,	40,	/* 296 */ 
-23,	1,	/* 297 */ 
19,	-27,	/* 298 */ 
20,	-8,	/* 299 */ 
21,	30,	/* 300 */ 
11,	-34,	/* 301 */ 
45,	-17,	/* 302 */ 
-33,	29,	/* 303 */ 
-28,	-20,	/* 304 */ 
29,	-39,	/* 305 */ 
-41,	39,	/* 306 */ 
3,	-31,	/* 307 */ 
-29,	-11,	/* 308 */ 
9,	-2,	/* 309 */ 
-20,	28,	/* 310 */ 
-38,	-9,	/* 311 */ 
0,	27,	/* 312 */ 
35,	-45,	/* 313 */ 
10,	42,	/* 314 */ 
-43,	32,	/* 315 */ 
41,	45,	/* 316 */ 
-31,	-24,	/* 317 */ 
30,	-2,	/* 318 */ 
10,	-17,	/* 319 */ 
32,	-42,	/* 320 */ 
-36,	-20,	/* 321 */ 
13,	16,	/* 322 */ 
-36,	41,	/* 323 */ 
-3,	-43,	/* 324 */ 
17,	29,	/* 325 */ 
-35,	-26,	/* 326 */ 
-4,	46,	/* 327 */ 
-40,	-23,	/* 328 */ 
7,	-26,	/* 329 */ 
6,	2,	/* 330 */ 
-23,	5,	/* 331 */ 
-25,	30,	/* 332 */ 
-45,	-20,	/* 333 */ 
-11,	-23,	/* 334 */ 
23,	-25,	/* 335 */ 
6,	4,	/* 336 */ 
-9,	-27,	/* 337 */ 
-29,	15,	/* 338 */ 
1,	-18,	/* 339 */ 
19,	-3,	/* 340 */ 
34,	0,	/* 341 */ 
22,	17,	/* 342 */ 
45,	-29,	/* 343 */ 
34,	-22,	/* 344 */ 
-2,	39,	/* 345 */ 
37,	-25,	/* 346 */ 
-45,	-35,	/* 347 */ 
12,	-9,	/* 348 */ 
41,	12,	/* 349 */ 
-43,	-30,	/* 350 */ 
-20,	-9,	/* 351 */ 
16,	17,	/* 352 */ 
8,	-17,	/* 353 */ 
-41,	39,	/* 354 */ 
35,	23,	/* 355 */ 
-2,	-10,	/* 356 */ 
36,	-29,	/* 357 */ 
24,	-10,	/* 358 */ 
14,	-33,	/* 359 */ 
43,	-41,	/* 360 */ 
-31,	-36,	/* 361 */ 
-34,	-44,	/* 362 */ 
23,	33,	/* 363 */ 
-18,	-8,	/* 364 */ 
-4,	27,	/* 365 */ 
-15,	29,	/* 366 */ 
-46,	-10,	/* 367 */ 
-16,	30,	/* 368 */ 
-24,	-16,	/* 369 */ 
45,	-29,	/* 370 */ 
37,	0,	/* 371 */ 
-14,	-27,	/* 372 */ 
-21,	7,	/* 373 */ 
-38,	44,	/* 374 */ 
-25,	-4,	/* 375 */ 
37,	28,	/* 376 */ 
-17,	-7,	/* 377 */ 
6,	-25,	/* 378 */ 
-30,	12,	/* 379 */ 
22,	-13,	/* 380 */ 
-37,	-7,	/* 381 */ 
-11,	-19,	/* 382 */ 
33,	-7,	/* 383 */ 
33,	17,	/* 384 */ 
29,	1,	/* 385 */ 
-24,	45,	/* 386 */ 
36,	-30,	/* 387 */ 
9,	5,	/* 388 */ 
-34,	-2,	/* 389 */ 
-32,	-10,	/* 390 */ 
35,	-1,	/* 391 */ 
44,	43,	/* 392 */ 
9,	30,	/* 393 */ 
-13,	-35,	/* 394 */ 
-25,	31,	/* 395 */ 
-5,	26,	/* 396 */ 
13,	-15,	/* 397 */ 
-24,	22,	/* 398 */ 
-3,	-41,	/* 399 */ 
-1,	5,	/* 400 */ 
-40,	26,	/* 401 */ 
24,	-34,	/* 402 */ 
-43,	5,	/* 403 */ 
-32,	-28,	/* 404 */ 
25,	33,	/* 405 */ 
-28,	-23,	/* 406 */ 
-24,	-21,	/* 407 */ 
-10,	-20,	/* 408 */ 
-2,	21,	/* 409 */ 
0,	-1,	/* 410 */ 
11,	-42,	/* 411 */ 
11,	-29,	/* 412 */ 
45,	20,	/* 413 */ 
-14,	43,	/* 414 */ 
-21,	18,	/* 415 */ 
16,	27,	/* 416 */ 
0,	-28,	/* 417 */ 
-21,	25,	/* 418 */ 
7,	34,	/* 419 */ 
29,	28,	/* 420 */ 
40,	23,	/* 421 */ 
-6,	37,	/* 422 */ 
-8,	-8,	/* 423 */ 
46,	14,	/* 424 */ 
10,	-47,	/* 425 */ 
41,	44,	/* 426 */ 
38,	-9,	/* 427 */ 
29,	-15,	/* 428 */ 
17,	15,	/* 429 */ 
-18,	-6,	/* 430 */ 
5,	31,	/* 431 */ 
12,	2,	/* 432 */ 
24,	-23,	/* 433 */ 
-42,	-32,	/* 434 */ 
-36,	5,	/* 435 */ 
32,	42,	/* 436 */ 
-31,	41,	/* 437 */ 
-43,	21,	/* 438 */ 
-18,	-26,	/* 439 */ 
29,	-1,	/* 440 */ 
-25,	-46,	/* 441 */ 
8,	-18,	/* 442 */ 
39,	22,	/* 443 */ 
-16,	26,	/* 444 */ 
-28,	-10,	/* 445 */ 
-13,	-10,	/* 446 */ 
44,	-24,	/* 447 */ 
20,	-38,	/* 448 */ 
13,	9,	/* 449 */ 
26,	30,	/* 450 */ 
-4,	-20,	/* 451 */ 
-25,	-4,	/* 452 */ 
-17,	-43,	/* 453 */ 
26,	-39,	/* 454 */ 
12,	1,	/* 455 */ 
14,	20,	/* 456 */ 
3,	-44,	/* 457 */ 
38,	44,	/* 458 */ 
26,	-1,	/* 459 */ 
-17,	18,	/* 460 */ 
22,	28,	/* 461 */ 
-6,	1,	/* 462 */ 
8,	0,	/* 463 */ 
-36,	23,	/* 464 */ 
-17,	-25,	/* 465 */ 
11,	41,	/* 466 */ 
36,	-39,	/* 467 */ 
43,	3,	/* 468 */ 
-45,	37,	/* 469 */ 
-37,	33,	/* 470 */ 
-10,	12,	/* 471 */ 
-38,	-23,	/* 472 */ 
-20,	-12,	/* 473 */ 
16,	-16,	/* 474 */ 
44,	-18,	/* 475 */ 
-10,	41,	/* 476 */ 
29,	3,	/* 477 */ 
-35,	18,	/* 478 */ 
32,	34,	/* 479 */ 
-25,	45,	/* 480 */ 
-41,	35,	/* 481 */ 
-16,	-9,	/* 482 */ 
6,	11,	/* 483 */ 
-34,	-11,	/* 484 */ 
34,	32,	/* 485 */ 
-16,	2,	/* 486 */ 
-2,	28,	/* 487 */ 
-7,	-10,	/* 488 */ 
-23,	42,	/* 489 */ 
44,	-44,	/* 490 */ 
43,	42,	/* 491 */ 
41,	19,	/* 492 */ 
-5,	13,	/* 493 */ 
-16,	-5,	/* 494 */ 
-46,	-31,	/* 495 */ 
-32,	31,	/* 496 */ 
30,	43,	/* 497 */ 
13,	-34,	/* 498 */ 
-17,	-24,	/* 499 */ 
-44,	38,	/* 500 */ 
-14,	16,	/* 501 */ 
22,	11,	/* 502 */ 
-19,	1,	/* 503 */ 
-30,	-47,	/* 504 */ 
-8,	-26,	/* 505 */ 
34,	44,	/* 506 */ 
11,	33,	/* 507 */ 
-42,	-46,	/* 508 */ 
-9,	-2,	/* 509 */ 
-19,	-8,	/* 510 */ 
-33,	25,	/* 511 */ 
};

#pragma DATA_SECTION (rtest,".test")

DATA rtest[2*NX] ={
0,	0,	 /* 0 */ 
-1,	1,	 /* 1 */ 
0,	0,	 /* 2 */ 
-1,	-1,	 /* 3 */ 
-1,	0,	 /* 4 */ 
-1,	1,	 /* 5 */ 
0,	-1,	 /* 6 */ 
0,	-2,	 /* 7 */ 
0,	-1,	 /* 8 */ 
-1,	-1,	 /* 9 */ 
0,	-3,	 /* 10 */ 
-1,	1,	 /* 11 */ 
1,	-1,	 /* 12 */ 
0,	-1,	 /* 13 */ 
-2,	-1,	 /* 14 */ 
0,	1,	 /* 15 */ 
-2,	2,	 /* 16 */ 
0,	-3,	 /* 17 */ 
1,	1,	 /* 18 */ 
1,	-2,	 /* 19 */ 
-1,	2,	 /* 20 */ 
-1,	0,	 /* 21 */ 
0,	1,	 /* 22 */ 
0,	-1,	 /* 23 */ 
3,	-1,	 /* 24 */ 
-3,	-1,	 /* 25 */ 
-1,	0,	 /* 26 */ 
-1,	-1,	 /* 27 */ 
-2,	0,	 /* 28 */ 
0,	1,	 /* 29 */ 
-1,	-1,	 /* 30 */ 
0,	-2,	 /* 31 */ 
-2,	-1,	 /* 32 */ 
0,	0,	 /* 33 */ 
-1,	-1,	 /* 34 */ 
-2,	1,	 /* 35 */ 
-1,	-1,	 /* 36 */ 
0,	-1,	 /* 37 */ 
-4,	0,	 /* 38 */ 
0,	1,	 /* 39 */ 
0,	-1,	 /* 40 */ 
-2,	-1,	 /* 41 */ 
0,	0,	 /* 42 */ 
0,	-1,	 /* 43 */ 
-1,	-2,	 /* 44 */ 
0,	0,	 /* 45 */ 
0,	0,	 /* 46 */ 
0,	-2,	 /* 47 */ 
0,	0,	 /* 48 */ 
0,	0,	 /* 49 */ 
1,	-2,	 /* 50 */ 
1,	-1,	 /* 51 */ 
-1,	1,	 /* 52 */ 
1,	0,	 /* 53 */ 
-2,	1,	 /* 54 */ 
-2,	-1,	 /* 55 */ 
1,	0,	 /* 56 */ 
1,	0,	 /* 57 */ 
0,	0,	 /* 58 */ 
-3,	-1,	 /* 59 */ 
0,	0,	 /* 60 */ 
0,	-1,	 /* 61 */ 
-2,	1,	 /* 62 */ 
0,	1,	 /* 63 */ 
-1,	1,	 /* 64 */ 
-1,	0,	 /* 65 */ 
-1,	0,	 /* 66 */ 
-1,	1,	 /* 67 */ 
-2,	1,	 /* 68 */ 
-1,	-1,	 /* 69 */ 
0,	-2,	 /* 70 */ 
-1,	0,	 /* 71 */ 
0,	0,	 /* 72 */ 
-1,	-3,	 /* 73 */ 
-1,	0,	 /* 74 */ 
-1,	-1,	 /* 75 */ 
1,	1,	 /* 76 */ 
-1,	-2,	 /* 77 */ 
0,	-2,	 /* 78 */ 
1,	0,	 /* 79 */ 
-1,	0,	 /* 80 */ 
-2,	-1,	 /* 81 */ 
0,	-1,	 /* 82 */ 
-1,	0,	 /* 83 */ 
0,	-1,	 /* 84 */ 
-1,	-1,	 /* 85 */ 
-1,	-1,	 /* 86 */ 
0,	0,	 /* 87 */ 
-3,	-1,	 /* 88 */ 
0,	1,	 /* 89 */ 
1,	1,	 /* 90 */ 
-1,	-2,	 /* 91 */ 
-1,	-1,	 /* 92 */ 
0,	1,	 /* 93 */ 
-1,	2,	 /* 94 */ 
0,	0,	 /* 95 */ 
-1,	0,	 /* 96 */ 
-1,	0,	 /* 97 */ 
1,	-1,	 /* 98 */ 
-1,	-1,	 /* 99 */ 
2,	1,	 /* 100 */ 
2,	2,	 /* 101 */ 
1,	-1,	 /* 102 */ 
1,	-2,	 /* 103 */ 
1,	-1,	 /* 104 */ 
0,	0,	 /* 105 */ 
0,	-1,	 /* 106 */ 
0,	0,	 /* 107 */ 
1,	-2,	 /* 108 */ 
0,	0,	 /* 109 */ 
0,	0,	 /* 110 */ 
0,	0,	 /* 111 */ 
1,	-2,	 /* 112 */ 
-1,	-1,	 /* 113 */ 
-1,	0,	 /* 114 */ 
-1,	-2,	 /* 115 */ 
2,	-3,	 /* 116 */ 
0,	-2,	 /* 117 */ 
-1,	-2,	 /* 118 */ 
-2,	0,	 /* 119 */ 
0,	-1,	 /* 120 */ 
-2,	-1,	 /* 121 */ 
0,	-1,	 /* 122 */ 
-1,	0,	 /* 123 */ 
0,	0,	 /* 124 */ 
0,	-2,	 /* 125 */ 
-2,	1,	 /* 126 */ 
-2,	-2,	 /* 127 */ 
1,	-1,	 /* 128 */ 
1,	-2,	 /* 129 */ 
-2,	1,	 /* 130 */ 
0,	1,	 /* 131 */ 
-3,	1,	 /* 132 */ 
1,	3,	 /* 133 */ 
-1,	0,	 /* 134 */ 
1,	1,	 /* 135 */ 
-2,	-2,	 /* 136 */ 
-2,	-1,	 /* 137 */ 
0,	0,	 /* 138 */ 
0,	0,	 /* 139 */ 
0,	1,	 /* 140 */ 
-1,	1,	 /* 141 */ 
-2,	-2,	 /* 142 */ 
-2,	1,	 /* 143 */ 
-3,	-2,	 /* 144 */ 
0,	-3,	 /* 145 */ 
-1,	-1,	 /* 146 */ 
-1,	1,	 /* 147 */ 
-1,	-1,	 /* 148 */ 
1,	-2,	 /* 149 */ 
-1,	0,	 /* 150 */ 
0,	-3,	 /* 151 */ 
-2,	-3,	 /* 152 */ 
-2,	-1,	 /* 153 */ 
0,	-1,	 /* 154 */ 
2,	-1,	 /* 155 */ 
-1,	0,	 /* 156 */ 
1,	0,	 /* 157 */ 
-1,	-2,	 /* 158 */ 
0,	1,	 /* 159 */ 
0,	-1,	 /* 160 */ 
-1,	0,	 /* 161 */ 
0,	1,	 /* 162 */ 
-2,	0,	 /* 163 */ 
1,	-3,	 /* 164 */ 
0,	1,	 /* 165 */ 
-3,	1,	 /* 166 */ 
2,	-1,	 /* 167 */ 
-1,	2,	 /* 168 */ 
-2,	0,	 /* 169 */ 
0,	0,	 /* 170 */ 
-2,	0,	 /* 171 */ 
3,	1,	 /* 172 */ 
1,	-1,	 /* 173 */ 
0,	0,	 /* 174 */ 
0,	1,	 /* 175 */ 
1,	-2,	 /* 176 */ 
-1,	-1,	 /* 177 */ 
0,	0,	 /* 178 */ 
-3,	0,	 /* 179 */ 
1,	0,	 /* 180 */ 
-2,	1,	 /* 181 */ 
2,	-2,	 /* 182 */ 
0,	-1,	 /* 183 */ 
-2,	1,	 /* 184 */ 
-1,	1,	 /* 185 */ 
0,	-1,	 /* 186 */ 
-2,	-1,	 /* 187 */ 
-1,	-1,	 /* 188 */ 
0,	-2,	 /* 189 */ 
1,	-1,	 /* 190 */ 
-1,	-1,	 /* 191 */ 
2,	-1,	 /* 192 */ 
-1,	-1,	 /* 193 */ 
-1,	-2,	 /* 194 */ 
-1,	-3,	 /* 195 */ 
1,	0,	 /* 196 */ 
-1,	1,	 /* 197 */ 
0,	-1,	 /* 198 */ 
0,	1,	 /* 199 */ 
1,	0,	 /* 200 */ 
-1,	0,	 /* 201 */ 
0,	0,	 /* 202 */ 
2,	0,	 /* 203 */ 
0,	0,	 /* 204 */ 
-1,	-2,	 /* 205 */ 
1,	-1,	 /* 206 */ 
0,	-1,	 /* 207 */ 
1,	-1,	 /* 208 */ 
2,	0,	 /* 209 */ 
2,	-1,	 /* 210 */ 
0,	2,	 /* 211 */ 
-2,	0,	 /* 212 */ 
0,	-1,	 /* 213 */ 
0,	0,	 /* 214 */ 
0,	-1,	 /* 215 */ 
-1,	1,	 /* 216 */ 
-1,	-3,	 /* 217 */ 
0,	1,	 /* 218 */ 
-3,	0,	 /* 219 */ 
-1,	0,	 /* 220 */ 
0,	0,	 /* 221 */ 
0,	-2,	 /* 222 */ 
0,	-2,	 /* 223 */ 
0,	1,	 /* 224 */ 
1,	1,	 /* 225 */ 
-4,	0,	 /* 226 */ 
-1,	0,	 /* 227 */ 
1,	-1,	 /* 228 */ 
1,	-1,	 /* 229 */ 
2,	1,	 /* 230 */ 
-1,	-1,	 /* 231 */ 
1,	-1,	 /* 232 */ 
0,	1,	 /* 233 */ 
-1,	0,	 /* 234 */ 
-1,	-2,	 /* 235 */ 
-1,	-2,	 /* 236 */ 
1,	-2,	 /* 237 */ 
-2,	-1,	 /* 238 */ 
-1,	-1,	 /* 239 */ 
-1,	-1,	 /* 240 */ 
0,	0,	 /* 241 */ 
0,	-2,	 /* 242 */ 
-3,	1,	 /* 243 */ 
0,	2,	 /* 244 */ 
-2,	0,	 /* 245 */ 
0,	0,	 /* 246 */ 
-2,	0,	 /* 247 */ 
1,	0,	 /* 248 */ 
0,	-1,	 /* 249 */ 
0,	-1,	 /* 250 */ 
1,	-2,	 /* 251 */ 
-1,	0,	 /* 252 */ 
-1,	-3,	 /* 253 */ 
-1,	0,	 /* 254 */ 
-1,	-3,	 /* 255 */ 
1,	1,	 /* 256 */ 
1,	0,	 /* 257 */ 
-2,	2,	 /* 258 */ 
-1,	-2,	 /* 259 */ 
-1,	-2,	 /* 260 */ 
0,	0,	 /* 261 */ 
0,	-1,	 /* 262 */ 
-3,	2,	 /* 263 */ 
0,	-2,	 /* 264 */ 
-2,	0,	 /* 265 */ 
-1,	-1,	 /* 266 */ 
1,	0,	 /* 267 */ 
-2,	0,	 /* 268 */ 
2,	0,	 /* 269 */ 
-2,	-2,	 /* 270 */ 
0,	-1,	 /* 271 */ 
-1,	-1,	 /* 272 */ 
-1,	0,	 /* 273 */ 
-1,	0,	 /* 274 */ 
1,	-3,	 /* 275 */ 
-2,	-3,	 /* 276 */ 
2,	0,	 /* 277 */ 
0,	-2,	 /* 278 */ 
0,	1,	 /* 279 */ 
2,	-2,	 /* 280 */ 
-2,	-1,	 /* 281 */ 
0,	2,	 /* 282 */ 
-1,	-2,	 /* 283 */ 
-2,	0,	 /* 284 */ 
-1,	-2,	 /* 285 */ 
0,	-2,	 /* 286 */ 
2,	0,	 /* 287 */ 
-1,	1,	 /* 288 */ 
-1,	1,	 /* 289 */ 
-1,	1,	 /* 290 */ 
-1,	-2,	 /* 291 */ 
1,	0,	 /* 292 */ 
2,	0,	 /* 293 */ 
0,	-2,	 /* 294 */ 
-2,	0,	 /* 295 */ 
-1,	0,	 /* 296 */ 
0,	0,	 /* 297 */ 
0,	1,	 /* 298 */ 
1,	-1,	 /* 299 */ 
-1,	-1,	 /* 300 */ 
-1,	3,	 /* 301 */ 
0,	1,	 /* 302 */ 
-1,	-2,	 /* 303 */ 
-1,	-1,	 /* 304 */ 
0,	0,	 /* 305 */ 
0,	-1,	 /* 306 */ 
-1,	-2,	 /* 307 */ 
-1,	-2,	 /* 308 */ 
-1,	1,	 /* 309 */ 
1,	0,	 /* 310 */ 
-1,	0,	 /* 311 */ 
-1,	0,	 /* 312 */ 
-1,	1,	 /* 313 */ 
-1,	0,	 /* 314 */ 
-2,	0,	 /* 315 */ 
1,	-1,	 /* 316 */ 
1,	-3,	 /* 317 */ 
0,	0,	 /* 318 */ 
-3,	1,	 /* 319 */ 
0,	0,	 /* 320 */ 
1,	0,	 /* 321 */ 
-2,	-2,	 /* 322 */ 
0,	0,	 /* 323 */ 
2,	0,	 /* 324 */ 
0,	-1,	 /* 325 */ 
-2,	1,	 /* 326 */ 
0,	-3,	 /* 327 */ 
-2,	-2,	 /* 328 */ 
-1,	1,	 /* 329 */ 
-2,	-2,	 /* 330 */ 
-1,	-2,	 /* 331 */ 
-1,	0,	 /* 332 */ 
-1,	1,	 /* 333 */ 
1,	1,	 /* 334 */ 
0,	0,	 /* 335 */ 
-1,	0,	 /* 336 */ 
1,	-1,	 /* 337 */ 
-2,	2,	 /* 338 */ 
-1,	-1,	 /* 339 */ 
0,	-1,	 /* 340 */ 
-1,	1,	 /* 341 */ 
1,	-1,	 /* 342 */ 
0,	-1,	 /* 343 */ 
1,	-2,	 /* 344 */ 
-1,	0,	 /* 345 */ 
0,	0,	 /* 346 */ 
-1,	0,	 /* 347 */ 
1,	-1,	 /* 348 */ 
2,	2,	 /* 349 */ 
-2,	2,	 /* 350 */ 
2,	-2,	 /* 351 */ 
-2,	1,	 /* 352 */ 
-1,	0,	 /* 353 */ 
-2,	-2,	 /* 354 */ 
-1,	-1,	 /* 355 */ 
0,	-1,	 /* 356 */ 
-1,	-2,	 /* 357 */ 
2,	0,	 /* 358 */ 
0,	-1,	 /* 359 */ 
0,	0,	 /* 360 */ 
0,	0,	 /* 361 */ 
-1,	-1,	 /* 362 */ 
1,	-1,	 /* 363 */ 
1,	0,	 /* 364 */ 
-2,	-3,	 /* 365 */ 
1,	-2,	 /* 366 */ 
-2,	1,	 /* 367 */ 
0,	0,	 /* 368 */ 
0,	-2,	 /* 369 */ 
-2,	1,	 /* 370 */ 
1,	-2,	 /* 371 */ 
-1,	-2,	 /* 372 */ 
1,	-2,	 /* 373 */ 
-3,	-2,	 /* 374 */ 
0,	-1,	 /* 375 */ 
-2,	0,	 /* 376 */ 
0,	-1,	 /* 377 */ 
0,	-2,	 /* 378 */ 
-1,	-3,	 /* 379 */ 
0,	1,	 /* 380 */ 
-2,	-2,	 /* 381 */ 
-3,	0,	 /* 382 */ 
0,	1,	 /* 383 */ 
0,	-1,	 /* 384 */ 
0,	0,	 /* 385 */ 
-1,	-1,	 /* 386 */ 
-1,	1,	 /* 387 */ 
1,	-1,	 /* 388 */ 
1,	0,	 /* 389 */ 
-2,	-1,	 /* 390 */ 
-2,	0,	 /* 391 */ 
-3,	0,	 /* 392 */ 
0,	-1,	 /* 393 */ 
0,	-2,	 /* 394 */ 
-3,	-1,	 /* 395 */ 
1,	1,	 /* 396 */ 
-2,	0,	 /* 397 */ 
-2,	0,	 /* 398 */ 
1,	-1,	 /* 399 */ 
-2,	1,	 /* 400 */ 
-3,	-1,	 /* 401 */ 
-1,	0,	 /* 402 */ 
-2,	-1,	 /* 403 */ 
-1,	0,	 /* 404 */ 
0,	-1,	 /* 405 */ 
0,	0,	 /* 406 */ 
0,	0,	 /* 407 */ 
-1,	2,	 /* 408 */ 
-1,	-2,	 /* 409 */ 
-2,	1,	 /* 410 */ 
-1,	0,	 /* 411 */ 
-3,	-1,	 /* 412 */ 
1,	0,	 /* 413 */ 
-1,	0,	 /* 414 */ 
-1,	-1,	 /* 415 */ 
1,	0,	 /* 416 */ 
-1,	0,	 /* 417 */ 
0,	0,	 /* 418 */ 
0,	-1,	 /* 419 */ 
-2,	-2,	 /* 420 */ 
-2,	-1,	 /* 421 */ 
1,	-1,	 /* 422 */ 
-1,	0,	 /* 423 */ 
-1,	0,	 /* 424 */ 
1,	-3,	 /* 425 */ 
-4,	-1,	 /* 426 */ 
-1,	-2,	 /* 427 */ 
-2,	1,	 /* 428 */ 
-1,	0,	 /* 429 */ 
1,	0,	 /* 430 */ 
0,	1,	 /* 431 */ 
1,	-1,	 /* 432 */ 
0,	-3,	 /* 433 */ 
0,	0,	 /* 434 */ 
0,	-1,	 /* 435 */ 
-1,	2,	 /* 436 */ 
-2,	-1,	 /* 437 */ 
-3,	0,	 /* 438 */ 
3,	0,	 /* 439 */ 
1,	-1,	 /* 440 */ 
-1,	-4,	 /* 441 */ 
-1,	-2,	 /* 442 */ 
0,	-1,	 /* 443 */ 
-1,	-1,	 /* 444 */ 
1,	-1,	 /* 445 */ 
0,	-3,	 /* 446 */ 
1,	-2,	 /* 447 */ 
-1,	-2,	 /* 448 */ 
-2,	-3,	 /* 449 */ 
0,	2,	 /* 450 */ 
-2,	0,	 /* 451 */ 
-1,	1,	 /* 452 */ 
-1,	0,	 /* 453 */ 
-1,	-1,	 /* 454 */ 
-1,	0,	 /* 455 */ 
-1,	-3,	 /* 456 */ 
2,	-2,	 /* 457 */ 
-2,	-3,	 /* 458 */ 
-1,	-4,	 /* 459 */ 
1,	-1,	 /* 460 */ 
1,	0,	 /* 461 */ 
-2,	-1,	 /* 462 */ 
-2,	1,	 /* 463 */ 
1,	1,	 /* 464 */ 
0,	-1,	 /* 465 */ 
0,	0,	 /* 466 */ 
0,	-1,	 /* 467 */ 
0,	-1,	 /* 468 */ 
0,	-4,	 /* 469 */ 
2,	0,	 /* 470 */ 
-1,	1,	 /* 471 */ 
0,	-2,	 /* 472 */ 
-2,	0,	 /* 473 */ 
1,	-1,	 /* 474 */ 
-1,	0,	 /* 475 */ 
1,	-1,	 /* 476 */ 
-4,	0,	 /* 477 */ 
-2,	-2,	 /* 478 */ 
0,	-1,	 /* 479 */ 
0,	1,	 /* 480 */ 
0,	0,	 /* 481 */ 
1,	1,	 /* 482 */ 
0,	0,	 /* 483 */ 
-2,	1,	 /* 484 */ 
-1,	-1,	 /* 485 */ 
0,	-2,	 /* 486 */ 
0,	0,	 /* 487 */ 
0,	-1,	 /* 488 */ 
-4,	-3,	 /* 489 */ 
0,	-1,	 /* 490 */ 
-1,	-2,	 /* 491 */ 
2,	-1,	 /* 492 */ 
-2,	-2,	 /* 493 */ 
3,	1,	 /* 494 */ 
-1,	-1,	 /* 495 */ 
1,	-1,	 /* 496 */ 
-1,	-4,	 /* 497 */ 
-2,	0,	 /* 498 */ 
0,	-1,	 /* 499 */ 
2,	1,	 /* 500 */ 
0,	0,	 /* 501 */ 
0,	-1,	 /* 502 */ 
0,	-3,	 /* 503 */ 
-2,	-1,	 /* 504 */ 
0,	-1,	 /* 505 */ 
-1,	-2,	 /* 506 */ 
-1,	-1,	 /* 507 */ 
0,	-1,	 /* 508 */ 
-1,	0,	 /* 509 */ 
-1,	1,	 /* 510 */ 
-2,	2,	 /* 511 */ 
};

DATA error;

