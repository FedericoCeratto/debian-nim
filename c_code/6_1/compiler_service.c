/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell48947 Cell48947;
typedef struct TNimType TNimType;
typedef struct Cellseq48963 Cellseq48963;
typedef struct Gcheap51018 Gcheap51018;
typedef struct Gcstack51016 Gcstack51016;
typedef struct Cellset48959 Cellset48959;
typedef struct Pagedesc48955 Pagedesc48955;
typedef struct Memregion30890 Memregion30890;
typedef struct Smallchunk30842 Smallchunk30842;
typedef struct Llchunk30884 Llchunk30884;
typedef struct Bigchunk30844 Bigchunk30844;
typedef struct Intset30817 Intset30817;
typedef struct Trunk30813 Trunk30813;
typedef struct Avlnode30888 Avlnode30888;
typedef struct Gcstat51014 Gcstat51014;
typedef struct Optparser208211 Optparser208211;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY574426 TY574426;
typedef struct Socketimpl566407 Socketimpl566407;
typedef struct Basechunk30840 Basechunk30840;
typedef struct Freecell30832 Freecell30832;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell48947  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48963  {
NI len;
NI cap;
Cell48947** d;
};
struct  Cellset48959  {
NI counter;
NI max;
Pagedesc48955* head;
Pagedesc48955** data;
};
typedef Smallchunk30842* TY30905[512];
typedef Trunk30813* Trunkbuckets30815[256];
struct  Intset30817  {
Trunkbuckets30815 data;
};
struct  Memregion30890  {
NI minlargeobj;
NI maxlargeobj;
TY30905 freesmallchunks;
Llchunk30884* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30844* freechunkslist;
Intset30817 chunkstarts;
Avlnode30888* root;
Avlnode30888* deleted;
Avlnode30888* last;
Avlnode30888* freeavlnodes;
};
struct  Gcstat51014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51018  {
Gcstack51016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48963 zct;
Cellseq48963 decstack;
Cellset48959 cycleroots;
Cellseq48963 tempstack;
NI recgclock;
Memregion30890 region;
Gcstat51014 stat;
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Optparser208211  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
NU8 kind;
NimStringDesc* key;
NimStringDesc* val;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NimStringDesc* TY252724[1];
typedef N_NIMCALL_PTR(void, TY574256) (void);
struct  TY574426  {
NI HEX3Astate;
Socketimpl566407* stdoutsocket574408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY190441;
struct  Gcstack51016  {
Gcstack51016* prev;
Gcstack51016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY30821[16];
struct  Pagedesc48955  {
Pagedesc48955* next;
NI key;
TY30821 bits;
};
struct  Basechunk30840  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30842  {
  Basechunk30840 Sup;
Smallchunk30842* next;
Smallchunk30842* prev;
Freecell30832* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30884  {
NI size;
NI acc;
Llchunk30884* next;
};
struct  Bigchunk30844  {
  Basechunk30840 Sup;
Bigchunk30844* next;
Bigchunk30844* prev;
NI align;
NF data;
};
struct  Trunk30813  {
Trunk30813* next;
NI key;
TY30821 bits;
};
typedef Avlnode30888* TY30895[2];
struct  Avlnode30888  {
TY30895 link;
NI key;
NI upperbound;
NI level;
};
typedef NIM_CHAR TY566421[4001];
struct  Socketimpl566407  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY566421 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
NU8 domain;
NU8 socktype;
NU8 protocol;
};
struct  Freecell30832  {
Freecell30832* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell48947*, usrtocell_52646)(void* usr);
static N_INLINE(void, rtladdzct_54204)(Cell48947* c);
N_NOINLINE(void, addzct_52617)(Cellseq48963* s, Cell48947* c);
N_NIMCALL(void, initoptparser_208364)(NimStringDesc* cmdline, Optparser208211* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(Optparser208211* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_211854)(NU8 pass, Optparser208211* p, NI* argscount);
N_NIMCALL(void, processswitch_211841)(NU8 pass, Optparser208211* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_192675)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5254)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_166335)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_16916)(FILE* f);
N_NIMCALL(void, processcmdline_574209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(Socketimpl566407*, newsocket_566833)(NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_567620)(Socketimpl566407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_567610)(Socketimpl566407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_574409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_571208)(Socketimpl566407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55022)(Cell48947* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c);
static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c);
N_NOINLINE(void, incl_49665)(Cellset48959* s, Cell48947* cell);
static N_INLINE(void, decref_54604)(Cell48947* c);
N_NIMCALL(void, accept_568401)(Socketimpl566407* server, Socketimpl566407** client, NU8 flags);
N_NIMCALL(void, readline_570608)(Socketimpl566407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_568417)(Socketimpl566407* socket);
N_NIMCALL(void, msgquit_190491)(NI8 x);
STRING_LITERAL(TMP1156, "", 0);
STRING_LITERAL(TMP1635, " ", 1);
STRING_LITERAL(TMP1636, "-", 1);
STRING_LITERAL(TMP1991, "run", 3);
STRING_LITERAL(TMP5255, "server.type", 11);
STRING_LITERAL(TMP5256, "stdin", 5);
STRING_LITERAL(TMP5257, "tcp", 3);
STRING_LITERAL(TMP5258, "quit", 4);
STRING_LITERAL(TMP5260, "server.port", 11);
STRING_LITERAL(TMP5261, "server.address", 14);
STRING_LITERAL(TMP5264, "\015\012", 2);
STRING_LITERAL(TMP5272, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_574204;
extern Gcheap51018 gch_51059;
NimStringDesc* lastcaascmd_574205;
extern TNimType NTI208211; /* OptParser */
extern NU32 gglobaloptions_166132;
extern NimStringDesc* arguments_211837;
extern NimStringDesc* command_166240;
TNimType NTI574426; /* object */
extern TNimType NTI345033; /* range -1..0(int) */
extern TNimType NTI566409; /* Socket */
TNimType NTI574448; /* ref object */
extern NI gerrorcounter_190399;
extern TY190441 writelnhook_190444;

static N_INLINE(Cell48947*, usrtocell_52646)(void* usr) {
	Cell48947* result;
	result = 0;
	result = ((Cell48947*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell48947))))));
	return result;
}

static N_INLINE(void, rtladdzct_54204)(Cell48947* c) {
	addzct_52617((&gch_51059.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell48947* c;
	c = usrtocell_52646(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	LA3: ;
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

N_NIMCALL(void, processcmdline_574209)(NU8 pass, NimStringDesc* cmd) {
	Optparser208211 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI208211);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI208211);
	initoptparser_208364(cmd, (&p));
	argscount = ((NI) 0);
	{
		while (1) {
			nponext((&p));
			switch (p.kind) {
			case ((NU8) 0):
			{
				goto LA1;
			}
			break;
			case ((NU8) 2):
			case ((NU8) 3):
			{
				{
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP1635))) goto LA7;
					p.key = copyString(((NimStringDesc*) &TMP1636));
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_211854(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_211841(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_211854(pass, (&p), (&argscount));
					if (!LOC18) goto LA19;
					goto LA1;
				}
				LA19: ;
			}
			break;
			}
		}
	} LA1: ;
	{
		if (!(pass == ((NU8) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY252724 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_166132 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_211837) && (arguments_211837)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_166240);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP1991)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_192675(((NU16) 59), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP5254)(void* p, NI op) {
	TY574426* a;
	a = (TY574426*)p;
	nimGCvisit((void*)(*a).stdoutsocket574408, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell48947* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52646(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48947* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52646((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_54204(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_574409)(NimStringDesc* line, void* ClEnv) {
	TY574426* HEX3Aenvp_574438;
	NimStringDesc* LOC1;
	HEX3Aenvp_574438 = (TY574426*) ClEnv;
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP5264));
	send_571208((*HEX3Aenvp_574438).stdoutsocket574408, LOC1, 2);
}

static N_INLINE(NIM_BOOL, canbecycleroot_52667)(Cell48947* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53423)(Cell48947* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49665((&gch_51059.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_55022)(Cell48947* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_52667(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_53423(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_54604)(Cell48947* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_54204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_52667(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_53423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell48947* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52646(src);
		incref_55022(LOC5);
	}
	LA3: ;
	{
		Cell48947* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52646((*dest));
		decref_54604(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, serve_574254)(TY574256 action) {
	TY574426* HEX3Aenv_574447;
	NimStringDesc* typ;
	HEX3Aenv_574447 = 0;
	HEX3Aenv_574447 = (TY574426*) newObj((&NTI574448), sizeof(TY574426));
	typ = getconfigvar_166335(((NimStringDesc*) &TMP5255));
	if (eqStrings(typ, ((NimStringDesc*) &TMP5256))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP5257))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP1156))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_16916(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP5258))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_574204; curcaascmd_574204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_574209(((NU8) 1), line);
				action();
				gerrorcounter_190399 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP1156)? (((NimStringDesc*) &TMP1156))->data:"nil");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl566407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY190441 LOC21;
		server = newsocket_566833(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		p = getconfigvar_166335(((NimStringDesc*) &TMP5260));
		{
			NI LOC18;
			if (!(((NI) 0) < (p ? p->Sup.len : 0))) goto LA16;
			LOC18 = 0;
			LOC18 = nsuParseInt(p);
			port = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = 0;
		LOC20 = getconfigvar_166335(((NimStringDesc*) &TMP5261));
		bindaddr_567620(server, port, LOC20);
		inp = copyString(((NimStringDesc*) &TMP1156));
		listen_567610(server, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_574447).stdoutsocket574408), newsocket_566833(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_574409; LOC21.ClEnv = HEX3Aenv_574447;
		asgnRef((void**) (&writelnhook_190444.ClEnv), LOC21.ClEnv);
		writelnhook_190444.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_568401(server, &(*HEX3Aenv_574447).stdoutsocket574408, 2);
				readline_570608((*HEX3Aenv_574447).stdoutsocket574408, (&inp), ((NI) -1), 2);
				LOC24 = 0;
				LOC24 = curcaascmd_574204; curcaascmd_574204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_574209(((NU8) 1), inp);
				action();
				gerrorcounter_190399 = ((NI) 0);
				send_571208((*HEX3Aenv_574447).stdoutsocket574408, ((NimStringDesc*) &TMP5264), 2);
				close_568417((*HEX3Aenv_574447).stdoutsocket574408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP5272)? (((NimStringDesc*) &TMP5272))->data:"nil", typ? (typ)->data:"nil");
		msgquit_190491(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_574204; curcaascmd_574204 = copyStringRC1(((NimStringDesc*) &TMP1156));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_574205; lastcaascmd_574205 = copyStringRC1(((NimStringDesc*) &TMP1156));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
static TNimNode* TMP5241[2];
static TNimNode TMP1150[3];
NTI574426.size = sizeof(TY574426);
NTI574426.kind = 18;
NTI574426.base = 0;
NTI574426.flags = 2;
TMP5241[0] = &TMP1150[1];
TMP1150[1].kind = 1;
TMP1150[1].offset = offsetof(TY574426, HEX3Astate);
TMP1150[1].typ = (&NTI345033);
TMP1150[1].name = ":state";
TMP5241[1] = &TMP1150[2];
TMP1150[2].kind = 1;
TMP1150[2].offset = offsetof(TY574426, stdoutsocket574408);
TMP1150[2].typ = (&NTI566409);
TMP1150[2].name = "stdoutSocket574408";
TMP1150[0].len = 2; TMP1150[0].kind = 2; TMP1150[0].sons = &TMP5241[0];
NTI574426.node = &TMP1150[0];
NTI574448.size = sizeof(TY574426*);
NTI574448.kind = 22;
NTI574448.base = (&NTI574426);
NTI574448.flags = 2;
NTI574448.marker = TMP5254;
}
