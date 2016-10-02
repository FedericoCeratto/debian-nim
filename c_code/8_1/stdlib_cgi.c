/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56202) (void);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Stringtablemode152602;
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
Stringtablemode152602 mode;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T79315961_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
Stringtableobj152608* gcookies_411702_79315961;
extern TNimType NTI152610; /* StringTableRef */
N_NIMCALL(void, T79315961_2)(void) {
	nimGCvisit((void*)gcookies_411702_79315961, 0);
}

static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_7485_1689653243(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_411001_79315961)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((NI)((s0 ? s0->Sup.len : 0) + (NI)((NU32)((s0 ? s0->Sup.len : 0)) >> (NU32)(((NI) 2)))))));
	{
		NI i_411014_79315961;
		NI HEX3Atmp_411024_79315961;
		NI res_411027_79315961;
		i_411014_79315961 = (NI)0;
		HEX3Atmp_411024_79315961 = (NI)0;
		HEX3Atmp_411024_79315961 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_411027_79315961 = ((NI) 0);
		{
			while (1) {
				if (!(res_411027_79315961 <= HEX3Atmp_411024_79315961)) goto LA3;
				i_411014_79315961 = res_411027_79315961;
				switch (((NU8)(s0->data[i_411014_79315961]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result0 = addChar(result0, s0->data[i_411014_79315961]);
				}
				break;
				case 32:
				{
					result0 = addChar(result0, 43);
				}
				break;
				default:
				{
					NimStringDesc* LOC7;
					result0 = addChar(result0, 37);
					LOC7 = (NimStringDesc*)0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_411014_79315961])))), ((NI) 2));
					result0 = resizeString(result0, LOC7->Sup.len + 0);
appendString(result0, LOC7);
				}
				break;
				}
				res_411027_79315961 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit000)(void) {
nimRegisterGlobalMarker(T79315961_2);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit000)(void) {
}

