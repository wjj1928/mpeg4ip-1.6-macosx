/****************************************************************************/
/*   MPEG4 Visual Texture Coding (VTC) Mode Software                        */
/*                                                                          */
/*   This software was jointly developed by the following participants:     */
/*                                                                          */
/*   Single-quant,  multi-quant and flow control                            */
/*   are provided by  Sarnoff Corporation                                   */
/*     Iraj Sodagar   (iraj@sarnoff.com)                                    */
/*     Hung-Ju Lee    (hjlee@sarnoff.com)                                   */
/*     Paul Hatrack   (hatrack@sarnoff.com)                                 */
/*     Shipeng Li     (shipeng@sarnoff.com)                                 */
/*     Bing-Bing Chai (bchai@sarnoff.com)                                   */
/*     B.S. Srinivas  (bsrinivas@sarnoff.com)                               */
/*                                                                          */
/*   Bi-level is provided by Texas Instruments                              */
/*     Jie Liang      (liang@ti.com)                                        */
/*                                                                          */
/*   Shape Coding is provided by  OKI Electric Industry Co., Ltd.           */
/*     Zhixiong Wu    (sgo@hlabs.oki.co.jp)                                 */
/*     Yoshihiro Ueda (yueda@hlabs.oki.co.jp)                               */
/*     Toshifumi Kanamaru (kanamaru@hlabs.oki.co.jp)                        */
/*                                                                          */
/*   OKI, Sharp, Sarnoff, TI and Microsoft contributed to bitstream         */
/*   exchange and bug fixing.                                               */
/*                                                                          */
/*                                                                          */
/* In the course of development of the MPEG-4 standard, this software       */
/* module is an implementation of a part of one or more MPEG-4 tools as     */
/* specified by the MPEG-4 standard.                                        */
/*                                                                          */
/* The copyright of this software belongs to ISO/IEC. ISO/IEC gives use     */
/* of the MPEG-4 standard free license to use this  software module or      */
/* modifications thereof for hardware or software products claiming         */
/* conformance to the MPEG-4 standard.                                      */
/*                                                                          */
/* Those intending to use this software module in hardware or software      */
/* products are advised that use may infringe existing  patents. The        */
/* original developers of this software module and their companies, the     */
/* subsequent editors and their companies, and ISO/IEC have no liability    */
/* and ISO/IEC have no liability for use of this software module or         */
/* modification thereof in an implementation.                               */
/*                                                                          */
/* Permission is granted to MPEG members to use, copy, modify,              */
/* and distribute the software modules ( or portions thereof )              */
/* for standardization activity within ISO/IEC JTC1/SC29/WG11.              */
/*                                                                          */
/* Copyright 1995, 1996, 1997, 1998 ISO/IEC                                 */
/****************************************************************************/

#ifndef _SHAPE_DEF_H_
#define _SHAPE_DEF_H_
#include	<limits.h>

#define		ALL0			0
#define		ALL255			1
#define		BORDER			2

#define		CR1_1			2
#define		CR1_2			3
#define		CR1_4			4


/**************  Code Book for shape MMR coding  ******************/

static	Int		LMMR_first_shape_code_I [81][3] = {
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*0*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*1*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 2, 2, 1 },/*2*/
	{ 2, 2, 1 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*3*/
	{ 2, 2, 1 },	{ 1, 2, 2 },	{ 2, 1, 2 },/*4*/
	{ 2, 2, 1 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*5*/
	{ 2, 2, 1 },	{ 1, 2, 2 },	{ 2, 2, 1 },/*6*/
	{ 2, 2, 1 },	{ 1, 2, 2 },	{ 2, 2, 1 },/*7*/
	{ 2, 2, 1 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*8*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*9*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*10*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 2, 2, 1 },/*11*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*12*/
	{ 1, 2, 2 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*13*/
	{ 1, 2, 2 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*14*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*15*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*16*/
	{ 1, 2, 2 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*17*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*18*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 1, 2, 2 },/*19*/
	{ 1, 2, 2 },	{ 1, 2, 2 },	{ 2, 2, 1 },/*20*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*21*/
	{ 2, 2, 1 },	{ 2, 1, 2 },	{ 2, 1, 2 },/*22*/
	{ 2, 2, 1 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*23*/
	{ 1, 2, 2 },	{ 2, 2, 1 },	{ 2, 2, 1 },/*24*/
	{ 2, 2, 1 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*25*/
	{ 1, 2, 2 },	{ 2, 1, 2 },	{ 2, 2, 1 },/*26*/
};

static	UInt	CMMR_first_shape_code_I [81][3] = {
	{ 0, 3, 2 },	{ 3, 2, 0 },	{ 2, 3, 0 },/*0*/
	{ 0, 3, 2 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*1*/
	{ 0, 3, 2 },	{ 0, 2, 3 },	{ 2, 3, 0 },/*2*/
	{ 3, 2, 0 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*3*/
	{ 3, 2, 0 },	{ 0, 2, 3 },	{ 2, 0, 3 },/*4*/
	{ 3, 2, 0 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*5*/
	{ 2, 3, 0 },	{ 0, 2, 3 },	{ 3, 2, 0 },/*6*/
	{ 2, 3, 0 },	{ 0, 2, 3 },	{ 3, 2, 0 },/*7*/
	{ 2, 3, 0 },	{ 3, 2, 0 },	{ 3, 2, 0 },/*8*/
	{ 0, 2, 3 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*9*/
	{ 0, 2, 3 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*10*/
	{ 0, 2, 3 },	{ 0, 2, 3 },	{ 3, 2, 0 },/*11*/
	{ 0, 2, 3 },	{ 3, 2, 0 },	{ 3, 2, 0 },/*12*/
	{ 0, 2, 3 },	{ 3, 0, 2 },	{ 3, 2, 0 },/*13*/
	{ 0, 2, 3 },	{ 3, 0, 2 },	{ 3, 2, 0 },/*14*/
	{ 0, 2, 3 },	{ 3, 2, 0 },	{ 2, 3, 0 },/*15*/
	{ 0, 2, 3 },	{ 3, 2, 0 },	{ 2, 3, 0 },/*16*/
	{ 0, 3, 2 },	{ 3, 0, 2 },	{ 2, 3, 0 },/*17*/
	{ 0, 3, 2 },	{ 2, 3, 0 },	{ 2, 3, 0 },/*18*/
	{ 0, 2, 3 },	{ 0, 2, 3 },	{ 0, 2, 3 },/*19*/
	{ 0, 2, 3 },	{ 0, 2, 3 },	{ 2, 3, 0 },/*20*/
	{ 0, 2, 3 },	{ 3, 2, 0 },	{ 3, 2, 0 },/*21*/
	{ 2, 3, 0 },	{ 3, 0, 2 },	{ 3, 0, 2 },/*22*/
	{ 2, 3, 0 },	{ 3, 0, 2 },	{ 3, 2, 0 },/*23*/
	{ 0, 3, 2 },	{ 3, 2, 0 },	{ 2, 3, 0 },/*24*/
	{ 2, 3, 0 },	{ 3, 0, 2 },	{ 3, 2, 0 },/*25*/
	{ 0, 3, 2 },	{ 3, 0, 2 },	{ 3, 2, 0 },/*26*/
};

static Int LCR[5] = { 0, 1, 2, 0, 2 };
static UInt CCR[5]= { 0x00, 0x00, 0x02, 0x00, 0x03 };
static Int LST = 1;

/*  Probability Tables for Shape Coding (CAE)  */

static	UInt	intra_prob[1024] = {
65267, 16468, 65003, 17912, 64573,  8556, 64252,  5653,
40174,  3932, 29789,   277, 45152,  1140, 32768,  2043,
 4499,    80,  6554,  1144, 21065,   465, 32768,   799,
 5482,   183,  7282,   264,  5336,    99,  6554,   563,
54784, 30201, 58254,  9879, 54613,  3069, 32768, 58495,
32768,32768,32768,2849,58982,54613,32768,12892,
31006,1332,49152,3287,60075,350,32768,712,
39322,760,32768,354,52659,432,61854,150,
64999,28362,65323,42521,63572,32768,63677,18319,
4910,32768,64238,434,53248,32768,61865,13590,
16384,32768,13107,333,32768,32768,32768,32768,
32768,32768,1074,780,25058,5461,6697,233,
62949,30247,63702,24638,59578,32768,32768,42257,
32768,32768,49152,546,62557,32768,54613,19258,
62405,32569,64600,865,60495,10923,32768,898,
34193,24576,64111,341,47492,5231,55474,591,
65114,60075,64080,5334,65448,61882,64543,13209,
54906,16384,35289,4933,48645,9614,55351,7318,
49807,54613,32768,32768,50972,32768,32768,32768,
15159,1928,2048,171,3093,8,6096,74,
32768,60855,32768,32768,32768,32768,32768,32768,
32768,32768,32768,32768,32768,55454,32768,57672,
32768,16384,32768,21845,32768,32768,32768,32768,
32768,32768,32768,5041,28440,91,32768,45,
65124,10923,64874,5041,65429,57344,63435,48060,
61440,32768,63488,24887,59688,3277,63918,14021,
32768,32768,32768,32768,32768,32768,32768,32768,
690,32768,32768,1456,32768,32768,8192,728,
32768,32768,58982,17944,65237,54613,32768,2242,
32768,32768,32768,42130,49152,57344,58254,16740,
32768,10923,54613,182,32768,32768,32768,7282,
49152,32768,32768,5041,63295,1394,55188,77,
63672,6554,54613,49152,64558,32768,32768,5461,
64142,32768,32768,32768,62415,32768,32768,16384,
1481,438,19661,840,33654,3121,64425,6554,
4178,2048,32768,2260,5226,1680,32768,565,
60075,32768,32768,32768,32768,32768,32768,32768,
32768,32768,32768,32768,32768,32768,32768,32768,
16384,261,32768,412,16384,636,32768,4369,
23406,4328,32768,524,15604,560,32768,676,
49152,32768,49152,32768,32768,32768,64572,32768,
32768,32768,54613,32768,32768,32768,32768,32768,
4681,32768,5617,851,32768,32768,59578,32768,
32768,32768,3121,3121,49152,32768,6554,10923,
32768,32768,54613,14043,32768,32768,32768,3449,
32768,32768,32768,32768,32768,32768,32768,32768,
57344,32768,57344,3449,32768,32768,32768,3855,
58982,10923,32768,239,62259,32768,49152,85,
58778,23831,62888,20922,64311,8192,60075,575,
59714,32768,57344,40960,62107,4096,61943,3921,
39862,15338,32768,1524,45123,5958,32768,58982,
6669,930,1170,1043,7385,44,8813,5011,
59578,29789,54613,32768,32768,32768,32768,32768,
32768,32768,32768,32768,58254,56174,32768,32768,
64080,25891,49152,22528,32768,2731,32768,10923,
10923,3283,32768,1748,17827,77,32768,108,
62805,32768,62013,42612,32768,32768,61681,16384,
58982,60075,62313,58982,65279,58982,62694,62174,
32768,32768,10923,950,32768,32768,32768,32768,
5958,32768,38551,1092,11012,39322,13705,2072,
54613,32768,32768,11398,32768,32768,32768,145,
32768,32768,32768,29789,60855,32768,61681,54792,
32768,32768,32768,17348,32768,32768,32768,8192,
57344,16384,32768,3582,52581,580,24030,303,
62673,37266,65374,6197,62017,32768,49152,299,
54613,32768,32768,32768,35234,119,32768,3855,
31949,32768,32768,49152,16384,32768,32768,32768,
24576,32768,49152,32768,17476,32768,32768,57445,
51200,50864,54613,27949,60075,20480,32768,57344,
32768,32768,32768,32768,32768,45875,32768,32768,
11498,3244,24576,482,16384,1150,32768,16384,
7992,215,32768,1150,23593,927,32768,993,
65353,32768,65465,46741,41870,32768,64596,59578,
62087,32768,12619,23406,11833,32768,47720,17476,
32768,32768,2621,6554,32768,32768,32768,32768,
32768,32768,5041,32768,16384,32768,4096,2731,
63212,43526,65442,47124,65410,35747,60304,55858,
60855,58982,60075,19859,35747,63015,64470,25432,
58689,1118,64717,1339,24576,32768,32768,1257,
53297,1928,32768,33,52067,3511,62861,453,
64613,32768,32768,32768,64558,32768,32768,2731,
49152,32768,32768,32768,61534,32768,32768,35747,
32768,32768,32768,32768,13107,32768,32768,32768,
32768,32768,32768,32768,20480,32768,32768,32768,
32768,32768,32768,54613,40960,5041,32768,32768,
32768,32768,32768,3277,64263,57592,32768,3121,
32768,32768,32768,32768,32768,10923,32768,32768,
32768,8192,32768,32768,5461,6899,32768,1725,
63351,3855,63608,29127,62415,7282,64626,60855,
32768,32768,60075,5958,44961,32768,61866,53718,
32768,32768,32768,32768,32768,32768,6554,32768,
32768,32768,32768,32768,2521,978,32768,1489,
58254,32768,58982,61745,21845,32768,54613,58655,
60075,32768,49152,16274,50412,64344,61643,43987,
32768,32768,32768,1638,32768,32768,32768,24966,
54613,32768,32768,2427,46951,32768,17970,654,
65385,27307,60075,26472,64479,32768,32768,4681,
61895,32768,32768,16384,58254,32768,32768,6554,
37630,3277,54613,6554,4965,5958,4681,32768,
42765,16384,32768,21845,22827,16384,32768,6554,
65297,64769,60855,12743,63195,16384,32768,37942,
32768,32768,32768,32768,60075,32768,62087,54613,
41764,2161,21845,1836,17284,5424,10923,1680,
11019,555,32768,431,39819,907,32768,171,
65480,32768,64435,33803,2595,32768,57041,32768,
61167,32768,32768,32768,32768,32768,32768,1796,
60855,32768,17246,978,32768,32768,8192,32768,
32768,32768,14043,2849,32768,2979,6554,6554,
65507,62415,65384,61891,65273,58982,65461,55097,
32768,32768,32768,55606,32768,2979,3745,16913,
61885,13827,60893,12196,60855,53248,51493,11243,
56656,783,55563,143,63432,7106,52429,445,
65485,1031,65020,1380,65180,57344,65162,36536,
61154,6554,26569,2341,63593,3449,65102,533,
47827,2913,57344,3449,35688,1337,32768,22938,
25012,910,7944,1008,29319,607,64466,4202,
64549,57301,49152,20025,63351,61167,32768,45542,
58982,14564,32768,9362,61895,44840,32768,26385,
59664,17135,60855,13291,40050,12252,32768,7816,
25798,1850,60495,2662,18707,122,52538,231,
65332,32768,65210,21693,65113,6554,65141,39667,
62259,32768,22258,1337,63636,32768,64255,52429,
60362,32768,6780,819,16384,32768,16384,4681,
49152,32768,8985,2521,24410,683,21535,16585,
65416,46091,65292,58328,64626,32768,65016,39897,
62687,47332,62805,28948,64284,53620,52870,49567,
65032,31174,63022,28312,64299,46811,48009,31453,
61207,7077,50299,1514,60047,2634,46488,235
};

#endif
