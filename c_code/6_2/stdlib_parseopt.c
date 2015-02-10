/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct optparser207011 optparser207011;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
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
struct  optparser207011  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
typedef NU8 TY211607[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_123639)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_97234)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_123609)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, handleshortoption_207309)(optparser207011* p);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NI, parseword_207204)(NimStringDesc* s, NI i, NimStringDesc** w, TY211607 delim);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP1565, "", 0);
STRING_LITERAL(TMP1567, "", 0);
static NIM_CONST TY211607 TMP1568 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY211607 TMP1569 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3211; /* RootObj */
TNimType NTI207011; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI207009; /* CmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, initoptparser_207030)(NimStringDesc* cmdline, optparser207011* Result) {
	(*Result).Pos = 0;
	(*Result).Inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Cmd), copyString(((NimStringDesc*) &TMP1565)));
		{
			NI i_207046;
			NI HEX3Atmp_207049;
			NI res_207052;
			i_207046 = 0;
			HEX3Atmp_207049 = 0;
			HEX3Atmp_207049 = paramcount_123639();
			res_207052 = 1;
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					NimStringDesc* LOC11;
					if (!(res_207052 <= HEX3Atmp_207049)) goto LA8;
					i_207046 = res_207052;
					LOC9 = 0;
					LOC10 = 0;
					LOC10 = paramstr_123609(i_207046);
					LOC11 = 0;
					LOC11 = quoteifcontainswhite_97234(LOC10);
					LOC9 = rawNewString((*Result).Cmd->Sup.len + LOC11->Sup.len + 1);
appendString(LOC9, (*Result).Cmd);
appendString(LOC9, LOC11);
appendChar(LOC9, 32);
					unsureAsgnRef((void**) (&(*Result).Cmd), LOC9);
					res_207052 += 1;
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).Kind = ((NU8) 0);
	unsureAsgnRef((void**) (&(*Result).Key), copyString(((NimStringDesc*) &TMP1567)));
	unsureAsgnRef((void**) (&(*Result).Val), copyString(((NimStringDesc*) &TMP1567)));
}

N_NIMCALL(NI, parseword_207204)(NimStringDesc* s, NI i, NimStringDesc** w, TY211607 delim) {
	NI result;
	result = 0;
	result = i;
	{
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		result += 1;
		{
			while (1) {
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				(*w) = addChar((*w), s->data[result]);
				result += 1;
			} LA6: ;
		}
		{
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			result += 1;
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			while (1) {
				if (!!(((delim[((NU8)(s->data[result]))/8] &(1<<(((NU8)(s->data[result]))%8)))!=0))) goto LA13;
				(*w) = addChar((*w), s->data[result]);
				result += 1;
			} LA13: ;
		}
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, handleshortoption_207309)(optparser207011* p) {
	NI i;
	i = (*p).Pos;
	(*p).Kind = ((NU8) 3);
	(*p).Key = addChar((*p).Key, (*p).Cmd->data[i]);
	i += 1;
	(*p).Inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += 1;
			(*p).Inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA5;
		i += 1;
		(*p).Inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA8;
				i += 1;
			} LA8: ;
		}
		i = parseword_207204((*p).Cmd, i, (&(*p).Val), TMP1568);
	}
	LA5: ;
	{
		if (!((NU8)((*p).Cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).Inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p).Pos = i;
}

N_NIMCALL(void, nponext)(optparser207011* p) {
	NI i;
	i = (*p).Pos;
	{
		while (1) {
			if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += 1;
		} LA2: ;
	}
	(*p).Pos = i;
	(*p).Key = setLengthStr((*p).Key, 0);
	(*p).Val = setLengthStr((*p).Val, 0);
	{
		if (!(*p).Inshortstate) goto LA5;
		handleshortoption_207309(p);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p).Cmd->data[i]))) {
	case 0:
	{
		(*p).Kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		i += 1;
		{
			if (!((NU8)((*p).Cmd->data[i]) == (NU8)(45))) goto LA11;
			(*p).Kind = ((NU8) 2);
			i += 1;
			i = parseword_207204((*p).Cmd, i, (&(*p).Key), TMP1569);
			{
				while (1) {
					if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA14;
					i += 1;
				} LA14: ;
			}
			{
				if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(61)))) goto LA17;
				i += 1;
				{
					while (1) {
						if (!(((NU8)((*p).Cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).Cmd->data[i])) == ((NU8)(32)))) goto LA20;
						i += 1;
					} LA20: ;
				}
				(*p).Pos = parseword_207204((*p).Cmd, i, (&(*p).Val), TMP1568);
			}
			goto LA15;
			LA17: ;
			{
				(*p).Pos = i;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p).Pos = i;
			handleshortoption_207309(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p).Kind = ((NU8) 1);
		(*p).Pos = parseword_207204((*p).Cmd, i, (&(*p).Key), TMP1568);
	}
	break;
	}
	BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(optparser207011* p) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = copyStrLast((*p).Cmd, (*p).Pos, (NI64)((*p).Cmd->Sup.len - 1));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void) {
static TNimNode* TMP1561[6];
static TNimNode* TMP1562[4];
NI TMP1564;
static char* NIM_CONST TMP1563[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP706[12];
NTI207011.size = sizeof(optparser207011);
NTI207011.kind = 17;
NTI207011.base = (&NTI3211);
TMP1561[0] = &TMP706[1];
TMP706[1].kind = 1;
TMP706[1].offset = offsetof(optparser207011, Cmd);
TMP706[1].typ = (&NTI149);
TMP706[1].name = "cmd";
TMP1561[1] = &TMP706[2];
TMP706[2].kind = 1;
TMP706[2].offset = offsetof(optparser207011, Pos);
TMP706[2].typ = (&NTI108);
TMP706[2].name = "pos";
TMP1561[2] = &TMP706[3];
TMP706[3].kind = 1;
TMP706[3].offset = offsetof(optparser207011, Inshortstate);
TMP706[3].typ = (&NTI138);
TMP706[3].name = "inShortState";
TMP1561[3] = &TMP706[4];
NTI207009.size = sizeof(NU8);
NTI207009.kind = 14;
NTI207009.base = 0;
NTI207009.flags = 3;
for (TMP1564 = 0; TMP1564 < 4; TMP1564++) {
TMP706[TMP1564+5].kind = 1;
TMP706[TMP1564+5].offset = TMP1564;
TMP706[TMP1564+5].name = TMP1563[TMP1564];
TMP1562[TMP1564] = &TMP706[TMP1564+5];
}
TMP706[9].len = 4; TMP706[9].kind = 2; TMP706[9].sons = &TMP1562[0];
NTI207009.node = &TMP706[9];
TMP706[4].kind = 1;
TMP706[4].offset = offsetof(optparser207011, Kind);
TMP706[4].typ = (&NTI207009);
TMP706[4].name = "kind";
TMP1561[4] = &TMP706[10];
TMP706[10].kind = 1;
TMP706[10].offset = offsetof(optparser207011, Key);
TMP706[10].typ = (&NTI149);
TMP706[10].name = "key";
TMP1561[5] = &TMP706[11];
TMP706[11].kind = 1;
TMP706[11].offset = offsetof(optparser207011, Val);
TMP706[11].typ = (&NTI149);
TMP706[11].name = "val";
TMP706[0].len = 6; TMP706[0].kind = 2; TMP706[0].sons = &TMP1561[0];
NTI207011.node = &TMP706[0];
}

