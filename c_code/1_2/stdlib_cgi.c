/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct Stringtableobj143209 Stringtableobj143209;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq143207 Keyvaluepairseq143207;
typedef struct Keyvaluepair143205 Keyvaluepair143205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Stringtableobj143209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq143207* data;
NU8 mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepair143205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct Keyvaluepairseq143207 {
  TGenericSeq Sup;
  Keyvaluepair143205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
Stringtableobj143209* gcookies_357700;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, encodeurl_357001)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((NI)((s ? s->Sup.len : 0) + (NI)((NU64)((s ? s->Sup.len : 0)) >> (NU64)(((NI) 2)))))));
	{
		NI i_357014;
		NI HEX3Atmp_357024;
		NI res_357027;
		i_357014 = 0;
		HEX3Atmp_357024 = 0;
		HEX3Atmp_357024 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res_357027 = ((NI) 0);
		{
			while (1) {
				if (!(res_357027 <= HEX3Atmp_357024)) goto LA3;
				i_357014 = res_357027;
				switch (((NU8)(s->data[i_357014]))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 95:
				{
					result = addChar(result, s->data[i_357014]);
				}
				break;
				case 32:
				{
					result = addChar(result, 43);
				}
				break;
				default:
				{
					NimStringDesc* LOC7;
					result = addChar(result, 37);
					LOC7 = 0;
					LOC7 = nsuToHex(((NI64) (((NU8)(s->data[i_357014])))), ((NI) 2));
					result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
				}
				break;
				}
				res_357027 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cgiInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cgiDatInit000)(void) {
}

