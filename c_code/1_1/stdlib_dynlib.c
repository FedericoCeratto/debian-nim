/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <windows.h>
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

N_NIMCALL(void*, loadlib_111232_730713720)(NimStringDesc* path0, NIM_BOOL globalsymbols0) {
	void* result0;
	void* LOC1;
	result0 = (void*)0;
	LOC1 = (void*)0;
	LOC1 = LoadLibraryA(path0->data);
	result0 = ((void*) (LOC1));
	return result0;
}

N_NIMCALL(void*, symaddr_111255_730713720)(void* lib0, NCSTRING name0) {
	void* result0;
	result0 = (void*)0;
	result0 = GetProcAddress(((void*) (lib0)), name0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}

