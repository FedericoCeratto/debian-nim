/* Generated by Nim Compiler v0.12.0 */
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
typedef NIM_CHAR TY230030[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, hexchar_230088)(NIM_CHAR c, NI* xi);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, encodevintaux_230267)(NI x, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, encodevbiggestintaux_230228)(NI64 x, NimStringDesc** result);
STRING_LITERAL(TMP1069, "", 0);
STRING_LITERAL(TMP1077, "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 62);
STRING_LITERAL(TMP3911, "NAN", 3);
STRING_LITERAL(TMP3912, "0.0", 3);
STRING_LITERAL(TMP3913, "INF", 3);
STRING_LITERAL(TMP3914, "-INF", 4);

N_NIMCALL(NI, decodevint_230356)(NCSTRING s, NI* pos) {
	NI result;
	NI i_230363;
	NI sign_230365;
	result = 0;
	i_230363 = (*pos);
	sign_230365 = ((NI) -1);
	{
		if (!((NU8)(s[i_230363]) == (NU8)(45))) goto LA3;
		i_230363 += ((NI) 1);
		sign_230365 = ((NI) 1);
	}
	LA3: ;
	result = ((NI) 0);
	{
		while (1) {
			switch (((NU8)(s[i_230363]))) {
			case 48 ... 57:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) (((NU8)(s[i_230363])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230363])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230363])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI)((NI)(result * ((NI) 190)) - ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230363])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_230363 += ((NI) 1);
		}
	} LA5: ;
	result = (NI)((NU32)((NI)(result * sign_230365)) - (NU32)(((NI) 5)));
	(*pos) = i_230363;
	return result;
}

N_NIMCALL(void, hexchar_230088)(NIM_CHAR c, NI* xi) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 48)))));
	}
	break;
	case 97 ... 102:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 97)))) + ((NI) 10)))));
	}
	break;
	case 65 ... 70:
	{
		(*xi) = (NI)((NI)((NU32)((*xi)) << (NU32)(((NI) 4))) | ((NI) ((NI)(((NI) ((NI)(((NI) (((NU8)(c)))) - ((NI) 65)))) + ((NI) 10)))));
	}
	break;
	default:
	{
	}
	break;
	}
}

N_NIMCALL(NimStringDesc*, decodestr_230154)(NCSTRING s, NI* pos) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = (*pos);
	result = copyString(((NimStringDesc*) &TMP1069));
	{
		while (1) {
			switch (((NU8)(s[i]))) {
			case 92:
			{
				NI xi;
				i += ((NI) 3);
				xi = ((NI) 0);
				hexchar_230088(s[(NI)(i - ((NI) 2))], (&xi));
				hexchar_230088(s[(NI)(i - ((NI) 1))], (&xi));
				result = addChar(result, ((NIM_CHAR) (((NI) (xi)))));
			}
			break;
			case 97 ... 122:
			case 65 ... 90:
			case 48 ... 57:
			case 95:
			{
				result = addChar(result, s[i]);
				i += ((NI) 1);
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
	(*pos) = i;
	return result;
}

N_NIMCALL(NI64, decodevbiggestint_230512)(NCSTRING s, NI* pos) {
	NI64 result;
	NI i_230519;
	NI sign_230521;
	result = 0;
	i_230519 = (*pos);
	sign_230521 = ((NI) -1);
	{
		if (!((NU8)(s[i_230519]) == (NU8)(45))) goto LA3;
		i_230519 += ((NI) 1);
		sign_230521 = ((NI) 1);
	}
	LA3: ;
	result = IL64(0);
	{
		while (1) {
			switch (((NU8)(s[i_230519]))) {
			case 48 ... 57:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) (((NU8)(s[i_230519])))) - ((NI) 48)))));
			}
			break;
			case 97 ... 122:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230519])))) - ((NI) 97)))) + ((NI) 10)))));
			}
			break;
			case 65 ... 90:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230519])))) - ((NI) 65)))) + ((NI) 36)))));
			}
			break;
			case 128 ... 255:
			{
				result = (NI64)((NI64)(result * IL64(190)) - ((NI64) ((NI)(((NI) ((NI)(((NI) (((NU8)(s[i_230519])))) - ((NI) 128)))) + ((NI) 62)))));
			}
			break;
			default:
			{
				goto LA5;
			}
			break;
			}
			i_230519 += ((NI) 1);
		}
	} LA5: ;
	result = (NI64)((NU64)((NI64)(result * ((NI64) (sign_230521)))) - (NU64)(IL64(5)));
	(*pos) = i_230519;
	return result;
}

N_NIMCALL(void, encodevintaux_230267)(NI x, NimStringDesc** result) {
	NIM_CHAR d_230273;
	NI v_230275;
	NI rem_230277;
	NI idx_230279;
	d_230273 = 0;
	v_230275 = x;
	rem_230277 = (NI)(v_230275 % ((NI) 190));
	{
		if (!(((NI) (rem_230277)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_230275 = ((NI32)-((NI)(v_230275 / ((NI) 190))));
		rem_230277 = ((NI32)-(((NI) (rem_230277))));
	}
	goto LA1;
	LA3: ;
	{
		v_230275 = (NI)(v_230275 / ((NI) 190));
	}
	LA1: ;
	idx_230279 = ((NI) (rem_230277));
	{
		if (!(idx_230279 < ((NI) 62))) goto LA8;
		d_230273 = ((NimStringDesc*) &TMP1077)->data[idx_230279];
	}
	goto LA6;
	LA8: ;
	{
		d_230273 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_230279 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_230275 == ((NI) 0)))) goto LA13;
		encodevintaux_230267(v_230275, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_230273);
}

N_NIMCALL(void, encodevint_230294)(NI x, NimStringDesc** result) {
	encodevintaux_230267((NI)((NU32)(x) + (NU32)(((NI) 5))), result);
}

N_NIMCALL(NimStringDesc*, tostrmaxprecision_230024)(NF f) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!((f == f))) goto LA3;
		result = copyString(((NimStringDesc*) &TMP3911));
	}
	goto LA1;
	LA3: ;
	{
		if (!(f == 0.0)) goto LA6;
		result = copyString(((NimStringDesc*) &TMP3912));
	}
	goto LA1;
	LA6: ;
	{
		if (!(f == ((NF)(5.0000000000000000e-01) * (NF)(f)))) goto LA9;
		{
			if (!(0.0 < f)) goto LA13;
			result = copyString(((NimStringDesc*) &TMP3913));
		}
		goto LA11;
		LA13: ;
		{
			result = copyString(((NimStringDesc*) &TMP3914));
		}
		LA11: ;
	}
	goto LA1;
	LA9: ;
	{
		TY230030 buf;
		memset((void*)buf, 0, sizeof(buf));
		sprintf(((NCSTRING) (buf)), "%#.16e", f);
		result = cstrToNimstr(((NCSTRING) (buf)));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, encodestr_230039)(NimStringDesc* s, NimStringDesc** result) {
	{
		NI i_230056;
		NI HEX3Atmp_230066;
		NI res_230069;
		i_230056 = 0;
		HEX3Atmp_230066 = 0;
		HEX3Atmp_230066 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_230069 = ((NI) 0);
		{
			while (1) {
				if (!(res_230069 <= HEX3Atmp_230066)) goto LA3;
				i_230056 = res_230069;
				switch (((NU8)(s->data[i_230056]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					(*result) = addChar((*result), s->data[i_230056]);
				}
				break;
				default:
				{
					NimStringDesc* LOC6;
					NimStringDesc* LOC7;
					LOC6 = 0;
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_230056])))), ((NI) 2));
					LOC6 = rawNewString(LOC7->Sup.len + 1);
appendChar(LOC6, 92);
appendString(LOC6, LOC7);
					(*result) = resizeString((*result), LOC6->Sup.len + 0);
appendString((*result), LOC6);
				}
				break;
				}
				res_230069 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, encodevbiggestintaux_230228)(NI64 x, NimStringDesc** result) {
	NIM_CHAR d_230234;
	NI64 v_230236;
	NI64 rem_230238;
	NI idx_230240;
	d_230234 = 0;
	v_230236 = x;
	rem_230238 = (NI64)(v_230236 % IL64(190));
	{
		if (!(((NI) (rem_230238)) < ((NI) 0))) goto LA3;
		(*result) = addChar((*result), 45);
		v_230236 = -((NI64)(v_230236 / IL64(190)));
		rem_230238 = -(((NI64) (rem_230238)));
	}
	goto LA1;
	LA3: ;
	{
		v_230236 = (NI64)(v_230236 / IL64(190));
	}
	LA1: ;
	idx_230240 = ((NI) (rem_230238));
	{
		if (!(idx_230240 < ((NI) 62))) goto LA8;
		d_230234 = ((NimStringDesc*) &TMP1077)->data[idx_230240];
	}
	goto LA6;
	LA8: ;
	{
		d_230234 = ((NIM_CHAR) (((NI) ((NI)((NI)(idx_230240 - ((NI) 62)) + ((NI) 128))))));
	}
	LA6: ;
	{
		if (!!((v_230236 == IL64(0)))) goto LA13;
		encodevbiggestintaux_230228(v_230236, result);
	}
	LA13: ;
	(*result) = addChar((*result), d_230234);
}

N_NIMCALL(void, encodevbiggestint_230256)(NI64 x, NimStringDesc** result) {
	encodevbiggestintaux_230228((NI64)((NU64)(x) + (NU64)(IL64(5))), result);
}
NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_rodutilsDatInit000)(void) {
}
