/* Generated by Nim Compiler v0.14.0 */
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47905 Cell47905;
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
typedef struct Optparser250205 Optparser250205;
typedef struct TNimObject TNimObject;
typedef struct TY562421 TY562421;
typedef struct Socketimpl553404 Socketimpl553404;
typedef struct Basechunk30037 Basechunk30037;
typedef struct Freecell30029 Freecell30029;
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
typedef N_NIMCALL_PTR(void, Globalmarkerproc56402) (void);
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
typedef NU8 Tcmdlinepass251008;
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Cmdlinekind250203;
struct  Optparser250205  {
  TNimObject Sup;
NimStringDesc* cmd;
NI pos;
NIM_BOOL inshortstate;
Cmdlinekind250203 kind;
NimStringDesc* key;
NimStringDesc* val;
};
typedef NU32 Tglobaloption163013Set;
typedef NU8 Tglobaloption163013;
typedef NU16 Tmsgkind185002;
typedef NimStringDesc* TY288494[1];
typedef N_NIMCALL_PTR(void, TY562238) (void);
struct  TY562421  {
NI HEX3Astate;
Socketimpl553404* stdoutsocket562408;
};
typedef NU8 Domain547604;
typedef NU8 Socktype547606;
typedef NU8 Protocol547608;
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NimStringDesc* output0, void* ClEnv);
void* ClEnv;
} TY186114;
typedef NU8 Socketflag553414Set;
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
typedef NIM_CHAR TY553418[4001];
struct  Socketimpl553404  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY553418 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
Domain547604 domain;
Socktype547606 socktype;
Protocol547608 protocol;
};
struct  Freecell30029  {
Freecell30029* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1342)();
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc56402 markerproc0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, TMP1344)();
N_NIMCALL(void, initoptparser_250325_4065315820)(NimStringDesc* cmdline0, Optparser250205* Result);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, nponext)(Optparser250205* p0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_BOOL, processargument_252724_2004575671)(Tcmdlinepass251008 pass0, Optparser250205* p0, NI* argscount0);
N_NIMCALL(void, processswitch_252717_2004575671)(Tcmdlinepass251008 pass0, Optparser250205* p0);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s0);
N_NIMCALL(void, rawmessage_187645_155036129)(Tmsgkind185002 msg0, NimStringDesc** args0, NI args0Len0);
N_NIMCALL(void, TMP5521)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, getconfigvar_163288_2607990831)(NimStringDesc* key0);
N_NIMCALL(NimStringDesc*, readline_15710_1689653243)(FILE* f0);
N_NIMCALL(void, processcmdline_562203_3526807654)(Tcmdlinepass251008 pass0, NimStringDesc* cmd0);
N_NIMCALL(Socketimpl553404*, newsocket_553821_170061329)(Domain547604 domain0, Socktype547606 socktype0, Protocol547608 protocol0, NIM_BOOL buffered0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, bindaddr_554608_170061329)(Socketimpl553404* socket0, NU16 port0, NimStringDesc* address0);
N_NIMCALL(void, listen_554604_170061329)(Socketimpl553404* socket0, int backlog0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
N_CLOSURE(void, HEX3Aanonymous_562409_3526807654)(NimStringDesc* line0, void* ClEnv);
N_NIMCALL(void, send_558803_170061329)(Socketimpl553404* socket0, NimStringDesc* data0, Socketflag553414Set flags0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0);
static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0);
N_NIMCALL(void, accept_555401_170061329)(Socketimpl553404* server0, Socketimpl553404** client0, Socketflag553414Set flags0);
N_NIMCALL(void, readline_558202_170061329)(Socketimpl553404* socket0, NimStringDesc** line0, NI timeout0, Socketflag553414Set flags0);
N_NIMCALL(void, close_555411_170061329)(Socketimpl553404* socket0);
N_NIMCALL(void, msgquit_186156_155036129)(NI8 x0);
STRING_LITERAL(TMP1343, "", 0);
STRING_LITERAL(TMP1828, " ", 1);
STRING_LITERAL(TMP1829, "-", 1);
STRING_LITERAL(TMP2191, "run", 3);
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
extern Gcheap50418 gch_50458_1689653243;
NimStringDesc* lastcaascmd_562202_3526807654;
extern TNimType NTI250205; /* OptParser */
extern Tglobaloption163013Set gglobaloptions_163127_2607990831;
extern NimStringDesc* arguments_252716_2004575671;
extern NimStringDesc* command_163211_2607990831;
TNimType NTI562421; /* object */
extern TNimType NTI350021; /* range -1..0(int) */
extern TNimType NTI553406; /* Socket */
TNimType NTI562420; /* ref object */
extern NI gerrorcounter_186081_155036129;
extern TY186114 writelnhook_186117_155036129;
N_NIMCALL(void, TMP1342)() {
	nimGCvisit((void*)curcaascmd_562201_3526807654, 0);
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell47905))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0) {
	addzct_52017_1689653243((&gch_50458_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47905* c0;
	c0 = usrtocell_52040_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1344)() {
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

N_NIMCALL(void, processcmdline_562203_3526807654)(Tcmdlinepass251008 pass0, NimStringDesc* cmd0) {
	Optparser250205 p0;
	NI argscount0;
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI250205);
	chckNil((void*)(&p0));
	memset((void*)(&p0), 0, sizeof(p0));
	p0.Sup.m_type = (&NTI250205);
	initoptparser_250325_4065315820(cmd0, (&p0));
	argscount0 = ((NI) 0);
	{
		while (1) {
			nponext((&p0));
			switch (p0.kind) {
			case ((Cmdlinekind250203) 0):
			{
				goto LA1;
			}
			break;
			case ((Cmdlinekind250203) 2):
			case ((Cmdlinekind250203) 3):
			{
				{
					if (!eqStrings(p0.key, ((NimStringDesc*) &TMP1828))) goto LA7;
					p0.key = copyString(((NimStringDesc*) &TMP1829));
					{
						NIM_BOOL LOC11;
						LOC11 = (NIM_BOOL)0;
						LOC11 = processargument_252724_2004575671(pass0, (&p0), (&argscount0));
						if (!LOC11) goto LA12;
						goto LA1;
					}
					LA12: ;
				}
				goto LA5;
				LA7: ;
				{
					processswitch_252717_2004575671(pass0, (&p0));
				}
				LA5: ;
			}
			break;
			case ((Cmdlinekind250203) 1):
			{
				{
					NIM_BOOL LOC18;
					LOC18 = (NIM_BOOL)0;
					LOC18 = processargument_252724_2004575671(pass0, (&p0), (&argscount0));
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
		if (!(pass0 == ((Tcmdlinepass251008) 1))) goto LA23;
		{
			NIM_BOOL LOC27;
			NIM_BOOL LOC28;
			NimStringDesc* LOC31;
			TY288494 LOC34;
			LOC27 = (NIM_BOOL)0;
			LOC28 = (NIM_BOOL)0;
			LOC28 = !(((gglobaloptions_163127_2607990831 &(1U<<((NU)(((Tglobaloption163013) 13))&31U)))!=0));
			if (!(LOC28)) goto LA29;
			LOC28 = !(((arguments_252716_2004575671) && (arguments_252716_2004575671)->Sup.len == 0));
			LA29: ;
			LOC27 = LOC28;
			if (!(LOC27)) goto LA30;
			LOC31 = (NimStringDesc*)0;
			LOC31 = nsuNormalize(command_163211_2607990831);
			LOC27 = !(eqStrings(LOC31, ((NimStringDesc*) &TMP2191)));
			LA30: ;
			if (!LOC27) goto LA32;
			memset((void*)LOC34, 0, sizeof(LOC34));
			rawmessage_187645_155036129(((Tmsgkind185002) 59), LOC34, 0);
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
	send_558803_170061329((*HEX3Aenvp_562424_3526807654).stdoutsocket562408, LOC1, 2);
}

static N_INLINE(void, incref_54019_1689653243)(Cell47905* c0) {
	(*c0).refcount = (NI)((NU32)((*c0).refcount) + (NU32)(((NI) 8)));
}

static N_INLINE(void, decref_53601_1689653243)(Cell47905* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_53201_1689653243(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell47905* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell47905*)0;
		LOC5 = usrtocell_52040_1689653243(src0);
		incref_54019_1689653243(LOC5);
	}
	LA3: ;
	{
		Cell47905* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell47905*)0;
		LOC10 = usrtocell_52040_1689653243((*dest0));
		decref_53601_1689653243(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, serve_562236_3526807654)(TY562238 action0) {
	TY562421* HEX3Aenv_562426_3526807654;
	NimStringDesc* typ0;
	HEX3Aenv_562426_3526807654 = (TY562421*)0;
	HEX3Aenv_562426_3526807654 = (TY562421*) newObj((&NTI562420), sizeof(TY562421));
	typ0 = getconfigvar_163288_2607990831(((NimStringDesc*) &TMP5522));
	if (eqStrings(typ0, ((NimStringDesc*) &TMP5523))) goto LA1;
	if (eqStrings(typ0, ((NimStringDesc*) &TMP5524))) goto LA2;
	if (eqStrings(typ0, ((NimStringDesc*) &TMP1343))) goto LA2;
	goto LA3;
	LA1: ;
	{
		{
			while (1) {
				NimStringDesc* line0;
				NimStringDesc* LOC12;
				line0 = readline_15710_1689653243(stdin);
				{
					if (!eqStrings(line0, ((NimStringDesc*) &TMP5525))) goto LA10;
					exit(((NI) 0));
				}
				LA10: ;
				LOC12 = (NimStringDesc*)0;
				LOC12 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(line0);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				processcmdline_562203_3526807654(((Tcmdlinepass251008) 1), line0);
				action0();
				gerrorcounter_186081_155036129 = ((NI) 0);
				printf("%s\012", ((NimStringDesc*) &TMP1343)? (((NimStringDesc*) &TMP1343))->data:"nil");
				fflush(stdout);
				fflush(stdout);
			}
		}
	}
	goto LA4;
	LA2: ;
	{
		Socketimpl553404* server0;
		NimStringDesc* p0;
		NU16 port0;
		NimStringDesc* LOC20;
		NimStringDesc* inp0;
		TY186114 LOC21;
		server0 = newsocket_553821_170061329(((Domain547604) 2), ((Socktype547606) 1), ((Protocol547608) 6), NIM_TRUE);
		p0 = getconfigvar_163288_2607990831(((NimStringDesc*) &TMP5527));
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
		LOC20 = getconfigvar_163288_2607990831(((NimStringDesc*) &TMP5528));
		bindaddr_554608_170061329(server0, port0, LOC20);
		inp0 = copyString(((NimStringDesc*) &TMP1343));
		listen_554604_170061329(server0, SOMAXCONN);
		asgnRefNoCycle((void**) (&(*HEX3Aenv_562426_3526807654).stdoutsocket562408), newsocket_553821_170061329(((Domain547604) 2), ((Socktype547606) 1), ((Protocol547608) 6), NIM_TRUE));
		memset((void*)(&LOC21), 0, sizeof(LOC21));
		LOC21.ClPrc = HEX3Aanonymous_562409_3526807654; LOC21.ClEnv = HEX3Aenv_562426_3526807654;
		asgnRef((void**) (&writelnhook_186117_155036129.ClEnv), LOC21.ClEnv);
		writelnhook_186117_155036129.ClPrc = LOC21.ClPrc;
		{
			while (1) {
				NimStringDesc* LOC24;
				accept_555401_170061329(server0, &(*HEX3Aenv_562426_3526807654).stdoutsocket562408, 2);
				readline_558202_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408, (&inp0), ((NI) -1), 2);
				LOC24 = (NimStringDesc*)0;
				LOC24 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(inp0);
				if (LOC24) nimGCunrefNoCycle(LOC24);
				processcmdline_562203_3526807654(((Tcmdlinepass251008) 1), inp0);
				action0();
				gerrorcounter_186081_155036129 = ((NI) 0);
				send_558803_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408, ((NimStringDesc*) &TMP5531), 2);
				close_555411_170061329((*HEX3Aenv_562426_3526807654).stdoutsocket562408);
			}
		}
	}
	goto LA4;
	LA3: ;
	{
		printf("%s%s\012", ((NimStringDesc*) &TMP5539)? (((NimStringDesc*) &TMP5539))->data:"nil", typ0? (typ0)->data:"nil");
		fflush(stdout);
		msgquit_186156_155036129(((NI8) 1));
	}
	LA4: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_serviceInit000)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
nimRegisterGlobalMarker(TMP1342);
	LOC1 = (NimStringDesc*)0;
	LOC1 = curcaascmd_562201_3526807654; curcaascmd_562201_3526807654 = copyStringRC1(((NimStringDesc*) &TMP1343));
	if (LOC1) nimGCunrefNoCycle(LOC1);
nimRegisterGlobalMarker(TMP1344);
	LOC2 = (NimStringDesc*)0;
	LOC2 = lastcaascmd_562202_3526807654; lastcaascmd_562202_3526807654 = copyStringRC1(((NimStringDesc*) &TMP1343));
	if (LOC2) nimGCunrefNoCycle(LOC2);
}

NIM_EXTERNC N_NOINLINE(void, compiler_serviceDatInit000)(void) {
static TNimNode* TMP5508[2];
static TNimNode TMP1336[3];
NTI562421.size = sizeof(TY562421);
NTI562421.kind = 18;
NTI562421.base = 0;
NTI562421.flags = 2;
TMP5508[0] = &TMP1336[1];
TMP1336[1].kind = 1;
TMP1336[1].offset = offsetof(TY562421, HEX3Astate);
TMP1336[1].typ = (&NTI350021);
TMP1336[1].name = ":state";
TMP5508[1] = &TMP1336[2];
TMP1336[2].kind = 1;
TMP1336[2].offset = offsetof(TY562421, stdoutsocket562408);
TMP1336[2].typ = (&NTI553406);
TMP1336[2].name = "stdoutSocket562408";
TMP1336[0].len = 2; TMP1336[0].kind = 2; TMP1336[0].sons = &TMP5508[0];
NTI562421.node = &TMP1336[0];
NTI562420.size = sizeof(TY562421*);
NTI562420.kind = 22;
NTI562420.base = (&NTI562421);
NTI562420.flags = 2;
NTI562420.marker = TMP5521;
}

