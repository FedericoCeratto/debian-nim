/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
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
N_NIMCALL(NimStringDesc*, findexe_141001_2125978480)(NimStringDesc* exe0);
STRING_LITERAL(TMP5579, "nodejs", 6);
STRING_LITERAL(TMP5580, "node", 4);
STRING_LITERAL(TMP5581, "iojs", 4);

N_NIMCALL(NimStringDesc*, findnodejs_567003_1446018522)(void) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = findexe_141001_2125978480(((NimStringDesc*) &TMP5579));
	{
		if (!((result0) && (result0)->Sup.len == 0)) goto LA3;
		result0 = findexe_141001_2125978480(((NimStringDesc*) &TMP5580));
	}
	LA3: ;
	{
		if (!((result0) && (result0)->Sup.len == 0)) goto LA7;
		result0 = findexe_141001_2125978480(((NimStringDesc*) &TMP5581));
	}
	LA7: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit000)(void) {
}

