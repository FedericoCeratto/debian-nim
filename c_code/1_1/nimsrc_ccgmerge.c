/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcgen457038 Tcgen457038;
typedef struct Tllstream179204 Tllstream179204;
typedef struct Tbaselexer180024 Tbaselexer180024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tidtable191861 Tidtable191861;
typedef struct Tidobj168015 Tidobj168015;
typedef struct Ttype191849 Ttype191849;
typedef struct Ttypeseq191845 Ttypeseq191845;
typedef struct Tnode191813 Tnode191813;
typedef struct Tsym191843 Tsym191843;
typedef struct Tloc191827 Tloc191827;
typedef struct Ropeobj162009 Ropeobj162009;
typedef struct Tpasscontext242005 Tpasscontext242005;
typedef struct Tidpairseq191859 Tidpairseq191859;
typedef struct Intset188056 Intset188056;
typedef struct Ttrunk188052 Ttrunk188052;
typedef struct Ttrunkseq188054 Ttrunkseq188054;
typedef struct Tlinkedlist132028 Tlinkedlist132028;
typedef struct Tlistentry132022 Tlistentry132022;
typedef struct Tcproc457034 Tcproc457034;
typedef struct Tnodetable191873 Tnodetable191873;
typedef struct Tnodepairseq191871 Tnodepairseq191871;
typedef struct Tsymseq191815 Tsymseq191815;
typedef struct Tlineinfo164338 Tlineinfo164338;
typedef struct Tnodeseq191807 Tnodeseq191807;
typedef struct TY164351 TY164351;
typedef struct TY457106 TY457106;
typedef struct Tblock457032 Tblock457032;
typedef struct Tmergesections458857 Tmergesections458857;
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
typedef struct Tident168021 Tident168021;
typedef struct Tscope191837 Tscope191837;
typedef struct TY191944 TY191944;
typedef struct Tstrtable191817 Tstrtable191817;
typedef struct Tlib191831 Tlib191831;
typedef struct Tnodepair191869 Tnodepair191869;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Tinstantiation191833 Tinstantiation191833;
typedef struct TY191933 TY191933;
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
struct  Tbaselexer180024  {
  TNimObject Sup;
NI bufpos;
NCSTRING buf;
NI buflen;
Tllstream179204* stream;
NI linenumber;
NI sentinel;
NI linestart;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  Tpasscontext242005  {
  TNimObject Sup;
NIM_BOOL fromcache;
};
typedef Ropeobj162009* Tcfilesections457022[18];
struct  Tidtable191861  {
NI counter;
Tidpairseq191859* data;
};
struct  Intset188056  {
NI counter;
NI max;
Ttrunk188052* head;
Ttrunkseq188054* data;
};
struct  Tlinkedlist132028  {
Tlistentry132022* head;
Tlistentry132022* tail;
NI counter;
};
struct  Tnodetable191873  {
NI counter;
Tnodepairseq191871* data;
};
typedef Ropeobj162009* TY457143[10];
struct  Tcgen457038  {
  Tpasscontext242005 Sup;
Tsym191843* module;
NimStringDesc* filename;
Tcfilesections457022 s;
NIM_BOOL preventstacktrace;
NIM_BOOL usesthreadvars;
NIM_BOOL framedeclared;
NIM_BOOL isheaderfile;
NIM_BOOL includesstringh;
NIM_BOOL objhaskidsvalid;
NimStringDesc* cfilename;
Tidtable191861 typecache;
Tidtable191861 forwtypecache;
Intset188056 declaredthings;
Intset188056 declaredprotos;
Tlinkedlist132028 headerfiles;
Intset188056 typeinfomarker;
Tcproc457034* initproc;
Tcproc457034* postinitproc;
Tcproc457034* preinitproc;
Ttypeseq191845* typestack;
Tnodetable191873 datacache;
Tsymseq191815* forwardedprocs;
NI typenodes;
NI nimtypes;
Ropeobj162009* typenodesname;
Ropeobj162009* nimtypesname;
NI labels;
TY457143 extensionloaders;
Ropeobj162009* injectstmt;
};
struct  Tlineinfo164338  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tcproc457034  {
Tsym191843* prc;
NIM_BOOL beforeretneeded;
NIM_BOOL threadvaraccessed;
Tlineinfo164338 lastlineinfo;
Tnodeseq191807* nestedtrystmts;
NI inexceptblock;
TY164351* finallysafepoints;
NI labels;
TY457106* blocks;
NI breakidx;
NU32 options;
NI maxframelen;
Tcgen457038* module;
NI withinloop;
NI splitdecls;
NI gcframeid;
Ropeobj162009* gcframetype;
};
typedef Ropeobj162009* Tcprocsections457026[3];
struct  Tblock457032  {
NI id;
Ropeobj162009* label;
Tcprocsections457026 sections;
NIM_BOOL isloop;
NI16 nestedtrystmts;
NI16 nestedexceptstmts;
NI16 framelen;
};
struct  Tmergesections458857  {
Tcfilesections457022 f;
Tcprocsections457026 p;
};
typedef NimStringDesc* TY458013[18];
typedef NimStringDesc* TY458019[3];
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
typedef NI TY27420[16];
struct  Ttrunk188052  {
Ttrunk188052* next;
NI key;
TY27420 bits;
};
struct  Tllstream179204  {
  TNimObject Sup;
NU8 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
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
struct  Tlistentry132022  {
  TNimObject Sup;
Tlistentry132022* prev;
Tlistentry132022* next;
};
struct  Tnodepair191869  {
NI h;
Tnode191813* key;
NI val;
};
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
struct Ttypeseq191845 {
  TGenericSeq Sup;
  Ttype191849* data[SEQ_DECL_SIZE];
};
struct Tidpairseq191859 {
  TGenericSeq Sup;
  Tidpair191857 data[SEQ_DECL_SIZE];
};
struct Ttrunkseq188054 {
  TGenericSeq Sup;
  Ttrunk188052* data[SEQ_DECL_SIZE];
};
struct Tnodepairseq191871 {
  TGenericSeq Sup;
  Tnodepair191869 data[SEQ_DECL_SIZE];
};
struct Tsymseq191815 {
  TGenericSeq Sup;
  Tsym191843* data[SEQ_DECL_SIZE];
};
struct Tnodeseq191807 {
  TGenericSeq Sup;
  Tnode191813* data[SEQ_DECL_SIZE];
};
struct TY164351 {
  TGenericSeq Sup;
  Ropeobj162009* data[SEQ_DECL_SIZE];
};
struct TY457106 {
  TGenericSeq Sup;
  Tblock457032 data[SEQ_DECL_SIZE];
};
struct TY191944 {
  TGenericSeq Sup;
  Tinstantiation191833* data[SEQ_DECL_SIZE];
};
struct TY191933 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tllstream179204*, llstreamopen_179256)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_180035)(Tbaselexer180024* L, Tllstream179204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_458352)(Tbaselexer180024* L);
N_NIMCALL(NI, handlecr_180066)(Tbaselexer180024* L, NI pos);
N_NIMCALL(NI, handlelf_180074)(Tbaselexer180024* L, NI pos);
N_NIMCALL(void, readkey_458466)(Tbaselexer180024* L, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_166218)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_458613)(Tbaselexer180024* L, Tcgen457038* m);
N_NIMCALL(void, skipwhite_458325)(Tbaselexer180024* L);
N_NIMCALL(void, readtypecache_458524)(Tbaselexer180024* L, Tidtable191861* result);
N_NIMCALL(NI, decodevint_198351)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_198157)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_199196)(Tidtable191861* t, Tidobj168015* key, TNimObject* val);
N_NIMCALL(Ttype191849*, newfaketype_458506)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(Ropeobj162009*, rope_162320)(NimStringDesc* s);
N_NIMCALL(void, readintset_458574)(Tbaselexer180024* L, Intset188056* result);
N_NIMCALL(void, incl_188856)(Intset188056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_180045)(Tbaselexer180024* L);
static N_INLINE(Ropeobj162009**, s_457184)(Tcproc457034* p, NU8 s);
N_NIMCALL(void, readmergesections_458863)(NimStringDesc* cfilename, Tmergesections458857* m);
N_NIMCALL(Ropeobj162009*, readverbatimsection_458426)(Tbaselexer180024* L);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_458397)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_458902)(TY458013 a, NimStringDesc* item);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_458995)(TY458019 a, NimStringDesc* item);
N_NIMCALL(Ropeobj162009*, HEX26_162436)(Ropeobj162009* a, Ropeobj162009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46346* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46362* s, Tcell46346* c);
N_NIMCALL(void, add_162545)(Ropeobj162009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_458184)(Tidtable191861 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_198296)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_198042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, HEX24_163131)(Ropeobj162009* r);
N_NIMCALL(void, writeintset_458230)(Intset188056 a, NimStringDesc** s);
STRING_LITERAL(TMP4192, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4193, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4194, "typeCache", 9);
STRING_LITERAL(TMP4195, "declared", 8);
STRING_LITERAL(TMP4196, "typeInfo", 8);
STRING_LITERAL(TMP4197, "labels", 6);
STRING_LITERAL(TMP4198, "hasframe", 8);
STRING_LITERAL(TMP4199, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4200, "ccgmerge: unknown key: ", 23);
STRING_LITERAL(TMP4269, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4270, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4271, "", 0);
STRING_LITERAL(TMP4272, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4273, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4274, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4275, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4276, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4277, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4278, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4279, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4280, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4281, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4282, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4283, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4284, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4285, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4286, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4287, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4288, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY458013 Cfilesectionnames_458012 = {((NimStringDesc*) &TMP4271),
((NimStringDesc*) &TMP4272),
((NimStringDesc*) &TMP4273),
((NimStringDesc*) &TMP4274),
((NimStringDesc*) &TMP4275),
((NimStringDesc*) &TMP4276),
((NimStringDesc*) &TMP4277),
((NimStringDesc*) &TMP4278),
((NimStringDesc*) &TMP4279),
((NimStringDesc*) &TMP4280),
((NimStringDesc*) &TMP4281),
((NimStringDesc*) &TMP4282),
((NimStringDesc*) &TMP4283),
((NimStringDesc*) &TMP4284),
((NimStringDesc*) &TMP4285),
((NimStringDesc*) &TMP4286),
((NimStringDesc*) &TMP4287),
((NimStringDesc*) &TMP4288)}
;
STRING_LITERAL(TMP4289, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4290, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4291, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY458019 Cprocsectionnames_458018 = {((NimStringDesc*) &TMP4289),
((NimStringDesc*) &TMP4290),
((NimStringDesc*) &TMP4291)}
;
STRING_LITERAL(TMP4292, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4293, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4297, "/*\011", 3);
STRING_LITERAL(TMP4298, ":*/", 3);
STRING_LITERAL(TMP4306, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4307, "typeCache:{", 11);
STRING_LITERAL(TMP4308, "declared:{", 10);
STRING_LITERAL(TMP4309, "typeInfo:{", 10);
STRING_LITERAL(TMP4310, "labels:", 7);
STRING_LITERAL(TMP4311, " hasframe:", 10);
STRING_LITERAL(TMP4312, "*/", 2);
extern TNimType NTI180024; /* TBaseLexer */
extern TNimType NTI191809; /* PType */
extern TNimType NTI191849; /* TType */
extern NimStringDesc* tnl_160626;
extern Tgcheap48216 gch_48244;
extern NU32 gglobaloptions_155128;

N_NIMCALL(void, skipuntilcmd_458352)(Tbaselexer180024* L) {
	NI pos;
	pos = (*L).bufpos;
	{
		while (1) {
			switch (((NU8)((*L).buf[pos]))) {
			case 13:
			{
				pos = handlecr_180066(L, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_180074(L, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*L).buf[(NI)(pos + ((NI) 1))]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*L).buf[(NI)(pos + ((NI) 2))]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += ((NI) 3);
					goto LA1;
				}
				LA11: ;
				pos += ((NI) 1);
			}
			break;
			default:
			{
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
}

N_NIMCALL(void, readkey_458466)(Tbaselexer180024* L, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*L).bufpos;
	buf = (*L).buf;
	(*result) = setLengthStr((*result), ((NI) 0));
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_166218(((NimStringDesc*) &TMP4192));
	}
	LA5: ;
	(*L).bufpos = (NI)(pos + ((NI) 1));
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, skipwhite_458325)(Tbaselexer180024* L) {
	NI pos;
	pos = (*L).bufpos;
	{
		while (1) {
			switch (((NU8)((*L).buf[pos]))) {
			case 13:
			{
				pos = handlecr_180066(L, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_180074(L, pos);
			}
			break;
			case 32:
			{
				pos += ((NI) 1);
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
}

N_NIMCALL(Ttype191849*, newfaketype_458506)(NI id) {
	Ttype191849* result;
	result = 0;
	result = (Ttype191849*) newObj((&NTI191809), sizeof(Ttype191849));
	(*result).Sup.Sup.m_type = (&NTI191849);
	(*result).Sup.id = id;
	return result;
}

N_NIMCALL(void, readtypecache_458524)(Tbaselexer180024* L, Tidtable191861* result) {
	{
		if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_166218(((NimStringDesc*) &TMP4199));
	}
	LA3: ;
	(*L).bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			Ttype191849* LOC11;
			Tidobj168015* LOC12;
			Ropeobj162009* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_458325(L);
			key = decodevint_198351((*L).buf, (&(*L).bufpos));
			{
				if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_166218(((NimStringDesc*) &TMP4192));
			}
			LA9: ;
			(*L).bufpos += ((NI) 1);
			value = decodestr_198157((*L).buf, (&(*L).bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_458506(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = rope_162320(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_199196(result, LOC12, LOC14);
		} LA6: ;
	}
	(*L).bufpos += ((NI) 1);
}

N_NIMCALL(void, readintset_458574)(Tbaselexer180024* L, Intset188056* result) {
	{
		if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_166218(((NimStringDesc*) &TMP4199));
	}
	LA3: ;
	(*L).bufpos += ((NI) 1);
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*L).buf[(*L).bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_458325(L);
			key = decodevint_198351((*L).buf, (&(*L).bufpos));
			incl_188856(result, key);
		} LA6: ;
	}
	(*L).bufpos += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_458613)(Tbaselexer180024* L, Tcgen457038* m) {
	NimStringDesc* k;
	k = rawNewString(((NI) 9));
	{
		while (1) {
			skipwhite_458325(L);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*L).buf[(*L).bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*L).buf[(NI)((*L).bufpos + ((NI) 1))]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*L).bufpos += ((NI) 2);
				goto LA1;
			}
			LA7: ;
			readkey_458466(L, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4194))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4195))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4196))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4197))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4198))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_458524(L, (&(*m).typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_458574(L, (&(*m).declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_458574(L, (&(*m).typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_198351((*L).buf, (&(*L).bufpos));
				(*m).labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_198351((*L).buf, (&(*L).bufpos));
				(*m).framedeclared = !((LOC22 == ((NI) 0)));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 23);
appendString(LOC24, ((NimStringDesc*) &TMP4200));
appendString(LOC24, k);
				internalerror_166218(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_458816)(NimStringDesc* cfilename, Tcgen457038* m) {
	Tllstream179204* s_458821;
	Tbaselexer180024 L;
	NimStringDesc* k;
{	s_458821 = llstreamopen_179256(cfilename, ((NU8) 0));
	{
		if (!(s_458821 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.m_type = (&NTI180024);
	openbaselexer_180035((&L), s_458821, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_458352((&L));
			{
				if (!((NU8)(L.buf[L.bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_458466((&L), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4193))) goto LA13;
				processmergeinfo_458613((&L), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_180045((&L));
	}BeforeRet: ;
}

static N_INLINE(Ropeobj162009**, s_457184)(Tcproc457034* p, NU8 s) {
	Ropeobj162009** result;
	result = 0;
	result = &(*p).blocks->data[(NI)(((*p).blocks ? (*p).blocks->Sup.len : 0) - ((NI) 1))].sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_459106)(Tcgen457038* m) {
	NIM_BOOL result;
{	result = 0;
	{
		NU8 i_459223;
		NI res_459439;
		i_459223 = 0;
		res_459439 = ((NI) 1);
		{
			while (1) {
				if (!(res_459439 <= ((NI) 10))) goto LA3;
				i_459223 = ((NU8) (res_459439));
				{
					if (!!(((*m).s[(i_459223)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_459439 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_459423;
		NI res_459447;
		i_459423 = 0;
		res_459447 = ((NI) 0);
		{
			while (1) {
				if (!(res_459447 <= ((NI) 2))) goto LA10;
				i_459423 = ((NU8) (res_459447));
				{
					Ropeobj162009** LOC13;
					LOC13 = 0;
					LOC13 = s_457184((*m).initproc, i_459423);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_459447 += ((NI) 1);
			} LA10: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_458397)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = ((NI) 0);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < ((NI) 19));
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4270)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += ((NI) 1);
		} LA2: ;
	}
	result = (s == ((NI) 19));
	return result;
}

N_NIMCALL(Ropeobj162009*, readverbatimsection_458426)(Tbaselexer180024* L) {
	Ropeobj162009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*L).bufpos;
	buf = (*L).buf;
	r = rawNewString(((NI) 30000));
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_180066(L, pos);
				buf = (*L).buf;
				r = resizeString(r, tnl_160626->Sup.len + 0);
appendString(r, tnl_160626);
			}
			break;
			case 10:
			{
				pos = handlelf_180074(L, pos);
				buf = (*L).buf;
				r = resizeString(r, tnl_160626->Sup.len + 0);
appendString(r, tnl_160626);
			}
			break;
			case 0:
			{
				internalerror_166218(((NimStringDesc*) &TMP4269));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_458397(buf, pos);
					if (!LOC9) goto LA10;
					pos += ((NI) 19);
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += ((NI) 1);
			}
			break;
			}
		}
	} LA1: ;
	(*L).bufpos = pos;
	result = rope_162320(r);
	return result;
}

static N_INLINE(NI, find_458902)(TY458013 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_458965;
		NU8 i_458978;
		i_458965 = 0;
		i_458978 = ((NU8) 0);
		{
			if (!(i_458978 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_458965 = a[(i_458978)- 0];
					{
						if (!eqStrings(i_458965, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 17) <= i_458978)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_458978 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_458995)(TY458019 a, NimStringDesc* item) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_459058;
		NU8 i_459071;
		i_459058 = 0;
		i_459071 = ((NU8) 0);
		{
			if (!(i_459071 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_459058 = a[(i_459071)- 0];
					{
						if (!eqStrings(i_459058, item)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += ((NI) 1);
					{
						if (!(((NU8) 2) <= i_459071)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_459071 += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_458863)(NimStringDesc* cfilename, Tmergesections458857* m) {
	Tllstream179204* s_458869;
	Tbaselexer180024 L;
	NimStringDesc* k;
{	s_458869 = llstreamopen_179256(cfilename, ((NU8) 0));
	{
		if (!(s_458869 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&L), 0, sizeof(L));
	L.Sup.m_type = (&NTI180024);
	openbaselexer_180035((&L), s_458869, ((NI) 8192));
	k = rawNewString(((NI) 23));
	{
		while (1) {
			skipuntilcmd_458352((&L));
			{
				if (!((NU8)(L.buf[L.bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_458466((&L), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4193))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				Ropeobj162009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(L.buf[L.bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(L.buf[(NI)(L.bufpos + ((NI) 1))]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				L.bufpos += ((NI) 2);
				skipwhite_458325((&L));
				verbatim = readverbatimsection_458426((&L));
				skipwhite_458325((&L));
				sectiona = find_458902(Cfilesectionnames_458012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (((NI) 0) < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= ((NI) 17));
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) (&(*m).f[(sectiona)- 0]), verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_458995(Cprocsectionnames_458018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (((NI) 0) <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= ((NI) 2));
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) (&(*m).p[(sectionb)- 0]), verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4292));
appendString(LOC34, k);
						internalerror_166218(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_166218(((NimStringDesc*) &TMP4293));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_180045((&L));
	}BeforeRet: ;
}

static N_INLINE(Tcell46346*, usrtocell_49846)(void* usr) {
	Tcell46346* result;
	result = 0;
	result = ((Tcell46346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46346))))));
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
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_51404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, mergefiles_459474)(NimStringDesc* cfilename, Tcgen457038* m) {
	Tmergesections458857 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_458863(cfilename, (&old));
	{
		NU8 i_459492;
		NI res_459512;
		i_459492 = 0;
		res_459512 = ((NI) 0);
		{
			while (1) {
				if (!(res_459512 <= ((NI) 17))) goto LA3;
				i_459492 = ((NU8) (res_459512));
				asgnRefNoCycle((void**) (&(*m).s[(i_459492)- 0]), HEX26_162436(old.f[(i_459492)- 0], (*m).s[(i_459492)- 0]));
				res_459512 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NU8 i_459505;
		NI res_459520;
		i_459505 = 0;
		res_459520 = ((NI) 0);
		{
			while (1) {
				Ropeobj162009** LOC7;
				Ropeobj162009** LOC8;
				if (!(res_459520 <= ((NI) 2))) goto LA6;
				i_459505 = ((NU8) (res_459520));
				LOC7 = 0;
				LOC7 = s_457184((*m).initproc, i_459505);
				LOC8 = 0;
				LOC8 = s_457184((*m).initproc, i_459505);
				unsureAsgnRef((void**) (&(*LOC7)), HEX26_162436(old.p[(i_459505)- 0], (*LOC8)));
				res_459520 += ((NI) 1);
			} LA6: ;
		}
	}
}

N_NIMCALL(Ropeobj162009*, gensectionstart_458106)(NU8 ps) {
	Ropeobj162009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_155128) == 0))) goto LA3;
		result = rope_162320(tnl_160626);
		add_162545(&result, ((NimStringDesc*) &TMP4297));
		add_162545(&result, Cprocsectionnames_458018[(ps)- 0]);
		add_162545(&result, ((NimStringDesc*) &TMP4298));
		add_162545(&result, tnl_160626);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj162009*, gensectionend_458147)(NU8 ps) {
	Ropeobj162009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_155128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_160626->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4270));
appendString(LOC5, tnl_160626);
		result = rope_162320(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj162009*, gensectionstart_458028)(NU8 fs) {
	Ropeobj162009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_155128) == 0))) goto LA3;
		result = rope_162320(tnl_160626);
		add_162545(&result, ((NimStringDesc*) &TMP4297));
		add_162545(&result, Cfilesectionnames_458012[(fs)- 0]);
		add_162545(&result, ((NimStringDesc*) &TMP4298));
		add_162545(&result, tnl_160626);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Ropeobj162009*, gensectionend_458069)(NU8 fs) {
	Ropeobj162009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_155128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_160626->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4270));
appendString(LOC5, tnl_160626);
		result = rope_162320(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_458184)(Tidtable191861 a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI id_458190;
		TNimObject* value_458191;
		id_458190 = 0;
		value_458191 = 0;
		{
			NI i_458205;
			NI HEX3Atmp_458207;
			NI res_458209;
			i_458205 = 0;
			HEX3Atmp_458207 = 0;
			HEX3Atmp_458207 = (a.data ? (a.data->Sup.len-1) : -1);
			res_458209 = ((NI) 0);
			{
				while (1) {
					if (!(res_458209 <= HEX3Atmp_458207)) goto LA4;
					i_458205 = res_458209;
					{
						NimStringDesc* LOC14;
						if (!!((a.data->data[i_458205].key == NIM_NIL))) goto LA7;
						id_458190 = (*a.data->data[i_458205].key).id;
						value_458191 = a.data->data[i_458205].val;
						{
							if (!(i == ((NI) 10))) goto LA11;
							i = ((NI) 0);
							(*s) = resizeString((*s), tnl_160626->Sup.len + 0);
appendString((*s), tnl_160626);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_198296(id_458190, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = HEX24_163131(((Ropeobj162009*) (value_458191)));
						encodestr_198042(LOC14, s);
						i += ((NI) 1);
					}
					LA7: ;
					res_458209 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_458230)(Intset188056 a, NimStringDesc** s) {
	NI i;
	i = ((NI) 0);
	{
		NI x_458236;
		Ttrunk188052* r_458251;
		x_458236 = 0;
		r_458251 = a.head;
		{
			while (1) {
				NI i_458253;
				if (!!((r_458251 == NIM_NIL))) goto LA3;
				i_458253 = ((NI) 0);
				{
					while (1) {
						NI w_458255;
						NI j_458257;
						if (!(i_458253 <= ((NI) 15))) goto LA5;
						w_458255 = (*r_458251).bits[(i_458253)- 0];
						j_458257 = ((NI) 0);
						{
							while (1) {
								if (!!((w_458255 == ((NI) 0)))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_458255 & ((NI) 1)))) == ((NI) 0)))) goto LA10;
									x_458236 = (NI)((NI)((NU32)((*r_458251).key) << (NU32)(((NI) 9))) | (NI)((NU32)((NI)((NU32)(i_458253) << (NU32)(((NI) 5)))) + (NU32)(j_458257)));
									{
										if (!(i == ((NI) 10))) goto LA14;
										i = ((NI) 0);
										(*s) = resizeString((*s), tnl_160626->Sup.len + 0);
appendString((*s), tnl_160626);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_198296(x_458236, s);
									i += ((NI) 1);
								}
								LA10: ;
								j_458257 += ((NI) 1);
								w_458255 = (NI)((NU32)(w_458255) >> (NU32)(((NI) 1)));
							} LA7: ;
						}
						i_458253 += ((NI) 1);
					} LA5: ;
				}
				r_458251 = (*r_458251).next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(Ropeobj162009*, genmergeinfo_458285)(Tcgen457038* m) {
	Ropeobj162009* result;
	NimStringDesc* s;
{	result = 0;
	{
		if (!!(((gglobaloptions_155128 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4306));
	s = resizeString(s, tnl_160626->Sup.len + 0);
appendString(s, tnl_160626);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4307));
	writetypecache_458184((*m).typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4308));
	writeintset_458230((*m).declaredthings, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4309));
	writeintset_458230((*m).typeinfomarker, (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4310));
	encodevint_198296(((NI) ((*m).labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4311));
	encodevint_198296(((NI) ((*m).framedeclared)), (&s));
	s = resizeString(s, tnl_160626->Sup.len + 0);
appendString(s, tnl_160626);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4312));
	result = rope_162320(s);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_ccgmergeDatInit)(void) {
}

