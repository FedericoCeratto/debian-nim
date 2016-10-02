/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tidobj199004 Tidobj199004;
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
typedef NimStringDesc* TY192732[1];
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
struct  Tidobj199004  {
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
N_NIMCALL(NIM_BOOL, open_15203_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, togid_291423_644355110)(NimStringDesc* f0);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_170201_2607990831)(NimStringDesc* f0, NIM_BOOL createsubdir0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_15315_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, close_15253_1689653243)(FILE* f0);
N_NIMCALL(FILE*, open_15217_1689653243)(NimStringDesc* filename0, Filemode13009 mode0, NI bufsize0);
static N_INLINE(void, writeline_170405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0);
N_NIMCALL(void, write_15291_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
STRING_LITERAL(T644355110_2, "nim.gid", 7);
STRING_LITERAL(T644355110_3, "\012", 1);
NI gfrontendid_291004_644355110;

N_NIMCALL(void, registerid_291201_644355110)(Tidobj199004* id0) {
}

N_NIMCALL(NimStringDesc*, togid_291423_644355110)(NimStringDesc* f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = completegeneratedfilepath_170201_2607990831(((NimStringDesc*) &T644355110_2), NIM_TRUE);
	return result0;
}

N_NIMCALL(void, loadmaxids_291443_644355110)(NimStringDesc* project0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line0;
		LOC3 = (NimStringDesc*)0;
		LOC3 = togid_291423_644355110(project0);
		LOC4 = (NIM_BOOL)0;
		LOC4 = open_15203_1689653243(&f0, LOC3, ((Filemode13009) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line0 = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid0;
			LOC9 = (NIM_BOOL)0;
			LOC9 = readline_15315_1689653243(f0, (&line0));
			if (!LOC9) goto LA10;
			frontendid0 = nsuParseInt(line0);
			{
				NIM_BOOL LOC14;
				LOC14 = (NIM_BOOL)0;
				LOC14 = readline_15315_1689653243(f0, (&line0));
				if (!LOC14) goto LA15;
				gfrontendid_291004_644355110 = ((gfrontendid_291004_644355110 >= frontendid0) ? gfrontendid_291004_644355110 : frontendid0);
			}
			LA15: ;
		}
		LA10: ;
		close_15253_1689653243(f0);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_291420_644355110)(NI idrange0) {
	gfrontendid_291004_644355110 = (NI)((NI)((NI)((NI)(gfrontendid_291004_644355110 / idrange0) + ((NI) 1)) * idrange0) + ((NI) 1));
}

static N_INLINE(void, writeline_170405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0) {
	{
		NimStringDesc* i_170420_1689653243;
		NI i_170428_1689653243;
		i_170420_1689653243 = (NimStringDesc*)0;
		i_170428_1689653243 = ((NI) 0);
		{
			while (1) {
				if (!(i_170428_1689653243 < x0Len0)) goto LA3;
				i_170420_1689653243 = x0[i_170428_1689653243];
				write_15291_1689653243(f0, i_170420_1689653243);
				i_170428_1689653243 += ((NI) 1);
			} LA3: ;
		}
	}
	write_15291_1689653243(f0, ((NimStringDesc*) &T644355110_3));
}

N_NIMCALL(void, savemaxids_291427_644355110)(NimStringDesc* project0) {
	FILE* f0;
	NimStringDesc* LOC1;
	TY192732 LOC2;
	LOC1 = (NimStringDesc*)0;
	LOC1 = togid_291423_644355110(project0);
	f0 = open_15217_1689653243(LOC1, ((Filemode13009) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_291004_644355110);
	writeline_170405_1689653243(f0, LOC2, 1);
	close_15253_1689653243(f0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

