/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct Tbitset340004 Tbitset340004;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Tbitset340004 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, T3966472399_2)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI106; /* int8 */
TNimType NTI340004; /* TBitSet */
N_NIMCALL(void, T3966472399_2)(void* p, NI op) {
	Tbitset340004* a;
	NI LOC1;
	a = (Tbitset340004*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_340008_3966472399)(Tbitset340004** b0, NI length0) {
	unsureAsgnRef((void**) (&(*b0)), (Tbitset340004*) newSeq((&NTI340004), ((NI) (length0))));
}

N_NIMCALL(void, bitsetincl_340033_3966472399)(Tbitset340004** x0, NI64 elem0) {
	(*x0)->data[(NI64)(elem0 / IL64(8))] = (NI8)((*x0)->data[(NI64)(elem0 / IL64(8))] | ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI64)(elem0 % IL64(8)))))))));
}

N_NIMCALL(void, bitsetdiff_340018_3966472399)(Tbitset340004** x0, Tbitset340004* y0) {
	{
		NI i_340266_3966472399;
		NI HEX3Atmp_340268_3966472399;
		NI res_340271_3966472399;
		i_340266_3966472399 = (NI)0;
		HEX3Atmp_340268_3966472399 = (NI)0;
		HEX3Atmp_340268_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_340271_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340271_3966472399 <= HEX3Atmp_340268_3966472399)) goto LA3;
				i_340266_3966472399 = res_340271_3966472399;
				(*x0)->data[i_340266_3966472399] = (NI8)((*x0)->data[i_340266_3966472399] & (NI8)((NU8) ~(y0->data[i_340266_3966472399])));
				res_340271_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_340043_3966472399)(Tbitset340004* x0, NI64 e0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = !(((NI8)(x0->data[(NI64)(e0 / IL64(8))] & ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI64)(e0 % IL64(8))))))))) == ((NI8) 0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_340051_3966472399)(Tbitset340004* x0, Tbitset340004* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_340366_3966472399;
		NI HEX3Atmp_340368_3966472399;
		NI res_340371_3966472399;
		i_340366_3966472399 = (NI)0;
		HEX3Atmp_340368_3966472399 = (NI)0;
		HEX3Atmp_340368_3966472399 = (x0 ? (x0->Sup.len-1) : -1);
		res_340371_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340371_3966472399 <= HEX3Atmp_340368_3966472399)) goto LA3;
				i_340366_3966472399 = res_340371_3966472399;
				{
					if (!!(((NI8)(x0->data[i_340366_3966472399] & (NI8)((NU8) ~(y0->data[i_340366_3966472399]))) == ((NI8) 0)))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_340371_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetequals_340047_3966472399)(Tbitset340004* x0, Tbitset340004* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_340341_3966472399;
		NI HEX3Atmp_340343_3966472399;
		NI res_340346_3966472399;
		i_340341_3966472399 = (NI)0;
		HEX3Atmp_340343_3966472399 = (NI)0;
		HEX3Atmp_340343_3966472399 = (x0 ? (x0->Sup.len-1) : -1);
		res_340346_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340346_3966472399 <= HEX3Atmp_340343_3966472399)) goto LA3;
				i_340341_3966472399 = res_340346_3966472399;
				{
					if (!!((x0->data[i_340341_3966472399] == y0->data[i_340341_3966472399]))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_340346_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, bitsetintersect_340028_3966472399)(Tbitset340004** x0, Tbitset340004* y0) {
	{
		NI i_340316_3966472399;
		NI HEX3Atmp_340318_3966472399;
		NI res_340321_3966472399;
		i_340316_3966472399 = (NI)0;
		HEX3Atmp_340318_3966472399 = (NI)0;
		HEX3Atmp_340318_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_340321_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340321_3966472399 <= HEX3Atmp_340318_3966472399)) goto LA3;
				i_340316_3966472399 = res_340321_3966472399;
				(*x0)->data[i_340316_3966472399] = (NI8)((*x0)->data[i_340316_3966472399] & y0->data[i_340316_3966472399]);
				res_340321_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_340013_3966472399)(Tbitset340004** x0, Tbitset340004* y0) {
	{
		NI i_340241_3966472399;
		NI HEX3Atmp_340243_3966472399;
		NI res_340246_3966472399;
		i_340241_3966472399 = (NI)0;
		HEX3Atmp_340243_3966472399 = (NI)0;
		HEX3Atmp_340243_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_340246_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340246_3966472399 <= HEX3Atmp_340243_3966472399)) goto LA3;
				i_340241_3966472399 = res_340246_3966472399;
				(*x0)->data[i_340241_3966472399] = (NI8)((*x0)->data[i_340241_3966472399] | y0->data[i_340241_3966472399]);
				res_340246_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_340023_3966472399)(Tbitset340004** x0, Tbitset340004* y0) {
	{
		NI i_340291_3966472399;
		NI HEX3Atmp_340293_3966472399;
		NI res_340296_3966472399;
		i_340291_3966472399 = (NI)0;
		HEX3Atmp_340293_3966472399 = (NI)0;
		HEX3Atmp_340293_3966472399 = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_340296_3966472399 = ((NI) 0);
		{
			while (1) {
				if (!(res_340296_3966472399 <= HEX3Atmp_340293_3966472399)) goto LA3;
				i_340291_3966472399 = res_340296_3966472399;
				(*x0)->data[i_340291_3966472399] = (NI8)((*x0)->data[i_340291_3966472399] ^ y0->data[i_340291_3966472399]);
				res_340296_3966472399 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit000)(void) {
NTI340004.size = sizeof(Tbitset340004*);
NTI340004.kind = 24;
NTI340004.base = (&NTI106);
NTI340004.flags = 2;
NTI340004.marker = T3966472399_2;
}

