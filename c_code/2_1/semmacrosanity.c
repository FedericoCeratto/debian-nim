/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode226816 tnode226816;
typedef struct ttype226852 ttype226852;
typedef struct tlineinfo196539 tlineinfo196539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym226846 tsym226846;
typedef struct tident201021 tident201021;
typedef struct tnodeseq226810 tnodeseq226810;
typedef struct tidobj201015 tidobj201015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq226848 ttypeseq226848;
typedef struct tloc226830 tloc226830;
typedef struct trope178009 trope178009;
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
typedef struct tscope226840 tscope226840;
typedef struct TY226947 TY226947;
typedef struct tinstantiation226836 tinstantiation226836;
typedef struct tstrtable226820 tstrtable226820;
typedef struct tsymseq226818 tsymseq226818;
typedef struct tlib226834 tlib226834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY226936 TY226936;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo196539  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode226816  {
ttype226852* Typ;
tlineinfo196539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym226846* Sym;
} S4;
struct {tident201021* Ident;
} S5;
struct {tnodeseq226810* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj201015  {
  TNimObject Sup;
NI Id;
};
struct  tloc226830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype226852* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype226852  {
  tidobj201015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq226848* Sons;
tnode226816* N;
tsym226846* Owner;
tsym226846* Sym;
tsym226846* Destructor;
tsym226846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc226830 Loc;
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
struct  tstrtable226820  {
NI Counter;
tsymseq226818* Data;
};
struct  tsym226846  {
  tidobj201015 Sup;
NU8 Kind;
union {
struct {ttypeseq226848* Typeinstcache;
tscope226840* Typscope;
} S1;
struct {TY226947* Procinstcache;
tscope226840* Scope;
} S2;
struct {TY226947* Usedgenerics;
tstrtable226820 Tab;
} S3;
struct {tsym226846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype226852* Typ;
tident201021* Name;
tlineinfo196539 Info;
tsym226846* Owner;
NU32 Flags;
tnode226816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc226830 Loc;
tlib226834* Annex;
tnode226816* Constraint;
};
struct  tident201021  {
  tidobj201015 Sup;
NimStringDesc* S;
tident201021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
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
struct  tscope226840  {
NI Depthlevel;
tstrtable226820 Symbols;
tnodeseq226810* Usingsyms;
tscope226840* Parent;
};
struct  tinstantiation226836  {
tsym226846* Sym;
ttypeseq226848* Concretetypes;
TY226936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib226834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode226816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq226810 {
  TGenericSeq Sup;
  tnode226816* data[SEQ_DECL_SIZE];
};
struct ttypeseq226848 {
  TGenericSeq Sup;
  ttype226852* data[SEQ_DECL_SIZE];
};
struct TY226947 {
  TGenericSeq Sup;
  tinstantiation226836* data[SEQ_DECL_SIZE];
};
struct tsymseq226818 {
  TGenericSeq Sup;
  tsym226846* data[SEQ_DECL_SIZE];
};
struct TY226936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(ttype226852*, skiptypes_231245)(ttype226852* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(NI, len_227364)(tnode226816* n);
N_NIMCALL(tsym226846*, ithfield_483012)(tnode226816* n, NI field);
static N_INLINE(NI, sonslen_227249)(tnode226816* n);
N_NIMCALL(void, internalerror_198987)(tlineinfo196539 info, NimStringDesc* errmsg);
static N_INLINE(tnode226816*, lastson_227261)(tnode226816* n);
N_NIMCALL(void, globalerror_198945)(tlineinfo196539 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_483223)(tnode226816* n, ttype226852* t);
N_NIMCALL(NI, len_231005)(ttype226852* n);
N_NIMCALL(ttype226852*, elemtype_264656)(ttype226852* t);
STRING_LITERAL(TMP3163, "ithField", 8);
STRING_LITERAL(TMP3164, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3165, "invalid field at index ", 23);
STRING_LITERAL(TMP3166, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3167, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3168, "{} must have the set type", 25);
STRING_LITERAL(TMP3169, "float literal must have some float type", 39);
STRING_LITERAL(TMP3170, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3171, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3172, "nil literal must be of some pointer type", 40);
extern tgcheap47016 gch_47044;

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell44935))))));
	return result;
}

static N_INLINE(void, rtladdzct_50204)(tcell44935* c) {
	addzct_48617((&gch_47044.Zct), c);
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

static N_INLINE(NI, len_227364)(tnode226816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(NI, sonslen_227249)(tnode226816* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

static N_INLINE(tnode226816*, lastson_227261)(tnode226816* n) {
	tnode226816* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_227249(n);
	result = (*n).kindU.S6.Sons->data[(NI32)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym226846*, ithfield_483012)(tnode226816* n, NI field) {
	tsym226846* result;
	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_483029;
			NI HEX3Atmp_483188;
			NI LOC3;
			NI res_483191;
			i_483029 = 0;
			HEX3Atmp_483188 = 0;
			LOC3 = 0;
			LOC3 = sonslen_227249(n);
			HEX3Atmp_483188 = (NI32)(LOC3 - 1);
			res_483191 = 0;
			{
				while (1) {
					if (!(res_483191 <= HEX3Atmp_483188)) goto LA5;
					i_483029 = res_483191;
					result = ithfield_483012((*n).kindU.S6.Sons->data[i_483029], (NI32)(field - i_483029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_483191 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3163));
		}
		LA13: ;
		result = ithfield_483012((*n).kindU.S6.Sons->data[0], (NI32)(field - 1));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_483127;
			NI HEX3Atmp_483194;
			NI LOC20;
			NI res_483197;
			i_483127 = 0;
			HEX3Atmp_483194 = 0;
			LOC20 = 0;
			LOC20 = sonslen_227249(n);
			HEX3Atmp_483194 = (NI32)(LOC20 - 1);
			res_483197 = 1;
			{
				while (1) {
					if (!(res_483197 <= HEX3Atmp_483194)) goto LA22;
					i_483127 = res_483197;
					switch ((*(*n).kindU.S6.Sons->data[i_483127]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode226816* LOC24;
						LOC24 = 0;
						LOC24 = lastson_227261((*n).kindU.S6.Sons->data[i_483127]);
						result = ithfield_483012(LOC24, (NI32)(field - 1));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_198987((*n).Info, ((NimStringDesc*) &TMP3164));
					}
					break;
					}
					res_483197 += 1;
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!(field == 0)) goto LA33;
			result = (*n).kindU.S4.Sym;
		}
		LA33: ;
	}
	break;
	default:
	{
	}
	break;
	}
	BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_483223)(tnode226816* n, ttype226852* t) {
	ttype226852* x;
	x = skiptypes_231245(t, IL64(211106232576256));
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_483258;
				NI HEX3Atmp_483434;
				NI LOC7;
				NI res_483437;
				i_483258 = 0;
				HEX3Atmp_483434 = 0;
				LOC7 = 0;
				LOC7 = len_227364(n);
				HEX3Atmp_483434 = (LOC7 - 1);
				res_483437 = 0;
				{
					while (1) {
						tsym226846* field;
						if (!(res_483437 <= HEX3Atmp_483434)) goto LA9;
						i_483258 = res_483437;
						field = ithfield_483012((*x).N, i_483258);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_483258);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3165));
appendString(LOC14, LOC15);
							globalerror_198945((*n).Info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_483223((*n).kindU.S6.Sons->data[i_483258], (*field).Typ);
						}
						LA10: ;
						res_483437 += 1;
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			if (!((*x).Kind == ((NU8) 18))) goto LA18;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_483315;
				NI HEX3Atmp_483440;
				NI LOC21;
				NI res_483443;
				i_483315 = 0;
				HEX3Atmp_483440 = 0;
				LOC21 = 0;
				LOC21 = len_227364(n);
				HEX3Atmp_483440 = (LOC21 - 1);
				res_483443 = 0;
				{
					while (1) {
						if (!(res_483443 <= HEX3Atmp_483440)) goto LA23;
						i_483315 = res_483443;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_231005(x);
							if (!(LOC26 <= i_483315)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_483315);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3165));
appendString(LOC29, LOC30);
							globalerror_198945((*n).Info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_483223((*n).kindU.S6.Sons->data[i_483315], (*x).Sons->data[i_483315]);
						}
						LA24: ;
						res_483443 += 1;
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			LOC33 = 0;
			LOC33 = ((*x).Kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).Callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA2;
		LA35: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3166));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((*x).Kind == ((NU8) 4) || (*x).Kind == ((NU8) 16) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 27))) goto LA41;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode226816* m_483362;
				m_483362 = 0;
				{
					NI i_483449;
					NI HEX3Atmp_483451;
					NI LOC45;
					NI res_483453;
					i_483449 = 0;
					HEX3Atmp_483451 = 0;
					LOC45 = 0;
					LOC45 = len_227364(n);
					HEX3Atmp_483451 = (LOC45 - 1);
					res_483453 = 0;
					{
						while (1) {
							ttype226852* LOC48;
							if (!(res_483453 <= HEX3Atmp_483451)) goto LA47;
							i_483449 = res_483453;
							m_483362 = (*n).kindU.S6.Sons->data[i_483449];
							LOC48 = 0;
							LOC48 = elemtype_264656(x);
							annotatetype_483223(m_483362, LOC48);
							res_483453 += 1;
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3167));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((*x).Kind == ((NU8) 19))) goto LA53;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode226816* m_483377;
				m_483377 = 0;
				{
					NI i_483458;
					NI HEX3Atmp_483460;
					NI LOC57;
					NI res_483462;
					i_483458 = 0;
					HEX3Atmp_483460 = 0;
					LOC57 = 0;
					LOC57 = len_227364(n);
					HEX3Atmp_483460 = (LOC57 - 1);
					res_483462 = 0;
					{
						while (1) {
							ttype226852* LOC60;
							if (!(res_483462 <= HEX3Atmp_483460)) goto LA59;
							i_483458 = res_483462;
							m_483377 = (*n).kindU.S6.Sons->data[i_483458];
							LOC60 = 0;
							LOC60 = elemtype_264656(x);
							annotatetype_483223(m_483377, LOC60);
							res_483462 += 1;
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3168));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((*x).Kind >= ((NU8) 36) && (*x).Kind <= ((NU8) 39))) goto LA65;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3169));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((*x).Kind >= ((NU8) 31) && (*x).Kind <= ((NU8) 44) || (*x).Kind == ((NU8) 1) || (*x).Kind == ((NU8) 2) || (*x).Kind == ((NU8) 14))) goto LA71;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3170));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 29))) goto LA77;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3171));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((*x).Kind == ((NU8) 26) || (*x).Kind == ((NU8) 29) || (*x).Kind == ((NU8) 22) || (*x).Kind == ((NU8) 21) || (*x).Kind == ((NU8) 24) || (*x).Kind == ((NU8) 25) || (*x).Kind == ((NU8) 28) || (*x).Kind == ((NU8) 50))) goto LA83;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_198945((*n).Info, ((NimStringDesc*) &TMP3172));
		}
		LA81: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_semmacrosanityDatInit)(void) {
}

