/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 Sha1digest199006[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Sha1state199014[5];
typedef NU32 Sha1buffer199016[80];
N_NIMCALL(void, securehash_200344_2683236817)(NimStringDesc* str0, Sha1digest199006 Result);
N_NIMCALL(void, sha1_200102_2683236817)(NimStringDesc* src0, Sha1digest199006 Result);
N_NIMCALL(void, init_199034_2683236817)(NU32* result0);
N_NIMCALL(void, innerhash_199038_2683236817)(NU32* state0, NU32* w0);
static N_INLINE(void, zeromem_7481_1689653243)(void* p0, NI size0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(NimStringDesc*, readfile_14868_1689653243)(NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_200426_1689653243)(Sha1digest199006 x0, Sha1digest199006 y0);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
STRING_LITERAL(T2683236817_2, "", 0);
extern TNimType NTI116; /* uint8 */
TNimType NTI199006; /* Sha1Digest */

N_NIMCALL(void, init_199034_2683236817)(NU32* result0) {
	result0[(((NI) 0))- 0] = ((NU32) 1732584193);
	result0[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result0[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result0[(((NI) 3))- 0] = ((NU32) 271733878);
	result0[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_199038_2683236817)(NU32* state0, NU32* w0) {
	NU32 a0;
	NU32 b0;
	NU32 c0;
	NU32 d0;
	NU32 e0;
	NI round0;
	NU32 v_199965_2683236817;
	NU32 v_199976_2683236817;
	NU32 v_199987_2683236817;
	NU32 v_199998_2683236817;
	NU32 v_200009_2683236817;
	a0 = state0[(((NI) 0))- 0];
	b0 = state0[(((NI) 1))- 0];
	c0 = state0[(((NI) 2))- 0];
	d0 = state0[(((NI) 3))- 0];
	e0 = state0[(((NI) 4))- 0];
	round0 = ((NI) 0);
	{
		while (1) {
			NU32 t_199127_2683236817;
			if (!(round0 < ((NI) 16))) goto LA2;
			t_199127_2683236817 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 & c0) | (NU32)((NU32)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_199127_2683236817;
			round0 += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			NU32 t_199317_2683236817;
			if (!(round0 < ((NI) 20))) goto LA4;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_199317_2683236817 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 & c0) | (NU32)((NU32)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_199317_2683236817;
			round0 += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			NU32 t_199490_2683236817;
			if (!(round0 < ((NI) 40))) goto LA6;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_199490_2683236817 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_199490_2683236817;
			round0 += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			NU32 t_199690_2683236817;
			if (!(round0 < ((NI) 60))) goto LA8;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_199690_2683236817 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)((NU32)(b0 & c0) | (NU32)(b0 & d0)) | (NU32)(c0 & d0))))) + (NU32)(e0))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_199690_2683236817;
			round0 += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			NU32 t_199864_2683236817;
			if (!(round0 < ((NI) 80))) goto LA10;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_199864_2683236817 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_199864_2683236817;
			round0 += ((NI) 1);
		} LA10: ;
	}
	v_199965_2683236817 = (NU32)((NU32)(state0[(((NI) 0))- 0]) + (NU32)(a0));
	state0[(((NI) 0))- 0] = v_199965_2683236817;
	v_199976_2683236817 = (NU32)((NU32)(state0[(((NI) 1))- 0]) + (NU32)(b0));
	state0[(((NI) 1))- 0] = v_199976_2683236817;
	v_199987_2683236817 = (NU32)((NU32)(state0[(((NI) 2))- 0]) + (NU32)(c0));
	state0[(((NI) 2))- 0] = v_199987_2683236817;
	v_199998_2683236817 = (NU32)((NU32)(state0[(((NI) 3))- 0]) + (NU32)(d0));
	state0[(((NI) 3))- 0] = v_199998_2683236817;
	v_200009_2683236817 = (NU32)((NU32)(state0[(((NI) 4))- 0]) + (NU32)(e0));
	state0[(((NI) 4))- 0] = v_200009_2683236817;
}

static N_INLINE(void, zeromem_7481_1689653243)(void* p0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memset(p0, ((int) 0), ((size_t) (size0)));
}

N_NIMCALL(void, sha1_200102_2683236817)(NimStringDesc* src0, Sha1digest199006 Result) {
	Sha1state199014 state_200107_2683236817;
	Sha1buffer199016 w_200109_2683236817;
	NI bytelen_200111_2683236817;
	NI endoffullblocks_200113_2683236817;
	NI endcurrentblock_200115_2683236817;
	NI currentblock_200117_2683236817;
	NI lastblockbytes_200121_2683236817;
	memset((void*)state_200107_2683236817, 0, sizeof(state_200107_2683236817));
	init_199034_2683236817(state_200107_2683236817);
	memset((void*)w_200109_2683236817, 0, sizeof(w_200109_2683236817));
	bytelen_200111_2683236817 = (src0 ? src0->Sup.len : 0);
	endoffullblocks_200113_2683236817 = (NI)(bytelen_200111_2683236817 - ((NI) 64));
	endcurrentblock_200115_2683236817 = ((NI) 0);
	currentblock_200117_2683236817 = ((NI) 0);
	{
		while (1) {
			NI i_200119_2683236817;
			if (!(currentblock_200117_2683236817 <= endoffullblocks_200113_2683236817)) goto LA2;
			endcurrentblock_200115_2683236817 = (NI)(currentblock_200117_2683236817 + ((NI) 64));
			i_200119_2683236817 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock_200117_2683236817 < endcurrentblock_200115_2683236817)) goto LA4;
					w_200109_2683236817[(i_200119_2683236817)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(currentblock_200117_2683236817 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(currentblock_200117_2683236817 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(currentblock_200117_2683236817 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[currentblock_200117_2683236817]))))) << (NU32)(((NU32) 24))));
					currentblock_200117_2683236817 += ((NI) 4);
					i_200119_2683236817 += ((NI) 1);
				} LA4: ;
			}
			innerhash_199038_2683236817(state_200107_2683236817, w_200109_2683236817);
		} LA2: ;
	}
	endcurrentblock_200115_2683236817 = (NI)(bytelen_200111_2683236817 - currentblock_200117_2683236817);
	zeromem_7481_1689653243(((void*) (w_200109_2683236817)), ((NI) 64));
	lastblockbytes_200121_2683236817 = ((NI) 0);
	{
		while (1) {
			NU32 value_200123_2683236817;
			if (!(lastblockbytes_200121_2683236817 < endcurrentblock_200115_2683236817)) goto LA6;
			value_200123_2683236817 = (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(lastblockbytes_200121_2683236817 + currentblock_200117_2683236817)]))))) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_200121_2683236817 & ((NI) 3))))))) << (NU32)(((NI) 3)))));
			w_200109_2683236817[((NI)((NU32)(lastblockbytes_200121_2683236817) >> (NU32)(((NI) 2))))- 0] = (NU32)(w_200109_2683236817[((NI)((NU32)(lastblockbytes_200121_2683236817) >> (NU32)(((NI) 2))))- 0] | value_200123_2683236817);
			lastblockbytes_200121_2683236817 += ((NI) 1);
		} LA6: ;
	}
	w_200109_2683236817[((NI)((NU32)(lastblockbytes_200121_2683236817) >> (NU32)(((NI) 2))))- 0] = (NU32)(w_200109_2683236817[((NI)((NU32)(lastblockbytes_200121_2683236817) >> (NU32)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_200121_2683236817 & ((NI) 3))))))) << (NU32)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock_200115_2683236817)) goto LA9;
		innerhash_199038_2683236817(state_200107_2683236817, w_200109_2683236817);
		zeromem_7481_1689653243(((void*) (w_200109_2683236817)), ((NI) 64));
	}
	LA9: ;
	w_200109_2683236817[(((NI) 15))- 0] = (NU32)((NU32)(((NU32) (bytelen_200111_2683236817))) << (NU32)(((NI) 3)));
	innerhash_199038_2683236817(state_200107_2683236817, w_200109_2683236817);
	{
		NI i_200125_2683236817;
		NI res_200340_2683236817;
		i_200125_2683236817 = (NI)0;
		res_200340_2683236817 = ((NI) 0);
		{
			while (1) {
				if (!(res_200340_2683236817 <= ((NI) 19))) goto LA13;
				i_200125_2683236817 = res_200340_2683236817;
				Result[(i_200125_2683236817)- 0] = ((NU8) ((NI)((NI)((NU32)(((NI) (state_200107_2683236817[((NI)((NU32)(i_200125_2683236817) >> (NU32)(((NI) 2))))- 0]))) >> (NU32)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_200125_2683236817 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_200340_2683236817 += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, securehash_200344_2683236817)(NimStringDesc* str0, Sha1digest199006 Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI199006));
	sha1_200102_2683236817(str0, Result);
}

N_NIMCALL(void, securehashfile_200349_2683236817)(NimStringDesc* filename0, Sha1digest199006 Result) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = readfile_14868_1689653243(filename0);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI199006));
	securehash_200344_2683236817(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_200420_2683236817)(Sha1digest199006 a0, Sha1digest199006 b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = HEX3DHEX3D_200426_1689653243(a0, b0);
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_200391_2683236817)(NimStringDesc* hash0, Sha1digest199006 Result) {
	{
		NI i_200412_2683236817;
		NI res_200416_2683236817;
		i_200412_2683236817 = (NI)0;
		res_200416_2683236817 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_200416_2683236817 <= ((NI) 19))) goto LA3;
				i_200412_2683236817 = res_200416_2683236817;
				LOC4 = (NimStringDesc*)0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash0->data[(NI)(i_200412_2683236817 * ((NI) 2))]);
appendChar(LOC4, hash0->data[(NI)((NI)(i_200412_2683236817 * ((NI) 2)) + ((NI) 1))]);
				LOC5 = (NI)0;
				LOC5 = nsuParseHexInt(LOC4);
				Result[(i_200412_2683236817)- 0] = ((NU8) (LOC5));
				res_200416_2683236817 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_200353_2683236817)(Sha1digest199006 self0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T2683236817_2));
	{
		NU8 v_200383_2683236817;
		Sha1digest199006 HEX3Atmp_200387_2683236817;
		NI i_200390_2683236817;
		v_200383_2683236817 = (NU8)0;
		memset((void*)HEX3Atmp_200387_2683236817, 0, sizeof(HEX3Atmp_200387_2683236817));
		memcpy((void*)HEX3Atmp_200387_2683236817, (NIM_CONST void*)self0, sizeof(Sha1digest199006));
		i_200390_2683236817 = ((NI) 0);
		{
			if (!(((NI) (i_200390_2683236817)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_200383_2683236817 = HEX3Atmp_200387_2683236817[(i_200390_2683236817)- 0];
					LOC8 = (NimStringDesc*)0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_200383_2683236817)))), ((NI) 2));
					result0 = resizeString(result0, LOC8->Sup.len + 0);
appendString(result0, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_200390_2683236817)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_200390_2683236817 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI199006.size = sizeof(Sha1digest199006);
NTI199006.kind = 16;
NTI199006.base = (&NTI116);
NTI199006.flags = 3;
}

