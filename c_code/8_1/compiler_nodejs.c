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
N_NIMCALL(NimStringDesc*, findexe_137001_2125978480)(NimStringDesc* exe0);
STRING_LITERAL(TMP5576, "nodejs", 6);
STRING_LITERAL(TMP5577, "node", 4);
STRING_LITERAL(TMP5578, "iojs", 4);

N_NIMCALL(NimStringDesc*, findnodejs_566003_1446018522)(void) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = findexe_137001_2125978480(((NimStringDesc*) &TMP5576));
	{
		if (!((result0) && (result0)->Sup.len == 0)) goto LA3;
		result0 = findexe_137001_2125978480(((NimStringDesc*) &TMP5577));
	}
	LA3: ;
	{
		if (!((result0) && (result0)->Sup.len == 0)) goto LA7;
		result0 = findexe_137001_2125978480(((NimStringDesc*) &TMP5578));
	}
	LA7: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit000)(void) {
}

