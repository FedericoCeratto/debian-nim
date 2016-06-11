/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
typedef struct Tnode263794 Tnode263794;
typedef struct Ttype263832 Ttype263832;
typedef struct Tlineinfo185336 Tlineinfo185336;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym263826 Tsym263826;
typedef struct Tident193012 Tident193012;
typedef struct Tnodeseq263788 Tnodeseq263788;
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
typedef struct Tidobj193006 Tidobj193006;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq263828 Ttypeseq263828;
typedef struct Tloc263808 Tloc263808;
typedef struct Ropeobj172006 Ropeobj172006;
typedef struct TY197019 TY197019;
typedef struct Tscope263820 Tscope263820;
typedef struct TY263927 TY263927;
typedef struct Tstrtable263798 Tstrtable263798;
typedef struct Tsymseq263796 Tsymseq263796;
typedef struct Tlib263812 Tlib263812;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
typedef struct Tinstantiation263816 Tinstantiation263816;
typedef struct Tlistentry141010 Tlistentry141010;
typedef struct TY263917 TY263917;
typedef NU64 Ttypekind263244Set;
struct  Tlineinfo185336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag263427Set;
typedef NU8 Tnodekind263020;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode263794  {
Ttype263832* typ;
Tlineinfo185336 info;
Tnodeflag263427Set flags;
Tnodekind263020 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym263826* sym;
} S4;
struct {Tident193012* ident;
} S5;
struct {Tnodeseq263788* sons;
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
struct  Tidobj193006  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind263244;
typedef NU8 Tcallingconvention263002;
typedef NU32 Ttypeflag263431Set;
typedef NU8 Tlockind263800;
typedef NU8 Tstorageloc263804;
typedef NU16 Tlocflag263802Set;
struct  Tloc263808  {
Tlockind263800 k;
Tstorageloc263804 s;
Tlocflag263802Set flags;
Ttype263832* t;
Ropeobj172006* r;
Ropeobj172006* heaproot;
};
struct  Ttype263832  {
  Tidobj193006 Sup;
Ttypekind263244 kind;
Tcallingconvention263002 callconv;
Ttypeflag263431Set flags;
Ttypeseq263828* sons;
Tnode263794* n;
Tsym263826* owner;
Tsym263826* sym;
Tsym263826* destructor;
Tsym263826* deepcopy;
Tsym263826* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc263808 loc;
};
struct TY197019 {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind263435;
struct  Tstrtable263798  {
NI counter;
Tsymseq263796* data;
};
typedef NU8 Tmagic263525;
typedef NU32 Tsymflag263184Set;
typedef NU32 Toption163009Set;
struct  Tsym263826  {
  Tidobj193006 Sup;
Tsymkind263435 kind;
union{
struct {Ttypeseq263828* typeinstcache;
Tscope263820* typscope;
} S1;
struct {TY263927* procinstcache;
Tsym263826* gcunsafetyreason;
} S2;
struct {TY263927* usedgenerics;
Tstrtable263798 tab;
} S3;
struct {Tsym263826* guard;
NI bitsize;
} S4;
} kindU;
Tmagic263525 magic;
Ttype263832* typ;
Tident193012* name;
Tlineinfo185336 info;
Tsym263826* owner;
Tsymflag263184Set flags;
Tnode263794* ast;
Toption163009Set options;
NI position;
NI offset;
Tloc263808 loc;
Tlib263812* annex;
Tnode263794* constraint;
};
struct  Tident193012  {
  Tidobj193006 Sup;
NimStringDesc* s;
Tident193012* next;
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
struct  Ropeobj172006  {
  TNimObject Sup;
Ropeobj172006* left;
Ropeobj172006* right;
NI length;
NimStringDesc* data;
};
struct  Tscope263820  {
NI depthlevel;
Tstrtable263798 symbols;
Tscope263820* parent;
};
struct  Tlistentry141010  {
  TNimObject Sup;
Tlistentry141010* prev;
Tlistentry141010* next;
};
typedef NU8 Tlibkind263810;
struct  Tlib263812  {
  Tlistentry141010 Sup;
Tlibkind263810 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj172006* name;
Tnode263794* path;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
struct  Tinstantiation263816  {
Tsym263826* sym;
Ttypeseq263828* concretetypes;
TY263917* usedby;
NI compilesid;
};
struct Tnodeseq263788 {
  TGenericSeq Sup;
  Tnode263794* data[SEQ_DECL_SIZE];
};
struct Ttypeseq263828 {
  TGenericSeq Sup;
  Ttype263832* data[SEQ_DECL_SIZE];
};
struct TY263927 {
  TGenericSeq Sup;
  Tinstantiation263816* data[SEQ_DECL_SIZE];
};
struct Tsymseq263796 {
  TGenericSeq Sup;
  Tsym263826* data[SEQ_DECL_SIZE];
};
struct TY263917 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype263832*, skiptypes_267113_850551059)(Ttype263832* t0, Ttypekind263244Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0);
N_NIMCALL(Tsym263826*, ithfield_444003_658252590)(Tnode263794* n0, NI* field0);
N_NIMCALL(NI, sonslen_266351_850551059)(Tnode263794* n0);
N_NIMCALL(void, internalerror_190100_155036129)(Tlineinfo185336 info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode263794*, lastson_266364_850551059)(Tnode263794* n0);
N_NIMCALL(void, globalerror_190076_155036129)(Tlineinfo185336 info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_190113_155036129)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_190183_1689653243)(TY197019 x0);
N_NIMCALL(void, annotatetype_444109_658252590)(Tnode263794* n0, Ttype263832* t0);
N_NIMCALL(NI, len_266339_850551059)(Ttype263832* n0);
N_NIMCALL(Ttype263832*, elemtype_290394_3876443242)(Ttype263832* t0);
STRING_LITERAL(TMP3630, "ithField", 8);
STRING_LITERAL(TMP3631, "ithField(record case branch)", 28);
STRING_LITERAL(TMP3632, "invalid field at index ", 23);
STRING_LITERAL(TMP3634, "compiler/semmacrosanity.nim", 27);
NIM_CONST TY197019 TMP3633 = {((NimStringDesc*) &TMP3634),
((NI) 51)}
;
STRING_LITERAL(TMP3635, "() must have a tuple type", 25);
STRING_LITERAL(TMP3636, "[] must have some form of array type", 36);
STRING_LITERAL(TMP3637, "{} must have the set type", 25);
STRING_LITERAL(TMP3638, "float literal must have some float type", 39);
STRING_LITERAL(TMP3639, "integer literal must have some int type", 39);
STRING_LITERAL(TMP3640, "string literal must be of some string type", 42);
STRING_LITERAL(TMP3641, "nil literal must be of some pointer type", 40);
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

static N_INLINE(NI, len_264080_850551059)(Tnode263794* n0) {
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

N_NIMCALL(Tsym263826*, ithfield_444003_658252590)(Tnode263794* n0, NI* field0) {
	Tsym263826* result0;
{	result0 = (Tsym263826*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind263020) 138):
	{
		{
			NI i_444020_658252590;
			NI HEX3Atmp_444094_658252590;
			NI LOC3;
			NI res_444097_658252590;
			i_444020_658252590 = (NI)0;
			HEX3Atmp_444094_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_266351_850551059(n0);
			HEX3Atmp_444094_658252590 = (NI)(LOC3 - ((NI) 1));
			res_444097_658252590 = ((NI) 0);
			{
				while (1) {
					if (!(res_444097_658252590 <= HEX3Atmp_444094_658252590)) goto LA5;
					i_444020_658252590 = res_444097_658252590;
					result0 = ithfield_444003_658252590((*n0).kindU.S6.sons->data[i_444020_658252590], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_444097_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind263020) 3)))) goto LA13;
			internalerror_190100_155036129((*n0).info, ((NimStringDesc*) &TMP3630));
		}
		LA13: ;
		result0 = ithfield_444003_658252590((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_444068_658252590;
			NI HEX3Atmp_444102_658252590;
			NI LOC20;
			NI res_444105_658252590;
			i_444068_658252590 = (NI)0;
			HEX3Atmp_444102_658252590 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_266351_850551059(n0);
			HEX3Atmp_444102_658252590 = (NI)(LOC20 - ((NI) 1));
			res_444105_658252590 = ((NI) 1);
			{
				while (1) {
					if (!(res_444105_658252590 <= HEX3Atmp_444102_658252590)) goto LA22;
					i_444068_658252590 = res_444105_658252590;
					switch ((*(*n0).kindU.S6.sons->data[i_444068_658252590]).kind) {
					case ((Tnodekind263020) 85):
					case ((Tnodekind263020) 88):
					{
						Tnode263794* LOC24;
						LOC24 = (Tnode263794*)0;
						LOC24 = lastson_266364_850551059((*n0).kindU.S6.sons->data[i_444068_658252590]);
						result0 = ithfield_444003_658252590(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_190100_155036129((*n0).info, ((NimStringDesc*) &TMP3631));
					}
					break;
					}
					res_444105_658252590 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 3):
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

N_NIMCALL(void, annotatetype_444109_658252590)(Tnode263794* n0, Ttype263832* t0) {
	Ttype263832* x_444126_658252590;
	x_444126_658252590 = skiptypes_267113_850551059(t0, IL64(211106233624832));
	switch ((*n0).kind) {
	case ((Tnodekind263020) 38):
	{
		Ttype263832* x0;
		x0 = skiptypes_267113_850551059(t0, IL64(211106247256320));
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_444146_658252590;
			NI HEX3Atmp_444295_658252590;
			NI LOC3;
			NI res_444298_658252590;
			i_444146_658252590 = (NI)0;
			HEX3Atmp_444295_658252590 = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_264080_850551059(n0);
			HEX3Atmp_444295_658252590 = (LOC3 - 1);
			res_444298_658252590 = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym263826* field0;
					if (!(res_444298_658252590 <= HEX3Atmp_444295_658252590)) goto LA5;
					i_444146_658252590 = res_444298_658252590;
					j0 = (NI)(i_444146_658252590 - ((NI) 1));
					field0 = ithfield_444003_658252590((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!field0 == 0) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_444146_658252590);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &TMP3632));
appendString(LOC10, LOC11);
						globalerror_190076_155036129((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_444146_658252590]).kind == ((Tnodekind263020) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_190183_1689653243(TMP3633);
							internalerror_190113_155036129(LOC17);
						}
						LA15: ;
						annotatetype_444109_658252590((*(*n0).kindU.S6.sons->data[i_444146_658252590]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_444298_658252590 += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind263020) 37):
	{
		{
			if (!((*x_444126_658252590).kind == ((Ttypekind263244) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_444207_658252590;
				NI HEX3Atmp_444303_658252590;
				NI LOC24;
				NI res_444306_658252590;
				i_444207_658252590 = (NI)0;
				HEX3Atmp_444303_658252590 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_264080_850551059(n0);
				HEX3Atmp_444303_658252590 = (LOC24 - 1);
				res_444306_658252590 = ((NI) 0);
				{
					while (1) {
						if (!(res_444306_658252590 <= HEX3Atmp_444303_658252590)) goto LA26;
						i_444207_658252590 = res_444306_658252590;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_266339_850551059(x_444126_658252590);
							if (!(LOC29 <= i_444207_658252590)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_444207_658252590);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &TMP3632));
appendString(LOC32, LOC33);
							globalerror_190076_155036129((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_444109_658252590((*n0).kindU.S6.sons->data[i_444207_658252590], (*x_444126_658252590).sons->data[i_444207_658252590]);
						}
						LA27: ;
						res_444306_658252590 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_444126_658252590).kind == ((Ttypekind263244) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_444126_658252590).callconv == ((Tcallingconvention263002) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3635));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind263020) 41):
	{
		{
			if (!((*x_444126_658252590).kind == ((Ttypekind263244) 4) || (*x_444126_658252590).kind == ((Ttypekind263244) 16) || (*x_444126_658252590).kind == ((Ttypekind263244) 24) || (*x_444126_658252590).kind == ((Ttypekind263244) 27))) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode263794* m_444238_658252590;
				m_444238_658252590 = (Tnode263794*)0;
				{
					NI i_444314_658252590;
					NI HEX3Atmp_444316_658252590;
					NI LOC48;
					NI res_444318_658252590;
					i_444314_658252590 = (NI)0;
					HEX3Atmp_444316_658252590 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_264080_850551059(n0);
					HEX3Atmp_444316_658252590 = (LOC48 - 1);
					res_444318_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype263832* LOC51;
							if (!(res_444318_658252590 <= HEX3Atmp_444316_658252590)) goto LA50;
							i_444314_658252590 = res_444318_658252590;
							m_444238_658252590 = (*n0).kindU.S6.sons->data[i_444314_658252590];
							LOC51 = (Ttype263832*)0;
							LOC51 = elemtype_290394_3876443242(x_444126_658252590);
							annotatetype_444109_658252590(m_444238_658252590, LOC51);
							res_444318_658252590 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3636));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind263020) 39):
	{
		{
			if (!((*x_444126_658252590).kind == ((Ttypekind263244) 19))) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode263794* m_444250_658252590;
				m_444250_658252590 = (Tnode263794*)0;
				{
					NI i_444325_658252590;
					NI HEX3Atmp_444327_658252590;
					NI LOC60;
					NI res_444329_658252590;
					i_444325_658252590 = (NI)0;
					HEX3Atmp_444327_658252590 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_264080_850551059(n0);
					HEX3Atmp_444327_658252590 = (LOC60 - 1);
					res_444329_658252590 = ((NI) 0);
					{
						while (1) {
							Ttype263832* LOC63;
							if (!(res_444329_658252590 <= HEX3Atmp_444327_658252590)) goto LA62;
							i_444325_658252590 = res_444329_658252590;
							m_444250_658252590 = (*n0).kindU.S6.sons->data[i_444325_658252590];
							LOC63 = (Ttype263832*)0;
							LOC63 = elemtype_290394_3876443242(x_444126_658252590);
							annotatetype_444109_658252590(m_444250_658252590, LOC63);
							res_444329_658252590 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3637));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind263020) 16) ... ((Tnodekind263020) 19):
	{
		{
			if (!((*x_444126_658252590).kind >= ((Ttypekind263244) 36) && (*x_444126_658252590).kind <= ((Ttypekind263244) 39))) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3638));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind263020) 5) ... ((Tnodekind263020) 15):
	{
		{
			if (!((*x_444126_658252590).kind >= ((Ttypekind263244) 31) && (*x_444126_658252590).kind <= ((Ttypekind263244) 44) || (*x_444126_658252590).kind == ((Ttypekind263244) 1) || (*x_444126_658252590).kind == ((Ttypekind263244) 2) || (*x_444126_658252590).kind == ((Ttypekind263244) 14))) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3639));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind263020) 20) ... ((Tnodekind263020) 22):
	{
		{
			if (!((*x_444126_658252590).kind == ((Ttypekind263244) 28) || (*x_444126_658252590).kind == ((Ttypekind263244) 29))) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3640));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind263020) 23):
	{
		{
			if (!((*x_444126_658252590).kind == ((Ttypekind263244) 26) || (*x_444126_658252590).kind == ((Ttypekind263244) 29) || (*x_444126_658252590).kind == ((Ttypekind263244) 22) || (*x_444126_658252590).kind == ((Ttypekind263244) 21) || (*x_444126_658252590).kind == ((Ttypekind263244) 24) || (*x_444126_658252590).kind == ((Ttypekind263244) 25) || (*x_444126_658252590).kind == ((Ttypekind263244) 28) || (*x_444126_658252590).kind == ((Ttypekind263244) 50))) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_190076_155036129((*n0).info, ((NimStringDesc*) &TMP3641));
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

