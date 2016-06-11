/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream255204 Tllstream255204;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Cell47704 Cell47704;
typedef struct Cellseq47720 Cellseq47720;
typedef struct Gcheap50218 Gcheap50218;
typedef struct Gcstack50216 Gcstack50216;
typedef struct Memregion29886 Memregion29886;
typedef struct Smallchunk29840 Smallchunk29840;
typedef struct Llchunk29880 Llchunk29880;
typedef struct Bigchunk29842 Bigchunk29842;
typedef struct Intset29814 Intset29814;
typedef struct Trunk29810 Trunk29810;
typedef struct Avlnode29884 Avlnode29884;
typedef struct Gcstat50214 Gcstat50214;
typedef struct Cellset47716 Cellset47716;
typedef struct Pagedesc47712 Pagedesc47712;
typedef struct Basechunk29838 Basechunk29838;
typedef struct Freecell29830 Freecell29830;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Tllstreamkind255202;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tllstream255204  {
  TNimObject Sup;
Tllstreamkind255202 kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
typedef NU8 Filemode12409;
struct  Cell47704  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47720  {
NI len;
NI cap;
Cell47704** d;
};
typedef Smallchunk29840* TY29901[512];
typedef Trunk29810* Trunkbuckets29812[256];
struct  Intset29814  {
Trunkbuckets29812 data;
};
struct  Memregion29886  {
NI minlargeobj;
NI maxlargeobj;
TY29901 freesmallchunks;
Llchunk29880* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29842* freechunkslist;
Intset29814 chunkstarts;
Avlnode29884* root;
Avlnode29884* deleted;
Avlnode29884* last;
Avlnode29884* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat50214  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47716  {
NI counter;
NI max;
Pagedesc47712* head;
Pagedesc47712** data;
};
struct  Gcheap50218  {
Gcstack50216* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47720 zct;
Cellseq47720 decstack;
Cellseq47720 tempstack;
NI recgclock;
Memregion29886 region;
Gcstat50214 stat;
Cellset47716 marked;
Cellseq47720 additionalroots;
};
typedef NU8 char136Set[32];
struct  Gcstack50216  {
Gcstack50216* prev;
Gcstack50216* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29838  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29840  {
  Basechunk29838 Sup;
Smallchunk29840* next;
Smallchunk29840* prev;
Freecell29830* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29880  {
NI size;
NI acc;
Llchunk29880* next;
};
struct  Bigchunk29842  {
  Basechunk29838 Sup;
Bigchunk29842* next;
Bigchunk29842* prev;
NI align;
NF data;
};
typedef NI TY29819[8];
struct  Trunk29810  {
Trunk29810* next;
NI key;
TY29819 bits;
};
typedef Avlnode29884* TY29891[2];
struct  Avlnode29884  {
TY29891 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47712  {
Pagedesc47712* next;
NI key;
TY29819 bits;
};
struct  Freecell29830  {
Freecell29830* next;
NI zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, TMP1386)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NIM_BOOL, open_15603_1689653243)(FILE** f0, NimStringDesc* filename0, Filemode12409 mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(NIM_BOOL, readline_15713_1689653243)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(NI, readbuffer_15754_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(NI, llreadfromstdin_255486_597494479)(Tllstream255204* s0, void* buf0, NI buflen0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0);
N_NOINLINE(void, addzct_51817_1689653243)(Cellseq47720* s0, Cell47704* c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readlinefromstdin_255281_597494479)(NimStringDesc* prompt0, NimStringDesc** line0);
N_NIMCALL(void, write_15689_1689653243)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
N_NIMCALL(NI, counttriples_255453_597494479)(NimStringDesc* s0);
static N_INLINE(NIM_BOOL, continueline_255436_597494479)(NimStringDesc* line0, NIM_BOOL intriplestring0);
N_NIMCALL(NIM_BOOL, endswith_255401_597494479)(NimStringDesc* x0, char136Set s0);
N_NIMCALL(NI, writebuffer_15776_1689653243)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(void, llstreamwrite_255593_597494479)(Tllstream255204* s0, NimStringDesc* data0);
STRING_LITERAL(TMP1396, "", 0);
STRING_LITERAL(TMP1397, "\015\012", 2);
STRING_LITERAL(TMP1398, ">>> ", 4);
STRING_LITERAL(TMP1399, "... ", 4);
static NIM_CONST char136Set TMP1400 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST char136Set TMP1698 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3408; /* RootObj */
TNimType NTI255204; /* TLLStream */
TNimType NTI255202; /* TLLStreamKind */
extern TNimType NTI12407; /* File */
extern TNimType NTI138; /* string */
extern TNimType NTI104; /* int */
TNimType NTI255206; /* PLLStream */
extern Gcheap50218 gch_50258_1689653243;
extern TNimType NTI136; /* char */
TNimType NTI255404; /* set[char] */
N_NIMCALL(void, TMP1386)(void* p, NI op) {
	Tllstream255204* a;
	a = (Tllstream255204*)p;
	nimGCvisit((void*)(*a).s, op);
}

N_NIMCALL(Tllstream255204*, llstreamopen_255242_597494479)(NimStringDesc* filename0, Filemode12409 mode0) {
	Tllstream255204* result0;
	result0 = (Tllstream255204*)0;
	result0 = (Tllstream255204*) newObj((&NTI255206), sizeof(Tllstream255204));
	(*result0).Sup.m_type = (&NTI255204);
	(*result0).kind = ((Tllstreamkind255202) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_15603_1689653243(&(*result0).f, filename0, mode0, ((NI) -1));
		if (!!(LOC3)) goto LA4;
		result0 = NIM_NIL;
	}
	LA4: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_255550_597494479)(Tllstream255204* s0, NimStringDesc** line0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	(*line0) = setLengthStr((*line0), ((NI) 0));
	switch ((*s0).kind) {
	case ((Tllstreamkind255202) 0):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tllstreamkind255202) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s0).rd < ((*s0).s ? (*s0).s->Sup.len : 0))) goto LA4;
				switch (((NU8)((*s0).s->data[(*s0).rd]))) {
				case 13:
				{
					(*s0).rd += ((NI) 1);
					{
						if (!((NU8)((*s0).s->data[(*s0).rd]) == (NU8)(10))) goto LA8;
						(*s0).rd += ((NI) 1);
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s0).rd += ((NI) 1);
					goto LA3;
				}
				break;
				default:
				{
					(*line0) = addChar((*line0), (*s0).s->data[(*s0).rd]);
					(*s0).rd += ((NI) 1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = (NIM_BOOL)0;
		LOC12 = (((NI) 0) < ((*line0) ? (*line0)->Sup.len : 0));
		if (LOC12) goto LA13;
		LOC12 = ((*s0).rd < ((*s0).s ? (*s0).s->Sup.len : 0));
		LA13: ;
		result0 = LOC12;
	}
	break;
	case ((Tllstreamkind255202) 2):
	{
		result0 = readline_15713_1689653243((*s0).f, line0);
	}
	break;
	case ((Tllstreamkind255202) 3):
	{
		result0 = readline_15713_1689653243(stdin, line0);
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell47704*, usrtocell_51840_1689653243)(void* usr0) {
	Cell47704* result0;
	result0 = (Cell47704*)0;
	result0 = ((Cell47704*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47704))))));
	return result0;
}

static N_INLINE(void, rtladdzct_53001_1689653243)(Cell47704* c0) {
	addzct_51817_1689653243((&gch_50258_1689653243.zct), c0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell47704* c0;
	c0 = usrtocell_51840_1689653243(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_53001_1689653243(c0);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_255281_597494479)(NimStringDesc* prompt0, NimStringDesc** line0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	write_15689_1689653243(stdout, prompt0);
	result0 = readline_15713_1689653243(stdin, line0);
	{
		if (!!(result0)) goto LA3;
		write_15689_1689653243(stdout, ((NimStringDesc*) &TMP1397));
		exit(((NI) 0));
	}
	LA3: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NI, counttriples_255453_597494479)(NimStringDesc* s0) {
	NI result0;
	NI i0;
	result0 = (NI)0;
	i0 = ((NI) 0);
	{
		while (1) {
			if (!(i0 < (s0 ? s0->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = (NIM_BOOL)0;
				LOC6 = (NIM_BOOL)0;
				LOC6 = ((NU8)(s0->data[i0]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s0->data[(NI)(i0 + ((NI) 1))]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s0->data[(NI)(i0 + ((NI) 2))]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result0 += ((NI) 1);
				i0 += ((NI) 2);
			}
			LA9: ;
			i0 += ((NI) 1);
		} LA2: ;
	}
	return result0;
}

N_NIMCALL(NIM_BOOL, endswith_255401_597494479)(NimStringDesc* x0, char136Set s0) {
	NIM_BOOL result0;
	NI i0;
	result0 = (NIM_BOOL)0;
	i0 = (NI)((x0 ? x0->Sup.len : 0) - ((NI) 1));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = (((NI) 0) <= i0);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x0->data[i0]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i0 -= ((NI) 1);
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (((NI) 0) <= i0);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s0[(NU)(((NU8)(x0->data[i0])))>>3] &(1U<<((NU)(((NU8)(x0->data[i0])))&7U)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_TRUE;
	}
	LA9: ;
	return result0;
}

static N_INLINE(NIM_BOOL, continueline_255436_597494479)(NimStringDesc* line0, NIM_BOOL intriplestring0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = intriplestring0;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line0->data[((NI) 0)]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_255401_597494479(line0, TMP1400);
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, llreadfromstdin_255486_597494479)(Tllstream255204* s0, void* buf0, NI buflen0) {
	NI result0;
	NimStringDesc* LOC1;
	NimStringDesc* line0;
	NI triples0;
	result0 = (NI)0;
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*s0).s; (*s0).s = copyStringRC1(((NimStringDesc*) &TMP1396));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s0).rd = ((NI) 0);
	line0 = rawNewString(((NI) 120));
	triples0 = ((NI) 0);
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = (NimStringDesc*)0;
			{
				if (!(((*s0).s ? (*s0).s->Sup.len : 0) == ((NI) 0))) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1398));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1399));
			}
			LA5: ;
			LOC10 = (NIM_BOOL)0;
			LOC10 = readlinefromstdin_255281_597494479(LOC4, (&line0));
			if (!LOC10) goto LA3;
			(*s0).s = resizeString((*s0).s, line0->Sup.len + 0);
appendString((*s0).s, line0);
			(*s0).s = resizeString((*s0).s, 2);
appendString((*s0).s, ((NimStringDesc*) &TMP1397));
			LOC11 = (NI)0;
			LOC11 = counttriples_255453_597494479(line0);
			triples0 += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = (NIM_BOOL)0;
				LOC14 = continueline_255436_597494479(line0, (((NI) ((NI)(triples0 & ((NI) 1)))) == ((NI) 1)));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s0).lineoffset += ((NI) 1);
	result0 = ((buflen0 <= (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd)) ? buflen0 : (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd));
	{
		if (!(((NI) 0) < result0)) goto LA19;
		memcpy(buf0, ((void*) ((&(*s0).s->data[(*s0).rd]))), ((NI) (result0)));
		(*s0).rd += result0;
	}
	LA19: ;
	return result0;
}

N_NIMCALL(NI, llstreamread_255530_597494479)(Tllstream255204* s0, void* buf0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	switch ((*s0).kind) {
	case ((Tllstreamkind255202) 0):
	{
		result0 = ((NI) 0);
	}
	break;
	case ((Tllstreamkind255202) 1):
	{
		result0 = ((buflen0 <= (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd)) ? buflen0 : (NI)(((*s0).s ? (*s0).s->Sup.len : 0) - (*s0).rd));
		{
			if (!(((NI) 0) < result0)) goto LA5;
			memcpy(buf0, ((void*) ((&(*s0).s->data[(NI)(((NI) 0) + (*s0).rd)]))), ((NI) (result0)));
			(*s0).rd += result0;
		}
		LA5: ;
	}
	break;
	case ((Tllstreamkind255202) 2):
	{
		result0 = readbuffer_15754_1689653243((*s0).f, buf0, ((NI) (buflen0)));
	}
	break;
	case ((Tllstreamkind255202) 3):
	{
		result0 = llreadfromstdin_255486_597494479(s0, buf0, buflen0);
	}
	break;
	}
	return result0;
}

N_NIMCALL(Tllstream255204*, llstreamopen_255218_597494479)(NimStringDesc* data0) {
	Tllstream255204* result0;
	NimStringDesc* LOC1;
	result0 = (Tllstream255204*)0;
	result0 = (Tllstream255204*) newObj((&NTI255206), sizeof(Tllstream255204));
	(*result0).Sup.m_type = (&NTI255204);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).s; (*result0).s = copyStringRC1(data0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).kind = ((Tllstreamkind255202) 1);
	return result0;
}

N_NIMCALL(void, llstreamclose_255278_597494479)(Tllstream255204* s0) {
	switch ((*s0).kind) {
	case ((Tllstreamkind255202) 0):
	case ((Tllstreamkind255202) 1):
	case ((Tllstreamkind255202) 3):
	{
	}
	break;
	case ((Tllstreamkind255202) 2):
	{
		fclose((*s0).f);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_255593_597494479)(Tllstream255204* s0, NimStringDesc* data0) {
	switch ((*s0).kind) {
	case ((Tllstreamkind255202) 0):
	case ((Tllstreamkind255202) 3):
	{
	}
	break;
	case ((Tllstreamkind255202) 1):
	{
		(*s0).s = resizeString((*s0).s, data0->Sup.len + 0);
appendString((*s0).s, data0);
		(*s0).wr += (data0 ? data0->Sup.len : 0);
	}
	break;
	case ((Tllstreamkind255202) 2):
	{
		write_15689_1689653243((*s0).f, data0);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_255432_597494479)(NimStringDesc* x0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = endswith_255401_597494479(x0, TMP1698);
	return result0;
}

N_NIMCALL(void, llstreamwrite_255612_597494479)(Tllstream255204* s0, NIM_CHAR data0) {
	NIM_CHAR c0;
	c0 = (NIM_CHAR)0;
	switch ((*s0).kind) {
	case ((Tllstreamkind255202) 0):
	case ((Tllstreamkind255202) 3):
	{
	}
	break;
	case ((Tllstreamkind255202) 1):
	{
		(*s0).s = addChar((*s0).s, data0);
		(*s0).wr += ((NI) 1);
	}
	break;
	case ((Tllstreamkind255202) 2):
	{
		NI LOC4;
		c0 = data0;
		LOC4 = (NI)0;
		LOC4 = writebuffer_15776_1689653243((*s0).f, ((void*) ((&c0))), ((NI) 1));
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_255608_597494479)(Tllstream255204* s0, NimStringDesc* data0) {
	llstreamwrite_255593_597494479(s0, data0);
	llstreamwrite_255593_597494479(s0, ((NimStringDesc*) &TMP1397));
}

N_NIMCALL(Tllstream255204*, llstreamopen_255230_597494479)(FILE* f0) {
	Tllstream255204* result0;
	result0 = (Tllstream255204*)0;
	result0 = (Tllstream255204*) newObj((&NTI255206), sizeof(Tllstream255204));
	(*result0).Sup.m_type = (&NTI255204);
	(*result0).f = f0;
	(*result0).kind = ((Tllstreamkind255202) 2);
	return result0;
}

N_NIMCALL(Tllstream255204*, llstreamopenstdin_255267_597494479)(void) {
	Tllstream255204* result0;
	NimStringDesc* LOC1;
	result0 = (Tllstream255204*)0;
	result0 = (Tllstream255204*) newObj((&NTI255206), sizeof(Tllstream255204));
	(*result0).Sup.m_type = (&NTI255204);
	(*result0).kind = ((Tllstreamkind255202) 3);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).s; (*result0).s = copyStringRC1(((NimStringDesc*) &TMP1396));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).lineoffset = ((NI) -1);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_llstreamInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_llstreamDatInit000)(void) {
static TNimNode* TMP1382[6];
static TNimNode* TMP1383[4];
NI TMP1385;
static char* NIM_CONST TMP1384[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP877[13];
NTI255204.size = sizeof(Tllstream255204);
NTI255204.kind = 17;
NTI255204.base = (&NTI3408);
TMP1382[0] = &TMP877[1];
NTI255202.size = sizeof(Tllstreamkind255202);
NTI255202.kind = 14;
NTI255202.base = 0;
NTI255202.flags = 3;
for (TMP1385 = 0; TMP1385 < 4; TMP1385++) {
TMP877[TMP1385+2].kind = 1;
TMP877[TMP1385+2].offset = TMP1385;
TMP877[TMP1385+2].name = TMP1384[TMP1385];
TMP1383[TMP1385] = &TMP877[TMP1385+2];
}
TMP877[6].len = 4; TMP877[6].kind = 2; TMP877[6].sons = &TMP1383[0];
NTI255202.node = &TMP877[6];
TMP877[1].kind = 1;
TMP877[1].offset = offsetof(Tllstream255204, kind);
TMP877[1].typ = (&NTI255202);
TMP877[1].name = "kind";
TMP1382[1] = &TMP877[7];
TMP877[7].kind = 1;
TMP877[7].offset = offsetof(Tllstream255204, f);
TMP877[7].typ = (&NTI12407);
TMP877[7].name = "f";
TMP1382[2] = &TMP877[8];
TMP877[8].kind = 1;
TMP877[8].offset = offsetof(Tllstream255204, s);
TMP877[8].typ = (&NTI138);
TMP877[8].name = "s";
TMP1382[3] = &TMP877[9];
TMP877[9].kind = 1;
TMP877[9].offset = offsetof(Tllstream255204, rd);
TMP877[9].typ = (&NTI104);
TMP877[9].name = "rd";
TMP1382[4] = &TMP877[10];
TMP877[10].kind = 1;
TMP877[10].offset = offsetof(Tllstream255204, wr);
TMP877[10].typ = (&NTI104);
TMP877[10].name = "wr";
TMP1382[5] = &TMP877[11];
TMP877[11].kind = 1;
TMP877[11].offset = offsetof(Tllstream255204, lineoffset);
TMP877[11].typ = (&NTI104);
TMP877[11].name = "lineOffset";
TMP877[0].len = 6; TMP877[0].kind = 2; TMP877[0].sons = &TMP1382[0];
NTI255204.node = &TMP877[0];
NTI255206.size = sizeof(Tllstream255204*);
NTI255206.kind = 22;
NTI255206.base = (&NTI255204);
NTI255206.marker = TMP1386;
NTI255404.size = sizeof(char136Set);
NTI255404.kind = 19;
NTI255404.base = (&NTI136);
NTI255404.flags = 3;
TMP877[12].len = 0; TMP877[12].kind = 0;
NTI255404.node = &TMP877[12];
}

