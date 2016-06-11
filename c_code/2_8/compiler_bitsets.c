/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tbitset310006 Tbitset310006;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Tbitset310006 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP3127)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI106; /* int8 */
TNimType NTI310006; /* TBitSet */
N_NIMCALL(void, TMP3127)(void* p, NI op) {
	Tbitset310006* a;
	NI LOC1;
	a = (Tbitset310006*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_310010_3966472399)(Tbitset310006** b0, NI length0) {
	unsureAsgnRef((void**) (&(*b0)), (Tbitset310006*) newSeq((&NTI310006), ((NI) (length0))));
}

N_NIMCALL(void, bitsetincl_310035_3966472399)(Tbitset310006** x0, NI64 elem0) {
	(*x0)->data[(NI64)(elem0 / IL64(8))] = (NI8)((*x0)->data[(NI64)(elem0 / IL64(8))] | ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(elem0 % IL64(8)))))))));
}

N_NIMCALL(void, bitsetdiff_310020_3966472399)(Tbitset310006** x0, Tbitset310006* y0) {
	{
		NI i_310266_3966472399;
		NI HEX3Atmp_310268_3966472399;
		NI res_310271_3966472399;
		i_310266_3966472399 = (NI)0;
		HEX3Atmp_310268_3966472399 = (NI)0;
		HEX3Atmp_310268_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_310271_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310271_3966472399 <= HEX3Atmp_310268_3966472399)) goto LA3;
				i_310266_3966472399 = res_310271_3966472399;
				(*x0)->data[i_310266_3966472399] = (NI8)((*x0)->data[i_310266_3966472399] & (NI8)((NU8) ~(y0->data[i_310266_3966472399])));
				res_310271_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_310045_3966472399)(Tbitset310006* x0, NI64 e0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = !(((NI8)(x0->data[(NI64)(e0 / IL64(8))] & ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(e0 % IL64(8))))))))) == ((NI8) 0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_310053_3966472399)(Tbitset310006* x0, Tbitset310006* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_310366_3966472399;
		NI HEX3Atmp_310368_3966472399;
		NI res_310371_3966472399;
		i_310366_3966472399 = (NI)0;
		HEX3Atmp_310368_3966472399 = (NI)0;
		HEX3Atmp_310368_3966472399 = (x0 ? (x0->Sup.len-1) : -1);
		res_310371_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310371_3966472399 <= HEX3Atmp_310368_3966472399)) goto LA3;
				i_310366_3966472399 = res_310371_3966472399;
				{
					if (!!(((NI8)(x0->data[i_310366_3966472399] & (NI8)((NU8) ~(y0->data[i_310366_3966472399]))) == ((NI8) 0)))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_310371_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetequals_310049_3966472399)(Tbitset310006* x0, Tbitset310006* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_310341_3966472399;
		NI HEX3Atmp_310343_3966472399;
		NI res_310346_3966472399;
		i_310341_3966472399 = (NI)0;
		HEX3Atmp_310343_3966472399 = (NI)0;
		HEX3Atmp_310343_3966472399 = (x0 ? (x0->Sup.len-1) : -1);
		res_310346_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310346_3966472399 <= HEX3Atmp_310343_3966472399)) goto LA3;
				i_310341_3966472399 = res_310346_3966472399;
				{
					if (!!((x0->data[i_310341_3966472399] == y0->data[i_310341_3966472399]))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_310346_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, bitsetintersect_310030_3966472399)(Tbitset310006** x0, Tbitset310006* y0) {
	{
		NI i_310316_3966472399;
		NI HEX3Atmp_310318_3966472399;
		NI res_310321_3966472399;
		i_310316_3966472399 = (NI)0;
		HEX3Atmp_310318_3966472399 = (NI)0;
		HEX3Atmp_310318_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_310321_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310321_3966472399 <= HEX3Atmp_310318_3966472399)) goto LA3;
				i_310316_3966472399 = res_310321_3966472399;
				(*x0)->data[i_310316_3966472399] = (NI8)((*x0)->data[i_310316_3966472399] & y0->data[i_310316_3966472399]);
				res_310321_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_310015_3966472399)(Tbitset310006** x0, Tbitset310006* y0) {
	{
		NI i_310241_3966472399;
		NI HEX3Atmp_310243_3966472399;
		NI res_310246_3966472399;
		i_310241_3966472399 = (NI)0;
		HEX3Atmp_310243_3966472399 = (NI)0;
		HEX3Atmp_310243_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_310246_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310246_3966472399 <= HEX3Atmp_310243_3966472399)) goto LA3;
				i_310241_3966472399 = res_310246_3966472399;
				(*x0)->data[i_310241_3966472399] = (NI8)((*x0)->data[i_310241_3966472399] | y0->data[i_310241_3966472399]);
				res_310246_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_310025_3966472399)(Tbitset310006** x0, Tbitset310006* y0) {
	{
		NI i_310291_3966472399;
		NI HEX3Atmp_310293_3966472399;
		NI res_310296_3966472399;
		i_310291_3966472399 = (NI)0;
		HEX3Atmp_310293_3966472399 = (NI)0;
		HEX3Atmp_310293_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_310296_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_310296_3966472399 <= HEX3Atmp_310293_3966472399)) goto LA3;
				i_310291_3966472399 = res_310296_3966472399;
				(*x0)->data[i_310291_3966472399] = (NI8)((*x0)->data[i_310291_3966472399] ^ y0->data[i_310291_3966472399]);
				res_310296_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit000)(void) {
NTI310006.size = sizeof(Tbitset310006*);
NTI310006.kind = 24;
NTI310006.base = (&NTI106);
NTI310006.flags = 2;
NTI310006.marker = TMP3127;
}

