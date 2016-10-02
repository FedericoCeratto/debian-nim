/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_idgen.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_idgen.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
typedef struct Tidobj200006 Tidobj200006;
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
typedef NimStringDesc* TY193732[1];
typedef N_NIMCALL_PTR(void, TY3489) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_14803)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, togid_292423)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_171201)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_14915)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, close_14853)(FILE* f);
N_NIMCALL(FILE*, open_14817)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeline_171405)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_14891)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
STRING_LITERAL(TMP1589, "nim.gid", 7);
STRING_LITERAL(TMP4647, "\012", 1);
NI gfrontendid_292007;

N_NIMCALL(void, registerid_292201)(Tidobj200006* id) {
}

N_NIMCALL(NimStringDesc*, togid_292423)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = completegeneratedfilepath_171201(((NimStringDesc*) &TMP1589), NIM_TRUE);
	return result;
}

N_NIMCALL(void, loadmaxids_292443)(NimStringDesc* project) {
	FILE* f;
	f = 0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_292423(project);
		LOC4 = 0;
		LOC4 = open_14803(&f, LOC3, ((NU8) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_14915(f, (&line));
			if (!LOC9) goto LA10;
			frontendid = nsuParseInt(line);
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = readline_14915(f, (&line));
				if (!LOC14) goto LA15;
				gfrontendid_292007 = ((gfrontendid_292007 >= frontendid) ? gfrontendid_292007 : frontendid);
			}
			LA15: ;
		}
		LA10: ;
		close_14853(f);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_292420)(NI idrange) {
	gfrontendid_292007 = (NI)((NI)((NI)((NI)(gfrontendid_292007 / idrange) + ((NI) 1)) * idrange) + ((NI) 1));
}

static N_INLINE(void, writeline_171405)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_171420;
		NI i_171428;
		i_171420 = 0;
		i_171428 = ((NI) 0);
		{
			while (1) {
				if (!(i_171428 < xLen0)) goto LA3;
				i_171420 = x[i_171428];
				write_14891(f, i_171420);
				i_171428 += ((NI) 1);
			} LA3: ;
		}
	}
	write_14891(f, ((NimStringDesc*) &TMP4647));
}

N_NIMCALL(void, savemaxids_292427)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY193732 LOC2;
	LOC1 = 0;
	LOC1 = togid_292423(project);
	f = open_14817(LOC1, ((NU8) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_292007);
	writeline_171405(f, LOC2, 1);
	close_14853(f);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}
