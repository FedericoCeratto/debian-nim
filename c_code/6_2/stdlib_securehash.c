/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
typedef NU8 Sha1digest202005[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Sha1state202013[5];
typedef NU32 Sha1buffer202015[80];
N_NIMCALL(void, securehash_203344_2683236817)(NimStringDesc* str0, Sha1digest202005 Result);
N_NIMCALL(void, sha1_203101_2683236817)(NimStringDesc* src0, Sha1digest202005 Result);
N_NIMCALL(void, init_202033_2683236817)(NU32* result0);
N_NIMCALL(void, innerhash_202037_2683236817)(NU32* state0, NU32* w0);
static N_INLINE(void, zeromem_7481_1689653243)(void* p0, NI size0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(NimStringDesc*, readfile_14868_1689653243)(NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_203426_1689653243)(Sha1digest202005 x0, Sha1digest202005 y0);
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
TNimType NTI202005; /* Sha1Digest */

N_NIMCALL(void, init_202033_2683236817)(NU32* result0) {
	result0[(((NI) 0))- 0] = ((NU32) 1732584193);
	result0[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result0[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result0[(((NI) 3))- 0] = ((NU32) 271733878);
	result0[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_202037_2683236817)(NU32* state0, NU32* w0) {
	NU32 a0;
	NU32 b0;
	NU32 c0;
	NU32 d0;
	NU32 e0;
	NI round0;
	unsigned int v_202964_2683236817;
	unsigned int v_202975_2683236817;
	unsigned int v_202986_2683236817;
	unsigned int v_202997_2683236817;
	unsigned int v_203008_2683236817;
	a0 = state0[(((NI) 0))- 0];
	b0 = state0[(((NI) 1))- 0];
	c0 = state0[(((NI) 2))- 0];
	d0 = state0[(((NI) 3))- 0];
	e0 = state0[(((NI) 4))- 0];
	round0 = ((NI) 0);
	{
		while (1) {
			unsigned int t_202126_2683236817;
			if (!(round0 < ((NI) 16))) goto LA2;
			t_202126_2683236817 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a0) << (NU64)(((NI) 5))) | (NU32)((NU64)(a0) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b0 & c0) | (unsigned int)((unsigned int)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (unsigned int)((NU32)((NU64)(b0) << (NU64)(((NI) 30))) | (NU32)((NU64)(b0) >> (NU64)(((NI) 2))));
			b0 = a0;
			a0 = t_202126_2683236817;
			round0 += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			unsigned int t_202316_2683236817;
			if (!(round0 < ((NI) 20))) goto LA4;
			w0[(round0)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_202316_2683236817 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a0) << (NU64)(((NI) 5))) | (NU32)((NU64)(a0) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b0 & c0) | (unsigned int)((unsigned int)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (unsigned int)((NU32)((NU64)(b0) << (NU64)(((NI) 30))) | (NU32)((NU64)(b0) >> (NU64)(((NI) 2))));
			b0 = a0;
			a0 = t_202316_2683236817;
			round0 += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			unsigned int t_202489_2683236817;
			if (!(round0 < ((NI) 40))) goto LA6;
			w0[(round0)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_202489_2683236817 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a0) << (NU64)(((NI) 5))) | (NU32)((NU64)(a0) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (unsigned int)((NU32)((NU64)(b0) << (NU64)(((NI) 30))) | (NU32)((NU64)(b0) >> (NU64)(((NI) 2))));
			b0 = a0;
			a0 = t_202489_2683236817;
			round0 += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			unsigned int t_202689_2683236817;
			if (!(round0 < ((NI) 60))) goto LA8;
			w0[(round0)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_202689_2683236817 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a0) << (NU64)(((NI) 5))) | (NU32)((NU64)(a0) >> (NU64)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)((unsigned int)(b0 & c0) | (unsigned int)(b0 & d0)) | (unsigned int)(c0 & d0))))) + (NU32)(e0))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (unsigned int)((NU32)((NU64)(b0) << (NU64)(((NI) 30))) | (NU32)((NU64)(b0) >> (NU64)(((NI) 2))));
			b0 = a0;
			a0 = t_202689_2683236817;
			round0 += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			unsigned int t_202863_2683236817;
			if (!(round0 < ((NI) 80))) goto LA10;
			w0[(round0)- 0] = (unsigned int)((NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU64)(((NI) 1))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))));
			t_202863_2683236817 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU64)(a0) << (NU64)(((NI) 5))) | (NU32)((NU64)(a0) >> (NU64)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (unsigned int)((NU32)((NU64)(b0) << (NU64)(((NI) 30))) | (NU32)((NU64)(b0) >> (NU64)(((NI) 2))));
			b0 = a0;
			a0 = t_202863_2683236817;
			round0 += ((NI) 1);
		} LA10: ;
	}
	v_202964_2683236817 = (unsigned int)((NU32)(state0[(((NI) 0))- 0]) + (NU32)(a0));
	state0[(((NI) 0))- 0] = v_202964_2683236817;
	v_202975_2683236817 = (unsigned int)((NU32)(state0[(((NI) 1))- 0]) + (NU32)(b0));
	state0[(((NI) 1))- 0] = v_202975_2683236817;
	v_202986_2683236817 = (unsigned int)((NU32)(state0[(((NI) 2))- 0]) + (NU32)(c0));
	state0[(((NI) 2))- 0] = v_202986_2683236817;
	v_202997_2683236817 = (unsigned int)((NU32)(state0[(((NI) 3))- 0]) + (NU32)(d0));
	state0[(((NI) 3))- 0] = v_202997_2683236817;
	v_203008_2683236817 = (unsigned int)((NU32)(state0[(((NI) 4))- 0]) + (NU32)(e0));
	state0[(((NI) 4))- 0] = v_203008_2683236817;
}

static N_INLINE(void, zeromem_7481_1689653243)(void* p0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memset(p0, ((int) 0), ((size_t) (size0)));
}

N_NIMCALL(void, sha1_203101_2683236817)(NimStringDesc* src0, Sha1digest202005 Result) {
	Sha1state202013 state_203106_2683236817;
	Sha1buffer202015 w_203108_2683236817;
	NI bytelen_203110_2683236817;
	NI endoffullblocks_203112_2683236817;
	NI endcurrentblock_203114_2683236817;
	NI currentblock_203116_2683236817;
	NI lastblockbytes_203120_2683236817;
	memset((void*)state_203106_2683236817, 0, sizeof(state_203106_2683236817));
	init_202033_2683236817(state_203106_2683236817);
	memset((void*)w_203108_2683236817, 0, sizeof(w_203108_2683236817));
	bytelen_203110_2683236817 = (src0 ? src0->Sup.len : 0);
	endoffullblocks_203112_2683236817 = (NI)(bytelen_203110_2683236817 - ((NI) 64));
	endcurrentblock_203114_2683236817 = ((NI) 0);
	currentblock_203116_2683236817 = ((NI) 0);
	{
		while (1) {
			NI i_203118_2683236817;
			if (!(currentblock_203116_2683236817 <= endoffullblocks_203112_2683236817)) goto LA2;
			endcurrentblock_203114_2683236817 = (NI)(currentblock_203116_2683236817 + ((NI) 64));
			i_203118_2683236817 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock_203116_2683236817 < endcurrentblock_203114_2683236817)) goto LA4;
					w_203108_2683236817[(i_203118_2683236817)- 0] = (unsigned int)((unsigned int)((unsigned int)(((NU32) (((NU8)(src0->data[(NI)(currentblock_203116_2683236817 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(currentblock_203116_2683236817 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(currentblock_203116_2683236817 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src0->data[currentblock_203116_2683236817]))))) << (NU32)(((NU32) 24))));
					currentblock_203116_2683236817 += ((NI) 4);
					i_203118_2683236817 += ((NI) 1);
				} LA4: ;
			}
			innerhash_202037_2683236817(state_203106_2683236817, w_203108_2683236817);
		} LA2: ;
	}
	endcurrentblock_203114_2683236817 = (NI)(bytelen_203110_2683236817 - currentblock_203116_2683236817);
	zeromem_7481_1689653243(((void*) (w_203108_2683236817)), ((NI) 64));
	lastblockbytes_203120_2683236817 = ((NI) 0);
	{
		while (1) {
			NU32 value_203122_2683236817;
			if (!(lastblockbytes_203120_2683236817 < endcurrentblock_203114_2683236817)) goto LA6;
			value_203122_2683236817 = (NU32)((NU32)(((NU32) (((NU8)(src0->data[(NI)(lastblockbytes_203120_2683236817 + currentblock_203116_2683236817)]))))) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_203120_2683236817 & ((NI) 3))))))) << (NU64)(((NI) 3)))));
			w_203108_2683236817[((NI)((NU64)(lastblockbytes_203120_2683236817) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_203108_2683236817[((NI)((NU64)(lastblockbytes_203120_2683236817) >> (NU64)(((NI) 2))))- 0] | value_203122_2683236817);
			lastblockbytes_203120_2683236817 += ((NI) 1);
		} LA6: ;
	}
	w_203108_2683236817[((NI)((NU64)(lastblockbytes_203120_2683236817) >> (NU64)(((NI) 2))))- 0] = (unsigned int)(w_203108_2683236817[((NI)((NU64)(lastblockbytes_203120_2683236817) >> (NU64)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU64)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_203120_2683236817 & ((NI) 3))))))) << (NU64)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock_203114_2683236817)) goto LA9;
		innerhash_202037_2683236817(state_203106_2683236817, w_203108_2683236817);
		zeromem_7481_1689653243(((void*) (w_203108_2683236817)), ((NI) 64));
	}
	LA9: ;
	w_203108_2683236817[(((NI) 15))- 0] = (NU32)((NU64)(((NU32) (bytelen_203110_2683236817))) << (NU64)(((NI) 3)));
	innerhash_202037_2683236817(state_203106_2683236817, w_203108_2683236817);
	{
		NI i_203124_2683236817;
		NI res_203340_2683236817;
		i_203124_2683236817 = (NI)0;
		res_203340_2683236817 = ((NI) 0);
		{
			while (1) {
				if (!(res_203340_2683236817 <= ((NI) 19))) goto LA13;
				i_203124_2683236817 = res_203340_2683236817;
				Result[(i_203124_2683236817)- 0] = ((NU8) ((NI)((NI)((NU64)(((NI) (state_203106_2683236817[((NI)((NU64)(i_203124_2683236817) >> (NU64)(((NI) 2))))- 0]))) >> (NU64)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_203124_2683236817 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_203340_2683236817 += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, securehash_203344_2683236817)(NimStringDesc* str0, Sha1digest202005 Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI202005));
	sha1_203101_2683236817(str0, Result);
}

N_NIMCALL(void, securehashfile_203349_2683236817)(NimStringDesc* filename0, Sha1digest202005 Result) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = readfile_14868_1689653243(filename0);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI202005));
	securehash_203344_2683236817(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_203420_2683236817)(Sha1digest202005 a0, Sha1digest202005 b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = HEX3DHEX3D_203426_1689653243(a0, b0);
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_203391_2683236817)(NimStringDesc* hash0, Sha1digest202005 Result) {
	{
		NI i_203412_2683236817;
		NI res_203416_2683236817;
		i_203412_2683236817 = (NI)0;
		res_203416_2683236817 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_203416_2683236817 <= ((NI) 19))) goto LA3;
				i_203412_2683236817 = res_203416_2683236817;
				LOC4 = (NimStringDesc*)0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash0->data[(NI)(i_203412_2683236817 * ((NI) 2))]);
appendChar(LOC4, hash0->data[(NI)((NI)(i_203412_2683236817 * ((NI) 2)) + ((NI) 1))]);
				LOC5 = (NI)0;
				LOC5 = nsuParseHexInt(LOC4);
				Result[(i_203412_2683236817)- 0] = ((NU8) (LOC5));
				res_203416_2683236817 += ((NI) 1);
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

N_NIMCALL(NimStringDesc*, HEX24_203353_2683236817)(Sha1digest202005 self0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T2683236817_2));
	{
		NU8 v_203383_2683236817;
		Sha1digest202005 HEX3Atmp_203387_2683236817;
		NI i_203390_2683236817;
		v_203383_2683236817 = (NU8)0;
		memset((void*)HEX3Atmp_203387_2683236817, 0, sizeof(HEX3Atmp_203387_2683236817));
		memcpy((void*)HEX3Atmp_203387_2683236817, (NIM_CONST void*)self0, sizeof(Sha1digest202005));
		i_203390_2683236817 = ((NI) 0);
		{
			if (!(((NI) (i_203390_2683236817)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_203383_2683236817 = HEX3Atmp_203387_2683236817[(i_203390_2683236817)- 0];
					LOC8 = (NimStringDesc*)0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_203383_2683236817)))), ((NI) 2));
					result0 = resizeString(result0, LOC8->Sup.len + 0);
appendString(result0, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_203390_2683236817)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_203390_2683236817 += ((NI) 1);
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
NTI202005.size = sizeof(Sha1digest202005);
NTI202005.kind = 16;
NTI202005.base = (&NTI116);
NTI202005.flags = 3;
}

