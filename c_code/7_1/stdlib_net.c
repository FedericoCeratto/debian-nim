/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>
#include <arpa/inet.h>
#include <setjmp.h>
typedef struct Socketimpl522404 Socketimpl522404;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeouterror522412 Timeouterror522412;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct Cell47505 Cell47505;
typedef struct Cellseq47521 Cellseq47521;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Cellset47517 Cellset47517;
typedef struct Pagedesc47513 Pagedesc47513;
typedef struct Memregion29687 Memregion29687;
typedef struct Smallchunk29639 Smallchunk29639;
typedef struct Llchunk29681 Llchunk29681;
typedef struct Bigchunk29641 Bigchunk29641;
typedef struct Intset29614 Intset29614;
typedef struct Trunk29610 Trunk29610;
typedef struct Avlnode29685 Avlnode29685;
typedef struct Gcstat49814 Gcstat49814;
typedef struct TY525219 TY525219;
typedef struct TSafePoint TSafePoint;
typedef struct Basechunk29637 Basechunk29637;
typedef struct Freecell29629 Freecell29629;
typedef NIM_CHAR TY522418[4001];
struct  Socketimpl522404  {
int fd;
NIM_BOOL isbuffered;
union{
struct {TY522418 buffer;
NI currpos;
NI buflen;
} S1;
} isbufferedU;
NI32 lasterror;
NU8 domain;
NU8 socktype;
NU8 protocol;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  Timeouterror522412  {
  Exception Sup;
};
struct  Cell47505  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47521  {
NI len;
NI cap;
Cell47505** d;
};
struct  Cellset47517  {
NI counter;
NI max;
Pagedesc47513* head;
Pagedesc47513** data;
};
typedef Smallchunk29639* TY29702[512];
typedef Trunk29610* Trunkbuckets29612[256];
struct  Intset29614  {
Trunkbuckets29612 data;
};
struct  Memregion29687  {
NI minlargeobj;
NI maxlargeobj;
TY29702 freesmallchunks;
Llchunk29681* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29641* freechunkslist;
Intset29614 chunkstarts;
Avlnode29685* root;
Avlnode29685* deleted;
Avlnode29685* last;
Avlnode29685* freeavlnodes;
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
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47521 zct;
Cellseq47521 decstack;
Cellset47517 cycleroots;
Cellseq47521 tempstack;
NI recgclock;
Memregion29687 region;
Gcstat49814 stat;
};
typedef int TY525208[1];
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY17811;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17811 raiseAction;
};
typedef NIM_CHAR TY110371[256];
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY29618[16];
struct  Pagedesc47513  {
Pagedesc47513* next;
NI key;
TY29618 bits;
};
struct  Basechunk29637  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29639  {
  Basechunk29637 Sup;
Smallchunk29639* next;
Smallchunk29639* prev;
Freecell29629* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29681  {
NI size;
NI acc;
Llchunk29681* next;
};
struct  Bigchunk29641  {
  Basechunk29637 Sup;
Bigchunk29641* next;
Bigchunk29641* prev;
NI align;
NF data;
};
struct  Trunk29610  {
Trunk29610* next;
NI key;
TY29618 bits;
};
typedef Avlnode29685* TY29692[2];
struct  Avlnode29685  {
TY29692 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell29629  {
Freecell29629* next;
NI zerofield;
};
struct TY525219 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP5271)(void* p, NI op);
N_NIMCALL(int, newnativesocket_517001)(NU8 domain, NU8 socktype, NU8 protocol);
N_NOINLINE(void, raiseoserror_120803)(NI32 errorcode, NimStringDesc* additionalinfo);
N_NIMCALL(NI32, oslasterror_120819)(void);
N_NIMCALL(Socketimpl522404*, newsocket_522674)(int fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_516820)(NU8 domain);
N_NIMCALL(NI16, ntohs_518001)(NI16 x);
N_NIMCALL(NI32, ntohl_517806)(NI32 x);
N_NIMCALL(int, bindaddr_517208)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_517402)(NimStringDesc* address, NU16 port, NU8 domain, NU8 socktype, NU8 protocol);
N_NIMCALL(void, dealloc_517802)(struct addrinfo* ai);
N_NIMCALL(int, listen_517215)(int socket, int backlog);
N_NIMCALL(NI, send_526678)(Socketimpl522404* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_522473)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_522467)(Socketimpl522404* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NI32, getsocketerror_523001)(Socketimpl522404* socket);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_523808)(Socketimpl522404* server, Socketimpl522404** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_525807)(Socketimpl522404* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5283)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell47505*, usrtocell_51440)(void* usr);
static N_INLINE(void, rtladdzct_53001)(Cell47505* c);
N_NOINLINE(void, addzct_51417)(Cellseq47521* s, Cell47505* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_525201)(Socketimpl522404* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_525001)(Socketimpl522404* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_521077)(TY525219** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_105802)(NF* x, NF y);
N_NIMCALL(NI, recv_525416)(Socketimpl522404* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_525223)(Socketimpl522404* socket, NI32 flags);
N_NIMCALL(NI, peekchar_526426)(Socketimpl522404* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_517013)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_522404_isbuffered[3];
STRING_LITERAL(TMP5277, "", 0);
STRING_LITERAL(TMP5280, "No valid socket error code available", 36);
STRING_LITERAL(TMP5281, "Could not send all data.", 24);
STRING_LITERAL(TMP5284, "Call to \'", 9);
STRING_LITERAL(TMP5285, "\' timed out.", 12);
STRING_LITERAL(TMP5287, "readLine", 8);
STRING_LITERAL(TMP5288, "\015\012", 2);
TNimType NTI522404; /* SocketImpl */
extern TNimType NTI7208; /* cint */
extern TNimType NTI130; /* bool */
extern TNimType NTI136; /* char */
TNimType NTI522418; /* array[0..4000, char] */
extern TNimType NTI104; /* int */
extern TNimType NTI110; /* int32 */
extern TNimType NTI516604; /* Domain */
extern TNimType NTI516606; /* SockType */
extern TNimType NTI516608; /* Protocol */
TNimType NTI522406; /* Socket */
extern int osinvalidsocket_516644;
extern TNimType NTI3624; /* Exception */
TNimType NTI522412; /* TimeoutError */
TNimType NTI526014; /* ref TimeoutError */
extern Gcheap49818 gch_49859;
extern TNimType NTI525219; /* seq[SocketHandle] */
extern TSafePoint* exchandler_19437;
N_NIMCALL(void, TMP5271)(void* p, NI op) {
	Socketimpl522404* a;
	NI LOC1;
	a = (Socketimpl522404*)p;
	switch ((*a).isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(Socketimpl522404*, newsocket_522674)(int fd, NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl522404* result;
	result = 0;
	result = (Socketimpl522404*) newObj((&NTI522406), sizeof(Socketimpl522404));
	(*result).fd = fd;
	(*result).isbuffered = buffered;
	(*result).domain = domain;
	(*result).socktype = socktype;
	(*result).protocol = protocol;
	{
		if (!buffered) goto LA3;
		(*result).isbufferedU.S1.currpos = ((NI) 0);
	}
	LA3: ;
	return result;
}

N_NIMCALL(Socketimpl522404*, newsocket_522821)(NU8 domain, NU8 socktype, NU8 protocol, NIM_BOOL buffered) {
	Socketimpl522404* result;
	int fd;
	result = 0;
	fd = newnativesocket_517001(domain, socktype, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_516644)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_120819();
		raiseoserror_120803(LOC5, ((NimStringDesc*) &TMP5277));
	}
	LA3: ;
	result = newsocket_522674(fd, domain, socktype, protocol, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_523608)(Socketimpl522404* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_516820(((NU8) 2));
		name.sin_port = ntohs_518001(((NI16) (port)));
		name.sin_addr.s_addr = ntohl_517806(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_517208((*socket).fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_120819();
			raiseoserror_120803(LOC10, ((NimStringDesc*) &TMP5277));
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_517402(address, port, (*socket).domain, ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_517208((*socket).fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_517802(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_120819();
			raiseoserror_120803(LOC17, ((NimStringDesc*) &TMP5277));
		}
		LA15: ;
		dealloc_517802(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_523604)(Socketimpl522404* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_517215((*socket).fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_120819();
		raiseoserror_120803(LOC6, ((NimStringDesc*) &TMP5277));
	}
	LA4: ;
}

N_NIMCALL(NI, send_526678)(Socketimpl522404* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).fd, data, size, MSG_NOSIGNAL);
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_522473)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1U<<((NU)(((NU8) 1))&7U)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI32, getsocketerror_523001)(Socketimpl522404* socket) {
	NI32 result;
	result = 0;
	result = oslasterror_120819();
	{
		if (!(result == ((NI32) 0))) goto LA3;
		result = (*socket).lasterror;
	}
	LA3: ;
	{
		if (!(result == ((NI32) 0))) goto LA7;
		raiseoserror_120803(result, ((NimStringDesc*) &TMP5280));
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, socketerror_522467)(Socketimpl522404* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == ((NI) -1));
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == ((NI) -1))) goto LA9;
			laste = getsocketerror_523001(socket);
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_120803(laste, ((NimStringDesc*) &TMP5277));
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_120803(laste, ((NimStringDesc*) &TMP5277));
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

N_NIMCALL(void, send_527202)(Socketimpl522404* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_526678(socket, ((void*) (data->data)), (data ? data->Sup.len : 0));
	{
		NI32 lasterror;
		if (!(sent < ((NI) 0))) goto LA3;
		lasterror = oslasterror_120819();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_522473(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_522467(socket, ((NI) -1), NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		NI32 LOC14;
		if (!!((sent == (data ? data->Sup.len : 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_120819();
		raiseoserror_120803(LOC14, ((NimStringDesc*) &TMP5281));
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_523808)(Socketimpl522404* server, Socketimpl522404** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_516644)) goto LA3;
		err = oslasterror_120819();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_522473(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_523808(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_120803(err, ((NimStringDesc*) &TMP5277));
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).fd = sock;
		(*(*client)).isbuffered = (*server).isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_524401)(Socketimpl522404* server, Socketimpl522404** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP5277));
	acceptaddr_523808(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP5283)(void* p, NI op) {
	Timeouterror522412* a;
	a = (Timeouterror522412*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(Cell47505*, usrtocell_51440)(void* usr) {
	Cell47505* result;
	result = 0;
	result = ((Cell47505*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Cell47505))))));
	return result;
}

static N_INLINE(void, rtladdzct_53001)(Cell47505* c) {
	addzct_51417((&gch_49859.zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		Cell47505* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_51440(src);
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell47505* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_51440((*dest));
		{
			(*c).refcount -= ((NI) 8);
			if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_53001(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_525001)(Socketimpl522404* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (((NI) 0) < (*s).isbufferedU.S1.buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.currpos == (*s).isbufferedU.S1.buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_525201)(Socketimpl522404* readfd, NI timeout) {
	NI result;
	TY525219* fds;
	TY525208 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_525001(readfd);
		if (!LOC3) goto LA4;
		result = ((NI) 1);
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY525219*) newSeq((&NTI525219), 1);
	LOC6[0] = (*readfd).fd;
	fds->data[0] = LOC6[0];
	result = select_521077((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_105802)(NF* x, NF y) {
	(*x) = ((NF)((*x)) + (NF)(y));
}

N_NIMCALL(NI, waitfor_525807)(Socketimpl522404* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = ((NI) 1);
	{
		if (!(size <= ((NI) 0))) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == ((NI) -1))) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.buflen == ((NI) 0)));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.buflen == (*socket).isbufferedU.S1.currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			Timeouterror522412* e_526013;
			NimStringDesc* LOC22;
			if (!((NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < ((NI) 1))) goto LA20;
			e_526013 = 0;
			e_526013 = (Timeouterror522412*) newObj((&NTI526014), sizeof(Timeouterror522412));
			(*e_526013).Sup.Sup.m_type = (&NTI522412);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP5284));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP5285));
			asgnRefNoCycle((void**) (&(*e_526013).Sup.message), LOC22);
			raiseException((Exception*)e_526013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_525201(socket, (NI)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < ((NI) 0))) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_120819();
			raiseoserror_120803(LOC27, ((NimStringDesc*) &TMP5277));
		}
		LA25: ;
		{
			Timeouterror522412* e_526206;
			NimStringDesc* LOC32;
			if (!!((selret == ((NI) 1)))) goto LA30;
			e_526206 = 0;
			e_526206 = (Timeouterror522412*) newObj((&NTI526014), sizeof(Timeouterror522412));
			(*e_526206).Sup.Sup.m_type = (&NTI522412);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP5284));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP5285));
			asgnRefNoCycle((void**) (&(*e_526206).Sup.message), LOC32);
			raiseException((Exception*)e_526206, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_105802(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_525223)(Socketimpl522404* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = ((NI) 0);
	result = recv((*socket).fd, ((void*) ((*socket).isbufferedU.S1.buffer)), ((NI) 4000), flags);
	{
		if (!(result < ((NI) 0))) goto LA3;
		(*socket).lasterror = oslasterror_120819();
	}
	LA3: ;
	{
		if (!(result <= ((NI) 0))) goto LA7;
		(*socket).isbufferedU.S1.buflen = ((NI) 0);
		(*socket).isbufferedU.S1.currpos = ((NI) 0);
		goto BeforeRet;
	}
	LA7: ;
	(*socket).isbufferedU.S1.buflen = result;
	(*socket).isbufferedU.S1.currpos = ((NI) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_525416)(Socketimpl522404* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.buflen == ((NI) 0))) goto LA11;
			res = readintobuf_525223(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = ((NI) 0);
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = ((NI) 0);
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.buflen <= (*socket).isbufferedU.S1.currpos)) goto LA26;
					res = readintobuf_525223(socket, ((NI32) 0));
					{
						if (!(res <= ((NI) 0))) goto LA30;
						{
							if (!(((NI) 0) < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) <= (NI)(size - read)) ? (NI)((*socket).isbufferedU.S1.buflen - (*socket).isbufferedU.S1.currpos) : (NI)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0]))), ((NI) (chunk)));
				read += chunk;
				(*socket).isbufferedU.S1.currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).fd, data, ((NI) (((int) (size)))), ((NI32) 0));
		{
			if (!(result < ((NI) 0))) goto LA40;
			(*socket).lasterror = oslasterror_120819();
		}
		LA40: ;
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_526426)(Socketimpl522404* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).isbuffered) goto LA3;
		result = ((NI) 1);
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.buflen == ((NI) 0));
			if (LOC7) goto LA8;
			LOC7 = ((NI)((*socket).isbufferedU.S1.buflen - ((NI) 1)) < (*socket).isbufferedU.S1.currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_525223(socket, ((NI32) 0));
			{
				if (!(res <= ((NI) 0))) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.buffer[((*socket).isbufferedU.S1.currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).fd, ((void*) (c)), ((NI) 1), MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_526602)(Socketimpl522404* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), ((NI) 0));
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_525807(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5287));
			n = recv_525416(socket, ((void*) ((&c))), ((NI) 1));
			{
				NI32 lasterror;
				if (!(n < ((NI) 0))) goto LA6;
				lasterror = getsocketerror_523001(socket);
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_522473(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), ((NI) 0));
					goto BeforeRet;
				}
				LA11: ;
				socketerror_522467(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == ((NI) 0))) goto LA14;
				(*line) = setLengthStr((*line), ((NI) 0));
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_525807(socket, (&waited), timeout, ((NI) 1), ((NimStringDesc*) &TMP5287));
				n = peekchar_526426(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (((NI) 0) < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_525416(socket, ((void*) ((&c))), ((NI) 1));
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= ((NI) 0))) goto LA29;
					lasterror = getsocketerror_523001(socket);
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_522473(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), ((NI) 0));
						goto BeforeRet;
					}
					LA34: ;
					socketerror_522467(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5288));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!(((*line) ? (*line)->Sup.len : 0) == ((NI) 0))) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP5288));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_19437;
	exchandler_19437 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_19437 = (*exchandler_19437).prev;
}

N_NIMCALL(void, close_524411)(Socketimpl522404* socket) {
	TSafePoint TMP5289;
	pushSafePoint(&TMP5289);
	TMP5289.status = _setjmp(TMP5289.context);
	if (TMP5289.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_517013((*socket).fd);
	}
	if (TMP5289.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit000)(void) {
static TNimNode* TMP5260[6];
static TNimNode* TMP5261[3];
static TNimNode TMP1189[13];
NTI522404.size = sizeof(Socketimpl522404);
NTI522404.kind = 18;
NTI522404.base = 0;
NTI522404.flags = 3;
TMP5260[0] = &TMP1189[1];
TMP1189[1].kind = 1;
TMP1189[1].offset = offsetof(Socketimpl522404, fd);
TMP1189[1].typ = (&NTI7208);
TMP1189[1].name = "fd";
TMP5260[1] = &TMP1189[2];
TMP1189[2].kind = 3;
TMP1189[2].offset = offsetof(Socketimpl522404, isbuffered);
TMP1189[2].typ = (&NTI130);
TMP1189[2].name = "isBuffered";
TMP1189[2].sons = &NimDT_522404_isbuffered[0];
TMP1189[2].len = 2;
TMP5261[0] = &TMP1189[4];
NTI522418.size = sizeof(TY522418);
NTI522418.kind = 16;
NTI522418.base = (&NTI136);
NTI522418.flags = 3;
TMP1189[4].kind = 1;
TMP1189[4].offset = offsetof(Socketimpl522404, isbufferedU.S1.buffer);
TMP1189[4].typ = (&NTI522418);
TMP1189[4].name = "buffer";
TMP5261[1] = &TMP1189[5];
TMP1189[5].kind = 1;
TMP1189[5].offset = offsetof(Socketimpl522404, isbufferedU.S1.currpos);
TMP1189[5].typ = (&NTI104);
TMP1189[5].name = "currPos";
TMP5261[2] = &TMP1189[6];
TMP1189[6].kind = 1;
TMP1189[6].offset = offsetof(Socketimpl522404, isbufferedU.S1.buflen);
TMP1189[6].typ = (&NTI104);
TMP1189[6].name = "bufLen";
TMP1189[3].len = 3; TMP1189[3].kind = 2; TMP1189[3].sons = &TMP5261[0];
NimDT_522404_isbuffered[1] = &TMP1189[3];
TMP1189[7].len = 0; TMP1189[7].kind = 2;
NimDT_522404_isbuffered[0] = &TMP1189[7];
TMP5260[2] = &TMP1189[8];
TMP1189[8].kind = 1;
TMP1189[8].offset = offsetof(Socketimpl522404, lasterror);
TMP1189[8].typ = (&NTI110);
TMP1189[8].name = "lastError";
TMP5260[3] = &TMP1189[9];
TMP1189[9].kind = 1;
TMP1189[9].offset = offsetof(Socketimpl522404, domain);
TMP1189[9].typ = (&NTI516604);
TMP1189[9].name = "domain";
TMP5260[4] = &TMP1189[10];
TMP1189[10].kind = 1;
TMP1189[10].offset = offsetof(Socketimpl522404, socktype);
TMP1189[10].typ = (&NTI516606);
TMP1189[10].name = "sockType";
TMP5260[5] = &TMP1189[11];
TMP1189[11].kind = 1;
TMP1189[11].offset = offsetof(Socketimpl522404, protocol);
TMP1189[11].typ = (&NTI516608);
TMP1189[11].name = "protocol";
TMP1189[0].len = 6; TMP1189[0].kind = 2; TMP1189[0].sons = &TMP5260[0];
NTI522404.node = &TMP1189[0];
NTI522406.size = sizeof(Socketimpl522404*);
NTI522406.kind = 22;
NTI522406.base = (&NTI522404);
NTI522406.flags = 2;
NTI522406.marker = TMP5271;
NTI522412.size = sizeof(Timeouterror522412);
NTI522412.kind = 17;
NTI522412.base = (&NTI3624);
TMP1189[12].len = 0; TMP1189[12].kind = 2;
NTI522412.node = &TMP1189[12];
NTI526014.size = sizeof(Timeouterror522412*);
NTI526014.kind = 22;
NTI526014.base = (&NTI522412);
NTI526014.marker = TMP5283;
}

