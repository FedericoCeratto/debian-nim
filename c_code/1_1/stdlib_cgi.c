/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj150209 Stringtableobj150209;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct Keyvaluepairseq150207 Keyvaluepairseq150207;
typedef struct Keyvaluepair150205 Keyvaluepair150205;
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
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
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
typedef NU8 Stringtablemode150203;
struct  Stringtableobj150209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq150207* data;
Stringtablemode150203 mode;
};
struct Keyvaluepair150205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq150207 {
  TGenericSeq Sup;
  Keyvaluepair150205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1107)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56202 markerproc0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
Stringtableobj150209* gcookies_382700_79315961;
extern TNimType NTI150211; /* StringTableRef */
N_NIMCALL(void, TMP1107)() {
	nimGCvisit((void*)gcookies_382700_79315961, 0);
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_382001_79315961)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = rawNewString(((NI) ((NI)((s0 ? s0->Sup.len : 0) + (NI)((NU32)((s0 ? s0->Sup.len : 0)) >> (NU32)(((NI) 2)))))));
	{
		NI i_382014_79315961;
		NI HEX3Atmp_382024_79315961;
		NI res_382027_79315961;
		i_382014_79315961 = (NI)0;
		HEX3Atmp_382024_79315961 = (NI)0;
		HEX3Atmp_382024_79315961 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_382027_79315961 = ((NI) 0);
		{
			while (1) {
				if (!(res_382027_79315961 <= HEX3Atmp_382024_79315961)) goto LA3;
				i_382014_79315961 = res_382027_79315961;
				switch (((NU8)(s0->data[i_382014_79315961]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result0 = addChar(result0, s0->data[i_382014_79315961]);
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
					LOC7 = nsuToHex(((NI64) (((NU8)(s0->data[i_382014_79315961])))), ((NI) 2));
					result0 = resizeString(result0, LOC7->Sup.len + 0);
appendString(result0, LOC7);
				}
				break;
				}
				res_382027_79315961 += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit000)(void) {
nimRegisterGlobalMarker(TMP1107);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit000)(void) {
}

