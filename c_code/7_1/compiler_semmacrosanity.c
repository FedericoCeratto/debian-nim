/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode264794 Tnode264794;
typedef struct Ttype264832 Ttype264832;
typedef struct Tlineinfo186336 Tlineinfo186336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym264826 Tsym264826;
typedef struct Tident194012 Tident194012;
typedef struct Tnodeseq264788 Tnodeseq264788;
typedef struct Cell47905 Cell47905;
typedef struct TNimType TNimType;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30085 Memregion30085;
typedef struct Smallchunk30039 Smallchunk30039;
typedef struct Llchunk30079 Llchunk30079;
typedef struct Bigchunk30041 Bigchunk30041;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30083 Avlnode30083;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct Tidobj194006 Tidobj194006;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq264828 Ttypeseq264828;
typedef struct Tloc264808 Tloc264808;
typedef struct Ropeobj173006 Ropeobj173006;
typedef struct TY198019 TY198019;
typedef struct Tscope264820 Tscope264820;
typedef struct TY264927 TY264927;
typedef struct Tstrtable264798 Tstrtable264798;
typedef struct Tsymseq264796 Tsymseq264796;
typedef struct Tlib264812 Tlib264812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation264816 Tinstantiation264816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY264917 TY264917;
typedef NU64 Ttypekind264244Set;
struct  Tlineinfo186336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag264427Set;
typedef NU8 Tnodekind264020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode264794  {
Ttype264832* typ;
Tlineinfo186336 info;
Tnodeflag264427Set flags;
Tnodekind264020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym264826* sym;
} S4;
struct {Tident194012* ident;
} S5;
struct {Tnodeseq264788* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct  Cell47905  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47921  {
NI len;
NI cap;
Cell47905** d;
};
typedef Smallchunk30039* TY30100[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30085  {
NI minlargeobj;
NI maxlargeobj;
TY30100 freesmallchunks;
Llchunk30079* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30041* freechunkslist;
Intset30014 chunkstarts;
Avlnode30083* root;
Avlnode30083* deleted;
Avlnode30083* last;
Avlnode30083* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47917  {
NI counter;
NI max;
Pagedesc47913* head;
Pagedesc47913** data;
};
struct  Gcheap50418  {
Gcstack50416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47921 zct;
Cellseq47921 decstack;
Cellseq47921 tempstack;
NI recgclock;
Memregion30085 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
typedef NU8 Tnimkind3203;
typedef NU8 Tnimtypeflag3209Set;
typedef N_NIMCALL_PTR(void, TY3289) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3203 kind;
Tnimtypeflag3209Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj194006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind264244;
typedef NU8 Tcallingconvention264002;
typedef NU32 Ttypeflag264431Set;
typedef NU8 Tlockind264800;
typedef NU8 Tstorageloc264804;
typedef NU16 Tlocflag264802Set;
struct  Tloc264808  {
Tlockind264800 k;
Tstorageloc264804 s;
Tlocflag264802Set flags;
Ttype264832* t;
Ropeobj173006* r;
Ropeobj173006* heaproot;
};
struct  Ttype264832  {
  Tidobj194006 Sup;
Ttypekind264244 kind;
Tcallingconvention264002 callconv;
Ttypeflag264431Set flags;
Ttypeseq264828* sons;
Tnode264794* n;
Tsym264826* owner;
Tsym264826* sym;
Tsym264826* destructor;
Tsym264826* deepcopy;
Tsym264826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc264808 loc;
};
struct TY198019 {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind264435;
struct  Tstrtable264798  {
NI counter;
Tsymseq264796* data;
};
typedef NU8 Tmagic264525;
typedef NU32 Tsymflag264184Set;
typedef NU32 Toption164009Set;
struct  Tsym264826  {
  Tidobj194006 Sup;
Tsymkind264435 kind;
union{
struct {Ttypeseq264828* typeinstcache;
Tscope264820* typscope;
} S1;
struct {TY264927* procinstcache;
Tsym264826* gcunsafetyreason;
} S2;
struct {TY264927* usedgenerics;
Tstrtable264798 tab;
} S3;
struct {Tsym264826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic264525 magic;
Ttype264832* typ;
Tident194012* name;
Tlineinfo186336 info;
Tsym264826* owner;
Tsymflag264184Set flags;
Tnode264794* ast;
Toption164009Set options;
NI position;
NI offset;
Tloc264808 loc;
Tlib264812* annex;
Tnode264794* constraint;
};
struct  Tident194012  {
  Tidobj194006 Sup;
NimStringDesc* s;
Tident194012* next;
NI h;
};
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30037  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30039  {
  Basechunk30037 Sup;
Smallchunk30039* next;
Smallchunk30039* prev;
Freecell30029* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30079  {
NI size;
NI acc;
Llchunk30079* next;
};
struct  Bigchunk30041  {
  Basechunk30037 Sup;
Bigchunk30041* next;
Bigchunk30041* prev;
NI align;
NF data;
};
typedef NI TY30018[16];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30018 bits;
};
typedef Avlnode30083* TY30090[2];
struct  Avlnode30083  {
TY30090 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30018 bits;
};
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Ropeobj173006  {
  TNimObject Sup;
Ropeobj173006* left;
Ropeobj173006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope264820  {
NI depthlevel;
Tstrtable264798 symbols;
Tscope264820* parent;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind264810;
struct  Tlib264812  {
  Tlistentry141010 Sup;
Tlibkind264810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj173006* name;
Tnode264794* path;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation264816  {
Tsym264826* sym;
Ttypeseq264828* concretetypes;
TY264917* usedby;
NI compilesid;
};
struct Tnodeseq264788 {
  TGenericSeq Sup;
  Tnode264794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq264828 {
  TGenericSeq Sup;
  Ttype264832* data[SEQ_DECL_SIZE];
};
struct TY264927 {
  TGenericSeq Sup;
  Tinstantiation264816* data[SEQ_DECL_SIZE];
};
struct Tsymseq264796 {
  TGenericSeq Sup;
  Tsym264826* data[SEQ_DECL_SIZE];
};
struct TY264917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype264832*, skiptypes_268113_850551059)(Ttype264832* t0, Ttypekind264244Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0);
N_NIMCALL(Tsym264826*, ithfield_445003_658252590)(Tnode264794* n0, NI* field0);
N_NIMCALL(NI, sonslen_267351_850551059)(Tnode264794* n0);
N_NIMCALL(void, internalerror_191100_155036129)(Tlineinfo186336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode264794*, lastson_267364_850551059)(Tnode264794* n0);
N_NIMCALL(void, globalerror_191076_155036129)(Tlineinfo186336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_191113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_191183_1689653243)(TY198019 x0);
N_NIMCALL(void, annotatetype_445109_658252590)(Tnode264794* n0, Ttype264832* t0);
N_NIMCALL(NI, len_267339_850551059)(Ttype264832* n0);
N_NIMCALL(Ttype264832*, elemtype_291394_3876443242)(Ttype264832* t0);
STRING_LITERAL(TMP3631, "ithField", 8);
STRING_LITERAL(TMP3632, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3633, "invalid field at index ", 23);
STRING_LITERAL(TMP3635, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY198019 TMP3634 = {((NimStringDesc*) &TMP3635),
((NI) 51)}
;
STRING_LITERAL(TMP3636, "() must have a tuple type", 25);
STRING_LITERAL(TMP3637, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3638, "{} must have the set type", 25);
STRING_LITERAL(TMP3639, "float literal must have some float type", 39);
STRING_LITERAL(TMP3640, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3641, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3642, "nil literal must be of some pointer type", 40);
extern Gcheap50418 gch_50458_1689653243;

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell47905* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52040_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47905* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52040_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(NI, len_265080_850551059)(Tnode264794* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*n0).kindU.S6.sons == 0) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym264826*, ithfield_445003_658252590)(Tnode264794* n0, NI* field0) {
	Tsym264826* result0;
{	result0 = (Tsym264826*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind264020) 138):
	{
		{
			NI i_445020_658252590;
			NI HEX3Atmp_445094_658252590;
			NI LOC3;
			NI res_445097_658252590;
			i_445020_658252590 = (NI)0;
			HEX3Atmp_445094_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_267351_850551059(n0);
			HEX3Atmp_445094_658252590 = (NI)(LOC3 - ((NI) 1));
			res_445097_658252590 = ((NI) 0);
			{
				while (1) {
					if (!(res_445097_658252590 <= HEX3Atmp_445094_658252590)) goto LA5;
					i_445020_658252590 = res_445097_658252590;
					result0 = ithfield_445003_658252590((*n0).kindU.S6.sons->data[i_445020_658252590], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_445097_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind264020) 3)))) goto LA13;
			internalerror_191100_155036129((*n0).info, ((NimStringDesc*) &TMP3631));
		}
		LA13: ;
		result0 = ithfield_445003_658252590((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_445068_658252590;
			NI HEX3Atmp_445102_658252590;
			NI LOC20;
			NI res_445105_658252590;
			i_445068_658252590 = (NI)0;
			HEX3Atmp_445102_658252590 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_267351_850551059(n0);
			HEX3Atmp_445102_658252590 = (NI)(LOC20 - ((NI) 1));
			res_445105_658252590 = ((NI) 1);
			{
				while (1) {
					if (!(res_445105_658252590 <= HEX3Atmp_445102_658252590)) goto LA22;
					i_445068_658252590 = res_445105_658252590;
					switch ((*(*n0).kindU.S6.sons->data[i_445068_658252590]).kind) {
					case ((Tnodekind264020) 85):
					case ((Tnodekind264020) 88):
					{
						Tnode264794* LOC24;
						LOC24 = (Tnode264794*)0;
						LOC24 = lastson_267364_850551059((*n0).kindU.S6.sons->data[i_445068_658252590]);
						result0 = ithfield_445003_658252590(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_191100_155036129((*n0).info, ((NimStringDesc*) &TMP3632));
					}
					break;
					}
					res_445105_658252590 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 3):
	{
		{
			if (!((*field0) == ((NI) 0))) goto LA33;
			result0 = (*n0).kindU.S4.sym;
		}
		goto LA31;
		LA33: ;
		{
			(*field0) -= ((NI) 1);
		}
		LA31: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, annotatetype_445109_658252590)(Tnode264794* n0, Ttype264832* t0) {
	Ttype264832* x_445126_658252590;
	x_445126_658252590 = skiptypes_268113_850551059(t0, IL64(211106233624832));
	switch ((*n0).kind) {
	case ((Tnodekind264020) 38):
	{
		Ttype264832* x0;
		x0 = skiptypes_268113_850551059(t0, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_445146_658252590;
			NI HEX3Atmp_445295_658252590;
			NI LOC3;
			NI res_445298_658252590;
			i_445146_658252590 = (NI)0;
			HEX3Atmp_445295_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_265080_850551059(n0);
			HEX3Atmp_445295_658252590 = (LOC3 - 1);
			res_445298_658252590 = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym264826* field0;
					if (!(res_445298_658252590 <= HEX3Atmp_445295_658252590)) goto LA5;
					i_445146_658252590 = res_445298_658252590;
					j0 = (NI)(i_445146_658252590 - ((NI) 1));
					field0 = ithfield_445003_658252590((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field0 == 0) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_445146_658252590);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &TMP3633));
appendString(LOC10, LOC11);
						globalerror_191076_155036129((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_445146_658252590]).kind == ((Tnodekind264020) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_191183_1689653243(TMP3634);
							internalerror_191113_155036129(LOC17);
						}
						LA15: ;
						annotatetype_445109_658252590((*(*n0).kindU.S6.sons->data[i_445146_658252590]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_445298_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind264020) 37):
	{
		{
			if (!((*x_445126_658252590).kind == ((Ttypekind264244) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_445207_658252590;
				NI HEX3Atmp_445303_658252590;
				NI LOC24;
				NI res_445306_658252590;
				i_445207_658252590 = (NI)0;
				HEX3Atmp_445303_658252590 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_265080_850551059(n0);
				HEX3Atmp_445303_658252590 = (LOC24 - 1);
				res_445306_658252590 = ((NI) 0);
				{
					while (1) {
						if (!(res_445306_658252590 <= HEX3Atmp_445303_658252590)) goto LA26;
						i_445207_658252590 = res_445306_658252590;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_267339_850551059(x_445126_658252590);
							if (!(LOC29 <= i_445207_658252590)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_445207_658252590);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &TMP3633));
appendString(LOC32, LOC33);
							globalerror_191076_155036129((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_445109_658252590((*n0).kindU.S6.sons->data[i_445207_658252590], (*x_445126_658252590).sons->data[i_445207_658252590]);
						}
						LA27: ;
						res_445306_658252590 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_445126_658252590).kind == ((Ttypekind264244) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_445126_658252590).callconv == ((Tcallingconvention264002) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3636));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind264020) 41):
	{
		{
			if (!((*x_445126_658252590).kind == ((Ttypekind264244) 4) || (*x_445126_658252590).kind == ((Ttypekind264244) 16) || (*x_445126_658252590).kind == ((Ttypekind264244) 24) || (*x_445126_658252590).kind == ((Ttypekind264244) 27))) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode264794* m_445238_658252590;
				m_445238_658252590 = (Tnode264794*)0;
				{
					NI i_445314_658252590;
					NI HEX3Atmp_445316_658252590;
					NI LOC48;
					NI res_445318_658252590;
					i_445314_658252590 = (NI)0;
					HEX3Atmp_445316_658252590 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_265080_850551059(n0);
					HEX3Atmp_445316_658252590 = (LOC48 - 1);
					res_445318_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype264832* LOC51;
							if (!(res_445318_658252590 <= HEX3Atmp_445316_658252590)) goto LA50;
							i_445314_658252590 = res_445318_658252590;
							m_445238_658252590 = (*n0).kindU.S6.sons->data[i_445314_658252590];
							LOC51 = (Ttype264832*)0;
							LOC51 = elemtype_291394_3876443242(x_445126_658252590);
							annotatetype_445109_658252590(m_445238_658252590, LOC51);
							res_445318_658252590 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3637));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind264020) 39):
	{
		{
			if (!((*x_445126_658252590).kind == ((Ttypekind264244) 19))) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode264794* m_445250_658252590;
				m_445250_658252590 = (Tnode264794*)0;
				{
					NI i_445325_658252590;
					NI HEX3Atmp_445327_658252590;
					NI LOC60;
					NI res_445329_658252590;
					i_445325_658252590 = (NI)0;
					HEX3Atmp_445327_658252590 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_265080_850551059(n0);
					HEX3Atmp_445327_658252590 = (LOC60 - 1);
					res_445329_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype264832* LOC63;
							if (!(res_445329_658252590 <= HEX3Atmp_445327_658252590)) goto LA62;
							i_445325_658252590 = res_445329_658252590;
							m_445250_658252590 = (*n0).kindU.S6.sons->data[i_445325_658252590];
							LOC63 = (Ttype264832*)0;
							LOC63 = elemtype_291394_3876443242(x_445126_658252590);
							annotatetype_445109_658252590(m_445250_658252590, LOC63);
							res_445329_658252590 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3638));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind264020) 16) ... ((Tnodekind264020) 19):
	{
		{
			if (!((*x_445126_658252590).kind >= ((Ttypekind264244) 36) && (*x_445126_658252590).kind <= ((Ttypekind264244) 39))) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3639));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind264020) 5) ... ((Tnodekind264020) 15):
	{
		{
			if (!((*x_445126_658252590).kind >= ((Ttypekind264244) 31) && (*x_445126_658252590).kind <= ((Ttypekind264244) 44) || (*x_445126_658252590).kind == ((Ttypekind264244) 1) || (*x_445126_658252590).kind == ((Ttypekind264244) 2) || (*x_445126_658252590).kind == ((Ttypekind264244) 14))) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3640));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind264020) 20) ... ((Tnodekind264020) 22):
	{
		{
			if (!((*x_445126_658252590).kind == ((Ttypekind264244) 28) || (*x_445126_658252590).kind == ((Ttypekind264244) 29))) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3641));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind264020) 23):
	{
		{
			if (!((*x_445126_658252590).kind == ((Ttypekind264244) 26) || (*x_445126_658252590).kind == ((Ttypekind264244) 29) || (*x_445126_658252590).kind == ((Ttypekind264244) 22) || (*x_445126_658252590).kind == ((Ttypekind264244) 21) || (*x_445126_658252590).kind == ((Ttypekind264244) 24) || (*x_445126_658252590).kind == ((Ttypekind264244) 25) || (*x_445126_658252590).kind == ((Ttypekind264244) 28) || (*x_445126_658252590).kind == ((Ttypekind264244) 50))) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_191076_155036129((*n0).info, ((NimStringDesc*) &TMP3642));
		}
		LA84: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit000)(void) {
}

