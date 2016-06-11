/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 Style183404Set;
typedef NU8 Style183404;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Foregroundcolor184024;
N_NIMCALL(void, write_15689_1689653243)(FILE* f0, NimStringDesc* s0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
STRING_LITERAL(TMP470, "\033[", 2);
STRING_LITERAL(TMP471, "\033[0m", 4);
NI gfg_183413_4182131368;
NI gbg_183414_4182131368;

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, setstyle_183601_4182131368)(FILE* f0, Style183404Set style0) {
	{
		Style183404 s_183837_4182131368;
		NI i_183851_4182131368;
		s_183837_4182131368 = (Style183404)0;
		i_183851_4182131368 = ((NI) 1);
		{
			while (1) {
				if (!(i_183851_4182131368 <= ((NI) 8))) goto LA3;
				{
					NimStringDesc* LOC8;
					NimStringDesc* LOC9;
					if (!((style0 &(1U<<((NU)((((Style183404) (i_183851_4182131368))- 1))&7U)))!=0)) goto LA6;
					s_183837_4182131368 = ((Style183404) (i_183851_4182131368));
					LOC8 = (NimStringDesc*)0;
					LOC9 = (NimStringDesc*)0;
					LOC9 = nimIntToStr(((NI) (s_183837_4182131368)));
					LOC8 = rawNewString(LOC9->Sup.len + 3);
appendString(LOC8, ((NimStringDesc*) &TMP470));
appendString(LOC8, LOC9);
appendChar(LOC8, 109);
					write_15689_1689653243(f0, LOC8);
				}
				LA6: ;
				i_183851_4182131368 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, resetattributes_183203_4182131368)(FILE* f0) {
	write_15689_1689653243(f0, ((NimStringDesc*) &TMP471));
}

N_NIMCALL(void, setforegroundcolor_184045_4182131368)(FILE* f0, Foregroundcolor184024 fg0, NIM_BOOL bright0) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	gfg_183413_4182131368 = ((NI) (fg0));
	{
		if (!bright0) goto LA3;
		gfg_183413_4182131368 += ((NI) 60);
	}
	LA3: ;
	LOC5 = (NimStringDesc*)0;
	LOC6 = (NimStringDesc*)0;
	LOC6 = nimIntToStr(gfg_183413_4182131368);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP470));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_15689_1689653243(f0, LOC5);
}

N_NIMCALL(NIM_BOOL, isatty_184420_4182131368)(FILE* f0) {
	NIM_BOOL result0;
	int LOC1;
	int LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = fileno(f0);
	LOC2 = (int)0;
	LOC2 = isatty(LOC1);
	result0 = !((LOC2 == ((NI32) 0)));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	gfg_183413_4182131368 = ((NI) 0);
	gbg_183414_4182131368 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}

