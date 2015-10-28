/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Optparser209211 Optparser209211;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
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
struct  Optparser209211  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU8 TY213407[32];
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, paramcount_136035)(void);
N_NIMCALL(NimStringDesc*, quote_209317)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY213407 chars, NI start);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NI, parseword_209230)(NimStringDesc* s, NI i, NimStringDesc** w, TY213407 delim);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, paramstr_136013)(NI i);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, handleshortoption_209604)(Optparser209211* p);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, TY213407 chars);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_81016, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
STRING_LITERAL(TMP1632, "", 0);
static NIM_CONST TY213407 TMP1633 = {
0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY213407 TMP1634 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1635, "", 0);
static NIM_CONST TY213407 TMP1636 = {
0x01, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY213407 TMP1641 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI4011; /* RootObj */
TNimType NTI209211; /* OptParser */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
extern TNimType NTI138; /* bool */
TNimType NTI209209; /* CmdLineKind */

N_NIMCALL(NI, parseword_209230)(NimStringDesc* s, NI i, NimStringDesc** w, TY213407 delim) {
	NI result;
	result = 0;
	result = i;
	{
		if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA3;
		result += ((NI) 1);
		{
			while (1) {
				if (!!((((NU8)(s->data[result])) == ((NU8)(0)) || ((NU8)(s->data[result])) == ((NU8)(34))))) goto LA6;
				(*w) = addChar((*w), s->data[result]);
				result += ((NI) 1);
			} LA6: ;
		}
		{
			if (!((NU8)(s->data[result]) == (NU8)(34))) goto LA9;
			result += ((NI) 1);
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
				result += ((NI) 1);
			} LA13: ;
		}
	}
	LA1: ;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, quote_209317)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = nsuFindCharSet(s, TMP1633, ((NI) 0));
		LOC3 = (((NI) 0) <= LOC4);
		if (!(LOC3)) goto LA5;
		LOC3 = !(((NU8)(s->data[((NI) 0)]) == (NU8)(34)));
		LA5: ;
		if (!LOC3) goto LA6;
		{
			NI i;
			if (!((NU8)(s->data[((NI) 0)]) == (NU8)(45))) goto LA10;
			result = rawNewString(((NI) ((s ? s->Sup.len : 0))));
			i = parseword_209230(s, ((NI) 0), (&result), TMP1634);
			{
				if (!(((NU8)(s->data[i])) == ((NU8)(58)) || ((NU8)(s->data[i])) == ((NU8)(61)))) goto LA14;
				result = addChar(result, s->data[i]);
				i += ((NI) 1);
			}
			LA14: ;
			result = addChar(result, 34);
			{
				while (1) {
					if (!(i < (s ? s->Sup.len : 0))) goto LA17;
					result = addChar(result, s->data[i]);
					i += ((NI) 1);
				} LA17: ;
			}
			result = addChar(result, 34);
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC19;
			LOC19 = 0;
			LOC19 = rawNewString(s->Sup.len + 2);
appendChar(LOC19, 34);
appendString(LOC19, s);
appendChar(LOC19, 34);
			result = LOC19;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		result = copyString(s);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, initoptparser_209364)(NimStringDesc* cmdline, Optparser209211* Result) {
	(*Result).pos = ((NI) 0);
	(*Result).inshortstate = NIM_FALSE;
	{
		if (!!(((cmdline) && (cmdline)->Sup.len == 0))) goto LA3;
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(cmdline));
	}
	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) (&(*Result).cmd), copyString(((NimStringDesc*) &TMP1632)));
		{
			NI i_209380;
			NI HEX3Atmp_209383;
			NI res_209386;
			i_209380 = 0;
			HEX3Atmp_209383 = 0;
			HEX3Atmp_209383 = paramcount_136035();
			res_209386 = ((NI) 1);
			{
				while (1) {
					NimStringDesc* LOC9;
					NimStringDesc* LOC10;
					if (!(res_209386 <= HEX3Atmp_209383)) goto LA8;
					i_209380 = res_209386;
					LOC9 = 0;
					LOC9 = paramstr_136013(i_209380);
					LOC10 = 0;
					LOC10 = quote_209317(LOC9);
					(*Result).cmd = resizeString((*Result).cmd, LOC10->Sup.len + 0);
appendString((*Result).cmd, LOC10);
					(*Result).cmd = addChar((*Result).cmd, 32);
					res_209386 += ((NI) 1);
				} LA8: ;
			}
		}
	}
	LA1: ;
	(*Result).kind = ((NU8) 0);
	unsureAsgnRef((void**) (&(*Result).key), copyString(((NimStringDesc*) &TMP1635)));
	unsureAsgnRef((void**) (&(*Result).val), copyString(((NimStringDesc*) &TMP1635)));
}

N_NIMCALL(void, handleshortoption_209604)(Optparser209211* p) {
	NI i;
	i = (*p).pos;
	(*p).kind = ((NU8) 3);
	(*p).key = addChar((*p).key, (*p).cmd->data[i]);
	i += ((NI) 1);
	(*p).inshortstate = NIM_TRUE;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
			(*p).inshortstate = NIM_FALSE;
		} LA2: ;
	}
	{
		if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA5;
		i += ((NI) 1);
		(*p).inshortstate = NIM_FALSE;
		{
			while (1) {
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA8;
				i += ((NI) 1);
			} LA8: ;
		}
		i = parseword_209230((*p).cmd, i, (&(*p).val), TMP1636);
	}
	LA5: ;
	{
		if (!((NU8)((*p).cmd->data[i]) == (NU8)(0))) goto LA11;
		(*p).inshortstate = NIM_FALSE;
	}
	LA11: ;
	(*p).pos = i;
}

N_NIMCALL(void, nponext)(Optparser209211* p) {
	NI i;
{	i = (*p).pos;
	{
		while (1) {
			if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA2;
			i += ((NI) 1);
		} LA2: ;
	}
	(*p).pos = i;
	(*p).key = setLengthStr((*p).key, ((NI) 0));
	(*p).val = setLengthStr((*p).val, ((NI) 0));
	{
		if (!(*p).inshortstate) goto LA5;
		handleshortoption_209604(p);
		goto BeforeRet;
	}
	LA5: ;
	switch (((NU8)((*p).cmd->data[i]))) {
	case 0:
	{
		(*p).kind = ((NU8) 0);
	}
	break;
	case 45:
	{
		i += ((NI) 1);
		{
			if (!((NU8)((*p).cmd->data[i]) == (NU8)(45))) goto LA11;
			(*p).kind = ((NU8) 2);
			i += ((NI) 1);
			i = parseword_209230((*p).cmd, i, (&(*p).key), TMP1634);
			{
				while (1) {
					if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA14;
					i += ((NI) 1);
				} LA14: ;
			}
			{
				if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(58)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(61)))) goto LA17;
				i += ((NI) 1);
				{
					while (1) {
						if (!(((NU8)((*p).cmd->data[i])) == ((NU8)(9)) || ((NU8)((*p).cmd->data[i])) == ((NU8)(32)))) goto LA20;
						i += ((NI) 1);
					} LA20: ;
				}
				(*p).pos = parseword_209230((*p).cmd, i, (&(*p).val), TMP1636);
			}
			goto LA15;
			LA17: ;
			{
				(*p).pos = i;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*p).pos = i;
			handleshortoption_209604(p);
		}
		LA9: ;
	}
	break;
	default:
	{
		(*p).kind = ((NU8) 1);
		(*p).pos = parseword_209230((*p).cmd, i, (&(*p).key), TMP1636);
	}
	break;
	}
	}BeforeRet: ;
}

N_NIMCALL(NimStringDesc*, npocmdLineRest)(Optparser209211* p) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = copyStrLast((*p).cmd, (*p).pos, (NI)(((*p).cmd ? (*p).cmd->Sup.len : 0) - ((NI) 1)));
	result = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE, TMP1641);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseoptDatInit000)(void) {
static TNimNode* TMP1628[6];
static TNimNode* TMP1629[4];
NI TMP1631;
static char* NIM_CONST TMP1630[4] = {
"cmdEnd", 
"cmdArgument", 
"cmdLongOption", 
"cmdShortOption"};
static TNimNode TMP786[12];
NTI209211.size = sizeof(Optparser209211);
NTI209211.kind = 17;
NTI209211.base = (&NTI4011);
TMP1628[0] = &TMP786[1];
TMP786[1].kind = 1;
TMP786[1].offset = offsetof(Optparser209211, cmd);
TMP786[1].typ = (&NTI149);
TMP786[1].name = "cmd";
TMP1628[1] = &TMP786[2];
TMP786[2].kind = 1;
TMP786[2].offset = offsetof(Optparser209211, pos);
TMP786[2].typ = (&NTI108);
TMP786[2].name = "pos";
TMP1628[2] = &TMP786[3];
TMP786[3].kind = 1;
TMP786[3].offset = offsetof(Optparser209211, inshortstate);
TMP786[3].typ = (&NTI138);
TMP786[3].name = "inShortState";
TMP1628[3] = &TMP786[4];
NTI209209.size = sizeof(NU8);
NTI209209.kind = 14;
NTI209209.base = 0;
NTI209209.flags = 3;
for (TMP1631 = 0; TMP1631 < 4; TMP1631++) {
TMP786[TMP1631+5].kind = 1;
TMP786[TMP1631+5].offset = TMP1631;
TMP786[TMP1631+5].name = TMP1630[TMP1631];
TMP1629[TMP1631] = &TMP786[TMP1631+5];
}
TMP786[9].len = 4; TMP786[9].kind = 2; TMP786[9].sons = &TMP1629[0];
NTI209209.node = &TMP786[9];
TMP786[4].kind = 1;
TMP786[4].offset = offsetof(Optparser209211, kind);
TMP786[4].typ = (&NTI209209);
TMP786[4].name = "kind";
TMP1628[4] = &TMP786[10];
TMP786[10].kind = 1;
TMP786[10].offset = offsetof(Optparser209211, key);
TMP786[10].typ = (&NTI149);
TMP786[10].name = "key";
TMP1628[5] = &TMP786[11];
TMP786[11].kind = 1;
TMP786[11].offset = offsetof(Optparser209211, val);
TMP786[11].typ = (&NTI149);
TMP786[11].name = "val";
TMP786[0].len = 6; TMP786[0].kind = 2; TMP786[0].sons = &TMP1628[0];
NTI209211.node = &TMP786[0];
}
