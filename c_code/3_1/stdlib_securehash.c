/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef NU8 Sha1digest201009[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 Sha1state201402[5];
typedef NU32 Sha1buffer201404[80];
N_NIMCALL(void, securehash_201023)(NimStringDesc* str, Sha1digest201009* Result);
N_NIMCALL(void, sha1_201017)(NimStringDesc* src, Sha1digest201009* Result);
N_NIMCALL(void, init_201423)(NU32* result);
N_NIMCALL(void, innerhash_201433)(NU32* state, NU32* w);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(NimStringDesc*, readfile_17072)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_201158)(Sha1digest201009 x, Sha1digest201009 y);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP1763, "", 0);
extern TNimType NTI120; /* uint8 */
TNimType NTI201009; /* Sha1Digest */

N_NIMCALL(void, init_201423)(NU32* result) {
	result[(((NI) 0))- 0] = ((NU32) 1732584193);
	result[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result[(((NI) 3))- 0] = ((NU32) 271733878);
	result[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_201433)(NU32* state, NU32* w) {
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI round;
	unsigned int v_202469;
	unsigned int v_202480;
	unsigned int v_202491;
	unsigned int v_202502;
	unsigned int v_202513;
	a = state[(((NI) 0))- 0];
	b = state[(((NI) 1))- 0];
	c = state[(((NI) 2))- 0];
	d = state[(((NI) 3))- 0];
	e = state[(((NI) 4))- 0];
	round = ((NI) 0);
	{
		while (1) {
			unsigned int t_201519;
			if (!(round < ((NI) 16))) goto LA2;
			t_201519 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NI) 2))));
			b = a;
			a = t_201519;
			round += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			unsigned int t_201655;
			if (!(round < ((NI) 20))) goto LA4;
			w[(round)- 0] = (unsigned int)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_201655 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)(b & c) | (unsigned int)((unsigned int)((NU32) ~(b)) & d))))) + (NU32)(e))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NI) 2))));
			b = a;
			a = t_201655;
			round += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			unsigned int t_201856;
			if (!(round < ((NI) 40))) goto LA6;
			w[(round)- 0] = (unsigned int)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_201856 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NI) 2))));
			b = a;
			a = t_201856;
			round += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			unsigned int t_202084;
			if (!(round < ((NI) 60))) goto LA8;
			w[(round)- 0] = (unsigned int)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_202084 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NI) 27))))) + (NU32)((unsigned int)((unsigned int)((unsigned int)(b & c) | (unsigned int)(b & d)) | (unsigned int)(c & d))))) + (NU32)(e))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NI) 2))));
			b = a;
			a = t_202084;
			round += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			unsigned int t_202286;
			if (!(round < ((NI) 80))) goto LA10;
			w[(round)- 0] = (unsigned int)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)(round - ((NI) 3)))- 0] ^ w[((NI)(round - ((NI) 8)))- 0]) ^ w[((NI)(round - ((NI) 14)))- 0]) ^ w[((NI)(round - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_202286 = (unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((unsigned int)((NU32)((NU32)(a) << (NU32)(((NI) 5))) | (NU32)((NU32)(a) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(e))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w[(round)- 0]));
			e = d;
			d = c;
			c = (unsigned int)((NU32)((NU32)(b) << (NU32)(((NI) 30))) | (NU32)((NU32)(b) >> (NU32)(((NI) 2))));
			b = a;
			a = t_202286;
			round += ((NI) 1);
		} LA10: ;
	}
	v_202469 = (unsigned int)((NU32)(state[(((NI) 0))- 0]) + (NU32)(a));
	state[(((NI) 0))- 0] = v_202469;
	v_202480 = (unsigned int)((NU32)(state[(((NI) 1))- 0]) + (NU32)(b));
	state[(((NI) 1))- 0] = v_202480;
	v_202491 = (unsigned int)((NU32)(state[(((NI) 2))- 0]) + (NU32)(c));
	state[(((NI) 2))- 0] = v_202491;
	v_202502 = (unsigned int)((NU32)(state[(((NI) 3))- 0]) + (NU32)(d));
	state[(((NI) 3))- 0] = v_202502;
	v_202513 = (unsigned int)((NU32)(state[(((NI) 4))- 0]) + (NU32)(e));
	state[(((NI) 4))- 0] = v_202513;
}

N_NIMCALL(void, sha1_201017)(NimStringDesc* src, Sha1digest201009* Result) {
	Sha1state201402 state_202649;
	Sha1buffer201404 w_202651;
	NI bytelen_202653;
	NI endoffullblocks_202655;
	NI endcurrentblock_202657;
	NI currentblock_202659;
	NI lastblockbytes_202663;
	memset((void*)state_202649, 0, sizeof(state_202649));
	init_201423(state_202649);
	memset((void*)w_202651, 0, sizeof(w_202651));
	bytelen_202653 = (src ? src->Sup.len : 0);
	endoffullblocks_202655 = (NI)(bytelen_202653 - ((NI) 64));
	endcurrentblock_202657 = ((NI) 0);
	currentblock_202659 = ((NI) 0);
	{
		while (1) {
			NI i_202661;
			if (!(currentblock_202659 <= endoffullblocks_202655)) goto LA2;
			endcurrentblock_202657 = (NI)(currentblock_202659 + ((NI) 64));
			i_202661 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock_202659 < endcurrentblock_202657)) goto LA4;
					w_202651[(i_202661)- 0] = (unsigned int)((unsigned int)((unsigned int)(((NU32) (((NU8)(src->data[(NI)(currentblock_202659 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_202659 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(currentblock_202659 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src->data[currentblock_202659]))))) << (NU32)(((NU32) 24))));
					currentblock_202659 += ((NI) 4);
					i_202661 += ((NI) 1);
				} LA4: ;
			}
			innerhash_201433(state_202649, w_202651);
		} LA2: ;
	}
	endcurrentblock_202657 = (NI)(bytelen_202653 - currentblock_202659);
	zeroMem(((void*) (w_202651)), ((NI) 64));
	lastblockbytes_202663 = ((NI) 0);
	{
		while (1) {
			NU32 value_202665;
			if (!(lastblockbytes_202663 < endcurrentblock_202657)) goto LA6;
			value_202665 = (NU32)((NU32)(((NU32) (((NU8)(src->data[(NI)(lastblockbytes_202663 + currentblock_202659)]))))) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_202663 & ((NI) 3))))))) << (NU32)(((NI) 3)))));
			w_202651[((NI)((NU32)(lastblockbytes_202663) >> (NU32)(((NI) 2))))- 0] = (unsigned int)(w_202651[((NI)((NU32)(lastblockbytes_202663) >> (NU32)(((NI) 2))))- 0] | value_202665);
			lastblockbytes_202663 += ((NI) 1);
		} LA6: ;
	}
	w_202651[((NI)((NU32)(lastblockbytes_202663) >> (NU32)(((NI) 2))))- 0] = (unsigned int)(w_202651[((NI)((NU32)(lastblockbytes_202663) >> (NU32)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes_202663 & ((NI) 3))))))) << (NU32)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock_202657)) goto LA9;
		innerhash_201433(state_202649, w_202651);
		zeroMem(((void*) (w_202651)), ((NI) 64));
	}
	LA9: ;
	w_202651[(((NI) 15))- 0] = (NU32)((NU32)(((NU32) (bytelen_202653))) << (NU32)(((NI) 3)));
	innerhash_201433(state_202649, w_202651);
	{
		NI i_202667;
		NI res_202886;
		i_202667 = 0;
		res_202886 = ((NI) 0);
		{
			while (1) {
				if (!(res_202886 <= ((NI) 19))) goto LA13;
				i_202667 = res_202886;
				(*Result)[(i_202667)- 0] = ((NU8) ((NI)((NI)((NU32)(((NI) (state_202649[((NI)((NU32)(i_202667) >> (NU32)(((NI) 2))))- 0]))) >> (NU32)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_202667 & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_202886 += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, securehash_201023)(NimStringDesc* str, Sha1digest201009* Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI201009));
	sha1_201017(str, Result);
}

N_NIMCALL(void, securehashfile_201034)(NimStringDesc* filename, Sha1digest201009* Result) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = readfile_17072(filename);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI201009));
	securehash_201023(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_201152)(Sha1digest201009 a, Sha1digest201009 b) {
	NIM_BOOL result;
	result = 0;
	result = HEX3DHEX3D_201158(a, b);
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_201107)(NimStringDesc* hash, Sha1digest201009* Result) {
	{
		NI i_201129;
		NI res_201133;
		i_201129 = 0;
		res_201133 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_201133 <= ((NI) 19))) goto LA3;
				i_201129 = res_201133;
				LOC4 = 0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash->data[(NI)(i_201129 * ((NI) 2))]);
appendChar(LOC4, hash->data[(NI)((NI)(i_201129 * ((NI) 2)) + ((NI) 1))]);
				LOC5 = 0;
				LOC5 = nsuParseHexInt(LOC4);
				(*Result)[(i_201129)- 0] = ((NU8) (LOC5));
				res_201133 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_201044)(Sha1digest201009 self) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP1763));
	{
		NU8 v_201084;
		Sha1digest201009 HEX3Atmp_201088;
		NI i_201091;
		v_201084 = 0;
		memset((void*)HEX3Atmp_201088, 0, sizeof(HEX3Atmp_201088));
		memcpy((void*)HEX3Atmp_201088, (NIM_CONST void*)self, sizeof(Sha1digest201009));
		i_201091 = ((NI) 0);
		{
			if (!(((NI) (i_201091)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_201084 = HEX3Atmp_201088[(i_201091)- 0];
					LOC8 = 0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_201084)))), ((NI) 2));
					result = resizeString(result, LOC8->Sup.len + 0);
appendString(result, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_201091)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_201091 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI201009.size = sizeof(Sha1digest201009);
NTI201009.kind = 16;
NTI201009.base = (&NTI120);
NTI201009.flags = 3;
}
