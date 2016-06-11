/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>
#include <arpa/inet.h>
#include <setjmp.h>
typedef struct Socketimpl554404 Socketimpl554404;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeouterror554412 Timeouterror554412;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Cell47905 Cell47905;
typedef struct Cellseq47921 Cellseq47921;
typedef struct Gcheap50418 Gcheap50418;
typedef struct Gcstack50416 Gcstack50416;
typedef struct Memregion30086 Memregion30086;
typedef struct Smallchunk30040 Smallchunk30040;
typedef struct Llchunk30080 Llchunk30080;
typedef struct Bigchunk30042 Bigchunk30042;
typedef struct Intset30014 Intset30014;
typedef struct Trunk30010 Trunk30010;
typedef struct Avlnode30084 Avlnode30084;
typedef struct Gcstat50414 Gcstat50414;
typedef struct Cellset47917 Cellset47917;
typedef struct Pagedesc47913 Pagedesc47913;
typedef struct TY557819 TY557819;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk30038 Basechunk30038;
typedef struct Freecell30030 Freecell30030;
typedef NIM_CHAR TY554418[4001];
typedef NU8 Domain548604;
typedef NU8 Socktype548606;
typedef NU8 Protocol548608;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Socketflag554414Set;
typedef NU8 Socketflag554414;
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Timeouterror554412  {
  Exception Sup;
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
typedef Smallchunk30040* TY30101[512];
typedef Trunk30010* Trunkbuckets30012[256];
struct  Intset30014  {
Trunkbuckets30012 data;
};
struct  Memregion30086  {
NI minlargeobj;
NI maxlargeobj;
TY30101 freesmallchunks;
Llchunk30080* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk30042* freechunkslist;
Intset30014 chunkstarts;
Avlnode30084* root;
Avlnode30084* deleted;
Avlnode30084* last;
Avlnode30084* freeavlnodes;
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
Memregion30086 region;
Gcstat50414 stat;
Cellset47917 marked;
Cellseq47921 additionalroots;
};
typedef int TY557808[1];
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY18011;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY18011 raiseAction;
};
typedef NIM_CHAR TY115771[256];
struct  Gcstack50416  {
Gcstack50416* prev;
Gcstack50416* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk30038  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk30040  {
  Basechunk30038 Sup;
Smallchunk30040* next;
Smallchunk30040* prev;
Freecell30030* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk30080  {
NI size;
NI acc;
Llchunk30080* next;
};
struct  Bigchunk30042  {
  Basechunk30038 Sup;
Bigchunk30042* next;
Bigchunk30042* prev;
NI align;
NF data;
};
typedef NI TY30019[8];
struct  Trunk30010  {
Trunk30010* next;
NI key;
TY30019 bits;
};
typedef Avlnode30084* TY30091[2];
struct  Avlnode30084  {
TY30091 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47913  {
Pagedesc47913* next;
NI key;
TY30019 bits;
};
struct  Freecell30030  {
Freecell30030* next;
NI zerofield;
};
struct TY557819 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP5523)(void* p, NI op);
N_NIMCALL(int, newnativesocket_549001_466562973)(Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0);
N_NOINLINE(void, raiseoserror_127003_2125978480)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_127019_2125978480)(void);
N_NIMCALL(Socketimpl554404*, newsocket_554674_170061329)(int fd0, Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0, NIM_BOOL buffered0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(int, toint_548820_466562973)(Domain548604 domain0);
N_NIMCALL(NU16, ntohs_550088_466562973)(NU16 x0);
N_NIMCALL(NU32, ntohl_549806_466562973)(NU32 x0);
N_NIMCALL(int, bindaddr_549208_466562973)(int socket0, struct sockaddr* name0, socklen_t namelen0);
N_NIMCALL(struct addrinfo*, getaddrinfo_549402_466562973)(NimStringDesc* address0, NU16 port0, Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0);
N_NIMCALL(void, dealloc_549802_466562973)(struct addrinfo* ai0);
N_NIMCALL(int, listen_549215_466562973)(int socket0, int backlog0);
N_NIMCALL(NI, send_559281_170061329)(Socketimpl554404* socket0, void* data0, NI size0);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_554469_170061329)(Socketflag554414Set flags0, NI32 lasterror0);
N_NIMCALL(void, socketerror_554463_170061329)(Socketimpl554404* socket0, NI err0, NIM_BOOL async0, NI32 lasterror0);
N_NIMCALL(NI32, getsocketerror_555001_170061329)(Socketimpl554404* socket0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(void, acceptaddr_555809_170061329)(Socketimpl554404* server0, Socketimpl554404** client0, NimStringDesc** address0, Socketflag554414Set flags0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NI, waitfor_558406_170061329)(Socketimpl554404* socket0, NF* waited0, NI timeout0, NI size0, NimStringDesc* funcname0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP5535)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53201_1689653243)(Cell47905* c0);
N_NOINLINE(void, addzct_52017_1689653243)(Cellseq47921* s0, Cell47905* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_557801_170061329)(Socketimpl554404* readfd0, NI timeout0);
N_NIMCALL(NIM_BOOL, hasdatabuffered_557601_170061329)(Socketimpl554404* s0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NI, select_553077_466562973)(TY557819** readfds0, NI timeout0);
static N_INLINE(void, HEX2BHEX3D_107701_1689653243)(NF* x0, NF y0);
N_NIMCALL(NI, recv_558016_170061329)(Socketimpl554404* socket0, void* data0, NI size0);
N_NIMCALL(NI, readintobuf_557823_170061329)(Socketimpl554404* socket0, NI32 flags0);
N_NIMCALL(NI, peekchar_559026_170061329)(Socketimpl554404* socket0, NIM_CHAR* c0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_549013_466562973)(int socket0);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_554404_isbuffered[3];
STRING_LITERAL(TMP5529, "", 0);
STRING_LITERAL(TMP5532, "No valid socket error code available", 36);
STRING_LITERAL(TMP5533, "Could not send all data.", 24);
STRING_LITERAL(TMP5536, "Call to \'", 9);
STRING_LITERAL(TMP5537, "\' timed out.", 12);
STRING_LITERAL(TMP5539, "readLine", 8);
STRING_LITERAL(TMP5540, "\015\012", 2);
TNimType NTI554404; /* SocketImpl */
extern TNimType NTI7208; /* cint */
extern TNimType NTI130; /* bool */
extern TNimType NTI136; /* char */
TNimType NTI554418; /* array[0..4000, char] */
extern TNimType NTI104; /* int */
extern TNimType NTI110; /* int32 */
extern TNimType NTI548604; /* Domain */
extern TNimType NTI548606; /* SockType */
extern TNimType NTI548608; /* Protocol */
TNimType NTI554406; /* Socket */
extern int osinvalidsocket_548644_466562973;
extern TNimType NTI3424; /* Exception */
TNimType NTI554412; /* TimeoutError */
TNimType NTI558614; /* ref TimeoutError */
extern Gcheap50418 gch_50458_1689653243;
extern TNimType NTI557819; /* seq[SocketHandle] */
extern TSafePoint* exchandler_19637_1689653243;
N_NIMCALL(void, TMP5523)(void* p, NI op) {
	Socketimpl554404* a;
	NI LOC1;
	a = (Socketimpl554404*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl554404*, newsocket_554674_170061329)(int fd0, Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0, NIM_BOOL buffered0) {
	Socketimpl554404* result0;
	result0 = (Socketimpl554404*)0;
	result0 = (Socketimpl554404*) newObj((&NTI554406), sizeof(Socketimpl554404));
	(*result0).fd = fd0;
	(*result0).isbuffered = buffered0;
	(*result0).domain = domain0;
	(*result0).socktype = socktype0;
	(*result0).protocol = protocol0;
	{
		if (!buffered0) goto LA3;
		(*result0).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result0;
}

N_NIMCALL(Socketimpl554404*, newsocket_554821_170061329)(Domain548604 domain0, Socktype548606 socktype0, Protocol548608 protocol0, NIM_BOOL buffered0) {
	Socketimpl554404* result0;
	int fd0;
	result0 = (Socketimpl554404*)0;
	fd0 = newnativesocket_549001_466562973(domain0, socktype0, protocol0);
	{
		NI32 LOC5;
		if (!(fd0 == osinvalidsocket_548644_466562973)) goto LA3;
		LOC5 = (NI32)0;
		LOC5 = oslasterror_127019_2125978480();
		raiseoserror_127003_2125978480(LOC5, ((NimStringDesc*) &TMP5529));
	}
	LA3: ;
	result0 = newsocket_554674_170061329(fd0, domain0, socktype0, protocol0, buffered0);
	return result0;
}

N_NIMCALL(void, bindaddr_555608_170061329)(Socketimpl554404* socket0, NU16 port0, NimStringDesc* address0) {
	{
		struct sockaddr_in name0;
		if (!((address0) && (address0)->Sup.len == 0)) goto LA3;
		memset((void*)(&name0), 0, sizeof(name0));
		name0.sin_family = toint_548820_466562973(((Domain548604) 2));
		name0.sin_port = ntohs_550088_466562973(port0);
		name0.sin_addr.s_addr = ntohl_549806_466562973(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = (int)0;
			LOC7 = bindaddr_549208_466562973((*socket0).fd, ((struct sockaddr*) ((&name0))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = (NI32)0;
			LOC10 = oslasterror_127019_2125978480();
			raiseoserror_127003_2125978480(LOC10, ((NimStringDesc*) &TMP5529));
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist0;
		ailist0 = getaddrinfo_549402_466562973(address0, port0, (*socket0).domain, ((Socktype548606) 1), ((Protocol548608) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = (int)0;
			LOC14 = bindaddr_549208_466562973((*socket0).fd, (*ailist0).ai_addr, (*ailist0).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_549802_466562973(ailist0);
			LOC17 = (NI32)0;
			LOC17 = oslasterror_127019_2125978480();
			raiseoserror_127003_2125978480(LOC17, ((NimStringDesc*) &TMP5529));
		}
		LA15: ;
		dealloc_549802_466562973(ailist0);
	}
	LA1: ;
}

N_NIMCALL(void, listen_555604_170061329)(Socketimpl554404* socket0, int backlog0) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = (int)0;
		LOC3 = listen_549215_466562973((*socket0).fd, backlog0);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = (NI32)0;
		LOC6 = oslasterror_127019_2125978480();
		raiseoserror_127003_2125978480(LOC6, ((NimStringDesc*) &TMP5529));
	}
	LA4: ;
}

N_NIMCALL(NI, send_559281_170061329)(Socketimpl554404* socket0, void* data0, NI size0) {
	NI result0;
	result0 = (NI)0;
	result0 = send((*socket0).fd, data0, size0, MSG_NOSIGNAL);
	return result0;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_554469_170061329)(Socketflag554414Set flags0, NI32 lasterror0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((flags0 &(1U<<((NU)(((Socketflag554414) 1))&7U)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror0 == ((NI) (ECONNRESET)) || lasterror0 == ((NI) (EPIPE)) || lasterror0 == ((NI) (ENETRESET)));
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI32, getsocketerror_555001_170061329)(Socketimpl554404* socket0) {
	NI32 result0;
	result0 = (NI32)0;
	result0 = oslasterror_127019_2125978480();
	{
		if (!(result0 == ((NI32) 0))) goto LA3;
		result0 = (*socket0).lasterror;
	}
	LA3: ;
	{
		if (!(result0 == ((NI32) 0))) goto LA7;
		raiseoserror_127003_2125978480(result0, ((NimStringDesc*) &TMP5532));
	}
	LA7: ;
	return result0;
}

N_NIMCALL(void, socketerror_554463_170061329)(Socketimpl554404* socket0, NI err0, NIM_BOOL async0, NI32 lasterror0) {
{	{
		NIM_BOOL LOC3;
		NI32 laste0;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (err0 == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror0)) == ((NI) -1))) goto LA9;
			laste0 = getsocketerror_555001_170061329(socket0);
		}
		goto LA7;
		LA9: ;
		{
			laste0 = lasterror0;
		}
		LA7: ;
		{
			if (!async0) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = (NIM_BOOL)0;
				LOC18 = (laste0 == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste0 == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_127003_2125978480(laste0, ((NimStringDesc*) &TMP5529));
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_127003_2125978480(laste0, ((NimStringDesc*) &TMP5529));
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_559802_170061329)(Socketimpl554404* socket0, NimStringDesc* data0, Socketflag554414Set flags0) {
	NI sent0;
{	sent0 = send_559281_170061329(socket0, ((void*) (data0->data)), (data0 ? data0->Sup.len : 0));
	{
		NI32 lasterror0;
		if (!(sent0 < ((NI) 0))) goto LA3;
		lasterror0 = oslasterror_127019_2125978480();
		{
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = isdisconnectionerror_554469_170061329(flags0, lasterror0);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_554463_170061329(socket0, ((NI) -1), NIM_FALSE, lasterror0);
	}
	LA3: ;
	{
		NI32 LOC14;
		if (!!((sent0 == (data0 ? data0->Sup.len : 0)))) goto LA12;
		LOC14 = (NI32)0;
		LOC14 = oslasterror_127019_2125978480();
		raiseoserror_127003_2125978480(LOC14, ((NimStringDesc*) &TMP5533));
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_555809_170061329)(Socketimpl554404* server0, Socketimpl554404** client0, NimStringDesc** address0, Socketflag554414Set flags0) {
	struct sockaddr_in sockaddress0;
	socklen_t addrlen0;
	int sock0;
	memset((void*)(&sockaddress0), 0, sizeof(sockaddress0));
	addrlen0 = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock0 = accept((*server0).fd, ((struct sockaddr*) ((&sockaddress0))), (&addrlen0));
	{
		NI32 err0;
		if (!(sock0 == osinvalidsocket_548644_466562973)) goto LA3;
		err0 = oslasterror_127019_2125978480();
		{
			NIM_BOOL LOC7;
			LOC7 = (NIM_BOOL)0;
			LOC7 = isdisconnectionerror_554469_170061329(flags0, err0);
			if (!LOC7) goto LA8;
			acceptaddr_555809_170061329(server0, client0, address0, flags0);
		}
		LA8: ;
		raiseoserror_127003_2125978480(err0, ((NimStringDesc*) &TMP5529));
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client0)).fd = sock0;
		(*(*client0)).isbuffered = (*server0).isbuffered;
		LOC11 = (NCSTRING)0;
		LOC11 = inet_ntoa(sockaddress0.sin_addr);
		unsureAsgnRef((void**) (&(*address0)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_556401_170061329)(Socketimpl554404* server0, Socketimpl554404** client0, Socketflag554414Set flags0) {
	NimStringDesc* addrdummy0;
	addrdummy0 = copyString(((NimStringDesc*) &TMP5529));
	acceptaddr_555809_170061329(server0, client0, (&addrdummy0), flags0);
}
N_NIMCALL(void, TMP5535)(void* p, NI op) {
	Timeouterror554412* a;
	a = (Timeouterror554412*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(Cell47905*, usrtocell_52040_1689653243)(void* usr0) {
	Cell47905* result0;
	result0 = (Cell47905*)0;
	result0 = ((Cell47905*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47905))))));
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
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_53201_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_557601_170061329)(Socketimpl554404* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s0).isbuffered) goto LA3;
		LOC5 = (NIM_BOOL)0;
		LOC5 = (((NI) 0) < (*s0).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s0).isbufferedU.S1.currpos == (*s0).isbufferedU.S1.buflen));
		LA6: ;
		result0 = LOC5;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, select_557801_170061329)(Socketimpl554404* readfd0, NI timeout0) {
	NI result0;
	TY557819* fds0;
	TY557808 LOC6;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = hasdatabuffered_557601_170061329(readfd0);
		if (!LOC3) goto LA4;
		result0 = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds0 = (TY557819*) newSeq((&NTI557819), 1);
	LOC6[0] = (*readfd0).fd;
	fds0->data[0] = LOC6[0];
	result0 = select_553077_466562973((&fds0), timeout0);
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, HEX2BHEX3D_107701_1689653243)(NF* x0, NF y0) {
	(*x0) = ((NF)((*x0)) + (NF)(y0));
}

N_NIMCALL(NI, waitfor_558406_170061329)(Socketimpl554404* socket0, NF* waited0, NI timeout0, NI size0, NimStringDesc* funcname0) {
	NI result0;
{	result0 = (NI)0;
	result0 = ((NI) 1);
	{
		if (!(size0 <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout0 == ((NI) -1))) goto LA7;
		result0 = size0;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = (NIM_BOOL)0;
		LOC12 = (NIM_BOOL)0;
		LOC12 = (*socket0).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket0).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket0).isbufferedU.S1.buflen == (*socket0).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result0 = (NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos);
		result0 = ((result0 <= size0) ? result0 : size0);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime0;
		NI selret0;
		NF LOC33;
		{
			Timeouterror554412* e_558613_170061329;
			NimStringDesc* LOC22;
			if (!((NI)(timeout0 - ((NI) (((NF)((*waited0)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_558613_170061329 = (Timeouterror554412*)0;
			e_558613_170061329 = (Timeouterror554412*) newObj((&NTI558614), sizeof(Timeouterror554412));
			(*e_558613_170061329).Sup.Sup.m_type = (&NTI554412);
			LOC22 = (NimStringDesc*)0;
			LOC22 = rawNewString(funcname0->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP5536));
appendString(LOC22, funcname0);
appendString(LOC22, ((NimStringDesc*) &TMP5537));
			asgnRefNoCycle((void**) (&(*e_558613_170061329).Sup.message), LOC22);
			raiseException((Exception*)e_558613_170061329, "TimeoutError");
		}
		LA20: ;
		starttime0 = ntepochTime();
		selret0 = select_557801_170061329(socket0, (NI)(timeout0 - ((NI) (((NF)((*waited0)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret0 < ((NI) 0))) goto LA25;
			LOC27 = (NI32)0;
			LOC27 = oslasterror_127019_2125978480();
			raiseoserror_127003_2125978480(LOC27, ((NimStringDesc*) &TMP5529));
		}
		LA25: ;
		{
			Timeouterror554412* e_558806_170061329;
			NimStringDesc* LOC32;
			if (!!((selret0 == ((NI) 1)))) goto LA30;
			e_558806_170061329 = (Timeouterror554412*)0;
			e_558806_170061329 = (Timeouterror554412*) newObj((&NTI558614), sizeof(Timeouterror554412));
			(*e_558806_170061329).Sup.Sup.m_type = (&NTI554412);
			LOC32 = (NimStringDesc*)0;
			LOC32 = rawNewString(funcname0->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP5536));
appendString(LOC32, funcname0);
appendString(LOC32, ((NimStringDesc*) &TMP5537));
			asgnRefNoCycle((void**) (&(*e_558806_170061329).Sup.message), LOC32);
			raiseException((Exception*)e_558806_170061329, "TimeoutError");
		}
		LA30: ;
		LOC33 = (NF)0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_107701_1689653243(waited0, ((NF)(LOC33) - (NF)(starttime0)));
	}
	LA9: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, readintobuf_557823_170061329)(Socketimpl554404* socket0, NI32 flags0) {
	NI result0;
{	result0 = (NI)0;
	result0 = ((NI) 0);
	result0 = recv((*socket0).fd, ((void*) ((*socket0).isbufferedU.S1.buffer)), ((NI) 4000), flags0);
	{
		if (!(result0 < ((NI) 0))) goto LA3;
		(*socket0).lasterror = oslasterror_127019_2125978480();
	}
	LA3: ;
	{
		if (!(result0 <= ((NI) 0))) goto LA7;
		(*socket0).isbufferedU.S1.buflen = ((NI) 0);
		(*socket0).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket0).isbufferedU.S1.buflen = result0;
	(*socket0).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, recv_558016_170061329)(Socketimpl554404* socket0, void* data0, NI size0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(size0 == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read0;
		if (!(*socket0).isbuffered) goto LA7;
		{
			NI res0;
			if (!((*socket0).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res0 = readintobuf_557823_170061329(socket0, ((NI32) 0));
			{
				if (!(res0 <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result0 = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result0 = res0;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read0 = ((NI) 0);
		{
			while (1) {
				NI chunk0;
				NCSTRING d0;
				if (!(read0 < size0)) goto LA23;
				{
					NI res0;
					if (!((*socket0).isbufferedU.S1.buflen <= (*socket0).isbufferedU.S1.currpos)) goto LA26;
					res0 = readintobuf_557823_170061329(socket0, ((NI32) 0));
					{
						if (!(res0 <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read0)) goto LA34;
							result0 = read0;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result0 = res0;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk0 = (((NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos) <= (NI)(size0 - read0)) ? (NI)((*socket0).isbufferedU.S1.buflen - (*socket0).isbufferedU.S1.currpos) : (NI)(size0 - read0));
				d0 = ((NCSTRING) (data0));
				memcpy(((void*) ((&d0[read0]))), ((void*) ((&(*socket0).isbufferedU.S1.buffer[((*socket0).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk0)));
				read0 += chunk0;
				(*socket0).isbufferedU.S1.currpos += chunk0;
			} LA23: ;
		}
		result0 = read0;
	}
	goto LA5;
	LA7: ;
	{
		result0 = recv((*socket0).fd, data0, ((NI) (((int) (size0)))), ((NI32) 0));
		{
			if (!(result0 < ((NI) 0))) goto LA40;
			(*socket0).lasterror = oslasterror_127019_2125978480();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, peekchar_559026_170061329)(Socketimpl554404* socket0, NIM_CHAR* c0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!(*socket0).isbuffered) goto LA3;
		result0 = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res0;
			LOC7 = (NIM_BOOL)0;
			LOC7 = ((*socket0).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket0).isbufferedU.S1.buflen - ((NI) 1)) < (*socket0).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res0 = readintobuf_557823_170061329(socket0, ((NI32) 0));
			{
				if (!(res0 <= ((NI) 0))) goto LA13;
				result0 = res0;
			}
			LA13: ;
		}
		LA9: ;
		(*c0) = (*socket0).isbufferedU.S1.buffer[((*socket0).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result0 = recv((*socket0).fd, ((void*) (c0)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, readline_559202_170061329)(Socketimpl554404* socket0, NimStringDesc** line0, NI timeout0, Socketflag554414Set flags0) {
	NF waited0;
{	waited0 = 0.0;
	(*line0) = setLengthStr((*line0), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c0;
			NI LOC3;
			NI n0;
			c0 = (NIM_CHAR)0;
			LOC3 = (NI)0;
			LOC3 = waitfor_558406_170061329(socket0, (&waited0), timeout0, ((NI) 1), ((NimStringDesc*) &TMP5539));
			n0 = recv_558016_170061329(socket0, ((void*) ((&c0))), ((NI) 1));
			{
				NI32 lasterror0;
				if (!(n0 < ((NI) 0))) goto LA6;
				lasterror0 = getsocketerror_555001_170061329(socket0);
				{
					NIM_BOOL LOC10;
					LOC10 = (NIM_BOOL)0;
					LOC10 = isdisconnectionerror_554469_170061329(flags0, lasterror0);
					if (!LOC10) goto LA11;
					(*line0) = setLengthStr((*line0), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_554463_170061329(socket0, n0, NIM_FALSE, lasterror0);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n0 == ((NI) 0))) goto LA14;
				(*line0) = setLengthStr((*line0), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c0) == (NU8)(13))) goto LA18;
				LOC20 = (NI)0;
				LOC20 = waitfor_558406_170061329(socket0, (&waited0), timeout0, ((NI) 1), ((NimStringDesc*) &TMP5539));
				n0 = peekchar_559026_170061329(socket0, (&c0));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = (NIM_BOOL)0;
					LOC23 = (((NI) 0) < n0);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c0) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = (NI)0;
					LOC27 = recv_558016_170061329(socket0, ((void*) ((&c0))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror0;
					if (!(n0 <= ((NI) 0))) goto LA29;
					lasterror0 = getsocketerror_555001_170061329(socket0);
					{
						NIM_BOOL LOC33;
						LOC33 = (NIM_BOOL)0;
						LOC33 = isdisconnectionerror_554469_170061329(flags0, lasterror0);
						if (!LOC33) goto LA34;
						(*line0) = setLengthStr((*line0), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_554463_170061329(socket0, n0, NIM_FALSE, lasterror0);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line0) ? (*line0)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line0) = resizeString((*line0), 2);
appendString((*line0), ((NimStringDesc*) &TMP5540));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c0) == (NU8)(10))) goto LA41;
				{
					if (!(((*line0) ? (*line0)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line0) = resizeString((*line0), 2);
appendString((*line0), ((NimStringDesc*) &TMP5540));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line0) = addChar((*line0), c0);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_19637_1689653243;
	exchandler_19637_1689653243 = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19637_1689653243 = (*exchandler_19637_1689653243).prev;
}

N_NIMCALL(void, close_556411_170061329)(Socketimpl554404* socket0) {
	TSafePoint TMP5541;
	pushSafePoint(&TMP5541);
	TMP5541.status = _setjmp(TMP5541.context);
	if (TMP5541.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_549013_466562973((*socket0).fd);
	}
	if (TMP5541.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void) {
static TNimNode* TMP5512[6];
static TNimNode* TMP5513[3];
static TNimNode TMP1340[13];
NTI554404.size = sizeof(Socketimpl554404);
NTI554404.kind = 18;
NTI554404.base = 0;
NTI554404.flags = 3;
TMP5512[0] = &TMP1340[1];
TMP1340[1].kind = 1;
TMP1340[1].offset = offsetof(Socketimpl554404, fd);
TMP1340[1].typ = (&NTI7208);
TMP1340[1].name = "fd";
TMP5512[1] = &TMP1340[2];
TMP1340[2].kind = 3;
TMP1340[2].offset = offsetof(Socketimpl554404, isbuffered);
TMP1340[2].typ = (&NTI130);
TMP1340[2].name = "isBuffered";
TMP1340[2].sons = &NimDT_554404_isbuffered[0];
TMP1340[2].len = 2;
TMP5513[0] = &TMP1340[4];
NTI554418.size = sizeof(TY554418);
NTI554418.kind = 16;
NTI554418.base = (&NTI136);
NTI554418.flags = 3;
TMP1340[4].kind = 1;
TMP1340[4].offset = offsetof(Socketimpl554404, isbufferedU.S1.buffer);
TMP1340[4].typ = (&NTI554418);
TMP1340[4].name = "buffer";
TMP5513[1] = &TMP1340[5];
TMP1340[5].kind = 1;
TMP1340[5].offset = offsetof(Socketimpl554404, isbufferedU.S1.currpos);
TMP1340[5].typ = (&NTI104);
TMP1340[5].name = "currPos";
TMP5513[2] = &TMP1340[6];
TMP1340[6].kind = 1;
TMP1340[6].offset = offsetof(Socketimpl554404, isbufferedU.S1.buflen);
TMP1340[6].typ = (&NTI104);
TMP1340[6].name = "bufLen";
TMP1340[3].len = 3; TMP1340[3].kind = 2; TMP1340[3].sons = &TMP5513[0];
NimDT_554404_isbuffered[1] = &TMP1340[3];
TMP1340[7].len = 0; TMP1340[7].kind = 2;
NimDT_554404_isbuffered[0] = &TMP1340[7];
TMP5512[2] = &TMP1340[8];
TMP1340[8].kind = 1;
TMP1340[8].offset = offsetof(Socketimpl554404, lasterror);
TMP1340[8].typ = (&NTI110);
TMP1340[8].name = "lastError";
TMP5512[3] = &TMP1340[9];
TMP1340[9].kind = 1;
TMP1340[9].offset = offsetof(Socketimpl554404, domain);
TMP1340[9].typ = (&NTI548604);
TMP1340[9].name = "domain";
TMP5512[4] = &TMP1340[10];
TMP1340[10].kind = 1;
TMP1340[10].offset = offsetof(Socketimpl554404, socktype);
TMP1340[10].typ = (&NTI548606);
TMP1340[10].name = "sockType";
TMP5512[5] = &TMP1340[11];
TMP1340[11].kind = 1;
TMP1340[11].offset = offsetof(Socketimpl554404, protocol);
TMP1340[11].typ = (&NTI548608);
TMP1340[11].name = "protocol";
TMP1340[0].len = 6; TMP1340[0].kind = 2; TMP1340[0].sons = &TMP5512[0];
NTI554404.node = &TMP1340[0];
NTI554406.size = sizeof(Socketimpl554404*);
NTI554406.kind = 22;
NTI554406.base = (&NTI554404);
NTI554406.flags = 2;
NTI554406.marker = TMP5523;
NTI554412.size = sizeof(Timeouterror554412);
NTI554412.kind = 17;
NTI554412.base = (&NTI3424);
TMP1340[12].len = 0; TMP1340[12].kind = 2;
NTI554412.node = &TMP1340[12];
NTI558614.size = sizeof(Timeouterror554412*);
NTI558614.kind = 22;
NTI558614.base = (&NTI554412);
NTI558614.marker = TMP5535;
}

