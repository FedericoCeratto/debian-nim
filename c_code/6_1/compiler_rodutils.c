/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef NIM_CHAR TY270015[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, hexchar_270051_3471544153)(NIM_CHAR c0, NI* xi0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, encodevintaux_270190_3471544153)(NI x0, NimStringDesc** result0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(void, encodevbiggestintaux_270164_3471544153)(NI64 x0, NimStringDesc** result0);
STRING_LITERAL(TMP1190, "", 0);
STRING_LITERAL(TMP1198, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP4106, "NAN", 3);
STRING_LITERAL(TMP4107, "0.0", 3);
STRING_LITERAL(TMP4108, "INF", 3);
STRING_LITERAL(TMP4109, "-INF", 4);

N_NIMCALL(NI, decodevint_270264_3471544153)(NCSTRING s0, NI* pos0) {
	NI result0;
	NI i_270271_3471544153;
	NI sign_270273_3471544153;
	result0 = (NI)0;
	i_270271_3471544153 = (*pos0);
	sign_270273_3471544153 = ((NI) -1);
	{
		if (!((NU8)(s0[i_270271_3471544153]) == (NU8)(45))) goto LA3;
		i_270271_3471544153 += ((NI) 1);
		sign_270273_3471544153 = ((NI) 1);
	}
	LA3: ;
	result0 = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s0[i_270271_3471544153]))) {
			case 48 ... 57:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s0[i_270271_3471544153])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270271_3471544153])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270271_3471544153])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270271_3471544153])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_270271_3471544153 += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI)((NU32)((NI)(result0 * sign_270273_3471544153)) - (NU32)(((NI) 5)));
	(*pos0) = i_270271_3471544153;
	return result0;
}

N_NIMCALL(void, hexchar_270051_3471544153)(NIM_CHAR c0, NI* xi0) {
	switch (((NU8)(c0))) {
	case 48 ... 57:
	{
		(*xi0) = (NI)((NI)((NU32)((*xi0)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 48)))));
	}
	break;
	case 97 ... 102:
	{
		(*xi0) = (NI)((NI)((NU32)((*xi0)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 97)))) + ((NI) 10)))));
	}
	break;
	case 65 ... 70:
	{
		(*xi0) = (NI)((NI)((NU32)((*xi0)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c0)))) - ((NI) 65)))) + ((NI) 10)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_270111_3471544153)(NCSTRING s0, NI* pos0) {
	NimStringDesc* result0;
	NI i0;
	result0 = (NimStringDesc*)0;
	i0 = (*pos0);
	result0 = copyString(((NimStringDesc*) &TMP1190));
	{
		while (1) {
			switch (((NU8)(s0[i0]))) {
			case 92:
			{
				NI xi0;
				i0 += ((NI) 3);
				xi0 = ((NI) 0);
				hexchar_270051_3471544153(s0[(NI)(i0 - ((NI) 2))], (&xi0));
				hexchar_270051_3471544153(s0[(NI)(i0 - ((NI) 1))], (&xi0));
				result0 = addChar(result0, ((NIM_CHAR) (((NI) (xi0)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result0 = addChar(result0, s0[i0]);
				i0 += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*pos0) = i0;
	return result0;
}

N_NIMCALL(NI64, decodevbiggestint_270499_3471544153)(NCSTRING s0, NI* pos0) {
	NI64 result0;
	NI i_270506_3471544153;
	NI sign_270508_3471544153;
	result0 = (NI64)0;
	i_270506_3471544153 = (*pos0);
	sign_270508_3471544153 = ((NI) -1);
	{
		if (!((NU8)(s0[i_270506_3471544153]) == (NU8)(45))) goto LA3;
		i_270506_3471544153 += ((NI) 1);
		sign_270508_3471544153 = ((NI) 1);
	}
	LA3: ;
	result0 = IL64(0);
	{
		while (1) {
			switch (((NU8)(s0[i_270506_3471544153]))) {
			case 48 ... 57:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s0[i_270506_3471544153])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270506_3471544153])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270506_3471544153])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_270506_3471544153])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_270506_3471544153 += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI64)((NU64)((NI64)(result0 * ((NI64) (sign_270508_3471544153)))) - (NU64)(IL64(5)));
	(*pos0) = i_270506_3471544153;
	return result0;
}

N_NIMCALL(void, encodevintaux_270190_3471544153)(NI x0, NimStringDesc** result0) {
	NIM_CHAR d_270196_3471544153;
	NI v_270198_3471544153;
	NI rem_270200_3471544153;
	NI idx_270202_3471544153;
	d_270196_3471544153 = (NIM_CHAR)0;
	v_270198_3471544153 = x0;
	rem_270200_3471544153 = (NI)(v_270198_3471544153 % ((NI) 190));
	{
		if (!(((NI) (rem_270200_3471544153)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_270198_3471544153 = ((NI32)-((NI)(v_270198_3471544153 / ((NI) 190))));
		rem_270200_3471544153 = ((NI32)-(((NI) (rem_270200_3471544153))));
	}
	goto LA1;
	LA3: ;
	{
		v_270198_3471544153 = (NI)(v_270198_3471544153 / ((NI) 190));
	}
	LA1: ;
	idx_270202_3471544153 = ((NI) (rem_270200_3471544153));
	{
		if (!(idx_270202_3471544153 < ((NI) 62))) goto LA8;
		d_270196_3471544153 = ((NimStringDesc*) &TMP1198)->data[idx_270202_3471544153];
	}
	goto LA6;
	LA8: ;
	{
		d_270196_3471544153 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_270202_3471544153 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_270198_3471544153 == ((NI) 0)))) goto LA13;
		encodevintaux_270190_3471544153(v_270198_3471544153, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_270196_3471544153);
}

N_NIMCALL(void, encodevint_270211_3471544153)(NI x0, NimStringDesc** result0) {
	encodevintaux_270190_3471544153((NI)((NU32)(x0) + (NU32)(((NI) 5))), result0);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_270009_3471544153)(NF f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((f0 == f0))) goto LA3;
		result0 = copyString(((NimStringDesc*) &TMP4106));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f0 == 0.0)) goto LA6;
		result0 = copyString(((NimStringDesc*) &TMP4107));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f0 == ((NF)(5.0000000000000000e-01) * (NF)(f0)))) goto LA9;
		{
			if (!(0.0 < f0)) goto LA13;
			result0 = copyString(((NimStringDesc*) &TMP4108));
		}
		goto LA11;
		LA13: ;
		{
			result0 = copyString(((NimStringDesc*) &TMP4109));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY270015 buf0;
		memset((void*)buf0, 0, sizeof(buf0));
		sprintf(((NCSTRING) (buf0)), "%#.16e", f0);
		result0 = cstrToNimstr(((NCSTRING) (buf0)));
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, encodestr_270018_3471544153)(NimStringDesc* s0, NimStringDesc** result0) {
	{
		NI i_270034_3471544153;
		NI HEX3Atmp_270044_3471544153;
		NI res_270047_3471544153;
		i_270034_3471544153 = (NI)0;
		HEX3Atmp_270044_3471544153 = (NI)0;
		HEX3Atmp_270044_3471544153 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_270047_3471544153 = ((NI) 0);
		{
			while (1) {
				if (!(res_270047_3471544153 <= HEX3Atmp_270044_3471544153)) goto LA3;
				i_270034_3471544153 = res_270047_3471544153;
				switch (((NU8)(s0->data[i_270034_3471544153]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result0) = addChar((*result0), s0->data[i_270034_3471544153]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = (NimStringDesc*)0;
					LOC7 = (NimStringDesc*)0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_270034_3471544153])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result0) = resizeString((*result0), LOC6->Sup.len + 0);
appendString((*result0), LOC6);
				}
				break;
				}
				res_270047_3471544153 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_270164_3471544153)(NI64 x0, NimStringDesc** result0) {
	NIM_CHAR d_270170_3471544153;
	NI64 v_270172_3471544153;
	NI64 rem_270174_3471544153;
	NI idx_270176_3471544153;
	d_270170_3471544153 = (NIM_CHAR)0;
	v_270172_3471544153 = x0;
	rem_270174_3471544153 = (NI64)(v_270172_3471544153 % IL64(190));
	{
		if (!(((NI) (rem_270174_3471544153)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_270172_3471544153 = -((NI64)(v_270172_3471544153 / IL64(190)));
		rem_270174_3471544153 = -(((NI64) (rem_270174_3471544153)));
	}
	goto LA1;
	LA3: ;
	{
		v_270172_3471544153 = (NI64)(v_270172_3471544153 / IL64(190));
	}
	LA1: ;
	idx_270176_3471544153 = ((NI) (rem_270174_3471544153));
	{
		if (!(idx_270176_3471544153 < ((NI) 62))) goto LA8;
		d_270170_3471544153 = ((NimStringDesc*) &TMP1198)->data[idx_270176_3471544153];
	}
	goto LA6;
	LA8: ;
	{
		d_270170_3471544153 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_270176_3471544153 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_270172_3471544153 == IL64(0)))) goto LA13;
		encodevbiggestintaux_270164_3471544153(v_270172_3471544153, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_270170_3471544153);
}

N_NIMCALL(void, encodevbiggestint_270185_3471544153)(NI64 x0, NimStringDesc** result0) {
	encodevbiggestintaux_270164_3471544153((NI64)((NU64)(x0) + (NU64)(IL64(5))), result0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}

