/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_cgmeth.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_cgmeth.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct TY431226 TY431226;
typedef struct TY431227 TY431227;
typedef struct Tsymseq293800 Tsymseq293800;
typedef struct Tsym293830 Tsym293830;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47305 Cell47305;
typedef struct Cellseq47321 Cellseq47321;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29480 Memregion29480;
typedef struct Smallchunk29437 Smallchunk29437;
typedef struct Llchunk29474 Llchunk29474;
typedef struct Bigchunk29439 Bigchunk29439;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29478 Avlnode29478;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47317 Cellset47317;
typedef struct Pagedesc47313 Pagedesc47313;
typedef struct Tidobj200006 Tidobj200006;
typedef struct TNimObject TNimObject;
typedef struct Ttypeseq293832 Ttypeseq293832;
typedef struct TY293925 TY293925;
typedef struct Tstrtable293802 Tstrtable293802;
typedef struct Ttype293836 Ttype293836;
typedef struct Tident200012 Tident200012;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tnode293798 Tnode293798;
typedef struct Tloc293812 Tloc293812;
typedef struct Ropeobj179006 Ropeobj179006;
typedef struct Tlib293816 Tlib293816;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY293956 TY293956;
typedef struct Tnodeseq293792 Tnodeseq293792;
typedef struct Intset269031 Intset269031;
typedef struct Trunk269027 Trunk269027;
typedef struct Trunkseq269029 Trunkseq269029;
typedef struct Basechunk29435 Basechunk29435;
typedef struct Freecell29427 Freecell29427;
typedef struct Tinstantiation293820 Tinstantiation293820;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct TY293957 TY293957;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct TY431227 {
Tsymseq293800* Field0;
Tsym293830* Field1;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell47305  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47321  {
NI len;
NI cap;
Cell47305** d;
};
typedef Smallchunk29437* TY29495[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29480  {
NI minlargeobj;
NI maxlargeobj;
TY29495 freesmallchunks;
Llchunk29474* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29439* freechunkslist;
Intset29414 chunkstarts;
Avlnode29478* root;
Avlnode29478* deleted;
Avlnode29478* last;
Avlnode29478* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47317  {
NI counter;
NI max;
Pagedesc47313* head;
Pagedesc47313** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47321 zct;
Cellseq47321 decstack;
Cellseq47321 tempstack;
NI recgclock;
Memregion29480 region;
Gcstat49814 stat;
Cellset47317 marked;
Cellseq47321 additionalroots;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj200006  {
  TNimObject Sup;
NI id;
};
struct  Tstrtable293802  {
NI counter;
Tsymseq293800* data;
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tloc293812  {
NU8 k;
NU8 s;
NU16 flags;
Ttype293836* t;
Ropeobj179006* r;
};
struct  Tsym293830  {
  Tidobj200006 Sup;
NU8 kind;
union{
struct {Ttypeseq293832* typeinstcache;
} S1;
struct {TY293925* procinstcache;
Tsym293830* gcunsafetyreason;
} S2;
struct {TY293925* usedgenerics;
Tstrtable293802 tab;
} S3;
struct {Tsym293830* guard;
NI bitsize;
} S4;
} kindU;
NU16 magic;
Ttype293836* typ;
Tident200012* name;
Tlineinfo192336 info;
Tsym293830* owner;
NU32 flags;
Tnode293798* ast;
NU32 options;
NI position;
NI offset;
Tloc293812 loc;
Tlib293816* annex;
Tnode293798* constraint;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident200012  {
  Tidobj200006 Sup;
NimStringDesc* s;
Tident200012* next;
NI h;
};
struct  Ttype293836  {
  Tidobj200006 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq293832* sons;
Tnode293798* n;
Tsym293830* owner;
Tsym293830* sym;
Tsym293830* destructor;
Tsym293830* deepcopy;
Tsym293830* assignment;
TY293956* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc293812 loc;
};
struct  Tnode293798  {
Ttype293836* typ;
Tlineinfo192336 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym293830* sym;
} S4;
struct {Tident200012* ident;
} S5;
struct {Tnodeseq293792* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NimStringDesc* TY194153[2];
typedef Tsym293830* TY344313[1];
struct  Intset269031  {
NI counter;
NI max;
Trunk269027* head;
Trunkseq269029* data;
};
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29435  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29437  {
  Basechunk29435 Sup;
Smallchunk29437* next;
Smallchunk29437* prev;
Freecell29427* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29474  {
NI size;
NI acc;
Llchunk29474* next;
};
struct  Bigchunk29439  {
  Basechunk29435 Sup;
Bigchunk29439* next;
Bigchunk29439* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29478* TY29485[2];
struct  Avlnode29478  {
TY29485 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47313  {
Pagedesc47313* next;
NI key;
TY29419 bits;
};
struct  Ropeobj179006  {
  TNimObject Sup;
Ropeobj179006* left;
Ropeobj179006* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  Tlib293816  {
  Tlistentry147010 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj179006* name;
Tnode293798* path;
};
struct TY293957 {
NI Field0;
Tsym293830* Field1;
};
struct  Trunk269027  {
Trunk269027* next;
NI key;
TY29419 bits;
};
struct  Freecell29427  {
Freecell29427* next;
NI zerofield;
};
struct  Tinstantiation293820  {
Tsym293830* sym;
Ttypeseq293832* concretetypes;
NI compilesid;
};
struct Tsymseq293800 {
  TGenericSeq Sup;
  Tsym293830* data[SEQ_DECL_SIZE];
};
struct TY431226 {
  TGenericSeq Sup;
  TY431227 data[SEQ_DECL_SIZE];
};
struct Ttypeseq293832 {
  TGenericSeq Sup;
  Ttype293836* data[SEQ_DECL_SIZE];
};
struct TY293925 {
  TGenericSeq Sup;
  Tinstantiation293820* data[SEQ_DECL_SIZE];
};
struct TY293956 {
  TGenericSeq Sup;
  TY293957 data[SEQ_DECL_SIZE];
};
struct Tnodeseq293792 {
  TGenericSeq Sup;
  Tnode293798* data[SEQ_DECL_SIZE];
};
struct Trunkseq269029 {
  TGenericSeq Sup;
  Trunk269027* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1025)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell47305*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_52601)(Cell47305* c);
N_NOINLINE(void, addzct_51417)(Cellseq47321* s, Cell47305* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NU8, samemethodbucket_431253)(Tsym293830* a, Tsym293830* b);
N_NIMCALL(NI, sonslen_296327)(Ttype293836* n);
N_NIMCALL(NIM_BOOL, sametypeornil_325442)(Ttype293836* a, Ttype293836* b, NU8 flags);
N_NIMCALL(Ttype293836*, skiptypes_297099)(Ttype293836* t, NU64 kinds);
N_NIMCALL(Ttype293836*, lastson_296377)(Ttype293836* n);
N_NIMCALL(NIM_BOOL, sametype_325432)(Ttype293836* a, Ttype293836* b, NU8 flags);
N_NIMCALL(NI, inheritancediff_327052)(Ttype293836* a, Ttype293836* b);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, attachdispatcher_431362)(Tsym293830* s, Tnode293798* dispatcher);
static N_INLINE(NI, len_294062)(Tnode293798* n);
N_NIMCALL(void, add_294117)(Tnode293798* father, Tnode293798* son);
N_NIMCALL(Tnode293798*, lastson_296364)(Tnode293798* n);
N_NIMCALL(void, fixupdispatcher_431466)(Tsym293830* meth, Tsym293830* disp);
N_NIMCALL(NI, sonslen_296351)(Tnode293798* n);
N_NIMCALL(Tnode293798*, copytree_297822)(Tnode293798* src);
N_NIMCALL(void, message_197095)(Tlineinfo192336 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen0);
N_NIMCALL(NimStringDesc*, HEX24_296069)(NI16 x);
N_NIMCALL(void, checkmethodeffects_403033)(Tsym293830* disp, Tsym293830* branch);
N_NIMCALL(void, localerror_197085)(Tlineinfo192336 info, NimStringDesc* arg);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(Tsym293830*, createdispatcher_431397)(Tsym293830* s);
N_NIMCALL(Tsym293830*, copysym_296601)(Tsym293830* s, NIM_BOOL keepid);
N_NIMCALL(Ttype293836*, copytype_296470)(Ttype293836* t, Tsym293830* owner, NIM_BOOL keepid);
N_NIMCALL(void, addson_295807)(Tnode293798* father, Tnode293798* son);
N_NIMCALL(Tnode293798*, newsymnode_295183)(Tsym293830* sym);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_86404, TNimType* mt);
N_NIMCALL(void, internalerror_197100)(Tlineinfo192336 info, NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, HEX24_193431)(Tlineinfo192336 info);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(Tnode293798*, genconv_431005)(Tnode293798* n, Ttype293836* d, NIM_BOOL downcast);
N_NIMCALL(Tnode293798*, newnodeit_295801)(NU8 kind, Tlineinfo192336 info, Ttype293836* typ);
N_NIMCALL(Tnode293798*, newnode_294401)(NU8 kind);
N_NIMCALL(void, initintset_269885)(Intset269031* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(NIM_BOOL, relevantcol_431896)(Tsymseq293800* methods, NI col);
N_NIMCALL(void, incl_269832)(Intset269031* s, NI key);
N_NIMCALL(void, sortbucket_431970)(Tsymseq293800** a, Intset269031* relevantcols);
N_NIMCALL(NI, cmpsignatures_431934)(Tsym293830* a, Tsym293830* b, Intset269031* relevantcols);
N_NIMCALL(NIM_BOOL, contains_269811)(Intset269031* s, NI key);
N_NIMCALL(Tsym293830*, gendispatcher_432010)(Tsymseq293800* methods, Intset269031* relevantcols);
N_NIMCALL(Tnode293798*, newnodei_295197)(NU8 kind, Tlineinfo192336 info);
N_NIMCALL(Tsym293830*, getsyssym_338041)(NimStringDesc* name);
N_NIMCALL(Ttype293836*, getsystype_338153)(NU8 kind);
STRING_LITERAL(TMP3524, "method has lock level $1, but another method has $2", 51);
STRING_LITERAL(TMP3532, "method is not a base", 20);
STRING_LITERAL(TMP3533, "no method dispatcher found", 26);
STRING_LITERAL(TMP3534, "invalid declaration order; cannot attach \'", 42);
STRING_LITERAL(TMP3535, "\' to method defined here: ", 26);
STRING_LITERAL(TMP3536, "", 0);
STRING_LITERAL(TMP3537, "cgmeth.genConv: no upcast allowed", 33);
STRING_LITERAL(TMP3538, "cgmeth.genConv: no downcast allowed", 35);
STRING_LITERAL(TMP4591, "and", 3);
STRING_LITERAL(TMP4592, "of", 2);
TY431226* gmethods_431246;
TNimType NTI431227; /* tuple[methods: TSymSeq, dispatcher: PSym] */
extern TNimType NTI293800; /* TSymSeq */
extern TNimType NTI293796; /* PSym */
TNimType NTI431226; /* seq[tuple[methods: TSymSeq, dispatcher: PSym]] */
extern Gcheap49818 gch_49855;
extern Tnode293798* emptynode_294801;
N_NIMCALL(void, TMP1025)(void* p, NI op) {
	TY431226* a;
	NI LOC1;
	a = (TY431226*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field0, op);
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

static N_INLINE(Cell47305*, usrtocell_51440)(void* usr) {
	Cell47305* result;
	result = 0;
	result = ((Cell47305*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell47305))))));
	return result;
}

static N_INLINE(void, rtladdzct_52601)(Cell47305* c) {
	addzct_51417((&gch_49855.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell47305* c;
	c = usrtocell_51440(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_52601(c);
	}
	LA3: ;
}

N_NIMCALL(NU8, samemethodbucket_431253)(Tsym293830* a, Tsym293830* b) {
	NU8 result;
{	result = 0;
	{
		if (!!(((*(*a).name).Sup.id == (*(*b).name).Sup.id))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI LOC7;
		NI LOC8;
		LOC7 = 0;
		LOC7 = sonslen_296327((*a).typ);
		LOC8 = 0;
		LOC8 = sonslen_296327((*b).typ);
		if (!!((LOC7 == LOC8))) goto LA9;
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = sametypeornil_325442((*(*a).typ).sons->data[((NI) 0)], (*(*b).typ).sons->data[((NI) 0)], 0);
		if (!!(LOC13)) goto LA14;
		goto BeforeRet;
	}
	LA14: ;
	{
		NI i_431276;
		NI HEX3Atmp_431355;
		NI LOC17;
		NI res_431358;
		i_431276 = 0;
		HEX3Atmp_431355 = 0;
		LOC17 = 0;
		LOC17 = sonslen_296327((*a).typ);
		HEX3Atmp_431355 = (NI)(LOC17 - ((NI) 1));
		res_431358 = ((NI) 1);
		{
			while (1) {
				Ttype293836* aa;
				Ttype293836* bb;
				if (!(res_431358 <= HEX3Atmp_431355)) goto LA19;
				i_431276 = res_431358;
				aa = (*(*a).typ).sons->data[i_431276];
				bb = (*(*b).typ).sons->data[i_431276];
				{
					while (1) {
						aa = skiptypes_297099(aa, 2048);
						bb = skiptypes_297099(bb, 2048);
						{
							NIM_BOOL LOC24;
							LOC24 = 0;
							LOC24 = ((*aa).kind == (*bb).kind);
							if (!(LOC24)) goto LA25;
							LOC24 = ((14680064 &((NU64)1<<((NU)((*aa).kind)&63U)))!=0);
							LA25: ;
							if (!LOC24) goto LA26;
							aa = lastson_296377(aa);
							bb = lastson_296377(bb);
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
					LOC31 = 0;
					LOC31 = sametype_325432(aa, bb, 0);
					if (!LOC31) goto LA32;
					{
						NIM_BOOL LOC36;
						LOC36 = 0;
						LOC36 = ((*aa).kind == ((NU8) 17));
						if (!(LOC36)) goto LA37;
						LOC36 = !((result == ((NU8) 1)));
						LA37: ;
						if (!LOC36) goto LA38;
						result = ((NU8) 2);
					}
					LA38: ;
				}
				goto LA29;
				LA32: ;
				{
					NIM_BOOL LOC41;
					NI diff;
					LOC41 = 0;
					LOC41 = ((*aa).kind == ((NU8) 17));
					if (!(LOC41)) goto LA42;
					LOC41 = ((*bb).kind == ((NU8) 17));
					LA42: ;
					if (!LOC41) goto LA43;
					diff = inheritancediff_327052(bb, aa);
					{
						if (!(diff < ((NI) 0))) goto LA47;
						{
							if (!!((result == ((NU8) 1)))) goto LA51;
							result = ((NU8) 2);
						}
						goto LA49;
						LA51: ;
						{
							result = ((NU8) 0);
							goto BeforeRet;
						}
						LA49: ;
					}
					goto LA45;
					LA47: ;
					{
						if (!!((diff == ((NI) IL64(9223372036854775807))))) goto LA55;
						result = ((NU8) 1);
					}
					goto LA45;
					LA55: ;
					{
						result = ((NU8) 0);
						goto BeforeRet;
					}
					LA45: ;
				}
				goto LA29;
				LA43: ;
				{
					result = ((NU8) 0);
					goto BeforeRet;
				}
				LA29: ;
				res_431358 += ((NI) 1);
			} LA19: ;
		}
	}
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47305* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47305* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_52601(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NI, len_294062)(Tnode293798* n) {
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

N_NIMCALL(void, attachdispatcher_431362)(Tsym293830* s, Tnode293798* dispatcher) {
	NI L;
	NI LOC1;
	Tnode293798* x;
	LOC1 = 0;
	LOC1 = len_294062((*s).ast);
	L = (NI)(LOC1 - ((NI) 1));
	x = (*(*s).ast).kindU.S6.sons->data[L];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = ((*x).kind == ((NU8) 3));
		if (!(LOC4)) goto LA5;
		LOC4 = (((*(*x).kindU.S4.sym).flags &(1U<<((NU)(((NU8) 25))&31U)))!=0);
		LA5: ;
		if (!LOC4) goto LA6;
		asgnRefNoCycle((void**) (&(*(*s).ast).kindU.S6.sons->data[L]), dispatcher);
	}
	goto LA2;
	LA6: ;
	{
		add_294117((*s).ast, dispatcher);
	}
	LA2: ;
}

N_NIMCALL(void, fixupdispatcher_431466)(Tsym293830* meth, Tsym293830* disp) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NI LOC5;
		NI LOC7;
		LOC3 = 0;
		LOC4 = 0;
		LOC5 = 0;
		LOC5 = sonslen_296351((*disp).ast);
		LOC4 = (((NI) 7) < LOC5);
		if (!(LOC4)) goto LA6;
		LOC7 = 0;
		LOC7 = sonslen_296351((*meth).ast);
		LOC4 = (((NI) 7) < LOC7);
		LA6: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		LOC3 = ((*(*disp).ast).kindU.S6.sons->data[((NI) 7)] == emptynode_294801);
		LA8: ;
		if (!LOC3) goto LA9;
		asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]), copytree_297822((*(*meth).ast).kindU.S6.sons->data[((NI) 7)]));
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
		TY194153 LOC20;
		NimStringDesc* LOC21;
		LOC16 = 0;
		LOC16 = !(((*(*meth).typ).locklevel == ((NI16) -1)));
		if (!(LOC16)) goto LA17;
		LOC16 = !(((*(*meth).typ).locklevel == (*(*disp).typ).locklevel));
		LA17: ;
		if (!LOC16) goto LA18;
		memset((void*)LOC20, 0, sizeof(LOC20));
		LOC20[0] = HEX24_296069((*(*meth).typ).locklevel);
		LOC20[1] = HEX24_296069((*(*disp).typ).locklevel);
		LOC21 = 0;
		LOC21 = nsuFormatOpenArray(((NimStringDesc*) &TMP3524), LOC20, 2);
		message_197095((*meth).info, ((NU16) 265), LOC21);
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

N_NIMCALL(Tsym293830*, createdispatcher_431397)(Tsym293830* s) {
	Tsym293830* result;
	Tsym293830* disp;
	Tnode293798* LOC15;
	Tnode293798* LOC16;
{	result = 0;
	disp = copysym_296601(s, NIM_FALSE);
	(*disp).flags |= ((NU32)1)<<((((NU8) 25))%(sizeof(NU32)*8));
	(*disp).flags &= ~(((NU32)1) << ((((NU8) 1)) % (sizeof(NU32)*8)));
	asgnRefNoCycle((void**) (&(*disp).typ), copytype_296470((*disp).typ, (*(*disp).typ).owner, NIM_FALSE));
	{
		if (!((*(*disp).typ).callconv == ((NU8) 5))) goto LA3;
		(*(*disp).typ).callconv = ((NU8) 0);
	}
	LA3: ;
	asgnRefNoCycle((void**) (&(*disp).ast), copytree_297822((*s).ast));
	asgnRefNoCycle((void**) (&(*(*disp).ast).kindU.S6.sons->data[((NI) 6)]), emptynode_294801);
	asgnRefNoCycle((void**) (&(*disp).loc.r), NIM_NIL);
	{
		if (!!(((*(*s).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA7;
		{
			NI LOC11;
			LOC11 = 0;
			LOC11 = sonslen_296351((*disp).ast);
			if (!(((NI) 7) < LOC11)) goto LA12;
			asgnRefNoCycle((void**) (&(*(*(*disp).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym), copysym_296601((*(*(*s).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym, NIM_FALSE));
		}
		goto LA9;
		LA12: ;
		{
			addson_295807((*disp).ast, emptynode_294801);
		}
		LA9: ;
	}
	LA7: ;
	LOC15 = 0;
	LOC15 = newsymnode_295183(disp);
	attachdispatcher_431362(s, LOC15);
	LOC16 = 0;
	LOC16 = newsymnode_295183(disp);
	attachdispatcher_431362(disp, LOC16);
	result = disp;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, methoddef_431628)(Tsym293830* s, NIM_BOOL fromcache) {
	NI L;
	Tsym293830* witness;
	TY431227 LOC19;
	TY344313 LOC20;
{	L = (gmethods_431246 ? gmethods_431246->Sup.len : 0);
	witness = 0;
	{
		NI i_431653;
		NI HEX3Atmp_431889;
		NI res_431892;
		i_431653 = 0;
		HEX3Atmp_431889 = 0;
		HEX3Atmp_431889 = (NI)(L - ((NI) 1));
		res_431892 = ((NI) 0);
		{
			while (1) {
				Tsym293830* disp;
				NU8 LOC4;
				if (!(res_431892 <= HEX3Atmp_431889)) goto LA3;
				i_431653 = res_431892;
				disp = gmethods_431246->data[i_431653].Field1;
				LOC4 = 0;
				LOC4 = samemethodbucket_431253(disp, s);
				switch (LOC4) {
				case ((NU8) 2):
				{
					Tnode293798* LOC6;
					gmethods_431246->data[i_431653].Field0 = (Tsymseq293800*) incrSeqV2(&(gmethods_431246->data[i_431653].Field0)->Sup, sizeof(Tsym293830*));
					asgnRefNoCycle((void**) (&gmethods_431246->data[i_431653].Field0->data[gmethods_431246->data[i_431653].Field0->Sup.len]), s);
					++gmethods_431246->data[i_431653].Field0->Sup.len;
					LOC6 = 0;
					LOC6 = lastson_296364((*disp).ast);
					attachdispatcher_431362(s, LOC6);
					fixupdispatcher_431466(s, disp);
					checkmethodeffects_403033(disp, s);
					{
						NIM_BOOL LOC9;
						LOC9 = 0;
						LOC9 = (((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0);
						if (!(LOC9)) goto LA10;
						LOC9 = !((gmethods_431246->data[i_431653].Field0->data[((NI) 0)] == s));
						LA10: ;
						if (!LOC9) goto LA11;
						localerror_197085((*s).info, ((NimStringDesc*) &TMP3532));
					}
					LA11: ;
					goto BeforeRet;
				}
				break;
				case ((NU8) 0):
				{
				}
				break;
				case ((NU8) 1):
				{
					{
						if (!witness == 0) goto LA17;
						witness = gmethods_431246->data[i_431653].Field0->data[((NI) 0)];
					}
					LA17: ;
				}
				break;
				}
				res_431892 += ((NI) 1);
			} LA3: ;
		}
	}
	memset((void*)(&LOC19), 0, sizeof(LOC19));
	LOC19.Field0 = (Tsymseq293800*) newSeq((&NTI293800), 1);
	memset((void*)LOC20, 0, sizeof(LOC20));
	LOC20[0] = s;
	asgnRefNoCycle((void**) (&LOC19.Field0->data[0]), LOC20[0]);
	LOC19.Field1 = createdispatcher_431397(s);
	gmethods_431246 = (TY431226*) incrSeqV2(&(gmethods_431246)->Sup, sizeof(TY431227));
	genericSeqAssign((&gmethods_431246->data[gmethods_431246->Sup.len].Field0), LOC19.Field0, (&NTI293800));
	asgnRefNoCycle((void**) (&gmethods_431246->data[gmethods_431246->Sup.len].Field1), LOC19.Field1);
	++gmethods_431246->Sup.len;
	{
		if (!fromcache) goto LA23;
		internalerror_197100((*s).info, ((NimStringDesc*) &TMP3533));
	}
	LA23: ;
	{
		NimStringDesc* LOC29;
		NimStringDesc* LOC30;
		if (!!((witness == NIM_NIL))) goto LA27;
		LOC29 = 0;
		LOC30 = 0;
		LOC30 = HEX24_193431((*witness).info);
		LOC29 = rawNewString((*(*s).name).s->Sup.len + LOC30->Sup.len + 68);
appendString(LOC29, ((NimStringDesc*) &TMP3534));
appendString(LOC29, (*(*s).name).s);
appendString(LOC29, ((NimStringDesc*) &TMP3535));
appendString(LOC29, LOC30);
		localerror_197085((*s).info, LOC29);
	}
	goto LA25;
	LA27: ;
	{
		if (!!((((*s).flags &(1U<<((NU)(((NU8) 18))&31U)))!=0))) goto LA32;
		message_197095((*s).info, ((NU16) 252), ((NimStringDesc*) &TMP3536));
	}
	goto LA25;
	LA32: ;
	LA25: ;
	}BeforeRet: ;
}

N_NIMCALL(Tnode293798*, genconv_431005)(Tnode293798* n, Ttype293836* d, NIM_BOOL downcast) {
	Tnode293798* result;
	Ttype293836* dest;
	Ttype293836* source;
	result = 0;
	dest = skiptypes_297099(d, IL64(211106247256320));
	source = skiptypes_297099((*n).typ, IL64(211106247256320));
	{
		NIM_BOOL LOC3;
		NI diff;
		LOC3 = 0;
		LOC3 = ((*source).kind == ((NU8) 17));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*dest).kind == ((NU8) 17));
		LA4: ;
		if (!LOC3) goto LA5;
		diff = inheritancediff_327052(dest, source);
		{
			if (!(diff == ((NI) IL64(9223372036854775807)))) goto LA9;
			result = n;
		}
		goto LA7;
		LA9: ;
		{
			if (!(diff < ((NI) 0))) goto LA12;
			result = newnodeit_295801(((NU8) 67), (*n).info, d);
			addson_295807(result, n);
			{
				if (!downcast) goto LA16;
				internalerror_197100((*n).info, ((NimStringDesc*) &TMP3537));
			}
			LA16: ;
		}
		goto LA7;
		LA12: ;
		{
			if (!(((NI) 0) < diff)) goto LA19;
			result = newnodeit_295801(((NU8) 66), (*n).info, d);
			addson_295807(result, n);
			{
				if (!!(downcast)) goto LA23;
				internalerror_197100((*n).info, ((NimStringDesc*) &TMP3538));
			}
			LA23: ;
		}
		goto LA7;
		LA19: ;
		{
			result = n;
		}
		LA7: ;
	}
	goto LA1;
	LA5: ;
	{
		result = n;
	}
	LA1: ;
	return result;
}

N_NIMCALL(Tnode293798*, methodcall_431036)(Tnode293798* n) {
	Tnode293798* result;
	Tsym293830* disp;
	Tnode293798* LOC1;
	result = 0;
	result = n;
	LOC1 = 0;
	LOC1 = lastson_296364((*(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).ast);
	disp = (*LOC1).kindU.S4.sym;
	asgnRefNoCycle((void**) (&(*(*result).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym), disp);
	{
		NI i_431214;
		NI HEX3Atmp_431219;
		NI LOC3;
		NI res_431222;
		i_431214 = 0;
		HEX3Atmp_431219 = 0;
		LOC3 = 0;
		LOC3 = sonslen_296351(result);
		HEX3Atmp_431219 = (NI)(LOC3 - ((NI) 1));
		res_431222 = ((NI) 1);
		{
			while (1) {
				if (!(res_431222 <= HEX3Atmp_431219)) goto LA5;
				i_431214 = res_431222;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.sons->data[i_431214]), genconv_431005((*result).kindU.S6.sons->data[i_431214], (*(*disp).typ).sons->data[i_431214], NIM_TRUE));
				res_431222 += ((NI) 1);
			} LA5: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, relevantcol_431896)(Tsymseq293800* methods, NI col) {
	NIM_BOOL result;
	Ttype293836* t;
{	result = 0;
	t = skiptypes_297099((*(*methods->data[((NI) 0)]).typ).sons->data[col], IL64(211106247215360));
	{
		if (!((*t).kind == ((NU8) 17))) goto LA3;
		{
			NI i_431923;
			NI HEX3Atmp_431927;
			NI res_431930;
			i_431923 = 0;
			HEX3Atmp_431927 = 0;
			HEX3Atmp_431927 = (methods ? (methods->Sup.len-1) : -1);
			res_431930 = ((NI) 1);
			{
				while (1) {
					Ttype293836* t2;
					if (!(res_431930 <= HEX3Atmp_431927)) goto LA7;
					i_431923 = res_431930;
					t2 = skiptypes_297099((*(*methods->data[i_431923]).typ).sons->data[col], IL64(211106247215360));
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = sametype_325432(t2, t, 0);
						if (!!(LOC10)) goto LA11;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA11: ;
					res_431930 += ((NI) 1);
				} LA7: ;
			}
		}
	}
	LA3: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, cmpsignatures_431934)(Tsym293830* a, Tsym293830* b, Intset269031* relevantcols) {
	NI result;
{	result = 0;
	{
		NI col_431952;
		NI HEX3Atmp_431963;
		NI LOC2;
		NI res_431966;
		col_431952 = 0;
		HEX3Atmp_431963 = 0;
		LOC2 = 0;
		LOC2 = sonslen_296327((*a).typ);
		HEX3Atmp_431963 = (NI)(LOC2 - ((NI) 1));
		res_431966 = ((NI) 1);
		{
			while (1) {
				if (!(res_431966 <= HEX3Atmp_431963)) goto LA4;
				col_431952 = res_431966;
				{
					NIM_BOOL LOC7;
					Ttype293836* aa;
					Ttype293836* bb;
					NI d;
					LOC7 = 0;
					LOC7 = contains_269811(relevantcols, col_431952);
					if (!LOC7) goto LA8;
					aa = skiptypes_297099((*(*a).typ).sons->data[col_431952], IL64(211106247215360));
					bb = skiptypes_297099((*(*b).typ).sons->data[col_431952], IL64(211106247215360));
					d = inheritancediff_327052(aa, bb);
					{
						NIM_BOOL LOC12;
						LOC12 = 0;
						LOC12 = !((d == ((NI) IL64(9223372036854775807))));
						if (!(LOC12)) goto LA13;
						LOC12 = !((d == ((NI) 0)));
						LA13: ;
						if (!LOC12) goto LA14;
						result = d;
						goto BeforeRet;
					}
					LA14: ;
				}
				LA8: ;
				res_431966 += ((NI) 1);
			} LA4: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, sortbucket_431970)(Tsymseq293800** a, Intset269031* relevantcols) {
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
				NI i_431996;
				NI HEX3Atmp_432003;
				NI res_432006;
				i_431996 = 0;
				HEX3Atmp_432003 = 0;
				HEX3Atmp_432003 = (NI)(n - ((NI) 1));
				res_432006 = h;
				{
					while (1) {
						Tsym293830* v;
						NI j;
						if (!(res_432006 <= HEX3Atmp_432003)) goto LA11;
						i_431996 = res_432006;
						v = (*a)->data[i_431996];
						j = i_431996;
						{
							while (1) {
								NI LOC14;
								LOC14 = 0;
								LOC14 = cmpsignatures_431934((*a)->data[(NI)(j - h)], v, relevantcols);
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
						res_432006 += ((NI) 1);
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

N_NIMCALL(Tsym293830*, gendispatcher_432010)(Tsymseq293800* methods, Intset269031* relevantcols) {
	Tsym293830* result;
	Tsym293830* base;
	Tnode293798* LOC1;
	NI paramlen;
	Tnode293798* disp;
	Tsym293830* ands;
	Tsym293830* iss;
	result = 0;
	LOC1 = 0;
	LOC1 = lastson_296364((*methods->data[((NI) 0)]).ast);
	base = (*LOC1).kindU.S4.sym;
	result = base;
	paramlen = sonslen_296327((*base).typ);
	disp = newnodei_295197(((NU8) 92), (*base).info);
	ands = getsyssym_338041(((NimStringDesc*) &TMP4591));
	iss = getsyssym_338041(((NimStringDesc*) &TMP4592));
	{
		NI meth_432035;
		NI HEX3Atmp_432144;
		NI res_432147;
		meth_432035 = 0;
		HEX3Atmp_432144 = 0;
		HEX3Atmp_432144 = (methods ? (methods->Sup.len-1) : -1);
		res_432147 = ((NI) 0);
		{
			while (1) {
				Tsym293830* curr;
				Tnode293798* cond;
				Tnode293798* call;
				Tnode293798* LOC24;
				Tnode293798* ret;
				if (!(res_432147 <= HEX3Atmp_432144)) goto LA4;
				meth_432035 = res_432147;
				curr = methods->data[meth_432035];
				cond = NIM_NIL;
				{
					NI col_432049;
					NI HEX3Atmp_432128;
					NI res_432131;
					col_432049 = 0;
					HEX3Atmp_432128 = 0;
					HEX3Atmp_432128 = (NI)(paramlen - ((NI) 1));
					res_432131 = ((NI) 1);
					{
						while (1) {
							if (!(res_432131 <= HEX3Atmp_432128)) goto LA7;
							col_432049 = res_432131;
							{
								NIM_BOOL LOC10;
								Tnode293798* isn;
								Ttype293836* LOC13;
								Tnode293798* LOC14;
								Tnode293798* LOC15;
								Tnode293798* LOC16;
								LOC10 = 0;
								LOC10 = contains_269811(relevantcols, col_432049);
								if (!LOC10) goto LA11;
								LOC13 = 0;
								LOC13 = getsystype_338153(((NU8) 1));
								isn = newnodeit_295801(((NU8) 27), (*base).info, LOC13);
								LOC14 = 0;
								LOC14 = newsymnode_295183(iss);
								addson_295807(isn, LOC14);
								LOC15 = 0;
								LOC15 = newsymnode_295183((*(*(*(*base).typ).n).kindU.S6.sons->data[col_432049]).kindU.S4.sym);
								addson_295807(isn, LOC15);
								LOC16 = 0;
								LOC16 = newnodeit_295801(((NU8) 4), (*base).info, (*(*curr).typ).sons->data[col_432049]);
								addson_295807(isn, LOC16);
								{
									Tnode293798* a;
									Ttype293836* LOC21;
									Tnode293798* LOC22;
									if (!!((cond == NIM_NIL))) goto LA19;
									LOC21 = 0;
									LOC21 = getsystype_338153(((NU8) 1));
									a = newnodeit_295801(((NU8) 27), (*base).info, LOC21);
									LOC22 = 0;
									LOC22 = newsymnode_295183(ands);
									addson_295807(a, LOC22);
									addson_295807(a, cond);
									addson_295807(a, isn);
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
							res_432131 += ((NI) 1);
						} LA7: ;
					}
				}
				call = newnodei_295197(((NU8) 27), (*base).info);
				LOC24 = 0;
				LOC24 = newsymnode_295183(curr);
				addson_295807(call, LOC24);
				{
					NI col_432084;
					NI HEX3Atmp_432136;
					NI res_432139;
					col_432084 = 0;
					HEX3Atmp_432136 = 0;
					HEX3Atmp_432136 = (NI)(paramlen - ((NI) 1));
					res_432139 = ((NI) 1);
					{
						while (1) {
							Tnode293798* LOC28;
							Tnode293798* LOC29;
							if (!(res_432139 <= HEX3Atmp_432136)) goto LA27;
							col_432084 = res_432139;
							LOC28 = 0;
							LOC28 = newsymnode_295183((*(*(*(*base).typ).n).kindU.S6.sons->data[col_432084]).kindU.S4.sym);
							LOC29 = 0;
							LOC29 = genconv_431005(LOC28, (*(*curr).typ).sons->data[col_432084], NIM_FALSE);
							addson_295807(call, LOC29);
							res_432139 += ((NI) 1);
						} LA27: ;
					}
				}
				ret = 0;
				{
					Tnode293798* a;
					Tnode293798* LOC34;
					if (!!(((*(*base).typ).sons->data[((NI) 0)] == NIM_NIL))) goto LA32;
					a = newnodei_295197(((NU8) 74), (*base).info);
					LOC34 = 0;
					LOC34 = newsymnode_295183((*(*(*base).ast).kindU.S6.sons->data[((NI) 7)]).kindU.S4.sym);
					addson_295807(a, LOC34);
					addson_295807(a, call);
					ret = newnodei_295197(((NU8) 109), (*base).info);
					addson_295807(ret, a);
				}
				goto LA30;
				LA32: ;
				{
					ret = call;
				}
				LA30: ;
				{
					Tnode293798* a;
					if (!!((cond == NIM_NIL))) goto LA38;
					a = newnodei_295197(((NU8) 86), (*base).info);
					addson_295807(a, cond);
					addson_295807(a, ret);
					addson_295807(disp, a);
				}
				goto LA36;
				LA38: ;
				{
					disp = ret;
				}
				LA36: ;
				res_432147 += ((NI) 1);
			} LA4: ;
		}
	}
	asgnRefNoCycle((void**) (&(*(*result).ast).kindU.S6.sons->data[((NI) 6)]), disp);
	return result;
}

N_NIMCALL(Tnode293798*, generatemethoddispatchers_432151)(void) {
	Tnode293798* result;
	result = 0;
	result = newnode_294401(((NU8) 115));
	{
		NI bucket_432173;
		NI HEX3Atmp_432199;
		NI res_432202;
		bucket_432173 = 0;
		HEX3Atmp_432199 = 0;
		HEX3Atmp_432199 = (NI)((gmethods_431246 ? gmethods_431246->Sup.len : 0) - ((NI) 1));
		res_432202 = ((NI) 0);
		{
			while (1) {
				Intset269031 relevantcols;
				Tsym293830* LOC13;
				Tnode293798* LOC14;
				if (!(res_432202 <= HEX3Atmp_432199)) goto LA3;
				bucket_432173 = res_432202;
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				chckNil((void*)(&relevantcols));
				memset((void*)(&relevantcols), 0, sizeof(relevantcols));
				initintset_269885((&relevantcols));
				{
					NI col_432187;
					NI HEX3Atmp_432192;
					NI LOC5;
					NI res_432195;
					col_432187 = 0;
					HEX3Atmp_432192 = 0;
					LOC5 = 0;
					LOC5 = sonslen_296327((*gmethods_431246->data[bucket_432173].Field0->data[((NI) 0)]).typ);
					HEX3Atmp_432192 = (NI)(LOC5 - ((NI) 1));
					res_432195 = ((NI) 1);
					{
						while (1) {
							if (!(res_432195 <= HEX3Atmp_432192)) goto LA7;
							col_432187 = res_432195;
							{
								NIM_BOOL LOC10;
								LOC10 = 0;
								LOC10 = relevantcol_431896(gmethods_431246->data[bucket_432173].Field0, col_432187);
								if (!LOC10) goto LA11;
								incl_269832((&relevantcols), col_432187);
							}
							LA11: ;
							res_432195 += ((NI) 1);
						} LA7: ;
					}
				}
				sortbucket_431970((&gmethods_431246->data[bucket_432173].Field0), (&relevantcols));
				LOC13 = 0;
				LOC13 = gendispatcher_432010(gmethods_431246->data[bucket_432173].Field0, (&relevantcols));
				LOC14 = 0;
				LOC14 = newsymnode_295183(LOC13);
				addson_295807(result, LOC14);
				res_432202 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgmethInit000)(void) {
	if (gmethods_431246) nimGCunrefNoCycle(gmethods_431246);
	gmethods_431246 = (TY431226*) newSeqRC1((&NTI431226), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgmethDatInit000)(void) {
static TNimNode* TMP1024[2];
static TNimNode TMP1022[3];
NTI431227.size = sizeof(TY431227);
NTI431227.kind = 18;
NTI431227.base = 0;
NTI431227.flags = 2;
TMP1024[0] = &TMP1022[1];
TMP1022[1].kind = 1;
TMP1022[1].offset = offsetof(TY431227, Field0);
TMP1022[1].typ = (&NTI293800);
TMP1022[1].name = "Field0";
TMP1024[1] = &TMP1022[2];
TMP1022[2].kind = 1;
TMP1022[2].offset = offsetof(TY431227, Field1);
TMP1022[2].typ = (&NTI293796);
TMP1022[2].name = "Field1";
TMP1022[0].len = 2; TMP1022[0].kind = 2; TMP1022[0].sons = &TMP1024[0];
NTI431227.node = &TMP1022[0];
NTI431226.size = sizeof(TY431226*);
NTI431226.kind = 24;
NTI431226.base = (&NTI431227);
NTI431226.flags = 2;
NTI431226.marker = TMP1025;
}
