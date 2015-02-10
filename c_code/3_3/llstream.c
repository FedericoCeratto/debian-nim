/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>

#include <stdlib.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream211204 tllstream211204;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell45133 tcell45133;
typedef struct tcellseq45149 tcellseq45149;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45145 tcellset45145;
typedef struct tpagedesc45141 tpagedesc45141;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tllstream211204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tcell45133  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45149  {
NI Len;
NI Cap;
tcell45133** D;
};
struct  tcellset45145  {
NI Counter;
NI Max;
tpagedesc45141* Head;
tpagedesc45141** Data;
};
typedef tsmallchunk26640* TY27422[512];
typedef ttrunk26613* ttrunkbuckets26615[256];
struct  tintset26617  {
ttrunkbuckets26615 Data;
};
struct  tmemregion27410  {
NI Minlargeobj;
NI Maxlargeobj;
TY27422 Freesmallchunks;
tllchunk27404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26642* Freechunkslist;
tintset26617 Chunkstarts;
tavlnode27408* Root;
tavlnode27408* Deleted;
tavlnode27408* Last;
tavlnode27408* Freeavlnodes;
};
struct  tgcstat47214  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47216  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45149 Zct;
tcellseq45149 Decstack;
tcellset45145 Cycleroots;
tcellseq45149 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
typedef NU8 TY211607[32];
typedef NI TY26620[8];
struct  tpagedesc45141  {
tpagedesc45141* Next;
NI Key;
TY26620 Bits;
};
struct  tbasechunk26638  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26640  {
  tbasechunk26638 Sup;
tsmallchunk26640* Next;
tsmallchunk26640* Prev;
tfreecell26630* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27404  {
NI Size;
NI Acc;
tllchunk27404* Next;
};
struct  tbigchunk26642  {
  tbasechunk26638 Sup;
tbigchunk26642* Next;
tbigchunk26642* Prev;
NI Align;
NF Data;
};
struct  ttrunk26613  {
ttrunk26613* Next;
NI Key;
TY26620 Bits;
};
typedef tavlnode27408* TY27414[2];
struct  tavlnode27408  {
TY27414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26630  {
tfreecell26630* Next;
NI Zerofield;
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1012)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NIM_BOOL, open_12803)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NIM_BOOL, readline_13089)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, readbuffer_13227)(FILE* f, void* buffer, NI len);
N_NIMCALL(NI, llreadfromstdin_211749)(tllstream211204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45133*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45133* c);
N_NOINLINE(void, addzct_48817)(tcellseq45149* s, tcell45133* c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readlinefromstdin_211447)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_13065)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, counttriples_211694)(NimStringDesc* s);
static N_INLINE(NIM_BOOL, continueline_211666)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NIM_BOOL, endswith_211604)(NimStringDesc* x, TY211607 s);
N_NIMCALL(NI, writebuffer_13246)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_211278)(tllstream211204* s, NimStringDesc* data);
STRING_LITERAL(TMP1028, "", 0);
STRING_LITERAL(TMP1029, "\012", 1);
STRING_LITERAL(TMP1030, ">>> ", 4);
STRING_LITERAL(TMP1031, "... ", 4);
static NIM_CONST TY211607 TMP1032 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY211607 TMP1333 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI3211; /* RootObj */
TNimType NTI211204; /* TLLStream */
TNimType NTI211202; /* TLLStreamKind */
extern TNimType NTI12604; /* File */
extern TNimType NTI149; /* string */
extern TNimType NTI108; /* int */
TNimType NTI211206; /* PLLStream */
extern tgcheap47216 gch_47244;
N_NIMCALL(void, TMP1012)(void* p, NI op) {
	tllstream211204* a;
	a = (tllstream211204*)p;
	nimGCvisit((void*)(*a).S, op);
}

N_NIMCALL(tllstream211204*, llstreamopen_211233)(NimStringDesc* filename, NU8 mode) {
	tllstream211204* result;
	result = 0;
	result = (tllstream211204*) newObj((&NTI211206), sizeof(tllstream211204));
	(*result).Sup.m_type = (&NTI211204);
	(*result).Kind = ((NU8) 2);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_12803(&(*result).F, filename, mode, -1);
		if (!!(LOC3)) goto LA4;
		result = NIM_NIL;
	}
	LA4: ;
	return result;
}

N_NIMCALL(NIM_BOOL, llstreamreadline_211264)(tllstream211204* s, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	(*line) = setLengthStr((*line), 0);
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC12;
		{
			while (1) {
				if (!((*s).Rd < (*s).S->Sup.len)) goto LA4;
				switch (((NU8)((*s).S->data[(*s).Rd]))) {
				case 13:
				{
					(*s).Rd += 1;
					{
						if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA8;
						(*s).Rd += 1;
					}
					LA8: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).Rd += 1;
					goto LA3;
				}
				break;
				default:
				{
					(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
					(*s).Rd += 1;
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		LOC12 = 0;
		LOC12 = (0 < (*line)->Sup.len);
		if (LOC12) goto LA13;
		LOC12 = ((*s).Rd < (*s).S->Sup.len);
		LA13: ;
		result = LOC12;
	}
	break;
	case ((NU8) 2):
	{
		result = readline_13089((*s).F, line);
	}
	break;
	case ((NU8) 3):
	{
		result = readline_13089(stdin, line);
	}
	break;
	}
	return result;
}

static N_INLINE(tcell45133*, usrtocell_48846)(void* usr) {
	tcell45133* result;
	result = 0;
	result = ((tcell45133*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45133))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45133* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45133* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, readlinefromstdin_211447)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	result = 0;
	write_13065(stdout, prompt);
	result = readline_13089(stdin, line);
	{
		if (!!(result)) goto LA3;
		write_13065(stdout, ((NimStringDesc*) &TMP1029));
		exit(0);
	}
	LA3: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NI, counttriples_211694)(NimStringDesc* s) {
	NI result;
	NI i;
	result = 0;
	i = 0;
	{
		while (1) {
			if (!(i < s->Sup.len)) goto LA2;
			{
				NIM_BOOL LOC5;
				NIM_BOOL LOC6;
				LOC5 = 0;
				LOC6 = 0;
				LOC6 = ((NU8)(s->data[i]) == (NU8)(34));
				if (!(LOC6)) goto LA7;
				LOC6 = ((NU8)(s->data[(NI64)(i + 1)]) == (NU8)(34));
				LA7: ;
				LOC5 = LOC6;
				if (!(LOC5)) goto LA8;
				LOC5 = ((NU8)(s->data[(NI64)(i + 2)]) == (NU8)(34));
				LA8: ;
				if (!LOC5) goto LA9;
				result += 1;
				i += 2;
			}
			LA9: ;
			i += 1;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, endswith_211604)(NimStringDesc* x, TY211607 s) {
	NIM_BOOL result;
	NI i;
	result = 0;
	i = (NI64)(x->Sup.len - 1);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (0 <= i);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(x->data[i]) == (NU8)(32));
			LA4: ;
			if (!LOC3) goto LA2;
			i -= 1;
		} LA2: ;
	}
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (0 <= i);
		if (!(LOC7)) goto LA8;
		LOC7 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_TRUE;
	}
	LA9: ;
	return result;
}

static N_INLINE(NIM_BOOL, continueline_211666)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	LOC2 = ((NU8)(line->data[0]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	LOC1 = endswith_211604(line, TMP1032);
	LA4: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NI, llreadfromstdin_211749)(tllstream211204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	result = 0;
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1028));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*s).Rd = 0;
	line = rawNewString(120);
	triples = 0;
	{
		while (1) {
			NimStringDesc* LOC4;
			NIM_BOOL LOC10;
			NI LOC11;
			LOC4 = 0;
			{
				if (!((*s).S->Sup.len == 0)) goto LA7;
				LOC4 = copyString(((NimStringDesc*) &TMP1030));
			}
			goto LA5;
			LA7: ;
			{
				LOC4 = copyString(((NimStringDesc*) &TMP1031));
			}
			LA5: ;
			LOC10 = 0;
			LOC10 = readlinefromstdin_211447(LOC4, (&line));
			if (!LOC10) goto LA3;
			(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
			(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1029));
			LOC11 = 0;
			LOC11 = counttriples_211694(line);
			triples += LOC11;
			{
				NIM_BOOL LOC14;
				LOC14 = 0;
				LOC14 = continueline_211666(line, (((NI) ((NI)(triples & 1))) == 1));
				if (!!(LOC14)) goto LA15;
				goto LA2;
			}
			LA15: ;
		} LA3: ;
	} LA2: ;
	(*s).Lineoffset += 1;
	result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
	{
		if (!(0 < result)) goto LA19;
		memcpy(buf, ((void*) ((&(*s).S->data[(*s).Rd]))), result);
		(*s).Rd += result;
	}
	LA19: ;
	return result;
}

N_NIMCALL(NI, llstreamread_211256)(tllstream211204* s, void* buf, NI buflen) {
	NI result;
	result = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		result = 0;
	}
	break;
	case ((NU8) 1):
	{
		result = ((buflen <= (NI64)((*s).S->Sup.len - (*s).Rd)) ? buflen : (NI64)((*s).S->Sup.len - (*s).Rd));
		{
			if (!(0 < result)) goto LA5;
			memcpy(buf, ((void*) ((&(*s).S->data[(NI64)(0 + (*s).Rd)]))), result);
			(*s).Rd += result;
		}
		LA5: ;
	}
	break;
	case ((NU8) 2):
	{
		result = readbuffer_13227((*s).F, buf, buflen);
	}
	break;
	case ((NU8) 3):
	{
		result = llreadfromstdin_211749(s, buf, buflen);
	}
	break;
	}
	return result;
}

N_NIMCALL(tllstream211204*, llstreamopen_211220)(NimStringDesc* data) {
	tllstream211204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream211204*) newObj((&NTI211206), sizeof(tllstream211204));
	(*result).Sup.m_type = (&NTI211204);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Kind = ((NU8) 1);
	return result;
}

N_NIMCALL(void, llstreamclose_211250)(tllstream211204* s) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 2):
	{
		fclose((*s).F);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwrite_211278)(tllstream211204* s, NimStringDesc* data) {
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		(*s).Wr += data->Sup.len;
	}
	break;
	case ((NU8) 2):
	{
		write_13065((*s).F, data);
	}
	break;
	}
}

N_NIMCALL(NIM_BOOL, endswithopr_211656)(NimStringDesc* x) {
	NIM_BOOL result;
	result = 0;
	result = endswith_211604(x, TMP1333);
	return result;
}

N_NIMCALL(void, llstreamwrite_211285)(tllstream211204* s, NIM_CHAR data) {
	NIM_CHAR c;
	c = 0;
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}
	break;
	case ((NU8) 1):
	{
		(*s).S = addChar((*s).S, data);
		(*s).Wr += 1;
	}
	break;
	case ((NU8) 2):
	{
		NI LOC4;
		c = data;
		LOC4 = 0;
		LOC4 = writebuffer_13246((*s).F, ((void*) ((&c))), 1);
	}
	break;
	}
}

N_NIMCALL(void, llstreamwriteln_211300)(tllstream211204* s, NimStringDesc* data) {
	llstreamwrite_211278(s, data);
	llstreamwrite_211278(s, ((NimStringDesc*) &TMP1029));
}

N_NIMCALL(tllstream211204*, llstreamopen_211226)(FILE** f) {
	tllstream211204* result;
	result = 0;
	result = (tllstream211204*) newObj((&NTI211206), sizeof(tllstream211204));
	(*result).Sup.m_type = (&NTI211204);
	(*result).F = (*f);
	(*result).Kind = ((NU8) 2);
	return result;
}

N_NIMCALL(tllstream211204*, llstreamopenstdin_211245)(void) {
	tllstream211204* result;
	NimStringDesc* LOC1;
	result = 0;
	result = (tllstream211204*) newObj((&NTI211206), sizeof(tllstream211204));
	(*result).Sup.m_type = (&NTI211204);
	(*result).Kind = ((NU8) 3);
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1028));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result).Lineoffset = -1;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, HEX00_llstreamDatInit)(void) {
static TNimNode* TMP1008[6];
static TNimNode* TMP1009[4];
NI TMP1011;
static char* NIM_CONST TMP1010[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP713[12];
NTI211204.size = sizeof(tllstream211204);
NTI211204.kind = 17;
NTI211204.base = (&NTI3211);
TMP1008[0] = &TMP713[1];
NTI211202.size = sizeof(NU8);
NTI211202.kind = 14;
NTI211202.base = 0;
NTI211202.flags = 3;
for (TMP1011 = 0; TMP1011 < 4; TMP1011++) {
TMP713[TMP1011+2].kind = 1;
TMP713[TMP1011+2].offset = TMP1011;
TMP713[TMP1011+2].name = TMP1010[TMP1011];
TMP1009[TMP1011] = &TMP713[TMP1011+2];
}
TMP713[6].len = 4; TMP713[6].kind = 2; TMP713[6].sons = &TMP1009[0];
NTI211202.node = &TMP713[6];
TMP713[1].kind = 1;
TMP713[1].offset = offsetof(tllstream211204, Kind);
TMP713[1].typ = (&NTI211202);
TMP713[1].name = "kind";
TMP1008[1] = &TMP713[7];
TMP713[7].kind = 1;
TMP713[7].offset = offsetof(tllstream211204, F);
TMP713[7].typ = (&NTI12604);
TMP713[7].name = "f";
TMP1008[2] = &TMP713[8];
TMP713[8].kind = 1;
TMP713[8].offset = offsetof(tllstream211204, S);
TMP713[8].typ = (&NTI149);
TMP713[8].name = "s";
TMP1008[3] = &TMP713[9];
TMP713[9].kind = 1;
TMP713[9].offset = offsetof(tllstream211204, Rd);
TMP713[9].typ = (&NTI108);
TMP713[9].name = "rd";
TMP1008[4] = &TMP713[10];
TMP713[10].kind = 1;
TMP713[10].offset = offsetof(tllstream211204, Wr);
TMP713[10].typ = (&NTI108);
TMP713[10].name = "wr";
TMP1008[5] = &TMP713[11];
TMP713[11].kind = 1;
TMP713[11].offset = offsetof(tllstream211204, Lineoffset);
TMP713[11].typ = (&NTI108);
TMP713[11].name = "lineOffset";
TMP713[0].len = 6; TMP713[0].kind = 2; TMP713[0].sons = &TMP1008[0];
NTI211204.node = &TMP713[0];
NTI211206.size = sizeof(tllstream211204*);
NTI211206.kind = 22;
NTI211206.base = (&NTI211204);
NTI211206.marker = TMP1012;
}

