/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 Style189404Set;
typedef NU8 Style189404;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Foregroundcolor190024;
N_NIMCALL(void, write_14891_1689653243)(FILE* f0, NimStringDesc* s0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(int, getfilehandle_14990_1689653243)(FILE* f0);
STRING_LITERAL(T4182131368_2, "\033[", 2);
STRING_LITERAL(T4182131368_3, "\033[0m", 4);
NI gfg_189414_4182131368;
NI gbg_189415_4182131368;

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, setstyle_189601_4182131368)(FILE* f0, Style189404Set style0) {
	{
		Style189404 s_189837_4182131368;
		NI i_189851_4182131368;
		s_189837_4182131368 = (Style189404)0;
		i_189851_4182131368 = ((NI) 1);
		{
			while (1) {
				if (!(i_189851_4182131368 <= ((NI) 8))) goto LA3;
				{
					NimStringDesc* LOC8;
					NimStringDesc* LOC9;
					if (!((style0 &(1U<<((NU)((((Style189404) (i_189851_4182131368))- 1))&7U)))!=0)) goto LA6;
					s_189837_4182131368 = ((Style189404) (i_189851_4182131368));
					LOC8 = (NimStringDesc*)0;
					LOC9 = (NimStringDesc*)0;
					LOC9 = nimIntToStr(((NI) (s_189837_4182131368)));
					LOC8 = rawNewString(LOC9->Sup.len + 3);
appendString(LOC8, ((NimStringDesc*) &T4182131368_2));
appendString(LOC8, LOC9);
appendChar(LOC8, 109);
					write_14891_1689653243(f0, LOC8);
				}
				LA6: ;
				i_189851_4182131368 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, resetattributes_189203_4182131368)(FILE* f0) {
	write_14891_1689653243(f0, ((NimStringDesc*) &T4182131368_3));
}

N_NIMCALL(void, setforegroundcolor_190047_4182131368)(FILE* f0, Foregroundcolor190024 fg0, NIM_BOOL bright0) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	gfg_189414_4182131368 = ((NI) (fg0));
	{
		if (!bright0) goto LA3;
		gfg_189414_4182131368 += ((NI) 60);
	}
	LA3: ;
	LOC5 = (NimStringDesc*)0;
	LOC6 = (NimStringDesc*)0;
	LOC6 = nimIntToStr(gfg_189414_4182131368);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T4182131368_2));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_14891_1689653243(f0, LOC5);
}

N_NIMCALL(NIM_BOOL, isatty_190420_4182131368)(FILE* f0) {
	NIM_BOOL result0;
	int LOC1;
	int LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = getfilehandle_14990_1689653243(f0);
	LOC2 = (int)0;
	LOC2 = isatty(LOC1);
	result0 = !((LOC2 == ((NI32) 0)));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	gfg_189414_4182131368 = ((NI) 0);
	gbg_189415_4182131368 = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}

