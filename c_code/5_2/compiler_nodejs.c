/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
N_NIMCALL(NimStringDesc*, findexe_130801)(NimStringDesc* exe);
STRING_LITERAL(TMP5312, "nodejs", 6);
STRING_LITERAL(TMP5313, "node", 4);
STRING_LITERAL(TMP5314, "iojs", 4);

N_NIMCALL(NimStringDesc*, findnodejs_534003)(void) {
	NimStringDesc* result;
	result = 0;
	result = findexe_130801(((NimStringDesc*) &TMP5312));
	{
		if (!((result) && (result)->Sup.len == 0)) goto LA3;
		result = findexe_130801(((NimStringDesc*) &TMP5313));
	}
	LA3: ;
	{
		if (!((result) && (result)->Sup.len == 0)) goto LA7;
		result = findexe_130801(((NimStringDesc*) &TMP5314));
	}
	LA7: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nodejsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nodejsDatInit000)(void) {
}

