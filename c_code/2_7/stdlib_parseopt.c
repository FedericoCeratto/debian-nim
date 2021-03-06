/* Generated by Nim Compiler v0.15.0 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Optparser280405 Optparser280405;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Cmdlinekind280403;
struct  Optparser280405  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
Cmdlinekind280403 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 char136Set[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NI, paramcount_144026_2125978480)(void);
N_NIMCALL(NimStringDesc*, quote_280489_4065315820)(NimStringDesc* s0);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s0, char136Set chars0, NI start0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NI, parseword_280420_4065315820)(NimStringDesc* s0, NI i0, NimStringDesc** w0, char136Set delim0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_7485_1689653243)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, paramstr_144007_2125978480)(NI i0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(void, handleshortoption_280601_4065315820)(Optparser280405* p0);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s0, NIM_BOOL leading0, NIM_BOOL trailing0, char136Set chars0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_79210_1689653243, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
STRING_LITERAL(T4065315820_6, "", 0);
static NIM_CONST char136Set T4065315820_7 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST char136Set T4065315820_8 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T4065315820_9, "", 0);
static NIM_CONST char136Set T4065315820_10 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST char136Set T4065315820_11 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3608; /* RootObj */
TNimType NTI280405; /* OptParser */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
extern TNimType NTI130; /* bool */
TNimType NTI280403; /* CmdLineKind */

N_NIMCALL(NI, parseword_280420_4065315820)(NimStringDesc* s0, NI i0, NimStringDesc** w0, char136Set delim0) {
	NI result0;
	result0 = (NI)0;
	result0 = i0;
	{
		if (!((NU8)(s0->data[result0]) == (NU8)(34))) goto LA3;
		result0 += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s0->data[result0])) == ((NU8)(0)) || ((NU8)(s0->data[result0])) == ((NU8)(34))))) goto LA6;
				(*w0) = addChar((*w0), s0->data[result0]);
				result0 += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s0->data[result0]) == (NU8)(34))) goto LA9;
			result0 += ((NI) 1);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			while (1) {
				if (!!(((delim0[(NU)(((NU8)(s0->data[result0])))>>3] &(1U<<((NU)(((NU8)(s0->data[result0])))&7U)))!=0))) goto LA13;
				(*w0) = addChar((*w0), s0->data[result0]);
				result0 += ((NI) 1);
			} LA13: ;
		}
	}
	LA1: ;
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
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

N_NIMCALL(NimStringDesc*, quote_280489_4065315820)(NimStringDesc* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	{
		NIM_BOOL LOC3;
		NI LOC4;
		LOC3 = (NIM_BOOL)0;
		LOC4 = (NI)0;
		LOC4 = nsuFindCharSet(s0, T4065315820_7, ((NI) 0));
		LOC3 = (((NI) 0) <= LOC4);
		if (!(LOC3)) goto LA5;
		LOC3 = !(((NU8)(s0->data[((NI) 0)]) == (NU8)(34)));
		LA5: ;
		if (!LOC3) goto LA6;
		{
			NI i0;
			if (!((NU8)(s0->data[((NI) 0)]) == (NU8)(45))) goto LA10;
			result0 = rawNewString(((NI) ((s0 ? s0->Sup.len : 0))));
			i0 = parseword_280420_4065315820(s0, ((NI) 0), (&result0), T4065315820_8);
			{
				if (!(((NU8)(s0->data[i0])) == ((NU8)(58)) || ((NU8)(s0->data[i0])) == ((NU8)(61)))) goto LA14;
				result0 = addChar(result0, s0->data[i0]);
				i0 += ((NI) 1);
			}
			LA14: ;
			result0 = addChar(result0, 34);
			{
				while (1) {
					if (!(i0 < (s0 ? s0->Sup.len : 0))) goto LA17;
					result0 = addChar(result0, s0->data[i0]);
					i0 += ((NI) 1);
				} LA17: ;
			}
			result0 = addChar(result0, 34);
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC19;
			LOC19 = (NimStringDesc*)0;
			LOC19 = rawNewString(s0->Sup.len + 2);
appendChar(LOC19, 34);
appendString(LOC19, s0);
appendChar(LOC19, 34);
			result0 = LOC19;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		result0 = copyString(s0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, initoptparser_280527_4065315820)(NimStringDesc* cmdline0, Optparser280405* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline0) && (cmdline0)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline0));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &T4065315820_6)));
		{
			NI i_280542_4065315820;
			NI HEX3Atmp_280545_4065315820;
			NI res_280548_4065315820;
			i_280542_4065315820 = (NI)0;
			HEX3Atmp_280545_4065315820 = (NI)0;
			HEX3Atmp_280545_4065315820 = paramcount_144026_2125978480();
			res_280548_4065315820 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					if (!(res_280548_4065315820 <= HEX3Atmp_280545_4065315820)) goto LA8;
					i_280542_4065315820 = res_280548_4065315820;
					LOC9 = (NimStringDesc*)0;
					LOC9 = paramstr_144007_2125978480(i_280542_4065315820);
					LOC10 = (NimStringDesc*)0;
					LOC10 = quote_280489_4065315820(LOC9);
					(*Result).cmd = resizeString((*Result).cmd, LOC10->Sup.len + 0);
appendString((*Result).cmd, LOC10);
					(*Result).cmd = addChar((*Result).cmd, 32);
					res_280548_4065315820 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).kind = ((Cmdlinekind280403) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &T4065315820_9)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &T4065315820_9)));
}

N_NIMCALL(void, handleshortoption_280601_4065315820)(Optparser280405* p0) {
	NI i0;
	i0 = (*p0).pos;
	(*p0).kind = ((Cmdlinekind280403) 3);
	(*p0).key = addChar((*p0).key, (*p0).cmd->data[i0]);
	i0 += ((NI) 1);
	(*p0).inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA2;
			i0 += ((NI) 1);
			(*p0).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(58)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(61)))) goto LA5;
		i0 += ((NI) 1);
		(*p0).inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA8;
				i0 += ((NI) 1);
			} LA8: ;
		}
		i0 = parseword_280420_4065315820((*p0).cmd, i0, (&(*p0).val), T4065315820_10);
	}
	LA5: ;
	{
		if (!((NU8)((*p0).cmd->data[i0]) == (NU8)(0))) goto LA11;
		(*p0).inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p0).pos = i0;
}

N_NIMCALL(void, nponext)(Optparser280405* p0) {
	NI i0;
{	i0 = (*p0).pos;
	{
		while (1) {
			if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA2;
			i0 += ((NI) 1);
		} LA2: ;
	}
	(*p0).pos = i0;
	(*p0).key = setLengthStr((*p0).key, ((NI) 0));
	(*p0).val = setLengthStr((*p0).val, ((NI) 0));
	{
		if (!(*p0).inshortstate) goto LA5;
		handleshortoption_280601_4065315820(p0);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p0).cmd->data[i0]))) {
	case 0:
	{
		(*p0).kind = ((Cmdlinekind280403) 0);
	}
	break;
	case 45:
	{
		i0 += ((NI) 1);
		{
			if (!((NU8)((*p0).cmd->data[i0]) == (NU8)(45))) goto LA11;
			(*p0).kind = ((Cmdlinekind280403) 2);
			i0 += ((NI) 1);
			i0 = parseword_280420_4065315820((*p0).cmd, i0, (&(*p0).key), T4065315820_8);
			{
				while (1) {
					if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA14;
					i0 += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(58)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(61)))) goto LA17;
				i0 += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p0).cmd->data[i0])) == ((NU8)(9)) || ((NU8)((*p0).cmd->data[i0])) == ((NU8)(32)))) goto LA20;
						i0 += ((NI) 1);
					} LA20: ;
				}
				(*p0).pos = parseword_280420_4065315820((*p0).cmd, i0, (&(*p0).val), T4065315820_10);
			}
			goto LA15;
			LA17: ;
			{
				(*p0).pos = i0;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p0).pos = i0;
			handleshortoption_280601_4065315820(p0);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p0).kind = ((Cmdlinekind280403) 1);
		(*p0).pos = parseword_280420_4065315820((*p0).cmd, i0, (&(*p0).key), T4065315820_10);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser280405* p0) {
	NimStringDesc* result0;
	NimStringDesc* LOC1;
	result0 = (NimStringDesc*)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = copyStrLast((*p0).cmd, (*p0).pos, (NI)(((*p0).cmd ? (*p0).cmd->Sup.len : 0) - ((NI) 1)));
	result0 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE, T4065315820_11);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* T4065315820_2[6];
static TNimNode* T4065315820_3[4];
NI T4065315820_5;
static char* NIM_CONST T4065315820_4[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode T4065315820_0[12];
NTI280405.size = sizeof(Optparser280405);
NTI280405.kind = 17;
NTI280405.base = (&NTI3608);
T4065315820_2[0] = &T4065315820_0[1];
T4065315820_0[1].kind = 1;
T4065315820_0[1].offset = offsetof(Optparser280405, cmd);
T4065315820_0[1].typ = (&NTI138);
T4065315820_0[1].name = "cmd";
T4065315820_2[1] = &T4065315820_0[2];
T4065315820_0[2].kind = 1;
T4065315820_0[2].offset = offsetof(Optparser280405, pos);
T4065315820_0[2].typ = (&NTI104);
T4065315820_0[2].name = "pos";
T4065315820_2[2] = &T4065315820_0[3];
T4065315820_0[3].kind = 1;
T4065315820_0[3].offset = offsetof(Optparser280405, inshortstate);
T4065315820_0[3].typ = (&NTI130);
T4065315820_0[3].name = "inShortState";
T4065315820_2[3] = &T4065315820_0[4];
NTI280403.size = sizeof(Cmdlinekind280403);
NTI280403.kind = 14;
NTI280403.base = 0;
NTI280403.flags = 3;
for (T4065315820_5 = 0; T4065315820_5 < 4; T4065315820_5++) {
T4065315820_0[T4065315820_5+5].kind = 1;
T4065315820_0[T4065315820_5+5].offset = T4065315820_5;
T4065315820_0[T4065315820_5+5].name = T4065315820_4[T4065315820_5];
T4065315820_3[T4065315820_5] = &T4065315820_0[T4065315820_5+5];
}
T4065315820_0[9].len = 4; T4065315820_0[9].kind = 2; T4065315820_0[9].sons = &T4065315820_3[0];
NTI280403.node = &T4065315820_0[9];
T4065315820_0[4].kind = 1;
T4065315820_0[4].offset = offsetof(Optparser280405, kind);
T4065315820_0[4].typ = (&NTI280403);
T4065315820_0[4].name = "kind";
T4065315820_2[4] = &T4065315820_0[10];
T4065315820_0[10].kind = 1;
T4065315820_0[10].offset = offsetof(Optparser280405, key);
T4065315820_0[10].typ = (&NTI138);
T4065315820_0[10].name = "key";
T4065315820_2[5] = &T4065315820_0[11];
T4065315820_0[11].kind = 1;
T4065315820_0[11].offset = offsetof(Optparser280405, val);
T4065315820_0[11].typ = (&NTI138);
T4065315820_0[11].name = "val";
T4065315820_0[0].len = 6; T4065315820_0[0].kind = 2; T4065315820_0[0].sons = &T4065315820_2[0];
NTI280405.node = &T4065315820_0[0];
}

