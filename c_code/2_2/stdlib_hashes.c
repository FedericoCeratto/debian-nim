/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, HEX21HEX26_150005_213663784)(NI h0, NI val0);
static N_INLINE(NI, HEX21HEX24_150028_213663784)(NI h0);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_149005_3239285623)(NCSTRING cs0, NI i0);
TNimType NTI150002; /* Hash */

static N_INLINE(NI, HEX21HEX26_150005_213663784)(NI h0, NI val0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU64)(h0) + (NU64)(val0));
	result0 = (NI)((NU64)(result0) + (NU64)((NI)((NU64)(result0) << (NU64)(((NI) 10)))));
	result0 = (NI)(result0 ^ (NI)((NU64)(result0) >> (NU64)(((NI) 6))));
	return result0;
}

static N_INLINE(NI, HEX21HEX24_150028_213663784)(NI h0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NU64)(h0) + (NU64)((NI)((NU64)(h0) << (NU64)(((NI) 3)))));
	result0 = (NI)(result0 ^ (NI)((NU64)(result0) >> (NU64)(((NI) 11))));
	result0 = (NI)((NU64)(result0) + (NU64)((NI)((NU64)(result0) << (NU64)(((NI) 15)))));
	return result0;
}

N_NIMCALL(NI, hash_150827_213663784)(NimStringDesc* x0) {
	NI result0;
	NI h0;
	result0 = (NI)0;
	h0 = ((NI) 0);
	{
		NI i_150841_213663784;
		NI HEX3Atmp_150852_213663784;
		NI res_150855_213663784;
		i_150841_213663784 = (NI)0;
		HEX3Atmp_150852_213663784 = (NI)0;
		HEX3Atmp_150852_213663784 = (NI)((x0 ? x0->Sup.len : 0) - ((NI) 1));
		res_150855_213663784 = ((NI) 0);
		{
			while (1) {
				if (!(res_150855_213663784 <= HEX3Atmp_150852_213663784)) goto LA3;
				i_150841_213663784 = res_150855_213663784;
				h0 = HEX21HEX26_150005_213663784(h0, ((NI) (((NU8)(x0->data[i_150841_213663784])))));
				res_150855_213663784 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = HEX21HEX24_150028_213663784(h0);
	return result0;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_149005_3239285623)(NCSTRING cs0, NI i0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = ((NU8)(cs0[i0]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs0[(NI)(i0 + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs0[(NI)(i0 + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, hashignorestyle_150892_213663784)(NimStringDesc* x0) {
	NI result0;
	NI h0;
	NI i0;
	NI xlen0;
	result0 = (NI)0;
	h0 = ((NI) 0);
	i0 = ((NI) 0);
	xlen0 = (x0 ? x0->Sup.len : 0);
	{
		while (1) {
			NIM_CHAR c0;
			if (!(i0 < xlen0)) goto LA2;
			c0 = x0->data[i0];
			{
				if (!((NU8)(c0) == (NU8)(95))) goto LA5;
				i0 += ((NI) 1);
			}
			goto LA3;
			LA5: ;
			{
				NIM_BOOL LOC8;
				LOC8 = (NIM_BOOL)0;
				LOC8 = ismagicidentseparatorrune_149005_3239285623(x0->data, i0);
				if (!LOC8) goto LA9;
				i0 += ((NI) 3);
			}
			goto LA3;
			LA9: ;
			{
				{
					if (!(((NU8)(c0)) >= ((NU8)(65)) && ((NU8)(c0)) <= ((NU8)(90)))) goto LA14;
					c0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(c0)))) + ((NI) 32))))));
				}
				LA14: ;
				h0 = HEX21HEX26_150005_213663784(h0, ((NI) (((NU8)(c0)))));
				i0 += ((NI) 1);
			}
			LA3: ;
		} LA2: ;
	}
	result0 = HEX21HEX24_150028_213663784(h0);
	return result0;
}

N_NIMCALL(NI, hashignorecase_151059_213663784)(NimStringDesc* x0) {
	NI result0;
	NI h0;
	result0 = (NI)0;
	h0 = ((NI) 0);
	{
		NI i_151073_213663784;
		NI HEX3Atmp_151123_213663784;
		NI res_151126_213663784;
		i_151073_213663784 = (NI)0;
		HEX3Atmp_151123_213663784 = (NI)0;
		HEX3Atmp_151123_213663784 = (NI)((x0 ? x0->Sup.len : 0) - ((NI) 1));
		res_151126_213663784 = ((NI) 0);
		{
			while (1) {
				NIM_CHAR c0;
				if (!(res_151126_213663784 <= HEX3Atmp_151123_213663784)) goto LA3;
				i_151073_213663784 = res_151126_213663784;
				c0 = x0->data[i_151073_213663784];
				{
					if (!(((NU8)(c0)) >= ((NU8)(65)) && ((NU8)(c0)) <= ((NU8)(90)))) goto LA6;
					c0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(c0)))) + ((NI) 32))))));
				}
				LA6: ;
				h0 = HEX21HEX26_150005_213663784(h0, ((NI) (((NU8)(c0)))));
				res_151126_213663784 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = HEX21HEX24_150028_213663784(h0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void) {
NTI150002.size = sizeof(NI);
NTI150002.kind = 31;
NTI150002.base = 0;
NTI150002.flags = 3;
}

