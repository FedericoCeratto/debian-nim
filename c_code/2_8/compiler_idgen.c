/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
typedef struct Tidobj194006 Tidobj194006;
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
typedef NU8 Filemode12409;
typedef NimStringDesc* TY187732[1];
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, togid_263435_644355110)(NimStringDesc* f0);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_165201_2607990831)(NimStringDesc* f0, NIM_BOOL createsubdir0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_15713_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(FILE*, open_15617_1689653243)(NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
static N_INLINE(void, writeline_165405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0);
N_NIMCALL(void, write_15689_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
STRING_LITERAL(TMP1722, "nim.gid", 7);
STRING_LITERAL(TMP4721, "\012", 1);
NI gfrontendid_263007_644355110;
NI gbackendid_263008_644355110;

N_NIMCALL(void, registerid_263201_644355110)(Tidobj194006* id0) {
}

N_NIMCALL(NimStringDesc*, togid_263435_644355110)(NimStringDesc* f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = completegeneratedfilepath_165201_2607990831(((NimStringDesc*) &TMP1722), NIM_TRUE);
	return result0;
}

N_NIMCALL(void, loadmaxids_263467_644355110)(NimStringDesc* project0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line0;
		LOC3 = (NimStringDesc*)0;
		LOC3 = togid_263435_644355110(project0);
		LOC4 = (NIM_BOOL)0;
		LOC4 = open_15603_1689653243(&f0, LOC3, ((Filemode12409) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line0 = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid0;
			LOC9 = (NIM_BOOL)0;
			LOC9 = readline_15713_1689653243(f0, (&line0));
			if (!LOC9) goto LA10;
			frontendid0 = nsuParseInt(line0);
			{
				NIM_BOOL LOC14;
				NI backendid0;
				LOC14 = (NIM_BOOL)0;
				LOC14 = readline_15713_1689653243(f0, (&line0));
				if (!LOC14) goto LA15;
				backendid0 = nsuParseInt(line0);
				gfrontendid_263007_644355110 = ((gfrontendid_263007_644355110 >= frontendid0) ? gfrontendid_263007_644355110 : frontendid0);
				gbackendid_263008_644355110 = ((gbackendid_263008_644355110 >= backendid0) ? gbackendid_263008_644355110 : backendid0);
			}
			LA15: ;
		}
		LA10: ;
		fclose(f0);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_263432_644355110)(NI idrange0) {
	gfrontendid_263007_644355110 = (NI)((NI)((NI)((NI)(gfrontendid_263007_644355110 / idrange0) + ((NI) 1)) * idrange0) + ((NI) 1));
}

static N_INLINE(void, writeline_165405_1689653243)(FILE* f0, NimStringDesc** x0, NI x0Len0) {
	{
		NimStringDesc* i_165420_1689653243;
		NI i_165428_1689653243;
		i_165420_1689653243 = (NimStringDesc*)0;
		i_165428_1689653243 = ((NI) 0);
		{
			while (1) {
				if (!(i_165428_1689653243 < x0Len0)) goto LA3;
				i_165420_1689653243 = x0[i_165428_1689653243];
				write_15689_1689653243(f0, i_165420_1689653243);
				i_165428_1689653243 += ((NI) 1);
			} LA3: ;
		}
	}
	write_15689_1689653243(f0, ((NimStringDesc*) &TMP4721));
}

N_NIMCALL(void, savemaxids_263439_644355110)(NimStringDesc* project0) {
	FILE* f0;
	NimStringDesc* LOC1;
	TY187732 LOC2;
	TY187732 LOC3;
	LOC1 = (NimStringDesc*)0;
	LOC1 = togid_263435_644355110(project0);
	f0 = open_15617_1689653243(LOC1, ((Filemode12409) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_263007_644355110);
	writeline_165405_1689653243(f0, LOC2, 1);
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_263008_644355110);
	writeline_165405_1689653243(f0, LOC3, 1);
	fclose(f0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

