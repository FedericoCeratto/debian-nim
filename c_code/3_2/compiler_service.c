/* Generated by Nim Compiler v0.12.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell49147 Cell49147;
typedef struct TNimType TNimType;
typedef struct Cellseq49163 Cellseq49163;
typedef struct Gcheap51218 Gcheap51218;
typedef struct Gcstack51216 Gcstack51216;
typedef struct Cellset49159 Cellset49159;
typedef struct Pagedesc49155 Pagedesc49155;
typedef struct Memregion31091 Memregion31091;
typedef struct Smallchunk31043 Smallchunk31043;
typedef struct Llchunk31085 Llchunk31085;
typedef struct Bigchunk31045 Bigchunk31045;
typedef struct Intset31017 Intset31017;
typedef struct Trunk31013 Trunk31013;
typedef struct Avlnode31089 Avlnode31089;
typedef struct Gcstat51214 Gcstat51214;
typedef struct Optparser209211 Optparser209211;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY575426 TY575426;
typedef struct Socketimpl567407 Socketimpl567407;
typedef struct Basechunk31041 Basechunk31041;
typedef struct Freecell31033 Freecell31033;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Cell49147  {
NI refcount;
TNimType* typ;
};
struct  Cellseq49163  {
NI len;
NI cap;
Cell49147** d;
};
struct  Cellset49159  {
NI counter;
NI max;
Pagedesc49155* head;
Pagedesc49155** data;
};
typedef Smallchunk31043* TY31106[512];
typedef Trunk31013* Trunkbuckets31015[256];
struct  Intset31017  {
Trunkbuckets31015 data;
};
struct  Memregion31091  {
NI minlargeobj;
NI maxlargeobj;
TY31106 freesmallchunks;
Llchunk31085* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk31045* freechunkslist;
Intset31017 chunkstarts;
Avlnode31089* root;
Avlnode31089* deleted;
Avlnode31089* last;
Avlnode31089* freeavlnodes;
};
struct  Gcstat51214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51218  {
Gcstack51216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq49163 zct;
Cellseq49163 decstack;
Cellset49159 cycleroots;
Cellseq49163 tempstack;
NI recgclock;
Memregion31091 region;
Gcstat51214 stat;
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
struct  Optparser209211  {
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
typedef NimStringDesc* TY253724[1];
typedef N_NIMCALL_PTR(void, TY575256) (void);
struct  TY575426  {
NI HEX3Astate;
Socketimpl567407* stdoutsocket575408;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output, void* ClEnv);
void* ClEnv;
} TY191438;
struct  Gcstack51216  {
Gcstack51216* prev;
Gcstack51216* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY31022[8];
struct  Pagedesc49155  {
Pagedesc49155* next;
NI key;
TY31022 bits;
};
struct  Basechunk31041  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk31043  {
  Basechunk31041 Sup;
Smallchunk31043* next;
Smallchunk31043* prev;
Freecell31033* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk31085  {
NI size;
NI acc;
Llchunk31085* next;
};
struct  Bigchunk31045  {
  Basechunk31041 Sup;
Bigchunk31045* next;
Bigchunk31045* prev;
NI align;
NF data;
};
struct  Trunk31013  {
Trunk31013* next;
NI key;
TY31022 bits;
};
typedef Avlnode31089* TY31096[2];
struct  Avlnode31089  {
TY31096 link;
NI key;
NI upperbound;
NI level;
};
typedef NIM_CHAR TY567421[4001];
struct  Socketimpl567407  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY567421 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
NU8 domain;
NU8 socktype;
NU8 protocol;
};
struct  Freecell31033  {
Freecell31033* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell49147*, usrtocell_52846)(void* usr);
static N_INLINE(void, rtladdzct_54404)(Cell49147* c);
N_NOINLINE(void, addzct_52817)(Cellseq49163* s, Cell49147* c);
N_NIMCALL(void, initoptparser_209364)(NimStringDesc* cmdline, Optparser209211* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(Optparser209211* p);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NIM_BOOL, processargument_212854)(NU8 pass, Optparser209211* p, NI* argscount);
N_NIMCALL(void, processswitch_212841)(NU8 pass, Optparser209211* p);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_193675)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5250)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, getconfigvar_167335)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, readline_17116)(FILE* f);
N_NIMCALL(void, processcmdline_575209)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(Socketimpl567407*, newsocket_567833)(NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_568620)(Socketimpl567407* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(void, listen_568610)(Socketimpl567407* socket, int backlog);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_CLOSURE(void, HEX3Aanonymous_575409)(NimStringDesc* line, void* ClEnv);
N_NIMCALL(void, send_572007)(Socketimpl567407* socket, NimStringDesc* data, NU8 flags);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_55222)(Cell49147* c);
static N_INLINE(NIM_BOOL, canbecycleroot_52867)(Cell49147* c);
static N_INLINE(void, rtladdcycleroot_53623)(Cell49147* c);
N_NOINLINE(void, incl_49865)(Cellset49159* s, Cell49147* cell);
static N_INLINE(void, decref_54804)(Cell49147* c);
N_NIMCALL(void, accept_569401)(Socketimpl567407* server, Socketimpl567407** client, NU8 flags);
N_NIMCALL(void, readline_571608)(Socketimpl567407* socket, NimStringDesc** line, NI timeout, NU8 flags);
N_NIMCALL(void, close_569417)(Socketimpl567407* socket);
N_NIMCALL(void, msgquit_191488)(NI8 x);
STRING_LITERAL(TMP1156, "", 0);
STRING_LITERAL(TMP1633, " ", 1);
STRING_LITERAL(TMP1634, "-", 1);
STRING_LITERAL(TMP1989, "run", 3);
STRING_LITERAL(TMP5251, "server.type", 11);
STRING_LITERAL(TMP5252, "stdin", 5);
STRING_LITERAL(TMP5253, "tcp", 3);
STRING_LITERAL(TMP5254, "quit", 4);
STRING_LITERAL(TMP5256, "server.port", 11);
STRING_LITERAL(TMP5257, "server.address", 14);
STRING_LITERAL(TMP5260, "\015\012", 2);
STRING_LITERAL(TMP5268, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_575204;
extern Gcheap51218 gch_51259;
NimStringDesc* lastcaascmd_575205;
extern TNimType NTI209211; /* OptParser */
extern NU32 gglobaloptions_167132;
extern NimStringDesc* arguments_212837;
extern NimStringDesc* command_167240;
TNimType NTI575426; /* object */
extern TNimType NTI346033; /* range -1..0(int) */
extern TNimType NTI567409; /* Socket */
TNimType NTI575448; /* ref object */
extern NI gerrorcounter_191396;
extern TY191438 writelnhook_191441;

static N_INLINE(Cell49147*, usrtocell_52846)(void* usr) {
	Cell49147* result;
	result = 0;
	result = ((Cell49147*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell49147))))));
	return result;
}

static N_INLINE(void, rtladdzct_54404)(Cell49147* c) {
	addzct_52817((&gch_51259.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell49147* c;
	c = usrtocell_52846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_54404(c);
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

N_NIMCALL(void, processcmdline_575209)(NU8 pass, NimStringDesc* cmd) {
	Optparser209211 p;
	NI argscount;
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI209211);
	chckNil((void*)(&p));
	memset((void*)(&p), 0, sizeof(p));
	p.Sup.m_type = (&NTI209211);
	initoptparser_209364(cmd, (&p));
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
					if (!eqStrings(p.key, ((NimStringDesc*) &TMP1633))) goto LA7;
					p.key = copyString(((NimStringDesc*) &TMP1634));
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = processargument_212854(pass, (&p), (&argscount));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_212841(pass, (&p));
				}
				LA5: ;
			}
			break;
			case ((NU8) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = 0;
					LOC18 = processargument_212854(pass, (&p), (&argscount));
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
			TY253724 LOC34;
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = !(((gglobaloptions_167132 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_212837) && (arguments_212837)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = 0;
			LOC31 = nsuNormalize(command_167240);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP1989)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_193675(((NU16) 59), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP5250)(void* p, NI op) {
	TY575426* a;
	a = (TY575426*)p;
	nimGCvisit((void*)(*a).stdoutsocket575408, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell49147* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_52846(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell49147* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_52846((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_54404(c);
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

N_CLOSURE(void, HEX3Aanonymous_575409)(NimStringDesc* line, void* ClEnv) {
	TY575426* HEX3Aenvp_575438;
	NimStringDesc* LOC1;
	HEX3Aenvp_575438 = (TY575426*) ClEnv;
	LOC1 = 0;
	LOC1 = rawNewString(line->Sup.len + 2);
appendString(LOC1, line);
appendString(LOC1, ((NimStringDesc*) &TMP5260));
	send_572007((*HEX3Aenvp_575438).stdoutsocket575408, LOC1, 2);
}

static N_INLINE(NIM_BOOL, canbecycleroot_52867)(Cell49147* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_53623)(Cell49147* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_49865((&gch_51259.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_55222)(Cell49147* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_52867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_53623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_54804)(Cell49147* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_54404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_52867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_53623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Cell49147* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_52846(src);
		incref_55222(LOC5);
	}
	LA3: ;
	{
		Cell49147* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_52846((*dest));
		decref_54804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, serve_575254)(TY575256 action) {
	TY575426* HEX3Aenv_575447;
	NimStringDesc* typ;
	HEX3Aenv_575447 = 0;
	HEX3Aenv_575447 = (TY575426*) newObj((&NTI575448), sizeof(TY575426));
	typ = getconfigvar_167335(((NimStringDesc*) &TMP5251));
	if (eqStrings(typ, ((NimStringDesc*) &TMP5252))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP5253))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP1156))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line;
				NimStringDesc* LOC12;
				line = readline_17116(stdin);
				{
					if (!eqStrings(line, ((NimStringDesc*) &TMP5254))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = 0;
				LOC12 = curcaascmd_575204; curcaascmd_575204 = copyStringRC1(line);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_575209(((NU8) 1), line);
				action();
				gerrorcounter_191396 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP1156)? (((NimStringDesc*) &TMP1156))->data:"nil");
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl567407* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC20;
		NimStringDesc* inp;
		TY191438 LOC21;
		server = newsocket_567833(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		p = getconfigvar_167335(((NimStringDesc*) &TMP5256));
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
		LOC20 = getconfigvar_167335(((NimStringDesc*) &TMP5257));
		bindaddr_568620(server, port, LOC20);
		inp = copyString(((NimStringDesc*) &TMP1156));
		listen_568610(server, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_575447).stdoutsocket575408), newsocket_567833(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_575409; LOC21.ClEnv = HEX3Aenv_575447;
		asgnRef((void**) (&writelnhook_191441.ClEnv), LOC21.ClEnv);
		writelnhook_191441.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_569401(server, &(*HEX3Aenv_575447).stdoutsocket575408, 2);
				readline_571608((*HEX3Aenv_575447).stdoutsocket575408, (&inp), ((NI) -1), 2);
				LOC24 = 0;
				LOC24 = curcaascmd_575204; curcaascmd_575204 = copyStringRC1(inp);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_575209(((NU8) 1), inp);
				action();
				gerrorcounter_191396 = ((NI) 0);
				send_572007((*HEX3Aenv_575447).stdoutsocket575408, ((NimStringDesc*) &TMP5260), 2);
				close_569417((*HEX3Aenv_575447).stdoutsocket575408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP5268)? (((NimStringDesc*) &TMP5268))->data:"nil", typ? (typ)->data:"nil");
		msgquit_191488(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	LOC1 = 0;
	LOC1 = curcaascmd_575204; curcaascmd_575204 = copyStringRC1(((NimStringDesc*) &TMP1156));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = lastcaascmd_575205; lastcaascmd_575205 = copyStringRC1(((NimStringDesc*) &TMP1156));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
static TNimNode* TMP5237[2];
static TNimNode TMP1150[3];
NTI575426.size = sizeof(TY575426);
NTI575426.kind = 18;
NTI575426.base = 0;
NTI575426.flags = 2;
TMP5237[0] = &TMP1150[1];
TMP1150[1].kind = 1;
TMP1150[1].offset = offsetof(TY575426, HEX3Astate);
TMP1150[1].typ = (&NTI346033);
TMP1150[1].name = ":state";
TMP5237[1] = &TMP1150[2];
TMP1150[2].kind = 1;
TMP1150[2].offset = offsetof(TY575426, stdoutsocket575408);
TMP1150[2].typ = (&NTI567409);
TMP1150[2].name = "stdoutSocket575408";
TMP1150[0].len = 2; TMP1150[0].kind = 2; TMP1150[0].sons = &TMP5237[0];
NTI575426.node = &TMP1150[0];
NTI575448.size = sizeof(TY575426*);
NTI575448.kind = 22;
NTI575448.base = (&NTI575426);
NTI575448.flags = 2;
NTI575448.marker = TMP5250;
}
