/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TY355242 TY355242;
typedef struct TY355243 TY355243;
typedef struct Tsymseq190815 Tsymseq190815;
typedef struct Tsym190843 Tsym190843;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tcell46347 Tcell46347;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tidobj167015 Tidobj167015;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq190845 Ttypeseq190845;
typedef struct Tscope190837 Tscope190837;
typedef struct TY190944 TY190944;
typedef struct Tstrtable190817 Tstrtable190817;
typedef struct Ttype190849 Ttype190849;
typedef struct Tident167021 Tident167021;
typedef struct Tlineinfo163338 Tlineinfo163338;
typedef struct Tnode190813 Tnode190813;
typedef struct Tloc190827 Tloc190827;
typedef struct Ropeobj161009 Ropeobj161009;
typedef struct Tlib190831 Tlib190831;
typedef struct NimStringDesc NimStringDesc;
typedef struct Tnodeseq190807 Tnodeseq190807;
typedef struct Intset187056 Intset187056;
typedef struct Ttrunk187052 Ttrunk187052;
typedef struct Ttrunkseq187054 Ttrunkseq187054;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation190833 Tinstantiation190833;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct TY190933 TY190933;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY355243 {
Tsymseq190815* Field0;
Tsym190843* Field1;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
};
typedef Tsmallchunk27440* TY28222[512];
typedef Ttrunk27413* Ttrunkbuckets27415[256];
struct  Tintset27417  {
Ttrunkbuckets27415 data;
};
struct  Tmemregion28210  {
NI minlargeobj;
NI maxlargeobj;
TY28222 freesmallchunks;
Tllchunk28204* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Tbigchunk27442* freechunkslist;
Tintset27417 chunkstarts;
Tavlnode28208* root;
Tavlnode28208* deleted;
Tavlnode28208* last;
Tavlnode28208* freeavlnodes;
};
struct  Tgcstat48214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Tgcheap48216  {
void* stackbottom;
NI cyclethreshold;
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj167015  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable190817  {
NI counter;
Tsymseq190815* data;
};
struct  Tlineinfo163338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc190827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype190849* t;
Ropeobj161009* r;
Ropeobj161009* heaproot;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident167021  {
  Tidobj167015 Sup;
NimStringDesc* s;
Tident167021* next;
NI h;
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
typedef NimStringDesc* TY154965[2];
typedef Tsym190843* TY244432[1];
struct  Intset187056  {
NI counter;
NI max;
Ttrunk187052* head;
Ttrunkseq187054* data;
};
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
NI key;
TY27420 bits;
};
struct  Tbasechunk27438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Tsmallchunk27440  {
  Tbasechunk27438 Sup;
Tsmallchunk27440* next;
Tsmallchunk27440* prev;
Tfreecell27430* freelist;
NI free;
NI acc;
NF data;
};
struct  Tllchunk28204  {
NI size;
NI acc;
Tllchunk28204* next;
};
struct  Tbigchunk27442  {
  Tbasechunk27438 Sup;
Tbigchunk27442* next;
Tbigchunk27442* prev;
NI align;
NF data;
};
struct  Ttrunk27413  {
Ttrunk27413* next;
NI key;
TY27420 bits;
};
typedef Tavlnode28208* TY28214[2];
struct  Tavlnode28208  {
TY28214 link;
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
struct  Ropeobj161009  {
  TNimObject Sup;
Ropeobj161009* left;
Ropeobj161009* right;
NI length;
NimStringDesc* data;
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
struct  Ttrunk187052  {
Ttrunk187052* next;
NI key;
TY27420 bits;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation190833  {
Tsym190843* sym;
Ttypeseq190845* concretetypes;
TY190933* usedby;
};
struct Tsymseq190815 {
  TGenericSeq Sup;
  Tsym190843* data[SEQ_DECL_SIZE];
};
struct TY355242 {
  TGenericSeq Sup;
  TY355243 data[SEQ_DECL_SIZE];
};
struct Ttypeseq190845 {
  TGenericSeq Sup;
  Ttype190849* data[SEQ_DECL_SIZE];
};
struct TY190944 {
  TGenericSeq Sup;
  Tinstantiation190833* data[SEQ_DECL_SIZE];
};
struct Tnodeseq190807 {
  TGenericSeq Sup;
  Tnode190813* data[SEQ_DECL_SIZE];
};
struct Ttrunkseq187054 {
  TGenericSeq Sup;
  Ttrunk187052* data[SEQ_DECL_SIZE];
};
struct TY190933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP927)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NIM_BOOL, samemethodbucket_355267)(Tsym190843* a, Tsym190843* b);
N_NIMCALL(NI, sonslen_193351)(Ttype190849* n);
N_NIMCALL(NIM_BOOL, sametypeornil_225108)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(Ttype190849*, skiptypes_194167)(Ttype190849* t, NU64 kinds);
N_NIMCALL(Ttype190849*, lastson_193442)(Ttype190849* n);
N_NIMCALL(NIM_BOOL, sametype_225092)(Ttype190849* a, Ttype190849* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_227064)(Ttype190849* a, Ttype190849* b);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_355366)(Tsym190843* s, Tnode190813* dispatcher);
static N_INLINE(NI, len_191097)(Tnode190813* n);
N_NIMCALL(void, add_191164)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, lastson_193431)(Tnode190813* n);
N_NIMCALL(void, fixupdispatcher_355482)(Tsym190843* meth, Tsym190843* disp);
N_NIMCALL(NI, sonslen_193403)(Tnode190813* n);
N_NIMCALL(Tnode190813*, copytree_195028)(Tnode190813* src);
N_NIMCALL(void, message_165188)(Tlineinfo163338 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_193096)(NI16 x);
N_NIMCALL(void, checkmethodeffects_329189)(Tsym190843* disp, Tsym190843* branch);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tsym190843*, createdispatcher_355407)(Tsym190843* s);
N_NIMCALL(Tsym190843*, copysym_193607)(Tsym190843* s, NIM_BOOL keepid);
N_NIMCALL(Ttype190849*, copytype_193549)(Ttype190849* t, Tsym190843* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_192819)(Tnode190813* father, Tnode190813* son);
N_NIMCALL(Tnode190813*, newsymnode_192325)(Tsym190843* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_81204, TNimType* mt);
N_NIMCALL(void, internalerror_165199)(Tlineinfo163338 info, NimStringDesc* errmsg);
N_NIMCALL(Tnode190813*, genconv_355017)(Tnode190813* n, Ttype190849* d, NIM_BOOL downcast);
N_NIMCALL(Tnode190813*, newnodeit_192807)(NU8 kind, Tlineinfo163338 info, Ttype190849* typ);
N_NIMCALL(Tnode190813*, newnode_191401)(NU8 kind);
N_NIMCALL(void, initintset_187927)(Intset187056* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_355851)(Tsymseq190815* methods, NI col);
N_NIMCALL(void, incl_187856)(Intset187056* s, NI key);
N_NIMCALL(void, sortbucket_355957)(Tsymseq190815** a, Intset187056 relevantcols);
N_NIMCALL(NI, cmpsignatures_355905)(Tsym190843* a, Tsym190843* b, Intset187056 relevantcols);
N_NIMCALL(NIM_BOOL, contains_187829)(Intset187056 s, NI key);
N_NIMCALL(Tsym190843*, gendispatcher_356031)(Tsymseq190815* methods, Intset187056 relevantcols);
N_NIMCALL(Tnode190813*, newnodei_192351)(NU8 kind, Tlineinfo163338 info);
N_NIMCALL(Tsym190843*, getsyssym_238054)(NimStringDesc* name);
N_NIMCALL(Ttype190849*, getsystype_238030)(NU8 kind);
STRING_LITERAL(TMP3267, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3275, "no method dispatcher found", 26);
STRING_LITERAL(TMP3276, "cgmeth.genConv", 14);
STRING_LITERAL(TMP3277, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3278, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4209, "and", 3);
STRING_LITERAL(TMP4210, "of", 2);
TY355242* gmethods_355262;
TNimType NTI355243; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI190815; /* TSymSeq */
extern TNimType NTI190811; /* PSym */
TNimType NTI355242; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern Tgcheap48216 gch_48244;
extern Tnode190813* emptynode_191807;
N_NIMCALL(void, TMP927)(void* p, NI op) {
	TY355242* a;
	NI LOC1;
	a = (TY355242*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, samemethodbucket_355267)(Tsym190843* a, Tsym190843* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!!(((*(*a).name).Sup.id == (*(*b).name).Sup.id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_193351((*a).typ);
		LOC8 = 0;
		LOC8 = sonslen_193351((*b).typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_225108((*(*a).typ).sons->data[((NI) 0)], (*(*b).typ).sons->data[((NI) 0)], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_355291;
		NI HEX3Atmp_355338;
		NI LOC17;
		NI res_355341;
		i_355291 = 0;
		HEX3Atmp_355338 = 0;
		LOC17 = 0;
		LOC17 = sonslen_193351((*a).typ);
		HEX3Atmp_355338 = (NI)(LOC17 - ((NI) 1));
		res_355341 = ((NI) 1);
		{
			while (1) {
				Ttype190849* aa;
				Ttype190849* bb;
				if (!(res_355341 <= HEX3Atmp_355338)) goto LA19;
				i_355291 = res_355341;
				aa = (*(*a).typ).sons->data[i_355291];
				bb = (*(*b).typ).sons->data[i_355291];
				{
					while (1) {
						aa = skiptypes_194167(aa, 2048);
						bb = skiptypes_194167(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).kind == (*bb).kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((*aa).kind == ((NU8) 23) || (*aa).kind == ((NU8) 21) || (*aa).kind == ((NU8) 22));
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_193442(aa);
							bb = lastson_193442(bb);
						}
						goto LA22;
						LA26: ;
						{
							goto LA20;
						}
						LA22: ;
					}
				} LA20: ;
				{
					NIM_BOOL LOC31;
					NIM_BOOL LOC33;
					NIM_BOOL LOC34;
					NI LOC37;
					LOC31 = 0;
					LOC31 = sametype_225092(aa, bb, 0);
					if (LOC31) goto LA32;
					LOC33 = 0;
					LOC34 = 0;
					LOC34 = ((*aa).kind == ((NU8) 17));
					if (!(LOC34)) goto LA35;
					LOC34 = ((*bb).kind == ((NU8) 17));
					LA35: ;
					LOC33 = LOC34;
					if (!(LOC33)) goto LA36;
					LOC37 = 0;
					LOC37 = inheritancediff_227064(bb, aa);
					LOC33 = (LOC37 < ((NI) 0));
					LA36: ;
					LOC31 = LOC33;
					LA32: ;
					if (!LOC31) goto LA38;
				}
				goto LA29;
				LA38: ;
				{
					goto BeforeRet;
				}
				LA29: ;
				res_355341 += ((NI) 1);
			} LA19: ;
		}
	}
	result = NIM_TRUE;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46347* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46347* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
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

N_NIMCALL(void, attachdispatcher_355366)(Tsym190843* s, Tnode190813* dispatcher) {
	NI L;
	NI LOC1;
	Tnode190813* x;
	LOC1 = 0;
	LOC1 = len_191097((*s).ast);
	L = (NI)(LOC1 - ((NI) 1));
	x = (*(*s).ast).kindU.S6.sons->data[L];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.sym).flags &(1<<((((NU8) 25))&31)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[L]), dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_191164((*s).ast, dispatcher);
	}
	LA2: ;
}

N_NIMCALL(void, fixupdispatcher_355482)(Tsym190843* meth, Tsym190843* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_193403((*disp).ast);
		LOC4 = (((NI) 7) < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_193403((*meth).ast);
		LOC4 = (((NI) 7) < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).ast).kindU.S6.sons->data[((NI) 7)] == emptynode_191807);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]), copytree_195028((*(*meth).ast).kindU.S6.sons->data[((NI) 7)]));
	}
	LA9: ;
	{
		if (!((*(*disp).typ).locklevel == ((NI16) -1))) goto LA13;
		(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
	}
	goto LA11;
	LA13: ;
	{
		NIM_BOOL LOC16;
		TY154965 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).typ).locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).typ).locklevel == (*(*disp).typ).locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_193096((*(*meth).typ).locklevel);
		LOC20[1] = HEX24_193096((*(*disp).typ).locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3267), LOC20, 2);
		message_165188((*meth).info, ((NU16) 258), LOC21);
		{
			if (!((*(*disp).typ).locklevel < (*(*meth).typ).locklevel)) goto LA24;
			(*(*disp).typ).locklevel = (*(*meth).typ).locklevel;
		}
		LA24: ;
	}
	goto LA11;
	LA18: ;
	LA11: ;
}

N_NIMCALL(Tsym190843*, createdispatcher_355407)(Tsym190843* s) {
	Tsym190843* result;
	Tsym190843* disp;
	Tnode190813* LOC15;
	Tnode190813* LOC16;
{	result = 0;
	disp = copysym_193607(s, NIM_FALSE);
	(*disp).flags |= ((NI32)1)<<((((NU8) 25))%(sizeof(NI32)*8));
	(*disp).flags &= ~(((NI32)1) << ((((NU8) 1)) % (sizeof(NI32)*8)));
	asgnRefNoCycle((void**) (&(*disp).typ), copytype_193549((*disp).typ, (*(*disp).typ).owner, NIM_FALSE));
	{
		if (!((*(*disp).typ).callconv == ((NU8) 5))) goto LA3;
		(*(*disp).typ).callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) (&(*disp).ast), copytree_195028((*s).ast));
	asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_191807);
	asgnRefNoCycle((void**) (&(*disp).loc.r), NIM_NIL);
	{
		if (!!(((*(*s).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_193403((*disp).ast);
			if (!(((NI) 7) < LOC11)) goto LA12;
			asgnRefNoCycle((void**) (&(*(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym), copysym_193607((*(*(*s).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_192819((*disp).ast, emptynode_191807);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_192325(disp);
	attachdispatcher_355366(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_192325(disp);
	attachdispatcher_355366(disp, LOC16);
	result = disp;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, methoddef_355634)(Tsym190843* s, NIM_BOOL fromcache) {
	NI L;
	TY355243 LOC10;
	TY244432 LOC11;
{	L = (gmethods_355262 ? gmethods_355262->Sup.len : 0);
	{
		NI i_355659;
		NI HEX3Atmp_355829;
		NI res_355832;
		i_355659 = 0;
		HEX3Atmp_355829 = 0;
		HEX3Atmp_355829 = (NI)(L - ((NI) 1));
		res_355832 = ((NI) 0);
		{
			while (1) {
				Tsym190843* disp;
				if (!(res_355832 <= HEX3Atmp_355829)) goto LA3;
				i_355659 = res_355832;
				disp = gmethods_355262->data[i_355659].Field1;
				{
					NIM_BOOL LOC6;
					Tnode190813* LOC9;
					LOC6 = 0;
					LOC6 = samemethodbucket_355267(disp, s);
					if (!LOC6) goto LA7;
					gmethods_355262->data[i_355659].Field0 = (Tsymseq190815*) incrSeq(&(gmethods_355262->data[i_355659].Field0)->Sup, sizeof(Tsym190843*));
					asgnRefNoCycle((void**) (&gmethods_355262->data[i_355659].Field0->data[gmethods_355262->data[i_355659].Field0->Sup.len-1]), s);
					LOC9 = 0;
					LOC9 = lastson_193431((*disp).ast);
					attachdispatcher_355366(s, LOC9);
					fixupdispatcher_355482(s, disp);
					checkmethodeffects_329189(disp, s);
					goto BeforeRet;
				}
				LA7: ;
				res_355832 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC10), 0, sizeof(LOC10));
	LOC10.Field0 = (Tsymseq190815*) newSeq((&NTI190815), 1);
	memset((void*)LOC11, 0, sizeof(LOC11));
	LOC11[0] = s;
	asgnRefNoCycle((void**) (&LOC10.Field0->data[0]), LOC11[0]);
	LOC10.Field1 = createdispatcher_355407(s);
	gmethods_355262 = (TY355242*) incrSeq(&(gmethods_355262)->Sup, sizeof(TY355243));
	genericSeqAssign((&gmethods_355262->data[gmethods_355262->Sup.len-1].Field0), LOC10.Field0, (&NTI190815));
	asgnRefNoCycle((void**) (&gmethods_355262->data[gmethods_355262->Sup.len-1].Field1), LOC10.Field1);
	{
		if (!fromcache) goto LA14;
		internalerror_165199((*s).info, ((NimStringDesc*) &TMP3275));
	}
	LA14: ;
	}BeforeRet: ;
}

N_NIMCALL(Tnode190813*, genconv_355017)(Tnode190813* n, Ttype190849* d, NIM_BOOL downcast) {
	Tnode190813* result;
	Ttype190849* dest;
	Ttype190849* source;
	result = 0;
	dest = skiptypes_194167(d, IL64(211106247256320));
	source = skiptypes_194167((*n).typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_227064(dest, source);
		{
			if (!(diff == ((NI) 2147483647))) goto LA9;
			internalerror_165199((*n).info, ((NimStringDesc*) &TMP3276));
		}
		LA9: ;
		{
			if (!(diff < ((NI) 0))) goto LA13;
			result = newnodeit_192807(((NU8) 67), (*n).info, d);
			addson_192819(result, n);
			{
				if (!downcast) goto LA17;
				internalerror_165199((*n).info, ((NimStringDesc*) &TMP3277));
			}
			LA17: ;
		}
		goto LA11;
		LA13: ;
		{
			if (!(((NI) 0) < diff)) goto LA20;
			result = newnodeit_192807(((NU8) 66), (*n).info, d);
			addson_192819(result, n);
			{
				if (!!(downcast)) goto LA24;
				internalerror_165199((*n).info, ((NimStringDesc*) &TMP3278));
			}
			LA24: ;
		}
		goto LA11;
		LA20: ;
		{
			result = n;
		}
		LA11: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode190813*, methodcall_355054)(Tnode190813* n) {
	Tnode190813* result;
	Tsym190843* disp;
	Tnode190813* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_193431((*(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).ast);
	disp = (*LOC1).kindU.S4.sym;
	asgnRefNoCycle((void**) (&(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym), disp);
	{
		NI i_355215;
		NI HEX3Atmp_355220;
		NI LOC3;
		NI res_355223;
		i_355215 = 0;
		HEX3Atmp_355220 = 0;
		LOC3 = 0;
		LOC3 = sonslen_193403(result);
		HEX3Atmp_355220 = (NI)(LOC3 - ((NI) 1));
		res_355223 = ((NI) 1);
		{
			while (1) {
				if (!(res_355223 <= HEX3Atmp_355220)) goto LA5;
				i_355215 = res_355223;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_355215]), genconv_355017((*result).kindU.S6.sons->data[i_355215], (*(*disp).typ).sons->data[i_355215], NIM_TRUE));
				res_355223 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_355851)(Tsymseq190815* methods, NI col) {
	NIM_BOOL result;
	Ttype190849* t;
{	result = 0;
	t = skiptypes_194167((*(*methods->data[((NI) 0)]).typ).sons->data[col], IL64(211106247215360));
	{
		if (!((*t).kind == ((NU8) 17))) goto LA3;
		{
			NI i_355879;
			NI HEX3Atmp_355883;
			NI res_355886;
			i_355879 = 0;
			HEX3Atmp_355883 = 0;
			HEX3Atmp_355883 = (methods ? (methods->Sup.len-1) : -1);
			res_355886 = ((NI) 1);
			{
				while (1) {
					Ttype190849* t2;
					if (!(res_355886 <= HEX3Atmp_355883)) goto LA7;
					i_355879 = res_355886;
					t2 = skiptypes_194167((*(*methods->data[i_355879]).typ).sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_225092(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_355886 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	LA3: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_355905)(Tsym190843* a, Tsym190843* b, Intset187056 relevantcols) {
	NI result;
{	result = 0;
	{
		NI col_355924;
		NI HEX3Atmp_355935;
		NI LOC2;
		NI res_355938;
		col_355924 = 0;
		HEX3Atmp_355935 = 0;
		LOC2 = 0;
		LOC2 = sonslen_193351((*a).typ);
		HEX3Atmp_355935 = (NI)(LOC2 - ((NI) 1));
		res_355938 = ((NI) 1);
		{
			while (1) {
				if (!(res_355938 <= HEX3Atmp_355935)) goto LA4;
				col_355924 = res_355938;
				{
					NIM_BOOL LOC7;
					Ttype190849* aa;
					Ttype190849* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_187829(relevantcols, col_355924);
					if (!LOC7) goto LA8;
					aa = skiptypes_194167((*(*a).typ).sons->data[col_355924], IL64(211106247215360));
					bb = skiptypes_194167((*(*b).typ).sons->data[col_355924], IL64(211106247215360));
					d = inheritancediff_227064(aa, bb);
					{
						if (!!((d == ((NI) 2147483647)))) goto LA12;
						result = d;
						goto BeforeRet;
					}
					LA12: ;
				}
				LA8: ;
				res_355938 += ((NI) 1);
			} LA4: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_355957)(Tsymseq190815** a, Intset187056 relevantcols) {
	NI n;
	NI h;
	n = ((*a) ? (*a)->Sup.len : 0);
	h = ((NI) 1);
	{
		while (1) {
			h = (NI)((NI)(((NI) 3) * h) + ((NI) 1));
			{
				if (!(n < h)) goto LA5;
				goto LA1;
			}
			LA5: ;
		}
	} LA1: ;
	{
		while (1) {
			h = (NI)(h / ((NI) 3));
			{
				NI i_355984;
				NI HEX3Atmp_355991;
				NI res_355994;
				i_355984 = 0;
				HEX3Atmp_355991 = 0;
				HEX3Atmp_355991 = (NI)(n - ((NI) 1));
				res_355994 = h;
				{
					while (1) {
						Tsym190843* v;
						NI j;
						if (!(res_355994 <= HEX3Atmp_355991)) goto LA11;
						i_355984 = res_355994;
						v = (*a)->data[i_355984];
						j = i_355984;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_355905((*a)->data[(NI)(j - h)], v, relevantcols);
								if (!(((NI) 0) <= LOC14)) goto LA13;
								asgnRefNoCycle((void**) (&(*a)->data[j]), (*a)->data[(NI)(j - h)]);
								j = (NI)(j - h);
								{
									if (!(j < h)) goto LA17;
									goto LA12;
								}
								LA17: ;
							} LA13: ;
						} LA12: ;
						asgnRefNoCycle((void**) (&(*a)->data[j]), v);
						res_355994 += ((NI) 1);
					} LA11: ;
				}
			}
			{
				if (!(h == ((NI) 1))) goto LA21;
				goto LA7;
			}
			LA21: ;
		}
	} LA7: ;
}

N_NIMCALL(Tsym190843*, gendispatcher_356031)(Tsymseq190815* methods, Intset187056 relevantcols) {
	Tsym190843* result;
	Tsym190843* base;
	Tnode190813* LOC1;
	NI paramlen;
	Tnode190813* disp;
	Tsym190843* ands;
	Tsym190843* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_193431((*methods->data[((NI) 0)]).ast);
	base = (*LOC1).kindU.S4.sym;
	result = base;
	paramlen = sonslen_193351((*base).typ);
	disp = newnodei_192351(((NU8) 92), (*base).info);
	ands = getsyssym_238054(((NimStringDesc*) &TMP4209));
	iss = getsyssym_238054(((NimStringDesc*) &TMP4210));
	{
		NI meth_356057;
		NI HEX3Atmp_356168;
		NI res_356171;
		meth_356057 = 0;
		HEX3Atmp_356168 = 0;
		HEX3Atmp_356168 = (methods ? (methods->Sup.len-1) : -1);
		res_356171 = ((NI) 0);
		{
			while (1) {
				Tsym190843* curr;
				Tnode190813* cond;
				Tnode190813* call;
				Tnode190813* LOC24;
				Tnode190813* ret;
				if (!(res_356171 <= HEX3Atmp_356168)) goto LA4;
				meth_356057 = res_356171;
				curr = methods->data[meth_356057];
				cond = NIM_NIL;
				{
					NI col_356072;
					NI HEX3Atmp_356152;
					NI res_356155;
					col_356072 = 0;
					HEX3Atmp_356152 = 0;
					HEX3Atmp_356152 = (NI)(paramlen - ((NI) 1));
					res_356155 = ((NI) 1);
					{
						while (1) {
							if (!(res_356155 <= HEX3Atmp_356152)) goto LA7;
							col_356072 = res_356155;
							{
								NIM_BOOL LOC10;
								Tnode190813* isn;
								Ttype190849* LOC13;
								Tnode190813* LOC14;
								Tnode190813* LOC15;
								Tnode190813* LOC16;
								LOC10 = 0;
								LOC10 = contains_187829(relevantcols, col_356072);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_238030(((NU8) 1));
								isn = newnodeit_192807(((NU8) 27), (*base).info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_192325(iss);
								addson_192819(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_192325((*(*(*(*base).typ).n).kindU.S6.sons->data[col_356072]).kindU.S4.sym);
								addson_192819(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_192807(((NU8) 4), (*base).info, (*(*curr).typ).sons->data[col_356072]);
								addson_192819(isn, LOC16);
								{
									Tnode190813* a;
									Ttype190849* LOC21;
									Tnode190813* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_238030(((NU8) 1));
									a = newnodeit_192807(((NU8) 27), (*base).info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_192325(ands);
									addson_192819(a, LOC22);
									addson_192819(a, cond);
									addson_192819(a, isn);
									cond = a;
								}
								goto LA17;
								LA19: ;
								{
									cond = isn;
								}
								LA17: ;
							}
							LA11: ;
							res_356155 += ((NI) 1);
						} LA7: ;
					}
				}
				call = newnodei_192351(((NU8) 27), (*base).info);
				LOC24 = 0;
				LOC24 = newsymnode_192325(curr);
				addson_192819(call, LOC24);
				{
					NI col_356108;
					NI HEX3Atmp_356160;
					NI res_356163;
					col_356108 = 0;
					HEX3Atmp_356160 = 0;
					HEX3Atmp_356160 = (NI)(paramlen - ((NI) 1));
					res_356163 = ((NI) 1);
					{
						while (1) {
							Tnode190813* LOC28;
							Tnode190813* LOC29;
							if (!(res_356163 <= HEX3Atmp_356160)) goto LA27;
							col_356108 = res_356163;
							LOC28 = 0;
							LOC28 = newsymnode_192325((*(*(*(*base).typ).n).kindU.S6.sons->data[col_356108]).kindU.S4.sym);
							LOC29 = 0;
							LOC29 = genconv_355017(LOC28, (*(*curr).typ).sons->data[col_356108], NIM_FALSE);
							addson_192819(call, LOC29);
							res_356163 += ((NI) 1);
						} LA27: ;
					}
				}
				ret = 0;
				{
					Tnode190813* a;
					Tnode190813* LOC34;
					if (!!(((*(*base).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA32;
					a = newnodei_192351(((NU8) 73), (*base).info);
					LOC34 = 0;
					LOC34 = newsymnode_192325((*(*(*base).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym);
					addson_192819(a, LOC34);
					addson_192819(a, call);
					ret = newnodei_192351(((NU8) 109), (*base).info);
					addson_192819(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					Tnode190813* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_192351(((NU8) 86), (*base).info);
					addson_192819(a, cond);
					addson_192819(a, ret);
					addson_192819(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_356171 += ((NI) 1);
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) (&(*(*result).ast).kindU.S6.sons->data[((NI) 6)]), disp);
	return result;
}

N_NIMCALL(Tnode190813*, generatemethoddispatchers_356208)(void) {
	Tnode190813* result;
	result = 0;
	result = newnode_191401(((NU8) 115));
	{
		NI bucket_356231;
		NI HEX3Atmp_356258;
		NI res_356261;
		bucket_356231 = 0;
		HEX3Atmp_356258 = 0;
		HEX3Atmp_356258 = (NI)((gmethods_355262 ? gmethods_355262->Sup.len : 0) - ((NI) 1));
		res_356261 = ((NI) 0);
		{
			while (1) {
				Intset187056 relevantcols;
				Tsym190843* LOC13;
				Tnode190813* LOC14;
				if (!(res_356261 <= HEX3Atmp_356258)) goto LA3;
				bucket_356231 = res_356261;
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				chckNil((void*)(&relevantcols));
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				initintset_187927((&relevantcols));
				{
					NI col_356246;
					NI HEX3Atmp_356251;
					NI LOC5;
					NI res_356254;
					col_356246 = 0;
					HEX3Atmp_356251 = 0;
					LOC5 = 0;
					LOC5 = sonslen_193351((*gmethods_355262->data[bucket_356231].Field0->data[((NI) 0)]).typ);
					HEX3Atmp_356251 = (NI)(LOC5 - ((NI) 1));
					res_356254 = ((NI) 1);
					{
						while (1) {
							if (!(res_356254 <= HEX3Atmp_356251)) goto LA7;
							col_356246 = res_356254;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_355851(gmethods_355262->data[bucket_356231].Field0, col_356246);
								if (!LOC10) goto LA11;
								incl_187856((&relevantcols), col_356246);
							}
							LA11: ;
							res_356254 += ((NI) 1);
						} LA7: ;
					}
				}
				sortbucket_355957((&gmethods_355262->data[bucket_356231].Field0), relevantcols);
				LOC13 = 0;
				LOC13 = gendispatcher_356031(gmethods_355262->data[bucket_356231].Field0, relevantcols);
				LOC14 = 0;
				LOC14 = newsymnode_192325(LOC13);
				addson_192819(result, LOC14);
				res_356261 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_cgmethInit)(void) {
	if (gmethods_355262) nimGCunrefNoCycle(gmethods_355262);
	gmethods_355262 = (TY355242*) newSeqRC1((&NTI355242), 0);
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_cgmethDatInit)(void) {
static TNimNode* TMP926[2];
static TNimNode TMP924[3];
NTI355243.size = sizeof(TY355243);
NTI355243.kind = 18;
NTI355243.base = 0;
NTI355243.flags = 2;
TMP926[0] = &TMP924[1];
TMP924[1].kind = 1;
TMP924[1].offset = offsetof(TY355243, Field0);
TMP924[1].typ = (&NTI190815);
TMP924[1].name = "Field0";
TMP926[1] = &TMP924[2];
TMP924[2].kind = 1;
TMP924[2].offset = offsetof(TY355243, Field1);
TMP924[2].typ = (&NTI190811);
TMP924[2].name = "Field1";
TMP924[0].len = 2; TMP924[0].kind = 2; TMP924[0].sons = &TMP926[0];
NTI355243.node = &TMP924[0];
NTI355242.size = sizeof(TY355242*);
NTI355242.kind = 24;
NTI355242.base = (&NTI355243);
NTI355242.flags = 2;
NTI355242.marker = TMP927;
}

