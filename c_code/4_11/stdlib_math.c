/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <math.h>

N_NIMCALL(NF, log2_471150_1009420244)(NF x0) {
	NF result0;
	NF LOC1;
	NF LOC2;
{	result0 = (NF)0;
	LOC1 = (NF)0;
	LOC1 = log(x0);
	LOC2 = (NF)0;
	LOC2 = log(2.0000000000000000e+00);
	result0 = ((NF)(LOC1) / (NF)(LOC2));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NF, round_111661_1009420244)(NF x0, NI places0) {
	NF result0;
	result0 = (NF)0;
	{
		if (!(places0 == ((NI) 0))) goto LA3;
		result0 = round(x0);
	}
	goto LA1;
	LA3: ;
	{
		NF mult0;
		NF LOC6;
		mult0 = pow(1.0000000000000000e+01, ((NF) (places0)));
		LOC6 = (NF)0;
		LOC6 = round(((NF)(x0) * (NF)(mult0)));
		result0 = ((NF)(LOC6) / (NF)(mult0));
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, ispoweroftwo_101625_1009420244)(NI x0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
{	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((NI) 0) < x0);
	if (!(LOC1)) goto LA2;
	LOC1 = ((NI)(x0 & (NI)(x0 - ((NI) 1))) == ((NI) 0));
	LA2: ;
	result0 = LOC1;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, nextpoweroftwo_101629_1009420244)(NI x0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)(x0 - ((NI) 1));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 32))));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 16))));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 8))));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 4))));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 2))));
	result0 = (NI)(result0 | (NI)((NU64)(result0) >> (NU64)(((NI) 1))));
	result0 += ((NI) ((NI)(((NI) 1) + ((NI) ((x0 <= ((NI) 0)))))));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void) {
}

