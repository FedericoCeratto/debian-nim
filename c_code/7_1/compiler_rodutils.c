/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
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
typedef NIM_CHAR TY299013[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, hexchar_299049_3471544153)(NIM_CHAR c0, NI* xi0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, encodevintaux_299189_3471544153)(NI x0, NimStringDesc** result0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(void, encodevbiggestintaux_299163_3471544153)(NI64 x0, NimStringDesc** result0);
STRING_LITERAL(T3471544153_2, "", 0);
STRING_LITERAL(T3471544153_3, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(T3471544153_4, "NAN", 3);
STRING_LITERAL(T3471544153_5, "0.0", 3);
STRING_LITERAL(T3471544153_6, "INF", 3);
STRING_LITERAL(T3471544153_7, "-INF", 4);

N_NIMCALL(NI, decodevint_299263_3471544153)(NCSTRING s0, NI* pos0) {
	NI result0;
	NI i_299270_3471544153;
	NI sign_299272_3471544153;
	result0 = (NI)0;
	i_299270_3471544153 = (*pos0);
	sign_299272_3471544153 = ((NI) -1);
	{
		if (!((NU8)(s0[i_299270_3471544153]) == (NU8)(45))) goto LA3;
		i_299270_3471544153 += ((NI) 1);
		sign_299272_3471544153 = ((NI) 1);
	}
	LA3: ;
	result0 = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s0[i_299270_3471544153]))) {
			case 48 ... 57:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s0[i_299270_3471544153])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299270_3471544153])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299270_3471544153])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI)((NI)(result0 * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299270_3471544153])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_299270_3471544153 += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI)((NU32)((NI)(result0 * sign_299272_3471544153)) - (NU32)(((NI) 5)));
	(*pos0) = i_299270_3471544153;
	return result0;
}

N_NIMCALL(void, hexchar_299049_3471544153)(NIM_CHAR c0, NI* xi0) {
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

N_NIMCALL(NimStringDesc*, decodestr_299109_3471544153)(NCSTRING s0, NI* pos0) {
	NimStringDesc* result0;
	NI i0;
	result0 = (NimStringDesc*)0;
	i0 = (*pos0);
	result0 = copyString(((NimStringDesc*) &T3471544153_2));
	{
		while (1) {
			switch (((NU8)(s0[i0]))) {
			case 92:
			{
				NI xi0;
				i0 += ((NI) 3);
				xi0 = ((NI) 0);
				hexchar_299049_3471544153(s0[(NI)(i0 - ((NI) 2))], (&xi0));
				hexchar_299049_3471544153(s0[(NI)(i0 - ((NI) 1))], (&xi0));
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

N_NIMCALL(NI64, decodevbiggestint_299499_3471544153)(NCSTRING s0, NI* pos0) {
	NI64 result0;
	NI i_299506_3471544153;
	NI sign_299508_3471544153;
	result0 = (NI64)0;
	i_299506_3471544153 = (*pos0);
	sign_299508_3471544153 = ((NI) -1);
	{
		if (!((NU8)(s0[i_299506_3471544153]) == (NU8)(45))) goto LA3;
		i_299506_3471544153 += ((NI) 1);
		sign_299508_3471544153 = ((NI) 1);
	}
	LA3: ;
	result0 = IL64(0);
	{
		while (1) {
			switch (((NU8)(s0[i_299506_3471544153]))) {
			case 48 ... 57:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s0[i_299506_3471544153])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299506_3471544153])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299506_3471544153])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result0 = (NI64)((NI64)(result0 * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s0[i_299506_3471544153])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_299506_3471544153 += ((NI) 1);
		}
	} LA5: ;
	result0 = (NI64)((NU64)((NI64)(result0 * ((NI64) (sign_299508_3471544153)))) - (NU64)(IL64(5)));
	(*pos0) = i_299506_3471544153;
	return result0;
}

N_NIMCALL(void, encodevintaux_299189_3471544153)(NI x0, NimStringDesc** result0) {
	NIM_CHAR d_299195_3471544153;
	NI v_299197_3471544153;
	NI rem_299199_3471544153;
	NI idx_299201_3471544153;
	d_299195_3471544153 = (NIM_CHAR)0;
	v_299197_3471544153 = x0;
	rem_299199_3471544153 = (NI)(v_299197_3471544153 % ((NI) 190));
	{
		if (!(((NI) (rem_299199_3471544153)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_299197_3471544153 = ((NI32)-((NI)(v_299197_3471544153 / ((NI) 190))));
		rem_299199_3471544153 = ((NI32)-(((NI) (rem_299199_3471544153))));
	}
	goto LA1;
	LA3: ;
	{
		v_299197_3471544153 = (NI)(v_299197_3471544153 / ((NI) 190));
	}
	LA1: ;
	idx_299201_3471544153 = ((NI) (rem_299199_3471544153));
	{
		if (!(idx_299201_3471544153 < ((NI) 62))) goto LA8;
		d_299195_3471544153 = ((NimStringDesc*) &T3471544153_3)->data[idx_299201_3471544153];
	}
	goto LA6;
	LA8: ;
	{
		d_299195_3471544153 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_299201_3471544153 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_299197_3471544153 == ((NI) 0)))) goto LA13;
		encodevintaux_299189_3471544153(v_299197_3471544153, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_299195_3471544153);
}

N_NIMCALL(void, encodevint_299210_3471544153)(NI x0, NimStringDesc** result0) {
	encodevintaux_299189_3471544153((NI)((NU32)(x0) + (NU32)(((NI) 5))), result0);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_299007_3471544153)(NF f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		if (!!((f0 == f0))) goto LA3;
		result0 = copyString(((NimStringDesc*) &T3471544153_4));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f0 == 0.0)) goto LA6;
		result0 = copyString(((NimStringDesc*) &T3471544153_5));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f0 == ((NF)(5.0000000000000000e-01) * (NF)(f0)))) goto LA9;
		{
			if (!(0.0 < f0)) goto LA13;
			result0 = copyString(((NimStringDesc*) &T3471544153_6));
		}
		goto LA11;
		LA13: ;
		{
			result0 = copyString(((NimStringDesc*) &T3471544153_7));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY299013 buf0;
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

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, encodestr_299016_3471544153)(NimStringDesc* s0, NimStringDesc** result0) {
	{
		NI i_299032_3471544153;
		NI HEX3Atmp_299042_3471544153;
		NI res_299045_3471544153;
		i_299032_3471544153 = (NI)0;
		HEX3Atmp_299042_3471544153 = (NI)0;
		HEX3Atmp_299042_3471544153 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_299045_3471544153 = ((NI) 0);
		{
			while (1) {
				if (!(res_299045_3471544153 <= HEX3Atmp_299042_3471544153)) goto LA3;
				i_299032_3471544153 = res_299045_3471544153;
				switch (((NU8)(s0->data[i_299032_3471544153]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result0) = addChar((*result0), s0->data[i_299032_3471544153]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = (NimStringDesc*)0;
					LOC7 = (NimStringDesc*)0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_299032_3471544153])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result0) = resizeString((*result0), LOC6->Sup.len + 0);
appendString((*result0), LOC6);
				}
				break;
				}
				res_299045_3471544153 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_299163_3471544153)(NI64 x0, NimStringDesc** result0) {
	NIM_CHAR d_299169_3471544153;
	NI64 v_299171_3471544153;
	NI64 rem_299173_3471544153;
	NI idx_299175_3471544153;
	d_299169_3471544153 = (NIM_CHAR)0;
	v_299171_3471544153 = x0;
	rem_299173_3471544153 = (NI64)(v_299171_3471544153 % IL64(190));
	{
		if (!(((NI) (rem_299173_3471544153)) < ((NI) 0))) goto LA3;
		(*result0) = addChar((*result0), 45);
		v_299171_3471544153 = -((NI64)(v_299171_3471544153 / IL64(190)));
		rem_299173_3471544153 = -(((NI64) (rem_299173_3471544153)));
	}
	goto LA1;
	LA3: ;
	{
		v_299171_3471544153 = (NI64)(v_299171_3471544153 / IL64(190));
	}
	LA1: ;
	idx_299175_3471544153 = ((NI) (rem_299173_3471544153));
	{
		if (!(idx_299175_3471544153 < ((NI) 62))) goto LA8;
		d_299169_3471544153 = ((NimStringDesc*) &T3471544153_3)->data[idx_299175_3471544153];
	}
	goto LA6;
	LA8: ;
	{
		d_299169_3471544153 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_299175_3471544153 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_299171_3471544153 == IL64(0)))) goto LA13;
		encodevbiggestintaux_299163_3471544153(v_299171_3471544153, result0);
	}
	LA13: ;
	(*result0) = addChar((*result0), d_299169_3471544153);
}

N_NIMCALL(void, encodevbiggestint_299184_3471544153)(NI64 x0, NimStringDesc** result0) {
	encodevbiggestintaux_299163_3471544153((NI64)((NU64)(x0) + (NU64)(IL64(5))), result0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}

