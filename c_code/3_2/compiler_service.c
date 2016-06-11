/* Generated by Nim Compiler v0.14.0 */
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell48105 Cell48105;
typedef struct Cellseq48121 Cellseq48121;
typedef struct Gcheap50618 Gcheap50618;
typedef struct Gcstack50616 Gcstack50616;
typedef struct Memregion30286 Memregion30286;
typedef struct Smallchunk30240 Smallchunk30240;
typedef struct Llchunk30280 Llchunk30280;
typedef struct Bigchunk30242 Bigchunk30242;
typedef struct Intset30214 Intset30214;
typedef struct Trunk30210 Trunk30210;
typedef struct Avlnode30284 Avlnode30284;
typedef struct Gcstat50614 Gcstat50614;
typedef struct Cellset48117 Cellset48117;
typedef struct Pagedesc48113 Pagedesc48113;
typedef struct Optparser251205 Optparser251205;
typedef struct TNimObject TNimObject;
typedef struct TY562421 TY562421;
typedef struct Socketimpl554404 Socketimpl554404;
typedef struct Basechunk30238 Basechunk30238;
typedef struct Freecell30230 Freecell30230;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef NU8 Tnimnodekind3205;
struct  TNimNode  {
Tnimnodekind3205 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc56602) (void);
struct  Cell48105  {
NI refcount;
TNimType* typ;
};
struct  Cellseq48121  {
NI len;
NI cap;
Cell48105** d;
};
typedef Smallchunk30240* TY30301[512];
typedef Trunk30210* Trunkbuckets30212[256];
struct  Intset30214  {
Trunkbuckets30212 data;
};
struct  Memregion30286  {
NI minlargeobj;
NI maxlargeobj;
TY30301 freesmallchunks;
Llchunk30280* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30242* freechunkslist;
Intset30214 chunkstarts;
Avlnode30284* root;
Avlnode30284* deleted;
Avlnode30284* last;
Avlnode30284* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50614  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset48117  {
NI counter;
NI max;
Pagedesc48113* head;
Pagedesc48113** data;
};
struct  Gcheap50618  {
Gcstack50616* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq48121 zct;
Cellseq48121 decstack;
Cellseq48121 tempstack;
NI recgclock;
Memregion30286 region;
Gcstat50614 stat;
Cellset48117 marked;
Cellseq48121 additionalroots;
};
typedef NU8 Tcmdlinepass252008;
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Cmdlinekind251203;
struct  Optparser251205  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
Cmdlinekind251203 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU32 Tglobaloption164013Set;
typedef NU8 Tglobaloption164013;
typedef NU16 Tmsgkind186002;
typedef NimStringDesc* TY289494[1];
typedef N_NIMCALL_PTR(void, TY562238) (void);
struct  TY562421  {
NI HEX3Astate;
Socketimpl554404* stdoutsocket562408;
};
typedef NU8 Domain548604;
typedef NU8 Socktype548606;
typedef NU8 Protocol548608;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output0, void* ClEnv);
void* ClEnv;
} TY187111;
typedef NU8 Socketflag554414Set;
struct  Gcstack50616  {
Gcstack50616* prev;
Gcstack50616* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30238  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30240  {
  Basechunk30238 Sup;
Smallchunk30240* next;
Smallchunk30240* prev;
Freecell30230* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30280  {
NI size;
NI acc;
Llchunk30280* next;
};
struct  Bigchunk30242  {
  Basechunk30238 Sup;
Bigchunk30242* next;
Bigchunk30242* prev;
NI align;
NF data;
};
typedef NI TY30219[8];
struct  Trunk30210  {
Trunk30210* next;
NI key;
TY30219 bits;
};
typedef Avlnode30284* TY30291[2];
struct  Avlnode30284  {
TY30291 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc48113  {
Pagedesc48113* next;
NI key;
TY30219 bits;
};
typedef NIM_CHAR TY554418[4001];
struct  Socketimpl554404  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY554418 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
Domain548604 domain;
Socktype548606 socktype;
Protocol548608 protocol;
};
struct  Freecell30230  {
Freecell30230* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1344)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56602 markerproc0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0);
N_NOINLINE(void, addzct_52217_1689653243)(Cellseq48121* s0, Cell48105* c0);
N_NIMCALL(void, TMP1346)();
N_NIMCALL(void, initoptparser_251325_4065315820)(NimStringDesc* cmdline0, Optparser251205* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, nponext)(Optparser251205* p0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_BOOL, processargument_253724_2004575671)(Tcmdlinepass252008 pass0, Optparser251205* p0, NI* argscount0);
N_NIMCALL(void, processswitch_253717_2004575671)(Tcmdlinepass252008 pass0, Optparser251205* p0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(void, rawmessage_188645_155036129)(Tmsgkind186002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, TMP5521)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, getconfigvar_164288_2607990831)(NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, readline_15910_1689653243)(FILE* f0);
N_NIMCALL(void, processcmdline_562203_3526807654)(Tcmdlinepass252008 pass0, NimStringDesc* cmd0);
N_NIMCALL(Socketimpl554404*, newsocket_554821_170061329)(Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0, NIM_BOOL buffered0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, bindaddr_555608_170061329)(Socketimpl554404* socket0, NU16 port0, NimStringDesc* address0);
N_NIMCALL(void, listen_555604_170061329)(Socketimpl554404* socket0, int backlog0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_CLOSURE(void, HEX3Aanonymous_562409_3526807654)(NimStringDesc* line0, void* ClEnv);
N_NIMCALL(void, send_559601_170061329)(Socketimpl554404* socket0, NimStringDesc* data0, Socketflag554414Set flags0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0);
static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0);
N_NIMCALL(void, accept_556401_170061329)(Socketimpl554404* server0, Socketimpl554404** client0, Socketflag554414Set flags0);
N_NIMCALL(void, readline_559202_170061329)(Socketimpl554404* socket0, NimStringDesc** line0, NI timeout0, Socketflag554414Set flags0);
N_NIMCALL(void, close_556411_170061329)(Socketimpl554404* socket0);
N_NIMCALL(void, msgquit_187153_155036129)(NI8 x0);
STRING_LITERAL(TMP1345, "", 0);
STRING_LITERAL(TMP1827, " ", 1);
STRING_LITERAL(TMP1828, "-", 1);
STRING_LITERAL(TMP2190, "run", 3);
STRING_LITERAL(TMP5522, "server.type", 11);
STRING_LITERAL(TMP5523, "stdin", 5);
STRING_LITERAL(TMP5524, "tcp", 3);
STRING_LITERAL(TMP5525, "quit", 4);
STRING_LITERAL(TMP5527, "server.port", 11);
STRING_LITERAL(TMP5528, "server.address", 14);
STRING_LITERAL(TMP5531, "\015\012", 2);
STRING_LITERAL(TMP5539, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_562201_3526807654;
extern TNimType NTI138; /* string */
extern Gcheap50618 gch_50658_1689653243;
NimStringDesc* lastcaascmd_562202_3526807654;
extern TNimType NTI251205; /* OptParser */
extern Tglobaloption164013Set gglobaloptions_164127_2607990831;
extern NimStringDesc* arguments_253716_2004575671;
extern NimStringDesc* command_164211_2607990831;
TNimType NTI562421; /* object */
extern TNimType NTI351021; /* range -1..0(int) */
extern TNimType NTI554406; /* Socket */
TNimType NTI562420; /* ref object */
extern NI gerrorcounter_187078_155036129;
extern TY187111 writelnhook_187114_155036129;
N_NIMCALL(void, TMP1344)() {
	nimGCvisit((void*)curcaascmd_562201_3526807654, 0);
}

static N_INLINE(Cell48105*, usrtocell_52240_1689653243)(void* usr0) {
	Cell48105* result0;
	result0 = (Cell48105*)0;
	result0 = ((Cell48105*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell48105))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53401_1689653243)(Cell48105* c0) {
	addzct_52217_1689653243((&gch_50658_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell48105* c0;
	c0 = usrtocell_52240_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1346)() {
	nimGCvisit((void*)lastcaascmd_562202_3526807654, 0);
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
	int LOC13;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = (int)0;
	LOC13 = memcmp(((NCSTRING) ((*a0).data)), ((NCSTRING) ((*b0).data)), (*a0).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, processcmdline_562203_3526807654)(Tcmdlinepass252008 pass0, NimStringDesc* cmd0) {
	Optparser251205 p0;
	NI argscount0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI251205);
	chckNil((void*)(&p0));
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI251205);
	initoptparser_251325_4065315820(cmd0, (&p0));
	argscount0 = ((NI) 0);
	{
		while (1) {
			nponext((&p0));
			switch (p0.kind) {
			case ((Cmdlinekind251203) 0):
			{
				goto LA1;
			}
			break;
			case ((Cmdlinekind251203) 2):
			case ((Cmdlinekind251203) 3):
			{
				{
					if (!eqStrings(p0.key, ((NimStringDesc*) &TMP1827))) goto LA7;
					p0.key = copyString(((NimStringDesc*) &TMP1828));
					{
						NIM_BOOL LOC11;
						LOC11 = (NIM_BOOL)0;
						LOC11 = processargument_253724_2004575671(pass0, (&p0), (&argscount0));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_253717_2004575671(pass0, (&p0));
				}
				LA5: ;
			}
			break;
			case ((Cmdlinekind251203) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = (NIM_BOOL)0;
					LOC18 = processargument_253724_2004575671(pass0, (&p0), (&argscount0));
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
		if (!(pass0 == ((Tcmdlinepass252008) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY289494 LOC34;
			LOC27 = (NIM_BOOL)0;
			LOC28 = (NIM_BOOL)0;
			LOC28 = !(((gglobaloptions_164127_2607990831 &(1U<<((NU)(((Tglobaloption164013) 13))&31U)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_253716_2004575671) && (arguments_253716_2004575671)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = (NimStringDesc*)0;
			LOC31 = nsuNormalize(command_164211_2607990831);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP2190)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_188645_155036129(((Tmsgkind186002) 59), LOC34, 0);
		}
		LA32: ;
	}
	LA23: ;
}
N_NIMCALL(void, TMP5521)(void* p, NI op) {
	TY562421* a;
	a = (TY562421*)p;
	nimGCvisit((void*)(*a).stdoutsocket562408, op);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell48105* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_52240_1689653243(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell48105* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_52240_1689653243((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53401_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_CLOSURE(void, HEX3Aanonymous_562409_3526807654)(NimStringDesc* line0, void* ClEnv) {
	TY562421* HEX3Aenvp_562424_3526807654;
	NimStringDesc* LOC1;
	HEX3Aenvp_562424_3526807654 = (TY562421*) ClEnv;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rawNewString(line0->Sup.len + 2);
appendString(LOC1, line0);
appendString(LOC1, ((NimStringDesc*) &TMP5531));
	send_559601_170061329((*HEX3Aenvp_562424_3526807654).stdoutsocket562408, LOC1, 2);
}

static N_INLINE(void, incref_54219_1689653243)(Cell48105* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decref_53801_1689653243)(Cell48105* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53401_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell48105* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell48105*)0;
		LOC5 = usrtocell_52240_1689653243(src0);
		incref_54219_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell48105* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell48105*)0;
		LOC10 = usrtocell_52240_1689653243((*dest0));
		decref_53801_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, serve_562236_3526807654)(TY562238 action0) {
	TY562421* HEX3Aenv_562426_3526807654;
	NimStringDesc* typ0;
	HEX3Aenv_562426_3526807654 = (TY562421*)0;
	HEX3Aenv_562426_3526807654 = (TY562421*) newObj((&NTI562420), sizeof(TY562421));
	typ0 = getconfigvar_164288_2607990831(((NimStringDesc*) &TMP5522));
	if (eqStrings(typ0, ((NimStringDesc*) &TMP5523))) goto LA1;
	if (eqStrings(typ0, ((NimStringDesc*) &TMP5524))) goto LA2;
	if (eqStrings(typ0, ((NimStringDesc*) &TMP1345))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line0;
				NimStringDesc* LOC12;
				line0 = readline_15910_1689653243(stdin);
				{
					if (!eqStrings(line0, ((NimStringDesc*) &TMP5525))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = (NimStringDesc*)0;
				LOC12 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(line0);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_562203_3526807654(((Tcmdlinepass252008) 1), line0);
				action0();
				gerrorcounter_187078_155036129 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP1345)? (((NimStringDesc*) &TMP1345))->data:"nil");
				fflush(stdout);
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl554404* server0;
		NimStringDesc* p0;
		NU16 port0;
		NimStringDesc* LOC20;
		NimStringDesc* inp0;
		TY187111 LOC21;
		server0 = newsocket_554821_170061329(((Domain548604) 2), ((Socktype548606) 1), ((Protocol548608) 6), NIM_TRUE);
		p0 = getconfigvar_164288_2607990831(((NimStringDesc*) &TMP5527));
		{
			NI LOC18;
			if (!(((NI) 0) < (p0 ? p0->Sup.len : 0))) goto LA16;
			LOC18 = (NI)0;
			LOC18 = nsuParseInt(p0);
			port0 = ((NU16) (LOC18));
		}
		goto LA14;
		LA16: ;
		{
			port0 = ((NU16) 6000);
		}
		LA14: ;
		LOC20 = (NimStringDesc*)0;
		LOC20 = getconfigvar_164288_2607990831(((NimStringDesc*) &TMP5528));
		bindaddr_555608_170061329(server0, port0, LOC20);
		inp0 = copyString(((NimStringDesc*) &TMP1345));
		listen_555604_170061329(server0, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_562426_3526807654).stdoutsocket562408), newsocket_554821_170061329(((Domain548604) 2), ((Socktype548606) 1), ((Protocol548608) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_562409_3526807654; LOC21.ClEnv = HEX3Aenv_562426_3526807654;
		asgnRef((void**) (&writelnhook_187114_155036129.ClEnv), LOC21.ClEnv);
		writelnhook_187114_155036129.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_556401_170061329(server0, &(*HEX3Aenv_562426_3526807654).stdoutsocket562408, 2);
				readline_559202_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408, (&inp0), ((NI) -1), 2);
				LOC24 = (NimStringDesc*)0;
				LOC24 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(inp0);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_562203_3526807654(((Tcmdlinepass252008) 1), inp0);
				action0();
				gerrorcounter_187078_155036129 = ((NI) 0);
				send_559601_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408, ((NimStringDesc*) &TMP5531), 2);
				close_556411_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP5539)? (((NimStringDesc*) &TMP5539))->data:"nil", typ0? (typ0)->data:"nil");
		fflush(stdout);
		msgquit_187153_155036129(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
nimRegisterGlobalMarker(TMP1344);
	LOC1 = (NimStringDesc*)0;
	LOC1 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(((NimStringDesc*) &TMP1345));
	if (LOC1) nimGCunrefNoCycle(LOC1);
nimRegisterGlobalMarker(TMP1346);
	LOC2 = (NimStringDesc*)0;
	LOC2 = lastcaascmd_562202_3526807654; lastcaascmd_562202_3526807654 = copyStringRC1(((NimStringDesc*) &TMP1345));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
static TNimNode* TMP5508[2];
static TNimNode TMP1338[3];
NTI562421.size = sizeof(TY562421);
NTI562421.kind = 18;
NTI562421.base = 0;
NTI562421.flags = 2;
TMP5508[0] = &TMP1338[1];
TMP1338[1].kind = 1;
TMP1338[1].offset = offsetof(TY562421, HEX3Astate);
TMP1338[1].typ = (&NTI351021);
TMP1338[1].name = ":state";
TMP5508[1] = &TMP1338[2];
TMP1338[2].kind = 1;
TMP1338[2].offset = offsetof(TY562421, stdoutsocket562408);
TMP1338[2].typ = (&NTI554406);
TMP1338[2].name = "stdoutSocket562408";
TMP1338[0].len = 2; TMP1338[0].kind = 2; TMP1338[0].sons = &TMP5508[0];
NTI562421.node = &TMP1338[0];
NTI562420.size = sizeof(TY562421*);
NTI562420.kind = 22;
NTI562420.base = (&NTI562421);
NTI562420.flags = 2;
NTI562420.marker = TMP5521;
}

