/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode225816 tnode225816;
typedef struct ttype225852 ttype225852;
typedef struct tlineinfo195539 tlineinfo195539;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym225846 tsym225846;
typedef struct tident200021 tident200021;
typedef struct tnodeseq225810 tnodeseq225810;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq225848 ttypeseq225848;
typedef struct tloc225830 tloc225830;
typedef struct trope177009 trope177009;
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
typedef struct tscope225840 tscope225840;
typedef struct TY225947 TY225947;
typedef struct tinstantiation225836 tinstantiation225836;
typedef struct tstrtable225820 tstrtable225820;
typedef struct tsymseq225818 tsymseq225818;
typedef struct tlib225834 tlib225834;
typedef struct tbasechunk26438 tbasechunk26438;
typedef struct tfreecell26430 tfreecell26430;
typedef struct TY225936 TY225936;
typedef struct tlistentry127022 tlistentry127022;
struct  tlineinfo195539  {
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
struct  tnode225816  {
ttype225852* Typ;
tlineinfo195539 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym225846* Sym;
} S4;
struct {tident200021* Ident;
} S5;
struct {tnodeseq225810* Sons;
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
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tloc225830  {
NU8 K;
NU8 S;
NU8 Flags;
ttype225852* T;
trope177009* R;
trope177009* Heaproot;
};
struct  ttype225852  {
  tidobj200015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq225848* Sons;
tnode225816* N;
tsym225846* Owner;
tsym225846* Sym;
tsym225846* Destructor;
tsym225846* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc225830 Loc;
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
struct  tstrtable225820  {
NI Counter;
tsymseq225818* Data;
};
struct  tsym225846  {
  tidobj200015 Sup;
NU8 Kind;
union {
struct {ttypeseq225848* Typeinstcache;
tscope225840* Typscope;
} S1;
struct {TY225947* Procinstcache;
tscope225840* Scope;
} S2;
struct {TY225947* Usedgenerics;
tstrtable225820 Tab;
} S3;
struct {tsym225846* Guard;
} S4;
} kindU;
NU16 Magic;
ttype225852* Typ;
tident200021* Name;
tlineinfo195539 Info;
tsym225846* Owner;
NU32 Flags;
tnode225816* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc225830 Loc;
tlib225834* Annex;
tnode225816* Constraint;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
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
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26420[8];
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
struct  tscope225840  {
NI Depthlevel;
tstrtable225820 Symbols;
tnodeseq225810* Usingsyms;
tscope225840* Parent;
};
struct  tinstantiation225836  {
tsym225846* Sym;
ttypeseq225848* Concretetypes;
TY225936* Usedby;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib225834  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode225816* Path;
};
struct  tfreecell26430  {
tfreecell26430* Next;
NI Zerofield;
};
struct tnodeseq225810 {
  TGenericSeq Sup;
  tnode225816* data[SEQ_DECL_SIZE];
};
struct ttypeseq225848 {
  TGenericSeq Sup;
  ttype225852* data[SEQ_DECL_SIZE];
};
struct TY225947 {
  TGenericSeq Sup;
  tinstantiation225836* data[SEQ_DECL_SIZE];
};
struct tsymseq225818 {
  TGenericSeq Sup;
  tsym225846* data[SEQ_DECL_SIZE];
};
struct TY225936 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(ttype225852*, skiptypes_230245)(ttype225852* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell44935*, usrtocell_48646)(void* usr);
static N_INLINE(void, rtladdzct_50204)(tcell44935* c);
N_NOINLINE(void, addzct_48617)(tcellseq44951* s, tcell44935* c);
static N_INLINE(NI, len_226364)(tnode225816* n);
N_NIMCALL(tsym225846*, ithfield_482012)(tnode225816* n, NI field);
static N_INLINE(NI, sonslen_226249)(tnode225816* n);
N_NIMCALL(void, internalerror_197987)(tlineinfo195539 info, NimStringDesc* errmsg);
static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n);
N_NIMCALL(void, globalerror_197945)(tlineinfo195539 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_482223)(tnode225816* n, ttype225852* t);
N_NIMCALL(NI, len_230005)(ttype225852* n);
N_NIMCALL(ttype225852*, elemtype_263656)(ttype225852* t);
STRING_LITERAL(TMP3162, "ithField", 8);
STRING_LITERAL(TMP3163, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3164, "invalid field at index ", 23);
STRING_LITERAL(TMP3165, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3166, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3167, "{} must have the set type", 25);
STRING_LITERAL(TMP3168, "float literal must have some float type", 39);
STRING_LITERAL(TMP3169, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3170, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3171, "nil literal must be of some pointer type", 40);
extern tgcheap47016 gch_47044;

static N_INLINE(tcell44935*, usrtocell_48646)(void* usr) {
	tcell44935* result;
	result = 0;
	result = ((tcell44935*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44935))))));
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_226364)(tnode225816* n) {
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

static N_INLINE(NI, sonslen_226249)(tnode225816* n) {
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

static N_INLINE(tnode225816*, lastson_226261)(tnode225816* n) {
	tnode225816* result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sonslen_226249(n);
	result = (*n).kindU.S6.Sons->data[(NI64)(LOC1 - 1)];
	return result;
}

N_NIMCALL(tsym225846*, ithfield_482012)(tnode225816* n, NI field) {
	tsym225846* result;
	result = 0;
	result = NIM_NIL;
	switch ((*n).Kind) {
	case ((NU8) 137):
	{
		{
			NI i_482029;
			NI HEX3Atmp_482188;
			NI LOC3;
			NI res_482191;
			i_482029 = 0;
			HEX3Atmp_482188 = 0;
			LOC3 = 0;
			LOC3 = sonslen_226249(n);
			HEX3Atmp_482188 = (NI64)(LOC3 - 1);
			res_482191 = 0;
			{
				while (1) {
					if (!(res_482191 <= HEX3Atmp_482188)) goto LA5;
					i_482029 = res_482191;
					result = ithfield_482012((*n).kindU.S6.Sons->data[i_482029], (NI64)(field - i_482029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_482191 += 1;
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 138):
	{
		{
			if (!!(((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3)))) goto LA13;
			internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3162));
		}
		LA13: ;
		result = ithfield_482012((*n).kindU.S6.Sons->data[0], (NI64)(field - 1));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_482127;
			NI HEX3Atmp_482194;
			NI LOC20;
			NI res_482197;
			i_482127 = 0;
			HEX3Atmp_482194 = 0;
			LOC20 = 0;
			LOC20 = sonslen_226249(n);
			HEX3Atmp_482194 = (NI64)(LOC20 - 1);
			res_482197 = 1;
			{
				while (1) {
					if (!(res_482197 <= HEX3Atmp_482194)) goto LA22;
					i_482127 = res_482197;
					switch ((*(*n).kindU.S6.Sons->data[i_482127]).Kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						tnode225816* LOC24;
						LOC24 = 0;
						LOC24 = lastson_226261((*n).kindU.S6.Sons->data[i_482127]);
						result = ithfield_482012(LOC24, (NI64)(field - 1));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_197987((*n).Info, ((NimStringDesc*) &TMP3163));
					}
					break;
					}
					res_482197 += 1;
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
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_482223)(tnode225816* n, ttype225852* t) {
	ttype225852* x;
	x = skiptypes_230245(t, IL64(211106232576256));
	switch ((*n).Kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).Kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				NI i_482258;
				NI HEX3Atmp_482434;
				NI LOC7;
				NI res_482437;
				i_482258 = 0;
				HEX3Atmp_482434 = 0;
				LOC7 = 0;
				LOC7 = len_226364(n);
				HEX3Atmp_482434 = (LOC7 - 1);
				res_482437 = 0;
				{
					while (1) {
						tsym225846* field;
						if (!(res_482437 <= HEX3Atmp_482434)) goto LA9;
						i_482258 = res_482437;
						field = ithfield_482012((*x).N, i_482258);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_482258);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3164));
appendString(LOC14, LOC15);
							globalerror_197945((*n).Info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_482223((*n).kindU.S6.Sons->data[i_482258], (*field).Typ);
						}
						LA10: ;
						res_482437 += 1;
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
				NI i_482315;
				NI HEX3Atmp_482440;
				NI LOC21;
				NI res_482443;
				i_482315 = 0;
				HEX3Atmp_482440 = 0;
				LOC21 = 0;
				LOC21 = len_226364(n);
				HEX3Atmp_482440 = (LOC21 - 1);
				res_482443 = 0;
				{
					while (1) {
						if (!(res_482443 <= HEX3Atmp_482440)) goto LA23;
						i_482315 = res_482443;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_230005(x);
							if (!(LOC26 <= i_482315)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_482315);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3164));
appendString(LOC29, LOC30);
							globalerror_197945((*n).Info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_482223((*n).kindU.S6.Sons->data[i_482315], (*x).Sons->data[i_482315]);
						}
						LA24: ;
						res_482443 += 1;
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
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3165));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((151060496 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA41;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode225816* m_482362;
				m_482362 = 0;
				{
					NI i_482449;
					NI HEX3Atmp_482451;
					NI LOC45;
					NI res_482453;
					i_482449 = 0;
					HEX3Atmp_482451 = 0;
					LOC45 = 0;
					LOC45 = len_226364(n);
					HEX3Atmp_482451 = (LOC45 - 1);
					res_482453 = 0;
					{
						while (1) {
							ttype225852* LOC48;
							if (!(res_482453 <= HEX3Atmp_482451)) goto LA47;
							i_482449 = res_482453;
							m_482362 = (*n).kindU.S6.Sons->data[i_482449];
							LOC48 = 0;
							LOC48 = elemtype_263656(x);
							annotatetype_482223(m_482362, LOC48);
							res_482453 += 1;
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3166));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((524288 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA53;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
			{
				tnode225816* m_482377;
				m_482377 = 0;
				{
					NI i_482458;
					NI HEX3Atmp_482460;
					NI LOC57;
					NI res_482462;
					i_482458 = 0;
					HEX3Atmp_482460 = 0;
					LOC57 = 0;
					LOC57 = len_226364(n);
					HEX3Atmp_482460 = (LOC57 - 1);
					res_482462 = 0;
					{
						while (1) {
							ttype225852* LOC60;
							if (!(res_482462 <= HEX3Atmp_482460)) goto LA59;
							i_482458 = res_482462;
							m_482377 = (*n).kindU.S6.Sons->data[i_482458];
							LOC60 = 0;
							LOC60 = elemtype_263656(x);
							annotatetype_482223(m_482377, LOC60);
							res_482462 += 1;
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3167));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA65;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3168));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA71;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3169));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((805306368 &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA77;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3170));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).Kind)&IL64(63))))!=0)) goto LA83;
			asgnRefNoCycle((void**) (&(*n).Typ), t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_197945((*n).Info, ((NimStringDesc*) &TMP3171));
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

