/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tnode190813 Tnode190813;
typedef struct Ttype190849 Ttype190849;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym190843 Tsym190843;
typedef struct Tident167021 Tident167021;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tcell46546 Tcell46546;
typedef struct Tcellseq46562 Tcellseq46562;
typedef struct Tgcheap48416 Tgcheap48416;
typedef struct Tcellset46558 Tcellset46558;
typedef struct Tpagedesc46554 Tpagedesc46554;
typedef struct Tmemregion28410 Tmemregion28410;
typedef struct Tsmallchunk27640 Tsmallchunk27640;
typedef struct Tllchunk28404 Tllchunk28404;
typedef struct Tbigchunk27642 Tbigchunk27642;
typedef struct Tintset27617 Tintset27617;
typedef struct Ttrunk27613 Ttrunk27613;
typedef struct Tavlnode28408 Tavlnode28408;
typedef struct Tgcstat48414 Tgcstat48414;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tlib190831 Tlib190831;
typedef struct Tbasechunk27638 Tbasechunk27638;
typedef struct Tfreecell27630 Tfreecell27630;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode190813  {
Ttype190849* typ;
Tlineinfo163338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym190843* sym;
} S4;
struct {Tident167021* ident;
} S5;
struct {Tnodeseq190807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
};
struct  Ttype190849  {
  Tidobj167015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq190845* sons;
Tnode190813* n;
Tsym190843* owner;
Tsym190843* sym;
Tsym190843* destructor;
Tsym190843* deepcopy;
Tsym190843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc190827 loc;
};
struct  Tcell46546  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46562  {
NI len;
NI cap;
Tcell46546** d;
};
struct  Tcellset46558  {
NI counter;
NI max;
Tpagedesc46554* head;
Tpagedesc46554** data;
};
typedef Tsmallchunk27640* TY28422[512];
typedef Ttrunk27613* Ttrunkbuckets27615[256];
struct  Tintset27617  {
Ttrunkbuckets27615 data;
};
struct  Tmemregion28410  {
NI minlargeobj;
NI maxlargeobj;
TY28422 freesmallchunks;
Tllchunk28404* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27642* freechunkslist;
Tintset27617 chunkstarts;
Tavlnode28408* root;
Tavlnode28408* deleted;
Tavlnode28408* last;
Tavlnode28408* freeavlnodes;
};
struct  Tgcstat48414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48416  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46562 zct;
Tcellseq46562 decstack;
Tcellset46558 cycleroots;
Tcellseq46562 tempstack;
NI recgclock;
Tmemregion28410 region;
Tgcstat48414 stat;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tsym190843  {
  Tidobj167015 Sup;
NU8 kind;
union{
struct {Ttypeseq190845* typeinstcache;
Tscope190837* typscope;
} S1;
struct {TY190944* procinstcache;
Tsym190843* gcunsafetyreason;
} S2;
struct {TY190944* usedgenerics;
Tstrtable190817 tab;
} S3;
struct {Tsym190843* guard;
} S4;
} kindU;
NU16 magic;
Ttype190849* typ;
Tident167021* name;
Tlineinfo163338 info;
Tsym190843* owner;
NU32 flags;
Tnode190813* ast;
NU32 options;
NI position;
NI offset;
Tloc190827 loc;
Tlib190831* annex;
Tnode190813* constraint;
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27620[8];
struct  Tpagedesc46554  {
Tpagedesc46554* next;
NI key;
TY27620 bits;
};
struct  Tbasechunk27638  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27640  {
  Tbasechunk27638 Sup;
Tsmallchunk27640* next;
Tsmallchunk27640* prev;
Tfreecell27630* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28404  {
NI size;
NI acc;
Tllchunk28404* next;
};
struct  Tbigchunk27642  {
  Tbasechunk27638 Sup;
Tbigchunk27642* next;
Tbigchunk27642* prev;
NI align;
NF data;
};
struct  Ttrunk27613  {
Ttrunk27613* next;
NI key;
TY27620 bits;
};
typedef Tavlnode28408* TY28414[2];
struct  Tavlnode28408  {
TY28414 link;
NI key;
NI upperbound;
NI level;
};
struct  Tscope190837  {
NI depthlevel;
Tstrtable190817 symbols;
Tnodeseq190807* usingsyms;
Tscope190837* parent;
};
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tlib190831  {
  Tlistentry130022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj161009* name;
Tnode190813* path;
};
struct  Tfreecell27630  {
Tfreecell27630* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype190849*, skiptypes_194167)(Ttype190849* t, NU64 kinds);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr);
static N_INLINE(void, rtladdzct_51604)(Tcell46546* c);
N_NOINLINE(void, addzct_50017)(Tcellseq46562* s, Tcell46546* c);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(Tsym190843*, ithfield_402012)(Tnode190813* n, NI field);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Tnode190813*, lastson_193431)(Tnode190813* n);
N_NIMCALL(void, globalerror_165145)(Tlineinfo163338 info, NimStringDesc* arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, annotatetype_402134)(Tnode190813* n, Ttype190849* t);
N_NIMCALL(NI, len_193377)(Ttype190849* n);
N_NIMCALL(Ttype190849*, elemtype_220522)(Ttype190849* t);
STRING_LITERAL(TMP3281, "ithField", 8);
STRING_LITERAL(TMP3282, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3283, "invalid field at index ", 23);
STRING_LITERAL(TMP3284, "() must have an object or tuple type", 36);
STRING_LITERAL(TMP3285, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3286, "{} must have the set type", 25);
STRING_LITERAL(TMP3287, "float literal must have some float type", 39);
STRING_LITERAL(TMP3288, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3289, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3290, "nil literal must be of some pointer type", 40);
extern Tgcheap48416 gch_48444;

static N_INLINE(Tcell46546*, usrtocell_50046)(void* usr) {
	Tcell46546* result;
	result = 0;
	result = ((Tcell46546*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46546))))));
	return result;
}

static N_INLINE(void, rtladdzct_51604)(Tcell46546* c) {
	addzct_50017((&gch_48444.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46546* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_50046(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46546* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_50046((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51604(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_191097)(Tnode190813* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.sons == 0) goto LA3;
		result = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((*n).kindU.S6.sons ? (*n).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tsym190843*, ithfield_402012)(Tnode190813* n, NI field) {
	Tsym190843* result;
{	result = 0;
	result = NIM_NIL;
	switch ((*n).kind) {
	case ((NU8) 138):
	{
		{
			NI i_402029;
			NI HEX3Atmp_402095;
			NI LOC3;
			NI res_402098;
			i_402029 = 0;
			HEX3Atmp_402095 = 0;
			LOC3 = 0;
			LOC3 = sonslen_193403(n);
			HEX3Atmp_402095 = (NI)(LOC3 - ((NI) 1));
			res_402098 = ((NI) 0);
			{
				while (1) {
					if (!(res_402098 <= HEX3Atmp_402095)) goto LA5;
					i_402029 = res_402098;
					result = ithfield_402012((*n).kindU.S6.sons->data[i_402029], (NI)(field - i_402029));
					{
						if (!!((result == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_402098 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((NU8) 139):
	{
		{
			if (!!(((*(*n).kindU.S6.sons->data[((NI) 0)]).kind == ((NU8) 3)))) goto LA13;
			internalerror_165199((*n).info, ((NimStringDesc*) &TMP3281));
		}
		LA13: ;
		result = ithfield_402012((*n).kindU.S6.sons->data[((NI) 0)], (NI)(field - ((NI) 1)));
		{
			if (!!((result == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_402078;
			NI HEX3Atmp_402103;
			NI LOC20;
			NI res_402106;
			i_402078 = 0;
			HEX3Atmp_402103 = 0;
			LOC20 = 0;
			LOC20 = sonslen_193403(n);
			HEX3Atmp_402103 = (NI)(LOC20 - ((NI) 1));
			res_402106 = ((NI) 1);
			{
				while (1) {
					if (!(res_402106 <= HEX3Atmp_402103)) goto LA22;
					i_402078 = res_402106;
					switch ((*(*n).kindU.S6.sons->data[i_402078]).kind) {
					case ((NU8) 85):
					case ((NU8) 88):
					{
						Tnode190813* LOC24;
						LOC24 = 0;
						LOC24 = lastson_193431((*n).kindU.S6.sons->data[i_402078]);
						result = ithfield_402012(LOC24, (NI)(field - ((NI) 1)));
						{
							if (!!((result == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_165199((*n).info, ((NimStringDesc*) &TMP3282));
					}
					break;
					}
					res_402106 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((NU8) 3):
	{
		{
			if (!(field == ((NI) 0))) goto LA33;
			result = (*n).kindU.S4.sym;
		}
		LA33: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, annotatetype_402134)(Tnode190813* n, Ttype190849* t) {
	Ttype190849* x;
	x = skiptypes_194167(t, IL64(211106233624832));
	switch ((*n).kind) {
	case ((NU8) 37):
	{
		{
			if (!((*x).kind == ((NU8) 17))) goto LA4;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_402180;
				NI HEX3Atmp_402310;
				NI LOC7;
				NI res_402313;
				i_402180 = 0;
				HEX3Atmp_402310 = 0;
				LOC7 = 0;
				LOC7 = len_191097(n);
				HEX3Atmp_402310 = (LOC7 - 1);
				res_402313 = ((NI) 0);
				{
					while (1) {
						Tsym190843* field;
						if (!(res_402313 <= HEX3Atmp_402310)) goto LA9;
						i_402180 = res_402313;
						field = ithfield_402012((*x).n, i_402180);
						{
							NimStringDesc* LOC14;
							NimStringDesc* LOC15;
							if (!field == 0) goto LA12;
							LOC14 = 0;
							LOC15 = 0;
							LOC15 = nimIntToStr(i_402180);
							LOC14 = rawNewString(LOC15->Sup.len + 23);
appendString(LOC14, ((NimStringDesc*) &TMP3283));
appendString(LOC14, LOC15);
							globalerror_165145((*n).info, LOC14);
						}
						goto LA10;
						LA12: ;
						{
							annotatetype_402134((*n).kindU.S6.sons->data[i_402180], (*field).typ);
						}
						LA10: ;
						res_402313 += ((NI) 1);
					} LA9: ;
				}
			}
		}
		goto LA2;
		LA4: ;
		{
			if (!((*x).kind == ((NU8) 18))) goto LA18;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				NI i_402222;
				NI HEX3Atmp_402318;
				NI LOC21;
				NI res_402321;
				i_402222 = 0;
				HEX3Atmp_402318 = 0;
				LOC21 = 0;
				LOC21 = len_191097(n);
				HEX3Atmp_402318 = (LOC21 - 1);
				res_402321 = ((NI) 0);
				{
					while (1) {
						if (!(res_402321 <= HEX3Atmp_402318)) goto LA23;
						i_402222 = res_402321;
						{
							NI LOC26;
							NimStringDesc* LOC29;
							NimStringDesc* LOC30;
							LOC26 = 0;
							LOC26 = len_193377(x);
							if (!(LOC26 <= i_402222)) goto LA27;
							LOC29 = 0;
							LOC30 = 0;
							LOC30 = nimIntToStr(i_402222);
							LOC29 = rawNewString(LOC30->Sup.len + 23);
appendString(LOC29, ((NimStringDesc*) &TMP3283));
appendString(LOC29, LOC30);
							globalerror_165145((*n).info, LOC29);
						}
						goto LA24;
						LA27: ;
						{
							annotatetype_402134((*n).kindU.S6.sons->data[i_402222], (*x).sons->data[i_402222]);
						}
						LA24: ;
						res_402321 += ((NI) 1);
					} LA23: ;
				}
			}
		}
		goto LA2;
		LA18: ;
		{
			NIM_BOOL LOC33;
			LOC33 = 0;
			LOC33 = ((*x).kind == ((NU8) 25));
			if (!(LOC33)) goto LA34;
			LOC33 = ((*x).callconv == ((NU8) 8));
			LA34: ;
			if (!LOC33) goto LA35;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA2;
		LA35: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3284));
		}
		LA2: ;
	}
	break;
	case ((NU8) 41):
	{
		{
			if (!((151060496 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA41;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode190813* m_402253;
				m_402253 = 0;
				{
					NI i_402329;
					NI HEX3Atmp_402331;
					NI LOC45;
					NI res_402333;
					i_402329 = 0;
					HEX3Atmp_402331 = 0;
					LOC45 = 0;
					LOC45 = len_191097(n);
					HEX3Atmp_402331 = (LOC45 - 1);
					res_402333 = ((NI) 0);
					{
						while (1) {
							Ttype190849* LOC48;
							if (!(res_402333 <= HEX3Atmp_402331)) goto LA47;
							i_402329 = res_402333;
							m_402253 = (*n).kindU.S6.sons->data[i_402329];
							LOC48 = 0;
							LOC48 = elemtype_220522(x);
							annotatetype_402134(m_402253, LOC48);
							res_402333 += ((NI) 1);
						} LA47: ;
					}
				}
			}
		}
		goto LA39;
		LA41: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3285));
		}
		LA39: ;
	}
	break;
	case ((NU8) 39):
	{
		{
			if (!((524288 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA53;
			asgnRefNoCycle((void**) (&(*n).typ), t);
			{
				Tnode190813* m_402265;
				m_402265 = 0;
				{
					NI i_402340;
					NI HEX3Atmp_402342;
					NI LOC57;
					NI res_402344;
					i_402340 = 0;
					HEX3Atmp_402342 = 0;
					LOC57 = 0;
					LOC57 = len_191097(n);
					HEX3Atmp_402342 = (LOC57 - 1);
					res_402344 = ((NI) 0);
					{
						while (1) {
							Ttype190849* LOC60;
							if (!(res_402344 <= HEX3Atmp_402342)) goto LA59;
							i_402340 = res_402344;
							m_402265 = (*n).kindU.S6.sons->data[i_402340];
							LOC60 = 0;
							LOC60 = elemtype_220522(x);
							annotatetype_402134(m_402265, LOC60);
							res_402344 += ((NI) 1);
						} LA59: ;
					}
				}
			}
		}
		goto LA51;
		LA53: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3286));
		}
		LA51: ;
	}
	break;
	case ((NU8) 16) ... ((NU8) 19):
	{
		{
			if (!((IL64(1030792151040) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA65;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA63;
		LA65: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3287));
		}
		LA63: ;
	}
	break;
	case ((NU8) 5) ... ((NU8) 15):
	{
		{
			if (!((IL64(35182224621574) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA71;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA69;
		LA71: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3288));
		}
		LA69: ;
	}
	break;
	case ((NU8) 20) ... ((NU8) 22):
	{
		{
			if (!((805306368 &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA77;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA75;
		LA77: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3289));
		}
		LA75: ;
	}
	break;
	case ((NU8) 23):
	{
		{
			if (!((IL64(1125900835880960) &(IL64(1)<<(((*x).kind)&IL64(63))))!=0)) goto LA83;
			asgnRefNoCycle((void**) (&(*n).typ), t);
		}
		goto LA81;
		LA83: ;
		{
			globalerror_165145((*n).info, ((NimStringDesc*) &TMP3290));
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
NIM_EXTERNC N_NOINLINE(void, nimsrc_semmacrosanityInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_semmacrosanityDatInit)(void) {
}

