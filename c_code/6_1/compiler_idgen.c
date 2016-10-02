/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tidobj200004 Tidobj200004;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode13009;
typedef NimStringDesc* TY193732[1];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200004  {
  TNimObject Sup;
NI id;
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
N_NIMCALL(NIM_BOOL, open_14803_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, togid_292423_644355110)(NimStringDesc* f0);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_171201_2607990831)(NimStringDesc* f0, NIM_BOOL createsubdir0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_14915_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, close_14853_1689653243)(FILE* f0);
N_NIMCALL(FILE*, open_14817_1689653243)(NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
static N_INLINE(void, writeline_171405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0);
N_NIMCALL(void, write_14891_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
STRING_LITERAL(T644355110_2, "nim.gid", 7);
STRING_LITERAL(T644355110_3, "\012", 1);
NI gfrontendid_292004_644355110;

N_NIMCALL(void, registerid_292201_644355110)(Tidobj200004* id0) {
}

N_NIMCALL(NimStringDesc*, togid_292423_644355110)(NimStringDesc* f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = completegeneratedfilepath_171201_2607990831(((NimStringDesc*) &T644355110_2), NIM_TRUE);
	return result0;
}

N_NIMCALL(void, loadmaxids_292443_644355110)(NimStringDesc* project0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line0;
		LOC3 = (NimStringDesc*)0;
		LOC3 = togid_292423_644355110(project0);
		LOC4 = (NIM_BOOL)0;
		LOC4 = open_14803_1689653243(&f0, LOC3, ((Filemode13009) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line0 = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid0;
			LOC9 = (NIM_BOOL)0;
			LOC9 = readline_14915_1689653243(f0, (&line0));
			if (!LOC9) goto LA10;
			frontendid0 = nsuParseInt(line0);
			{
				NIM_BOOL LOC14;
				LOC14 = (NIM_BOOL)0;
				LOC14 = readline_14915_1689653243(f0, (&line0));
				if (!LOC14) goto LA15;
				gfrontendid_292004_644355110 = ((gfrontendid_292004_644355110 >= frontendid0) ? gfrontendid_292004_644355110 : frontendid0);
			}
			LA15: ;
		}
		LA10: ;
		close_14853_1689653243(f0);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_292420_644355110)(NI idrange0) {
	gfrontendid_292004_644355110 = (NI)((NI)((NI)((NI)(gfrontendid_292004_644355110 / idrange0) + ((NI) 1)) * idrange0) + ((NI) 1));
}

static N_INLINE(void, writeline_171405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0) {
	{
		NimStringDesc* i_171420_1689653243;
		NI i_171428_1689653243;
		i_171420_1689653243 = (NimStringDesc*)0;
		i_171428_1689653243 = ((NI) 0);
		{
			while (1) {
				if (!(i_171428_1689653243 < x0Len0)) goto LA3;
				i_171420_1689653243 = x0[i_171428_1689653243];
				write_14891_1689653243(f0, i_171420_1689653243);
				i_171428_1689653243 += ((NI) 1);
			} LA3: ;
		}
	}
	write_14891_1689653243(f0, ((NimStringDesc*) &T644355110_3));
}

N_NIMCALL(void, savemaxids_292427_644355110)(NimStringDesc* project0) {
	FILE* f0;
	NimStringDesc* LOC1;
	TY193732 LOC2;
	LOC1 = (NimStringDesc*)0;
	LOC1 = togid_292423_644355110(project0);
	f0 = open_14817_1689653243(LOC1, ((Filemode13009) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_292004_644355110);
	writeline_171405_1689653243(f0, LOC2, 1);
	close_14853_1689653243(f0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

