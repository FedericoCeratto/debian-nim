/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct optparser208011 optparser208011;
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
struct  optparser208011  {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
typedef NU8 TY212607[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_123639)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, quoteifcontainswhite_97234)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, paramstr_123609)(NI i);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, handleshortoption_208309)(optparser208011* p);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NI, parseword_208204)(NimStringDesc* s, NI i, NimStringDesc** w, TY212607 delim);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP1567, "", 0);
STRING_LITERAL(TMP1569, "", 0);
static NIM_CONST TY212607 TMP1570 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY212607 TMP1571 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3211; /* RootObj */
TNimType NTI208011; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI208009; /* CmdLineKind */

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(void, initoptparser_208030)(NimStringDesc* cmdline, optparser208011* Result) {
	(*Result).Pos = 0;
	(*Result).Inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).Cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).Cmd), copyString(((NimStringDesc*) &TMP1567)));
		{
			NI i_208046;
			NI HEX3Atmp_208049;
			NI res_208052;
			i_208046 = 0;
			HEX3Atmp_208049 = 0;
			HEX3Atmp_208049 = paramcount_123639();
			res_208052 = 1;
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					NimStringDesc* LOC11;
					if (!(res_208052 <= HEX3Atmp_208049)) goto LA8;
					i_208046 = res_208052;
					LOC9 = 0;
					LOC10 = 0;
					LOC10 = paramstr_123609(i_208046);
					LOC11 = 0;
					LOC11 = quoteifcontainswhite_97234(LOC10);
					LOC9 = rawNewString((*Result).Cmd->Sup.len + LOC11->Sup.len + 1);
appendString(LOC9, (*Result).Cmd);
appendString(LOC9, LOC11);
appendChar(LOC9, 32);
					unsureAsgnRef((void**) (&(*Result).Cmd), LOC9);
					res_208052 += 1;
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).Kind = ((NU8) 0);
	unsureAsgnRef((void**) (&(*Result).Key), copyString(((NimStringDesc*) &TMP1569)));
	unsureAsgnRef((void**) (&(*Result).Val), copyString(((NimStringDesc*) &TMP1569)));
}

N_NIMCALL(NI, parseword_208204)(NimStringDesc* s, NI i, NimStringDesc** w, TY212607 delim) {
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

N_NIMCALL(void, handleshortoption_208309)(optparser208011* p) {
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
		i = parseword_208204((*p).Cmd, i, (&(*p).Val), TMP1570);
	}
	LA5: ;
	{
		if (!((NU8)((*p).Cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).Inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p).Pos = i;
}

N_NIMCALL(void, nponext)(optparser208011* p) {
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
		handleshortoption_208309(p);
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
			i = parseword_208204((*p).Cmd, i, (&(*p).Key), TMP1571);
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
				(*p).Pos = parseword_208204((*p).Cmd, i, (&(*p).Val), TMP1570);
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
			handleshortoption_208309(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p).Kind = ((NU8) 1);
		(*p).Pos = parseword_208204((*p).Cmd, i, (&(*p).Key), TMP1570);
	}
	break;
	}
	BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(optparser208011* p) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = copyStrLast((*p).Cmd, (*p).Pos, (NI32)((*p).Cmd->Sup.len - 1));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit)(void) {
static TNimNode* TMP1563[6];
static TNimNode* TMP1564[4];
NI TMP1566;
static char* NIM_CONST TMP1565[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP708[12];
NTI208011.size = sizeof(optparser208011);
NTI208011.kind = 17;
NTI208011.base = (&NTI3211);
TMP1563[0] = &TMP708[1];
TMP708[1].kind = 1;
TMP708[1].offset = offsetof(optparser208011, Cmd);
TMP708[1].typ = (&NTI149);
TMP708[1].name = "cmd";
TMP1563[1] = &TMP708[2];
TMP708[2].kind = 1;
TMP708[2].offset = offsetof(optparser208011, Pos);
TMP708[2].typ = (&NTI108);
TMP708[2].name = "pos";
TMP1563[2] = &TMP708[3];
TMP708[3].kind = 1;
TMP708[3].offset = offsetof(optparser208011, Inshortstate);
TMP708[3].typ = (&NTI138);
TMP708[3].name = "inShortState";
TMP1563[3] = &TMP708[4];
NTI208009.size = sizeof(NU8);
NTI208009.kind = 14;
NTI208009.base = 0;
NTI208009.flags = 3;
for (TMP1566 = 0; TMP1566 < 4; TMP1566++) {
TMP708[TMP1566+5].kind = 1;
TMP708[TMP1566+5].offset = TMP1566;
TMP708[TMP1566+5].name = TMP1565[TMP1566];
TMP1564[TMP1566] = &TMP708[TMP1566+5];
}
TMP708[9].len = 4; TMP708[9].kind = 2; TMP708[9].sons = &TMP1564[0];
NTI208009.node = &TMP708[9];
TMP708[4].kind = 1;
TMP708[4].offset = offsetof(optparser208011, Kind);
TMP708[4].typ = (&NTI208009);
TMP708[4].name = "kind";
TMP1563[4] = &TMP708[10];
TMP708[10].kind = 1;
TMP708[10].offset = offsetof(optparser208011, Key);
TMP708[10].typ = (&NTI149);
TMP708[10].name = "key";
TMP1563[5] = &TMP708[11];
TMP708[11].kind = 1;
TMP708[11].offset = offsetof(optparser208011, Val);
TMP708[11].typ = (&NTI149);
TMP708[11].name = "val";
TMP708[0].len = 6; TMP708[0].kind = 2; TMP708[0].sons = &TMP1563[0];
NTI208011.node = &TMP708[0];
}

