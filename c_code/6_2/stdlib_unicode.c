/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
STRING_LITERAL(T3622478993_2, "", 0);

N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c0) {
	NimStringDesc* result0;
	NI32 i_225328_3622478993;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T3622478993_2));
	i_225328_3622478993 = c0;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 127)))) goto LA3;
		result0 = setLengthStr(result0, ((NI) 1));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) (i_225328_3622478993))));
	}
	goto LA1;
	LA3: ;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 2047)))) goto LA6;
		result0 = setLengthStr(result0, ((NI) 2));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 6))) | ((NI32) 192))))));
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i_225328_3622478993 & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA6: ;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 65535)))) goto LA9;
		result0 = setLengthStr(result0, ((NI) 3));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 12))) | ((NI32) 224))))));
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i_225328_3622478993 & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA9: ;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 2097151)))) goto LA12;
		result0 = setLengthStr(result0, ((NI) 4));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 18))) | ((NI32) 240))))));
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i_225328_3622478993 & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA12: ;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 67108863)))) goto LA15;
		result0 = setLengthStr(result0, ((NI) 5));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 24))) | ((NI32) 248))))));
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 18))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i_225328_3622478993 & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA15: ;
	{
		if (!((NU32)(i_225328_3622478993) <= (NU32)(((NI32) 2147483647)))) goto LA18;
		result0 = setLengthStr(result0, ((NI) 6));
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 30))) | ((NI32) 252))))));
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 24))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 18))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 12))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)((NI32)((NU32)(i_225328_3622478993) >> (NU32)(((NI32) 6))) & ((NI32) 63)))) | ((NI) 128))))));
		result0->data[((NI) 5)] = ((NIM_CHAR) (((NI) ((NI)(((NI) ((NI32)(i_225328_3622478993 & ((NI32) 63)))) | ((NI) 128))))));
	}
	goto LA1;
	LA18: ;
	{
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NI, validateutf8_223776_3622478993)(NimStringDesc* s0) {
	NI result0;
	NI i0;
	NI L0;
{	result0 = (NI)0;
	i0 = ((NI) 0);
	L0 = (s0 ? s0->Sup.len : 0);
	{
		while (1) {
			if (!(i0 < L0)) goto LA2;
			{
				if (!((NU64)(((NI) (((NU8)(s0->data[i0]))))) <= (NU64)(((NI) 127)))) goto LA5;
				i0 += ((NI) 1);
			}
			goto LA3;
			LA5: ;
			{
				if (!((NI)((NU64)(((NI) (((NU8)(s0->data[i0]))))) >> (NU64)(((NI) 5))) == ((NI) 6))) goto LA8;
				{
					if (!(((NI) (((NU8)(s0->data[i0])))) < ((NI) 194))) goto LA12;
					result0 = i0;
					goto BeforeRet;
				}
				LA12: ;
				{
					NIM_BOOL LOC16;
					LOC16 = (NIM_BOOL)0;
					LOC16 = ((NI)(i0 + ((NI) 1)) < L0);
					if (!(LOC16)) goto LA17;
					LOC16 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA17: ;
					if (!LOC16) goto LA18;
					i0 += ((NI) 2);
				}
				goto LA14;
				LA18: ;
				{
					result0 = i0;
					goto BeforeRet;
				}
				LA14: ;
			}
			goto LA3;
			LA8: ;
			{
				if (!((NI)((NU64)(((NI) (((NU8)(s0->data[i0]))))) >> (NU64)(((NI) 4))) == ((NI) 14))) goto LA22;
				{
					NIM_BOOL LOC26;
					NIM_BOOL LOC27;
					LOC26 = (NIM_BOOL)0;
					LOC27 = (NIM_BOOL)0;
					LOC27 = ((NI)(i0 + ((NI) 2)) < L0);
					if (!(LOC27)) goto LA28;
					LOC27 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA28: ;
					LOC26 = LOC27;
					if (!(LOC26)) goto LA29;
					LOC26 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 2))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA29: ;
					if (!LOC26) goto LA30;
					i0 += ((NI) 3);
				}
				goto LA24;
				LA30: ;
				{
					result0 = i0;
					goto BeforeRet;
				}
				LA24: ;
			}
			goto LA3;
			LA22: ;
			{
				if (!((NI)((NU64)(((NI) (((NU8)(s0->data[i0]))))) >> (NU64)(((NI) 3))) == ((NI) 30))) goto LA34;
				{
					NIM_BOOL LOC38;
					NIM_BOOL LOC39;
					NIM_BOOL LOC40;
					LOC38 = (NIM_BOOL)0;
					LOC39 = (NIM_BOOL)0;
					LOC40 = (NIM_BOOL)0;
					LOC40 = ((NI)(i0 + ((NI) 3)) < L0);
					if (!(LOC40)) goto LA41;
					LOC40 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 1))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA41: ;
					LOC39 = LOC40;
					if (!(LOC39)) goto LA42;
					LOC39 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 2))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA42: ;
					LOC38 = LOC39;
					if (!(LOC38)) goto LA43;
					LOC38 = ((NI)((NU64)(((NI) (((NU8)(s0->data[(NI)(i0 + ((NI) 3))]))))) >> (NU64)(((NI) 6))) == ((NI) 2));
					LA43: ;
					if (!LOC38) goto LA44;
					i0 += ((NI) 4);
				}
				goto LA36;
				LA44: ;
				{
					result0 = i0;
					goto BeforeRet;
				}
				LA36: ;
			}
			goto LA3;
			LA34: ;
			{
				result0 = i0;
				goto BeforeRet;
			}
			LA3: ;
		} LA2: ;
	}
	result0 = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void) {
}

