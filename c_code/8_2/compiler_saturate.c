/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"

N_NIMCALL(NI64, HEX7CHEX2DHEX7C_321012_3178507870)(NI64 a0, NI64 b0) {
	NI64 result0;
{	result0 = (NI64)0;
	result0 = (NI64)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ (NI64)((NU64) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		if (!(IL64(0) < b0)) goto LA9;
		result0 = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA9: ;
	{
		result0 = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, HEX7CHEX2BHEX7C_321007_3178507870)(NI64 a0, NI64 b0) {
	NI64 result0;
{	result0 = (NI64)0;
	result0 = (NI64)((NU64)(a0) + (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = (a0 < IL64(0));
		if (LOC9) goto LA10;
		LOC9 = (b0 < IL64(0));
		LA10: ;
		if (!LOC9) goto LA11;
		result0 = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7;
	LA11: ;
	{
		result0 = IL64(9223372036854775807);
	}
	LA7: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, HEX7CHEX2AHEX7C_321031_3178507870)(NI64 a0, NI64 b0) {
	NI64 result0;
	NF resasfloat0;
	NF floatprod0;
{	result0 = (NI64)0;
	resasfloat0 = (NF)0;
	floatprod0 = (NF)0;
	result0 = (NI64)((NU64)(a0) * (NU64)(b0));
	floatprod0 = ((double) (a0));
	floatprod0 = ((NF)(floatprod0) * (NF)(((double) (b0))));
	resasfloat0 = ((double) (result0));
	{
		if (!(resasfloat0 == floatprod0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resasfloat0) - (NF)(floatprod0)) > 0? (((NF)(resasfloat0) - (NF)(floatprod0))) : -(((NF)(resasfloat0) - (NF)(floatprod0)))))) <= (floatprod0 > 0? (floatprod0) : -(floatprod0)))) goto LA7;
		goto BeforeRet;
	}
	LA7: ;
	{
		if (!(0.0 <= floatprod0)) goto LA11;
		result0 = IL64(9223372036854775807);
	}
	goto LA9;
	LA11: ;
	{
		result0 = (IL64(-9223372036854775807) - IL64(1));
	}
	LA9: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI64, HEX7CdivHEX7C_321021_3178507870)(NI64 a0, NI64 b0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		if (!(b0 == IL64(0))) goto LA3;
		result0 = a0;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = (NIM_BOOL)0;
		LOC6 = (a0 == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC6)) goto LA7;
		LOC6 = (b0 == IL64(-1));
		LA7: ;
		if (!LOC6) goto LA8;
		result0 = IL64(9223372036854775807);
	}
	goto LA1;
	LA8: ;
	{
		result0 = (NI64)(a0 / b0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI64, HEX7CmodHEX7C_321026_3178507870)(NI64 a0, NI64 b0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		if (!(b0 == IL64(0))) goto LA3;
		result0 = a0;
	}
	goto LA1;
	LA3: ;
	{
		result0 = (NI64)(a0 % b0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI64, HEX7CabsHEX7C_321017_3178507870)(NI64 a0) {
	NI64 result0;
	result0 = (NI64)0;
	{
		if (!!((a0 == (IL64(-9223372036854775807) - IL64(1))))) goto LA3;
		{
			if (!(IL64(0) <= a0)) goto LA7;
			result0 = a0;
		}
		goto LA5;
		LA7: ;
		{
			result0 = -(a0);
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		result0 = (IL64(-9223372036854775807) - IL64(1));
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_saturateInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_saturateDatInit000)(void) {
}

