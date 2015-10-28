/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
typedef struct Tbitset275012 Tbitset275012;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Tbitset275012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP2921)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTI110; /* int8 */
TNimType NTI275012; /* TBitSet */
N_NIMCALL(void, TMP2921)(void* p, NI op) {
	Tbitset275012* a;
	NI LOC1;
	a = (Tbitset275012*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_275021)(Tbitset275012** b, NI length) {
	unsureAsgnRef((void**) (&(*b)), (Tbitset275012*) newSeq((&NTI275012), ((NI) (length))));
}

N_NIMCALL(void, bitsetincl_275061)(Tbitset275012** x, NI64 elem) {
	(*x)->data[(NI64)(elem / IL64(8))] = (NI8)((*x)->data[(NI64)(elem / IL64(8))] | ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(elem % IL64(8)))))))));
}

N_NIMCALL(void, bitsetdiff_275037)(Tbitset275012** x, Tbitset275012* y) {
	{
		NI i_275301;
		NI HEX3Atmp_275303;
		NI res_275306;
		i_275301 = 0;
		HEX3Atmp_275303 = 0;
		HEX3Atmp_275303 = ((*x) ? ((*x)->Sup.len-1) : -1);
		res_275306 = ((NI) 0);
		{
			while (1) {
				if (!(res_275306 <= HEX3Atmp_275303)) goto LA3;
				i_275301 = res_275306;
				(*x)->data[i_275301] = (NI8)((*x)->data[i_275301] & (NI8)((NU8) ~(y->data[i_275301])));
				res_275306 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_275077)(Tbitset275012* x, NI64 e) {
	NIM_BOOL result;
	result = 0;
	result = !(((NI8)(x->data[(NI64)(e / IL64(8))] & ((NI8)(NU8)(NU)((NI)((NU32)(((NI) 1)) << (NU32)(((NI) ((NI64)(e % IL64(8))))))))) == ((NI8) 0)));
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_275091)(Tbitset275012* x, Tbitset275012* y) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_275465;
		NI HEX3Atmp_275467;
		NI res_275470;
		i_275465 = 0;
		HEX3Atmp_275467 = 0;
		HEX3Atmp_275467 = (x ? (x->Sup.len-1) : -1);
		res_275470 = ((NI) 0);
		{
			while (1) {
				if (!(res_275470 <= HEX3Atmp_275467)) goto LA3;
				i_275465 = res_275470;
				{
					if (!!(((NI8)(x->data[i_275465] & (NI8)((NU8) ~(y->data[i_275465]))) == ((NI8) 0)))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_275470 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, bitsetequals_275084)(Tbitset275012* x, Tbitset275012* y) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_275424;
		NI HEX3Atmp_275426;
		NI res_275429;
		i_275424 = 0;
		HEX3Atmp_275426 = 0;
		HEX3Atmp_275426 = (x ? (x->Sup.len-1) : -1);
		res_275429 = ((NI) 0);
		{
			while (1) {
				if (!(res_275429 <= HEX3Atmp_275426)) goto LA3;
				i_275424 = res_275429;
				{
					if (!!((x->data[i_275424] == y->data[i_275424]))) goto LA6;
					result = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_275429 += ((NI) 1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, bitsetintersect_275053)(Tbitset275012** x, Tbitset275012* y) {
	{
		NI i_275383;
		NI HEX3Atmp_275385;
		NI res_275388;
		i_275383 = 0;
		HEX3Atmp_275385 = 0;
		HEX3Atmp_275385 = ((*x) ? ((*x)->Sup.len-1) : -1);
		res_275388 = ((NI) 0);
		{
			while (1) {
				if (!(res_275388 <= HEX3Atmp_275385)) goto LA3;
				i_275383 = res_275388;
				(*x)->data[i_275383] = (NI8)((*x)->data[i_275383] & y->data[i_275383]);
				res_275388 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_275029)(Tbitset275012** x, Tbitset275012* y) {
	{
		NI i_275260;
		NI HEX3Atmp_275262;
		NI res_275265;
		i_275260 = 0;
		HEX3Atmp_275262 = 0;
		HEX3Atmp_275262 = ((*x) ? ((*x)->Sup.len-1) : -1);
		res_275265 = ((NI) 0);
		{
			while (1) {
				if (!(res_275265 <= HEX3Atmp_275262)) goto LA3;
				i_275260 = res_275265;
				(*x)->data[i_275260] = (NI8)((*x)->data[i_275260] | y->data[i_275260]);
				res_275265 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_275045)(Tbitset275012** x, Tbitset275012* y) {
	{
		NI i_275342;
		NI HEX3Atmp_275344;
		NI res_275347;
		i_275342 = 0;
		HEX3Atmp_275344 = 0;
		HEX3Atmp_275344 = ((*x) ? ((*x)->Sup.len-1) : -1);
		res_275347 = ((NI) 0);
		{
			while (1) {
				if (!(res_275347 <= HEX3Atmp_275344)) goto LA3;
				i_275342 = res_275347;
				(*x)->data[i_275342] = (NI8)((*x)->data[i_275342] ^ y->data[i_275342]);
				res_275347 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit000)(void) {
NTI275012.size = sizeof(Tbitset275012*);
NTI275012.kind = 24;
NTI275012.base = (&NTI110);
NTI275012.flags = 2;
NTI275012.marker = TMP2921;
}
