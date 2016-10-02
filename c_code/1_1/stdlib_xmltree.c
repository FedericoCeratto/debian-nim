/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(void, addescaped_406021_678639433)(NimStringDesc** result0, NimStringDesc* s0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
STRING_LITERAL(T678639433_2, "&lt;", 4);
STRING_LITERAL(T678639433_3, "&gt;", 4);
STRING_LITERAL(T678639433_4, "&amp;", 5);
STRING_LITERAL(T678639433_5, "&quot;", 6);
STRING_LITERAL(T678639433_6, "&#x27;", 6);
STRING_LITERAL(T678639433_7, "&#x2F;", 6);

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, addescaped_406021_678639433)(NimStringDesc** result0, NimStringDesc* s0) {
	{
		NIM_CHAR c_406027_678639433;
		NI i_406031_678639433;
		NI L_406033_678639433;
		c_406027_678639433 = (NIM_CHAR)0;
		i_406031_678639433 = ((NI) 0);
		L_406033_678639433 = (s0 ? s0->Sup.len : 0);
		{
			while (1) {
				if (!(i_406031_678639433 < L_406033_678639433)) goto LA3;
				c_406027_678639433 = s0->data[i_406031_678639433];
				switch (((NU8)(c_406027_678639433))) {
				case 60:
				{
					(*result0) = resizeString((*result0), 4);
appendString((*result0), ((NimStringDesc*) &T678639433_2));
				}
				break;
				case 62:
				{
					(*result0) = resizeString((*result0), 4);
appendString((*result0), ((NimStringDesc*) &T678639433_3));
				}
				break;
				case 38:
				{
					(*result0) = resizeString((*result0), 5);
appendString((*result0), ((NimStringDesc*) &T678639433_4));
				}
				break;
				case 34:
				{
					(*result0) = resizeString((*result0), 6);
appendString((*result0), ((NimStringDesc*) &T678639433_5));
				}
				break;
				case 39:
				{
					(*result0) = resizeString((*result0), 6);
appendString((*result0), ((NimStringDesc*) &T678639433_6));
				}
				break;
				case 47:
				{
					(*result0) = resizeString((*result0), 6);
appendString((*result0), ((NimStringDesc*) &T678639433_7));
				}
				break;
				default:
				{
					(*result0) = addChar((*result0), c_406027_678639433);
				}
				break;
				}
				i_406031_678639433 += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_406034_678639433)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((s0 ? s0->Sup.len : 0))));
	addescaped_406021_678639433((&result0), s0);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit000)(void) {
}

