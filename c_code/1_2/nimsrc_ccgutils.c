/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Ttype191849 Ttype191849;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tidobj168015 Tidobj168015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnode191813 Tnode191813;
typedef struct Tsym191843 Tsym191843;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tcell46346 Tcell46346;
typedef struct Tcellseq46362 Tcellseq46362;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46358 Tcellset46358;
typedef struct Tpagedesc46354 Tpagedesc46354;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Tidpair191857 Tidpair191857;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tident168021 Tident168021;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct Tinfocpu160479 Tinfocpu160479;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlib191831 Tlib191831;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct TY191933 TY191933;
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
typedef Tidtable191861 TY455272[62];
typedef Ttype191849* TY239060[62];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  Tidobj168015  {
  TNimObject Sup;
NI id;
};
struct  Tloc191827  {
NU8 k;
NU8 s;
NU16 flags;
Ttype191849* t;
Ropeobj162009* r;
Ropeobj162009* heaproot;
};
struct  Ttype191849  {
  Tidobj168015 Sup;
NU8 kind;
NU8 callconv;
NU32 flags;
Ttypeseq191845* sons;
Tnode191813* n;
Tsym191843* owner;
Tsym191843* sym;
Tsym191843* destructor;
Tsym191843* deepcopy;
Tsym191843* assignment;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc191827 loc;
};
struct  Tcell46346  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46362  {
NI len;
NI cap;
Tcell46346** d;
};
struct  Tcellset46358  {
NI counter;
NI max;
Tpagedesc46354* head;
Tpagedesc46354** data;
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
Tcellseq46362 zct;
Tcellseq46362 decstack;
Tcellset46358 cycleroots;
Tcellseq46362 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
};
struct  Tidpair191857  {
Tidobj168015* key;
TNimObject* val;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tnode191813  {
Ttype191849* typ;
Tlineinfo164338 info;
NU16 flags;
NU8 kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym191843* sym;
} S4;
struct {Tident168021* ident;
} S5;
struct {Tnodeseq191807* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
struct Tinfocpu160479 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef Tinfocpu160479 TY160497[14];
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Tstrtable191817  {
NI counter;
Tsymseq191815* data;
};
struct  Tsym191843  {
  Tidobj168015 Sup;
NU8 kind;
union{
struct {Ttypeseq191845* typeinstcache;
Tscope191837* typscope;
} S1;
struct {TY191944* procinstcache;
Tsym191843* gcunsafetyreason;
} S2;
struct {TY191944* usedgenerics;
Tstrtable191817 tab;
} S3;
struct {Tsym191843* guard;
} S4;
} kindU;
NU16 magic;
Ttype191849* typ;
Tident168021* name;
Tlineinfo164338 info;
Tsym191843* owner;
NU32 flags;
Tnode191813* ast;
NU32 options;
NI position;
NI offset;
Tloc191827 loc;
Tlib191831* annex;
Tnode191813* constraint;
};
struct  Ropeobj162009  {
  TNimObject Sup;
Ropeobj162009* left;
Ropeobj162009* right;
NI length;
NimStringDesc* data;
};
typedef NI TY27420[8];
struct  Tpagedesc46354  {
Tpagedesc46354* next;
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
struct  Tident168021  {
  Tidobj168015 Sup;
NimStringDesc* s;
Tident168021* next;
NI h;
};
struct  Tscope191837  {
NI depthlevel;
Tstrtable191817 symbols;
Tnodeseq191807* usingsyms;
Tscope191837* parent;
};
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tlib191831  {
  Tlistentry132022 Sup;
NU8 kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj162009* name;
Tnode191813* path;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct  Tinstantiation191833  {
Tsym191843* sym;
Ttypeseq191845* concretetypes;
TY191933* usedby;
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, inittypetables_455285)(void);
N_NIMCALL(void, initidtable_195057)(Tidtable191861* x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
N_NIMCALL(Ttype191849*, getuniquetype_455656)(Ttype191849* key);
N_NIMCALL(Ttype191849*, lastson_194442)(Ttype191849* n);
N_NIMCALL(Ttype191849*, slowsearch_455601)(Ttype191849* key, NU8 k);
N_NIMCALL(NIM_BOOL, idtablehasobjectaskey_199205)(Tidtable191861 t, Tidobj168015* key);
N_NIMCALL(NIM_BOOL, samebackendtype_228024)(Ttype191849* x, Ttype191849* y);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj168015* key, TNimObject* val);
N_NIMCALL(TNimObject*, idtableget_199182)(Tidtable191861 t, Tidobj168015* key);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, tocchar_164439)(NIM_CHAR c);
N_NIMCALL(Tnode191813*, getpragmastmt_455017)(Tnode191813* n, NU16 w);
static N_INLINE(NI, len_192097)(Tnode191813* n);
static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i);
N_NIMCALL(NU16, whichpragma_220673)(Tnode191813* n);
STRING_LITERAL(TMP3490, "N", 1);
STRING_LITERAL(TMP3491, "HEX", 3);
STRING_LITERAL(TMP3499, "getUniqueType", 13);
STRING_LITERAL(TMP3588, "\"", 1);
extern NIM_CONST TY160497 Cpu_160496;
TY455272 gtypetable_455275;
TY239060 gcanonicaltypes_455279;
extern Tgcheap48216 gch_48244;
extern NU8 targetcpu_160600;

N_NIMCALL(void, inittypetables_455285)(void) {
	{
		NU8 i_455423;
		NI res_455430;
		i_455423 = 0;
		res_455430 = ((NI) 0);
		{
			while (1) {
				if (!(res_455430 <= ((NI) 61))) goto LA3;
				i_455423 = ((NU8) (res_455430));
				initidtable_195057((&gtypetable_455275[(i_455423)- 0]));
				res_455430 += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, mangle_455896)(NimStringDesc* name) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	switch (((NU8)(name->data[((NI) 0)]))) {
	case 65 ... 90:
	case 97 ... 122:
	{
		result = addChar(result, name->data[((NI) 0)]);
	}
	break;
	case 48 ... 57:
	{
		NimStringDesc* LOC3;
		LOC3 = 0;
		LOC3 = rawNewString(2);
appendString(LOC3, ((NimStringDesc*) &TMP3490));
appendChar(LOC3, name->data[((NI) 0)]);
		result = resizeString(result, LOC3->Sup.len + 0);
appendString(result, LOC3);
	}
	break;
	default:
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = nsuToHex(((NI64) (((NU8)(name->data[((NI) 0)])))), ((NI) 2));
		LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &TMP3491));
appendString(LOC5, LOC6);
		result = LOC5;
	}
	break;
	}
	{
		NI i_455918;
		NI HEX3Atmp_455929;
		NI res_455932;
		i_455918 = 0;
		HEX3Atmp_455929 = 0;
		HEX3Atmp_455929 = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res_455932 = ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res_455932 <= HEX3Atmp_455929)) goto LA9;
				i_455918 = res_455932;
				c = name->data[i_455918];
				switch (((NU8)(c))) {
				case 65 ... 90:
				{
					NIM_CHAR LOC11;
					LOC11 = 0;
					LOC11 = nsuToLowerChar(c);
					result = addChar(result, LOC11);
				}
				break;
				case 95:
				{
				}
				break;
				case 97 ... 122:
				case 48 ... 57:
				{
					result = addChar(result, c);
				}
				break;
				default:
				{
					NimStringDesc* LOC15;
					NimStringDesc* LOC16;
					LOC15 = 0;
					LOC16 = 0;
					LOC16 = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					LOC15 = rawNewString(LOC16->Sup.len + 3);
appendString(LOC15, ((NimStringDesc*) &TMP3491));
appendString(LOC15, LOC16);
					result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
				}
				break;
				}
				res_455932 += ((NI) 1);
			} LA9: ;
		}
	}
	return result;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Tcell46346))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46346* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Tcell46346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Tcell46346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(Ttype191849*, slowsearch_455601)(Ttype191849* key, NU8 k) {
	Ttype191849* result;
	Tidobj168015* LOC16;
	TNimObject* LOC17;
{	result = 0;
	{
		Tidobj168015* LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC3 = &key->Sup;
		LOC4 = 0;
		LOC4 = idtablehasobjectaskey_199205(gtypetable_455275[(k)- 0], LOC3);
		if (!LOC4) goto LA5;
		result = key;
		goto BeforeRet;
	}
	LA5: ;
	{
		NI h_455618;
		NI HEX3Atmp_455634;
		NI res_455637;
		h_455618 = 0;
		HEX3Atmp_455634 = 0;
		HEX3Atmp_455634 = (gtypetable_455275[(k)- 0].data ? (gtypetable_455275[(k)- 0].data->Sup.len-1) : -1);
		res_455637 = ((NI) 0);
		{
			while (1) {
				Ttype191849* t;
				if (!(res_455637 <= HEX3Atmp_455634)) goto LA9;
				h_455618 = res_455637;
				t = ((Ttype191849*) (gtypetable_455275[(k)- 0].data->data[h_455618].key));
				{
					NIM_BOOL LOC12;
					LOC12 = 0;
					LOC12 = !((t == NIM_NIL));
					if (!(LOC12)) goto LA13;
					LOC12 = samebackendtype_228024(t, key);
					LA13: ;
					if (!LOC12) goto LA14;
					result = t;
					goto BeforeRet;
				}
				LA14: ;
				res_455637 += ((NI) 1);
			} LA9: ;
		}
	}
	LOC16 = 0;
	LOC16 = &key->Sup;
	LOC17 = 0;
	LOC17 = &key->Sup.Sup;
	idtableput_199196((&gtypetable_455275[(k)- 0]), LOC16, LOC17);
	result = key;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(Ttype191849*, getuniquetype_455656)(Ttype191849* key) {
	Ttype191849* result;
	NU8 k;
{	result = 0;
	{
		if (!(key == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	k = (*key).kind;
	switch (k) {
	case ((NU8) 1):
	case ((NU8) 2):
	case ((NU8) 31) ... ((NU8) 44):
	{
		result = key;
	}
	break;
	case ((NU8) 3):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 7):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 29):
	case ((NU8) 0):
	case ((NU8) 45):
	{
		result = gcanonicaltypes_455279[(k)- 0];
		{
			if (!(result == NIM_NIL)) goto LA9;
			asgnRefNoCycle((void**) (&gcanonicaltypes_455279[(k)- 0]), key);
			result = key;
		}
		LA9: ;
	}
	break;
	case ((NU8) 8):
	case ((NU8) 51):
	case ((NU8) 12):
	case ((NU8) 60):
	case ((NU8) 61):
	case ((NU8) 54):
	case ((NU8) 52):
	case ((NU8) 53):
	case ((NU8) 55):
	case ((NU8) 56):
	case ((NU8) 57):
	case ((NU8) 58):
	{
		internalerror_166218(((NimStringDesc*) &TMP3499));
	}
	break;
	case ((NU8) 13):
	{
		{
			if (!!(((*key).deepcopy == NIM_NIL))) goto LA15;
			result = key;
		}
		goto LA13;
		LA15: ;
		{
			Ttype191849* LOC18;
			LOC18 = 0;
			LOC18 = lastson_194442(key);
			result = getuniquetype_455656(LOC18);
		}
		LA13: ;
	}
	break;
	case ((NU8) 11):
	case ((NU8) 15):
	case ((NU8) 47):
	case ((NU8) 46):
	case ((NU8) 49):
	case ((NU8) 59):
	{
		Ttype191849* LOC20;
		LOC20 = 0;
		LOC20 = lastson_194442(key);
		result = getuniquetype_455656(LOC20);
	}
	break;
	case ((NU8) 21):
	case ((NU8) 22):
	case ((NU8) 23):
	{
		Ttype191849* elemtype;
		elemtype = lastson_194442(key);
		{
			if (!((IL64(35182224605190) &(IL64(1)<<(((*elemtype).kind)&IL64(63))))!=0)) goto LA24;
			result = key;
		}
		goto LA22;
		LA24: ;
		{
			result = slowsearch_455601(key, k);
		}
		LA22: ;
	}
	break;
	case ((NU8) 4):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 27):
	case ((NU8) 16):
	case ((NU8) 19):
	case ((NU8) 20):
	case ((NU8) 18):
	case ((NU8) 24):
	case ((NU8) 30):
	case ((NU8) 48):
	case ((NU8) 50):
	{
		result = slowsearch_455601(key, k);
	}
	break;
	case ((NU8) 17):
	{
		{
			Tidobj168015* LOC33;
			TNimObject* LOC34;
			if (!!((((*key).flags &(1<<((((NU8) 8))&31)))!=0))) goto LA31;
			LOC33 = 0;
			LOC33 = &key->Sup;
			LOC34 = 0;
			LOC34 = idtableget_199182(gtypetable_455275[(k)- 0], LOC33);
			result = ((Ttype191849*) (LOC34));
			{
				Tidobj168015* LOC39;
				TNimObject* LOC40;
				if (!(result == NIM_NIL)) goto LA37;
				LOC39 = 0;
				LOC39 = &key->Sup;
				LOC40 = 0;
				LOC40 = &key->Sup.Sup;
				idtableput_199196((&gtypetable_455275[(k)- 0]), LOC39, LOC40);
				result = key;
			}
			LA37: ;
		}
		goto LA29;
		LA31: ;
		{
			Tidobj168015* LOC57;
			TNimObject* LOC58;
			{
				Tidobj168015* LOC44;
				NIM_BOOL LOC45;
				LOC44 = 0;
				LOC44 = &key->Sup;
				LOC45 = 0;
				LOC45 = idtablehasobjectaskey_199205(gtypetable_455275[(k)- 0], LOC44);
				if (!LOC45) goto LA46;
				result = key;
				goto BeforeRet;
			}
			LA46: ;
			{
				NI h_455744;
				NI HEX3Atmp_455782;
				NI res_455785;
				h_455744 = 0;
				HEX3Atmp_455782 = 0;
				HEX3Atmp_455782 = (gtypetable_455275[(k)- 0].data ? (gtypetable_455275[(k)- 0].data->Sup.len-1) : -1);
				res_455785 = ((NI) 0);
				{
					while (1) {
						Ttype191849* t;
						if (!(res_455785 <= HEX3Atmp_455782)) goto LA50;
						h_455744 = res_455785;
						t = ((Ttype191849*) (gtypetable_455275[(k)- 0].data->data[h_455744].key));
						{
							NIM_BOOL LOC53;
							LOC53 = 0;
							LOC53 = !((t == NIM_NIL));
							if (!(LOC53)) goto LA54;
							LOC53 = samebackendtype_228024(t, key);
							LA54: ;
							if (!LOC53) goto LA55;
							result = t;
							goto BeforeRet;
						}
						LA55: ;
						res_455785 += ((NI) 1);
					} LA50: ;
				}
			}
			LOC57 = 0;
			LOC57 = &key->Sup;
			LOC58 = 0;
			LOC58 = &key->Sup.Sup;
			idtableput_199196((&gtypetable_455275[(k)- 0]), LOC57, LOC58);
			result = key;
		}
		LA29: ;
	}
	break;
	case ((NU8) 14):
	{
		Tidobj168015* LOC60;
		TNimObject* LOC61;
		LOC60 = 0;
		LOC60 = &key->Sup;
		LOC61 = 0;
		LOC61 = idtableget_199182(gtypetable_455275[(k)- 0], LOC60);
		result = ((Ttype191849*) (LOC61));
		{
			Tidobj168015* LOC66;
			TNimObject* LOC67;
			if (!(result == NIM_NIL)) goto LA64;
			LOC66 = 0;
			LOC66 = &key->Sup;
			LOC67 = 0;
			LOC67 = &key->Sup.Sup;
			idtableput_199196((&gtypetable_455275[(k)- 0]), LOC66, LOC67);
			result = key;
		}
		LA64: ;
	}
	break;
	case ((NU8) 25):
	{
		{
			if (!!(((*key).callconv == ((NU8) 8)))) goto LA71;
			result = key;
		}
		goto LA69;
		LA71: ;
		{
			result = slowsearch_455601(key, k);
		}
		LA69: ;
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, makesinglelinecstring_455870)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP3588));
	{
		NIM_CHAR c_455874;
		NI i_455878;
		NI L_455880;
		c_455874 = 0;
		i_455878 = ((NI) 0);
		L_455880 = (s ? s->Sup.len : 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(i_455878 < L_455880)) goto LA3;
				c_455874 = s->data[i_455878];
				LOC4 = 0;
				LOC4 = tocchar_164439(c_455874);
				result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
				i_455878 += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}

static N_INLINE(NI, len_192097)(Tnode191813* n) {
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

static N_INLINE(Tnode191813*, HEX5BHEX5D_192244)(Tnode191813* n, NI i) {
	Tnode191813* result;
	result = 0;
	result = (*n).kindU.S6.sons->data[i];
	return result;
}

N_NIMCALL(Tnode191813*, getpragmastmt_455017)(Tnode191813* n, NU16 w) {
	Tnode191813* result;
{	result = 0;
	switch ((*n).kind) {
	case ((NU8) 115):
	{
		{
			NI i_455041;
			NI HEX3Atmp_455084;
			NI LOC3;
			NI res_455087;
			i_455041 = 0;
			HEX3Atmp_455084 = 0;
			LOC3 = 0;
			LOC3 = len_192097(n);
			HEX3Atmp_455084 = (LOC3 - 1);
			res_455087 = ((NI) 0);
			{
				while (1) {
					Tnode191813* LOC6;
					if (!(res_455087 <= HEX3Atmp_455084)) goto LA5;
					i_455041 = res_455087;
					LOC6 = 0;
					LOC6 = HEX5BHEX5D_192244(n, i_455041);
					result = getpragmastmt_455017(LOC6, w);
					{
						if (!!((result == NIM_NIL))) goto LA9;
						goto LA2;
					}
					LA9: ;
					res_455087 += ((NI) 1);
				} LA5: ;
			}
		} LA2: ;
	}
	break;
	case ((NU8) 90):
	{
		{
			NI i_455073;
			NI HEX3Atmp_455092;
			NI LOC13;
			NI res_455095;
			i_455073 = 0;
			HEX3Atmp_455092 = 0;
			LOC13 = 0;
			LOC13 = len_192097(n);
			HEX3Atmp_455092 = (LOC13 - 1);
			res_455095 = ((NI) 0);
			{
				while (1) {
					if (!(res_455095 <= HEX3Atmp_455092)) goto LA15;
					i_455073 = res_455095;
					{
						Tnode191813* LOC18;
						NU16 LOC19;
						LOC18 = 0;
						LOC18 = HEX5BHEX5D_192244(n, i_455073);
						LOC19 = 0;
						LOC19 = whichpragma_220673(LOC18);
						if (!(LOC19 == w)) goto LA20;
						result = HEX5BHEX5D_192244(n, i_455073);
						goto BeforeRet;
					}
					LA20: ;
					res_455095 += ((NI) 1);
				} LA15: ;
			}
		}
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

N_NIMCALL(NIM_BOOL, stmtscontainpragma_455123)(Tnode191813* n, NU16 w) {
	NIM_BOOL result;
	Tnode191813* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getpragmastmt_455017(n, w);
	result = !((LOC1 == NIM_NIL));
	return result;
}

N_NIMCALL(NI64, hashstring_455146)(NimStringDesc* s) {
	NI64 result;
	result = 0;
	{
		NI64 b;
		if (!(Cpu_160496[(targetcpu_160600)- 1].Field4 == ((NI) 64))) goto LA3;
		b = IL64(0);
		{
			NI i_455163;
			NI HEX3Atmp_455232;
			NI res_455235;
			i_455163 = 0;
			HEX3Atmp_455232 = 0;
			HEX3Atmp_455232 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_455235 = ((NI) 0);
			{
				while (1) {
					if (!(res_455235 <= HEX3Atmp_455232)) goto LA7;
					i_455163 = res_455235;
					b = (NI64)((NU64)(b) + (NU64)(((NI64) (((NU8)(s->data[i_455163]))))));
					b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(10)))));
					b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(6))));
					res_455235 += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(3)))));
		b = (NI64)(b ^ (NI64)((NU64)(b) >> (NU64)(IL64(11))));
		b = (NI64)((NU64)(b) + (NU64)((NI64)((NU64)(b) << (NU64)(IL64(15)))));
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		NI32 a;
		a = ((NI32) 0);
		{
			NI i_455185;
			NI HEX3Atmp_455241;
			NI res_455244;
			i_455185 = 0;
			HEX3Atmp_455241 = 0;
			HEX3Atmp_455241 = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
			res_455244 = ((NI) 0);
			{
				while (1) {
					if (!(res_455244 <= HEX3Atmp_455241)) goto LA11;
					i_455185 = res_455244;
					a = (NI32)((NU32)(a) + (NU32)(((NI32) (((NU8)(s->data[i_455185]))))));
					a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 10)))));
					a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 6))));
					res_455244 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 3)))));
		a = (NI32)(a ^ (NI32)((NU32)(a) >> (NU32)(((NI32) 11))));
		a = (NI32)((NU32)(a) + (NU32)((NI32)((NU32)(a) << (NU32)(((NI32) 15)))));
		result = ((NI64) (a));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetcaches_455448)(void) {
	inittypetables_455285();
	{
		NU8 i_455460;
		NI res_455464;
		i_455460 = 0;
		res_455464 = ((NI) 0);
		{
			while (1) {
				if (!(res_455464 <= ((NI) 61))) goto LA3;
				i_455460 = ((NU8) (res_455464));
				asgnRefNoCycle((void**) (&gcanonicaltypes_455279[(i_455460)- 0]), NIM_NIL);
				res_455464 += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsInit)(void) {
	inittypetables_455285();
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgutilsDatInit)(void) {
}

