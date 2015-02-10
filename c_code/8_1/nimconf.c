/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY219171 TY219171;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell44935 tcell44935;
typedef struct tcellseq44951 tcellseq44951;
typedef struct tgcheap47016 tgcheap47016;
typedef struct tcellset44947 tcellset44947;
typedef struct tpagedesc44943 tpagedesc44943;
typedef struct tmemregion27210 tmemregion27210;
typedef struct tsmallchunk26440 tsmallchunk26440;
typedef struct tllchunk27204 tllchunk27204;
typedef struct tbigchunk26442 tbigchunk26442;
typedef struct tintset26417 tintset26417;
typedef struct ttrunk26413 ttrunk26413;
typedef struct tavlnode27208 tavlnode27208;
typedef struct tgcstat47014 tgcstat47014;
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer214190 tlexer214190;
typedef struct tbaselexer212024 tbaselexer212024;
typedef struct TNimObject TNimObject;
typedef struct tllstream210204 tllstream210204;
typedef struct tlineinfo194539 tlineinfo194539;
typedef struct ttoken214186 ttoken214186;
typedef struct tident199021 tident199021;
typedef struct tidobj199015 tidobj199015;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
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
struct  tcell44935  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44951  {
NI Len;
NI Cap;
tcell44935** D;
};
struct  tcellset44947  {
NI Counter;
NI Max;
tpagedesc44943* Head;
tpagedesc44943** Data;
};
typedef tsmallchunk26440* TY27222[512];
typedef ttrunk26413* ttrunkbuckets26415[256];
struct  tintset26417  {
ttrunkbuckets26415 Data;
};
struct  tmemregion27210  {
NI Minlargeobj;
NI Maxlargeobj;
TY27222 Freesmallchunks;
tllchunk27204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26442* Freechunkslist;
tintset26417 Chunkstarts;
tavlnode27208* Root;
tavlnode27208* Deleted;
tavlnode27208* Last;
tavlnode27208* Freeavlnodes;
};
struct  tgcstat47014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44951 Zct;
tcellseq44951 Decstack;
tcellset44947 Cycleroots;
tcellseq44951 Tempstack;
NI Recgclock;
tmemregion27210 Region;
tgcstat47014 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer212024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream210204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo194539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo194539 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler214188;
struct  tlexer214190  {
  tbaselexer212024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler214188 Errorhandler;
};
struct  ttoken214186  {
NU8 Toktype;
NI Indent;
tident199021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tidobj199015  {
  TNimObject Sup;
NI Id;
};
struct  tident199021  {
  tidobj199015 Sup;
NimStringDesc* S;
tident199021* Next;
NI H;
};
typedef NimStringDesc* TY207063[3];
typedef NI TY26420[16];
struct  tpagedesc44943  {
tpagedesc44943* Next;
NI Key;
TY26420 Bits;
};
struct  tbasechunk26438  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26440  {
  tbasechunk26438 Sup;
tsmallchunk26440* Next;
tsmallchunk26440* Prev;
tfreecell26430* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27204  {
NI Size;
NI Acc;
tllchunk27204* Next;
};
struct  tbigchunk26442  {
  tbasechunk26438 Sup;
tbigchunk26442* Next;
tbigchunk26442* Prev;
NI Align;
NF Data;
};
struct  ttrunk26413  {
ttrunk26413* Next;
NI Key;
TY26420 Bits;
};
typedef tavlnode27208* TY27214[2];
struct  tavlnode27208  {
TY27214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tllstream210204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct TY219171 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP718)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_168381)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_219573)(NimStringDesc* filename);
N_NIMCALL(tllstream210204*, llstreamopen_210233)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_214482)(ttoken214186* l);
N_NIMCALL(void, openlexer_214277)(tlexer214190* lex, NimStringDesc* filename, tllstream210204* inputstream);
N_NIMCALL(void, conftok_219412)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, ppgettok_219009)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, rawgettok_214238)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, parsedirective_219369)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(NU8, whichkeyword_203382)(tident199021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_219149)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(NIM_BOOL, parseexpr_219042)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_219091)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(NIM_BOOL, parseatom_219051)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, lexmessage_214289)(tlexer214190* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_200046)(tident199021* symbol);
N_NIMCALL(void, jumptodirective_219233)(tlexer214190* l, ttoken214186* tok, NU8 dest);
N_NIMCALL(void, doelse_219243)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, doelif_219265)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, doend_219197)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(void, msgwriteln_196236)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, toktostr_214271)(ttoken214186* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_119467)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_119442)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_219485)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(tident199021*, getident_199472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo194539, getlineinfo_214247)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(tlineinfo194539, newlineinfo_195129)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_219448)(tlexer214190* l, ttoken214186* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_207040)(NimStringDesc* switch_207042, NimStringDesc* arg, NU8 pass, tlineinfo194539 info);
N_NIMCALL(void, closelexer_214258)(tlexer214190* lex);
N_NIMCALL(void, rawmessage_196733)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_219652)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_219640)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_116299)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74828, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_115010)(NimStringDesc* filename);
STRING_LITERAL(TMP1890, "/usr", 4);
STRING_LITERAL(TMP1891, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1892, "/usr/local", 10);
STRING_LITERAL(TMP1893, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1894, "lib", 3);
STRING_LITERAL(TMP1895, "@", 1);
STRING_LITERAL(TMP1896, "\')\'", 3);
STRING_LITERAL(TMP1897, "\':\'", 3);
STRING_LITERAL(TMP1898, "@if", 3);
STRING_LITERAL(TMP1899, "@end", 4);
STRING_LITERAL(TMP1900, "putenv", 6);
STRING_LITERAL(TMP1901, "prependenv", 10);
STRING_LITERAL(TMP1902, "appendenv", 9);
STRING_LITERAL(TMP1903, "-", 1);
STRING_LITERAL(TMP1904, "--", 2);
STRING_LITERAL(TMP1905, "", 0);
STRING_LITERAL(TMP1906, "\']\'", 3);
STRING_LITERAL(TMP1907, "&", 1);
STRING_LITERAL(TMP1908, "config", 6);
STRING_LITERAL(TMP1909, "etc", 3);
STRING_LITERAL(TMP1910, "/etc/", 5);
STRING_LITERAL(TMP1912, "nim.cfg", 7);
STRING_LITERAL(TMP1913, "nimrod.cfg", 10);
TY219171* condstack_219192;
extern TNimType NTI138; /* bool */
TNimType NTI219171; /* seq[bool] */
extern tgcheap47016 gch_47044;
extern NimStringDesc* libpath_168233;
extern NU32 gglobaloptions_168118;
extern TNimType NTI214190; /* TLexer */
extern NI gverbosity_168127;
extern NimStringDesc* gprojectpath_168235;
extern NimStringDesc* gprojectname_168234;
extern NimStringDesc* gprojectfull_168236;
N_NIMCALL(void, TMP718)(void* p, NI op) {
	TY219171* a;
	NI LOC1;
	a = (TY219171*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44935* c;
	c = usrtocell_48646(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50204(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell44935* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48646(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell44935* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48646((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_219009)(tlexer214190* l, ttoken214186* tok) {
	rawgettok_214238(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 112))) goto LA2;
			rawgettok_214238(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_219051)(tlexer214190* l, ttoken214186* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 92))) goto LA3;
		ppgettok_219009(l, tok);
		result = parseexpr_219042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA7;
			ppgettok_219009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1896));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 44)) goto LA11;
		ppgettok_219009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_219051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_200046((*tok).Ident);
		ppgettok_219009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_219091)(tlexer214190* l, ttoken214186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_219051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_219009(l, tok);
			b = parseatom_219051(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_219042)(tlexer214190* l, ttoken214186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_219091(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 48)) goto LA2;
			ppgettok_219009(l, tok);
			b = parseandexpr_219091(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_219149)(tlexer214190* l, ttoken214186* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_219009(l, tok);
	result = parseexpr_219042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA3;
		ppgettok_219009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1897));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_219243)(tlexer214190* l, ttoken214186* tok) {
	{
		if (!((condstack_219192->Sup.len-1) < 0)) goto LA3;
		lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1898));
	}
	LA3: ;
	ppgettok_219009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA7;
		ppgettok_219009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_219192->data[(condstack_219192->Sup.len-1)]) goto LA11;
		jumptodirective_219233(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_219265)(tlexer214190* l, ttoken214186* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_219192->Sup.len-1) < 0)) goto LA3;
		lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1898));
	}
	LA3: ;
	res = evalppif_219149(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_219192->data[(condstack_219192->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_219233(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_219192->data[(condstack_219192->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_219197)(tlexer214190* l, ttoken214186* tok) {
	{
		if (!((condstack_219192->Sup.len-1) < 0)) goto LA3;
		lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1898));
	}
	LA3: ;
	ppgettok_219009(l, tok);
	condstack_219192 = (TY219171*) setLengthSeq(&(condstack_219192)->Sup, sizeof(NIM_BOOL), (condstack_219192->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_219233)(tlexer214190* l, ttoken214186* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = 0;
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1895));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_219009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_203382((*tok).Ident);
				switch (LOC9) {
				case ((NU8) 30):
				{
					nestedifs += 1;
				}
				break;
				case ((NU8) 20):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == 0);
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_219243(l, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU8) 19):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == 0);
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_219265(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 21):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_219197(l, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(0 < nestedifs)) goto LA32;
						nestedifs -= 1;
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_219009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1899));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_219009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_219369)(tlexer214190* l, ttoken214186* tok) {
	NU8 LOC1;
	ppgettok_219009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_203382((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 30):
	{
		NIM_BOOL res;
		condstack_219192 = (TY219171*) setLengthSeq(&(condstack_219192)->Sup, sizeof(NIM_BOOL), (NI32)(condstack_219192->Sup.len + 1));
		res = evalppif_219149(l, tok);
		condstack_219192->data[(condstack_219192->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_219233(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 19):
	{
		doelif_219265(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doelse_219243(l, tok);
	}
	break;
	case ((NU8) 21):
	{
		doend_219197(l, tok);
	}
	break;
	case ((NU8) 178):
	{
		NimStringDesc* LOC11;
		ppgettok_219009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_214271((&(*tok)));
		msgwriteln_196236(LOC11);
		ppgettok_219009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC13;
		LOC13 = 0;
		LOC13 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1900))) goto LA14;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1901))) goto LA15;
		if (eqStrings(LOC13, ((NimStringDesc*) &TMP1902))) goto LA16;
		goto LA17;
		LA14: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC20;
			ppgettok_219009(l, tok);
			key = toktostr_214271((&(*tok)));
			ppgettok_219009(l, tok);
			LOC20 = 0;
			LOC20 = toktostr_214271((&(*tok)));
			putenv_119467(key, LOC20);
			ppgettok_219009(l, tok);
		}
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC22;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			ppgettok_219009(l, tok);
			key = toktostr_214271((&(*tok)));
			ppgettok_219009(l, tok);
			LOC22 = 0;
			LOC23 = 0;
			LOC23 = toktostr_214271((&(*tok)));
			LOC24 = 0;
			LOC24 = getenv_119442(key);
			LOC22 = rawNewString(LOC23->Sup.len + LOC24->Sup.len + 0);
appendString(LOC22, LOC23);
appendString(LOC22, LOC24);
			putenv_119467(key, LOC22);
			ppgettok_219009(l, tok);
		}
		goto LA18;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC26;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			ppgettok_219009(l, tok);
			key = toktostr_214271((&(*tok)));
			ppgettok_219009(l, tok);
			LOC26 = 0;
			LOC27 = 0;
			LOC27 = getenv_119442(key);
			LOC28 = 0;
			LOC28 = toktostr_214271((&(*tok)));
			LOC26 = rawNewString(LOC27->Sup.len + LOC28->Sup.len + 0);
appendString(LOC26, LOC27);
appendString(LOC26, LOC28);
			putenv_119467(key, LOC26);
			ppgettok_219009(l, tok);
		}
		goto LA18;
		LA17: ;
		{
			NimStringDesc* LOC30;
			LOC30 = 0;
			LOC30 = toktostr_214271((&(*tok)));
			lexmessage_214289((&(*l)), ((NU16) 30), LOC30);
		}
		LA18: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_219412)(tlexer214190* l, ttoken214186* tok) {
	ppgettok_219009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1895));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_219369(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo194539, getlineinfo_214247)(tlexer214190* l, ttoken214186* tok) {
	tlineinfo194539 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_195129((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_219448)(tlexer214190* l, ttoken214186* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 71) || (*tok).Toktype >= ((NU8) 86) && (*tok).Toktype <= ((NU8) 88)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_214271(tok);
		lexmessage_214289(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_219485)(tlexer214190* l, ttoken214186* tok) {
	tlineinfo194539 info;
	NimStringDesc* s;
	NimStringDesc* val;
	{
		NIM_BOOL LOC3;
		tident199021* LOC4;
		tident199021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_199472(((NimStringDesc*) &TMP1903));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_199472(((NimStringDesc*) &TMP1904));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_219412(l, tok);
	}
	LA7: ;
	info = getlineinfo_214247((&(*l)), (&(*tok)));
	checksymbol_219448((&(*l)), (&(*tok)));
	s = toktostr_214271((&(*tok)));
	conftok_219412(l, tok);
	val = copyString(((NimStringDesc*) &TMP1905));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 109))) goto LA10;
			s = addChar(s, 46);
			conftok_219412(l, tok);
			checksymbol_219448((&(*l)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_214271((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_219412(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 94))) goto LA14;
		conftok_219412(l, tok);
		checksymbol_219448((&(*l)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_214271((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_219412(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 95))) goto LA19;
			conftok_219412(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_214289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1906));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	{
		NimStringDesc* LOC30;
		if (!((*tok).Toktype == ((NU8) 106) || (*tok).Toktype == ((NU8) 108))) goto LA24;
		{
			if (!(0 < val->Sup.len)) goto LA28;
			val = addChar(val, 58);
		}
		LA28: ;
		conftok_219412(l, tok);
		checksymbol_219448((&(*l)), (&(*tok)));
		LOC30 = 0;
		LOC30 = toktostr_214271((&(*tok)));
		val = resizeString(val, LOC30->Sup.len + 0);
appendString(val, LOC30);
		conftok_219412(l, tok);
		{
			while (1) {
				NIM_BOOL LOC33;
				tident199021* LOC35;
				NimStringDesc* LOC36;
				LOC33 = 0;
				LOC33 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC33)) goto LA34;
				LOC35 = 0;
				LOC35 = getident_199472(((NimStringDesc*) &TMP1907));
				LOC33 = ((*(*tok).Ident).Sup.Id == (*LOC35).Sup.Id);
				LA34: ;
				if (!LOC33) goto LA32;
				conftok_219412(l, tok);
				checksymbol_219448((&(*l)), (&(*tok)));
				LOC36 = 0;
				LOC36 = toktostr_214271((&(*tok)));
				val = resizeString(val, LOC36->Sup.len + 0);
appendString(val, LOC36);
				conftok_219412(l, tok);
			} LA32: ;
		}
	}
	LA24: ;
	processswitch_207040(s, val, ((NU8) 2), info);
}

N_NIMCALL(void, readconfigfile_219573)(NimStringDesc* filename) {
	tlexer214190 l;
	ttoken214186 tok;
	tllstream210204* stream;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI214190);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_210233(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_214482((&tok));
		openlexer_214277((&l), filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_219412((&l), (&tok));
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_219485((&l), (&tok));
			} LA6: ;
		}
		{
			if (!(0 < condstack_219192->Sup.len)) goto LA9;
			lexmessage_214289((&l), ((NU16) 23), ((NimStringDesc*) &TMP1899));
		}
		LA9: ;
		closelexer_214258((&l));
		{
			if (!(1 <= gverbosity_168127)) goto LA13;
			rawmessage_196733(((NU16) 270), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_219652)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY207063 LOC1;
	result = 0;
	p = getprefixdir_168381();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1908));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY207063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1909));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1910));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_219640)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_115010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_219811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_168233) && (libpath_168233)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_168381();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1890))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_168233; libpath_168233 = copyStringRC1(((NimStringDesc*) &TMP1891));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1892))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_168233; libpath_168233 = copyStringRC1(((NimStringDesc*) &TMP1893));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_168233), nosjoinPath(prefix, ((NimStringDesc*) &TMP1894)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_168118 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_219652(cfg);
		readconfigfile_219573(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_168118 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_219640(cfg);
		readconfigfile_219573(LOC24);
	}
	LA22: ;
	{
		if (!(0 < gprojectpath_168235->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_168235);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_168118 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_220044;
			dir_220044 = 0;
			{
				NimStringDesc* current_220064;
				if (!NIM_FALSE) goto LA37;
				current_220064 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_220044 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_116299(dir_220044, cfg);
					readconfigfile_219573(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_220064);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_220064 = nosparentDir(current_220064);
						dir_220044 = current_220064;
						LOC51 = 0;
						LOC51 = HEX2F_116299(dir_220044, cfg);
						readconfigfile_219573(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_220066;
					NI HEX3Atmp_220068;
					NI res_220070;
					i_220066 = 0;
					HEX3Atmp_220068 = 0;
					HEX3Atmp_220068 = (NI32)(pd->Sup.len - 2);
					res_220070 = 0;
					{
						while (1) {
							if (!(res_220070 <= HEX3Atmp_220068)) goto LA55;
							i_220066 = res_220070;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_220066])) == ((NU8)(47)) || ((NU8)(pd->data[i_220066])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_220066 == 0);
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI32)(i_220066 - 1)])) == ((NU8)(47)) || ((NU8)(pd->data[(NI32)(i_220066 - 1)])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_220044 = copyStrLast(pd, 0, i_220066);
								LOC64 = 0;
								LOC64 = HEX2F_116299(dir_220044, cfg);
								readconfigfile_219573(LOC64);
							}
							LA62: ;
							res_220070 += 1;
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_220044 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_116299(dir_220044, cfg);
					readconfigfile_219573(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_168118 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_116299(pd, cfg);
		readconfigfile_219573(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_168234->Sup.len == 0))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_168236, ((NimStringDesc*) &TMP1912));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_115010(projectconfig);
				if (!LOC81) goto LA82;
				readconfigfile_219573(projectconfig);
			}
			goto LA79;
			LA82: ;
			{
				NimStringDesc* LOC85;
				LOC85 = 0;
				LOC85 = noschangeFileExt(gprojectfull_168236, ((NimStringDesc*) &TMP1913));
				readconfigfile_219573(LOC85);
			}
			LA79: ;
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfInit)(void) {
	if (condstack_219192) nimGCunrefNoCycle(condstack_219192);
	condstack_219192 = (TY219171*) newSeqRC1((&NTI219171), 0);
}

NIM_EXTERNC N_NOINLINE(void, HEX00_nimconfDatInit)(void) {
NTI219171.size = sizeof(TY219171*);
NTI219171.kind = 24;
NTI219171.base = (&NTI138);
NTI219171.flags = 2;
NTI219171.marker = TMP718;
}

