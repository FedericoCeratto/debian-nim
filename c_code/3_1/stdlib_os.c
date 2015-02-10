/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/param.h>

#include <mach-o/dyld.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <sys/time.h>

#include <unistd.h>

#include <time.h>
typedef struct TY120008 TY120008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepair131008 keyvaluepair131008;
typedef struct oserror3233 oserror3233;
typedef struct systemerror3229 systemerror3229;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct tcell45135 tcell45135;
typedef struct tcellseq45151 tcellseq45151;
typedef struct tgcheap47216 tgcheap47216;
typedef struct tcellset45147 tcellset45147;
typedef struct tpagedesc45143 tpagedesc45143;
typedef struct tmemregion27410 tmemregion27410;
typedef struct tsmallchunk26640 tsmallchunk26640;
typedef struct tllchunk27404 tllchunk27404;
typedef struct tbigchunk26642 tbigchunk26642;
typedef struct tintset26617 tintset26617;
typedef struct ttrunk26613 ttrunk26613;
typedef struct tavlnode27408 tavlnode27408;
typedef struct tgcstat47214 tgcstat47214;
typedef struct TY117804 TY117804;
typedef struct indexerror3255 indexerror3255;
typedef struct slice84375 slice84375;
typedef struct tbasechunk26638 tbasechunk26638;
typedef struct tfreecell26630 tfreecell26630;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct keyvaluepair131008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
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
struct  systemerror3229  {
  Exception Sup;
};
struct  oserror3233  {
  systemerror3229 Sup;
NI32 Errorcode;
};
struct  tcell45135  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45151  {
NI Len;
NI Cap;
tcell45135** D;
};
struct  tcellset45147  {
NI Counter;
NI Max;
tpagedesc45143* Head;
tpagedesc45143** Data;
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
tcellseq45151 Zct;
tcellseq45151 Decstack;
tcellset45147 Cycleroots;
tcellseq45151 Tempstack;
NI Recgclock;
tmemregion27410 Region;
tgcstat47214 Stat;
};
struct TY117804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  indexerror3255  {
  Exception Sup;
};
struct  slice84375  {
NI A;
NI B;
};
typedef NI TY26620[16];
struct  tpagedesc45143  {
tpagedesc45143* Next;
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
struct TY120008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP52)(void* p, NI op);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair131008* Result);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75028, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NI, searchextpos_117751)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, normext_117741)(NimStringDesc* ext);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, raiseoserror_115009)(NI32 errorcode);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, oserrormsg_114820)(NI32 errorcode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45135*, usrtocell_48846)(void* usr);
static N_INLINE(void, rtladdzct_50404)(tcell45135* c);
N_NOINLINE(void, addzct_48817)(tcellseq45151* s, tcell45135* c);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NI32, oslasterror_115041)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117804* Result);
N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NI, parentdirpos_117566)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, rawcreatedir_121839)(NimStringDesc* dir);
N_NIMCALL(NimStringDesc*, getenv_120642)(NimStringDesc* key);
N_NIMCALL(NI, findenvvar_120605)(NimStringDesc* key);
N_NIMCALL(void, getenvvarsc_120202)(void);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NI, cmp_4517)(NimStringDesc* x, NimStringDesc* y);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b);
N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file);
N_NIMCALL(NimStringDesc*, HEX2F_117499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_84368)(NimStringDesc* s, slice84375 x);
static N_INLINE(slice84375, HEX2EHEX2E_92298)(NI a_92302, NI b_92304);
STRING_LITERAL(TMP141, "", 0);
STRING_LITERAL(TMP1074, "unknown OS error", 16);
STRING_LITERAL(TMP1564, "invalid index", 13);
STRING_LITERAL(TMP1680, "HOME", 4);
STRING_LITERAL(TMP1681, "/", 1);
STRING_LITERAL(TMP1909, "/.config/", 9);
NIM_BOOL envcomputed_120007;
TY120008* environment_120009;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TNimType NTI149; /* string */
TNimType NTI120008; /* seq[string] */
extern TNimType NTI115012; /* ref OSError */
extern TNimType NTI3233; /* OSError */
extern tgcheap47216 gch_47244;
extern TNimType NTI123817; /* ref IndexError */
extern TNimType NTI3255; /* IndexError */
N_NIMCALL(void, TMP52)(void* p, NI op) {
	TY120008* a;
	NI LOC1;
	a = (TY120008*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair131008* Result) {
	NI seppos;
	seppos = -1;
	{
		NI i_117531;
		NI HEX3Atmp_117547;
		NI res_117550;
		i_117531 = 0;
		HEX3Atmp_117547 = 0;
		HEX3Atmp_117547 = (NI32)(path->Sup.len - 1);
		res_117550 = HEX3Atmp_117547;
		{
			while (1) {
				if (!(0 <= res_117550)) goto LA3;
				i_117531 = res_117550;
				{
					if (!(((NU8)(path->data[i_117531])) == ((NU8)(47)) || ((NU8)(path->data[i_117531])) == ((NU8)(47)))) goto LA6;
					seppos = i_117531;
					goto LA1;
				}
				LA6: ;
				res_117550 -= 1;
			} LA3: ;
		}
	} LA1: ;
	{
		if (!(0 <= seppos)) goto LA10;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, 0, (NI32)(seppos - 1)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStr(path, (NI32)(seppos + 1)));
	}
	goto LA8;
	LA10: ;
	{
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(((NimStringDesc*) &TMP141)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(path));
	}
	LA8: ;
}

N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(((NimStringDesc*) &TMP141));
	}
	goto LA1;
	LA5: ;
	{
		keyvaluepair131008 LOC8;
		memset((void*)(&LOC8), 0, sizeof(LOC8));
		nossplitPath(path, (&LOC8));
		result = copyString(LOC8.Field1);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, searchextpos_117751)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = -1;
	{
		NI i_117766;
		NI HEX3Atmp_117782;
		NI res_117785;
		i_117766 = 0;
		HEX3Atmp_117782 = 0;
		HEX3Atmp_117782 = (NI32)(s->Sup.len - 1);
		res_117785 = HEX3Atmp_117782;
		{
			while (1) {
				if (!(1 <= res_117785)) goto LA3;
				i_117766 = res_117785;
				{
					if (!((NU8)(s->data[i_117766]) == (NU8)(46))) goto LA6;
					result = i_117766;
					goto LA1;
				}
				goto LA4;
				LA6: ;
				{
					if (!(((NU8)(s->data[i_117766])) == ((NU8)(47)) || ((NU8)(s->data[i_117766])) == ((NU8)(47)))) goto LA9;
					goto LA1;
				}
				goto LA4;
				LA9: ;
				LA4: ;
				res_117785 -= 1;
			} LA3: ;
		}
	} LA1: ;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, normext_117741)(NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((ext) && (ext)->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = ((NU8)(ext->data[0]) == (NU8)(46));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyString(ext);
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC8;
		LOC8 = 0;
		LOC8 = rawNewString(ext->Sup.len + 1);
appendChar(LOC8, 46);
appendString(LOC8, ext);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_117751(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < 0)) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_117741(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		NimStringDesc* LOC10;
		LOC8 = 0;
		LOC9 = 0;
		LOC9 = copyStrLast(filename, 0, (NI32)(extpos - 1));
		LOC10 = 0;
		LOC10 = normext_117741(ext);
		LOC8 = rawNewString(LOC9->Sup.len + LOC10->Sup.len + 0);
appendString(LOC8, LOC9);
appendString(LOC8, LOC10);
		result = LOC8;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, oserrormsg_114820)(NI32 errorcode) {
	NimStringDesc* result;
	result = 0;
	result = copyString(((NimStringDesc*) &TMP141));
	{
		NCSTRING LOC5;
		if (!!((errorcode == ((NI32) 0)))) goto LA3;
		LOC5 = 0;
		LOC5 = strerror(errorcode);
		result = cstrToNimstr(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(tcell45135*, usrtocell_48846)(void* usr) {
	tcell45135* result;
	result = 0;
	result = ((tcell45135*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45135))))));
	return result;
}

static N_INLINE(void, rtladdzct_50404)(tcell45135* c) {
	addzct_48817((&gch_47244.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45135* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_48846(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45135* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_48846((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50404(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45135* c;
	c = usrtocell_48846(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50404(c);
	}
	LA3: ;
}

N_NIMCALL(void, raiseoserror_115009)(NI32 errorcode) {
	oserror3233* e;
	e = 0;
	e = (oserror3233*) newObj((&NTI115012), sizeof(oserror3233));
	(*e).Sup.Sup.Sup.m_type = (&NTI3233);
	(*e).Errorcode = errorcode;
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), oserrormsg_114820(errorcode));
	{
		NimStringDesc* LOC5;
		if (!(((*e).Sup.Sup.message) && ((*e).Sup.Sup.message)->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = (*e).Sup.Sup.message; (*e).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP1074));
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	raiseException((Exception*)e, "OSError");
}

N_NIMCALL(NI32, oslasterror_115041)(void) {
	NI32 result;
	result = 0;
	result = errno;
	return result;
}

N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename) {
	NimStringDesc* result;
	NCSTRING r;
	NI LOC6;
	result = 0;
	result = mnewString(((NI) (PATH_MAX)));
	r = realpath(filename->data, result->data);
	{
		NI32 LOC5;
		if (!r == 0) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_115041();
		raiseoserror_115009(LOC5);
	}
	LA3: ;
	LOC6 = 0;
	LOC6 = strlen(result->data);
	result = setLengthStr(result, LOC6);
	return result;
}

N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117804* Result) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (path->Sup.len == 0);
		if (LOC3) goto LA4;
		LOC3 = (((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)));
		LA4: ;
		if (!LOC3) goto LA5;
		unsureAsgnRef((void**) (&(*Result).Field0), copyString(path));
		unsureAsgnRef((void**) (&(*Result).Field1), copyString(((NimStringDesc*) &TMP141)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyString(((NimStringDesc*) &TMP141)));
	}
	goto LA1;
	LA5: ;
	{
		NI seppos;
		NI dotpos;
		seppos = -1;
		dotpos = path->Sup.len;
		{
			NI i_117837;
			NI HEX3Atmp_117868;
			NI res_117871;
			i_117837 = 0;
			HEX3Atmp_117868 = 0;
			HEX3Atmp_117868 = (NI32)(path->Sup.len - 1);
			res_117871 = HEX3Atmp_117868;
			{
				while (1) {
					if (!(0 <= res_117871)) goto LA10;
					i_117837 = res_117871;
					{
						if (!((NU8)(path->data[i_117837]) == (NU8)(46))) goto LA13;
						{
							NIM_BOOL LOC17;
							NIM_BOOL LOC18;
							LOC17 = 0;
							LOC18 = 0;
							LOC18 = (dotpos == path->Sup.len);
							if (!(LOC18)) goto LA19;
							LOC18 = (0 < i_117837);
							LA19: ;
							LOC17 = LOC18;
							if (!(LOC17)) goto LA20;
							LOC17 = !((((NU8)(path->data[(NI32)(i_117837 - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI32)(i_117837 - 1)])) == ((NU8)(47))));
							LA20: ;
							if (!LOC17) goto LA21;
							dotpos = i_117837;
						}
						LA21: ;
					}
					goto LA11;
					LA13: ;
					{
						if (!(((NU8)(path->data[i_117837])) == ((NU8)(47)) || ((NU8)(path->data[i_117837])) == ((NU8)(47)))) goto LA24;
						seppos = i_117837;
						goto LA8;
					}
					goto LA11;
					LA24: ;
					LA11: ;
					res_117871 -= 1;
				} LA10: ;
			}
		} LA8: ;
		unsureAsgnRef((void**) (&(*Result).Field0), copyStrLast(path, 0, (NI32)(seppos - 1)));
		unsureAsgnRef((void**) (&(*Result).Field1), copyStrLast(path, (NI32)(seppos + 1), (NI32)(dotpos - 1)));
		unsureAsgnRef((void**) (&(*Result).Field2), copyStr(path, dotpos));
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, nosgetAppFilename)(void) {
	NimStringDesc* result;
	unsigned int size;
	result = 0;
	size = 0;
	_NSGetExecutablePath(NIM_NIL, (&size));
	result = mnewString(size);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = _NSGetExecutablePath(result->data, (&size));
		if (!LOC3) goto LA4;
		result = copyString(((NimStringDesc*) &TMP141));
	}
	LA4: ;
	{
		if (!(0 < result->Sup.len)) goto LA8;
		result = nosexpandFilename(result);
	}
	LA8: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetAppDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	TY117804 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppFilename();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitFile(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

N_NIMCALL(NI, parentdirpos_117566)(NimStringDesc* path) {
	NI result;
	NI q;
	result = 0;
	q = 1;
	{
		if (!(((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(path->data[(NI32)(path->Sup.len - 1)])) == ((NU8)(47)))) goto LA3;
		q = 2;
	}
	LA3: ;
	{
		NI i_117596;
		NI HEX3Atmp_117612;
		NI res_117615;
		i_117596 = 0;
		HEX3Atmp_117612 = 0;
		HEX3Atmp_117612 = (NI32)(path->Sup.len - q);
		res_117615 = HEX3Atmp_117612;
		{
			while (1) {
				if (!(0 <= res_117615)) goto LA7;
				i_117596 = res_117615;
				{
					if (!(((NU8)(path->data[i_117596])) == ((NU8)(47)) || ((NU8)(path->data[i_117596])) == ((NU8)(47)))) goto LA10;
					result = i_117596;
					goto BeforeRet;
				}
				LA10: ;
				res_117615 -= 1;
			} LA7: ;
		}
	}
	result = -1;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path) {
	NimStringDesc* result;
	NI seppos;
	result = 0;
	seppos = parentdirpos_117566(path);
	{
		if (!(0 <= seppos)) goto LA3;
		result = copyStrLast(path, 0, (NI32)(seppos - 1));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(((NimStringDesc*) &TMP141));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(head->Sup.len == 0)) goto LA3;
		result = copyString(tail);
	}
	goto LA1;
	LA3: ;
	{
		if (!(((NU8)(head->data[(NI32)(head->Sup.len - 1)])) == ((NU8)(47)) || ((NU8)(head->data[(NI32)(head->Sup.len - 1)])) == ((NU8)(47)))) goto LA6;
		{
			NimStringDesc* LOC12;
			NimStringDesc* LOC13;
			if (!(((NU8)(tail->data[0])) == ((NU8)(47)) || ((NU8)(tail->data[0])) == ((NU8)(47)))) goto LA10;
			LOC12 = 0;
			LOC13 = 0;
			LOC13 = copyStr(tail, 1);
			LOC12 = rawNewString(head->Sup.len + LOC13->Sup.len + 0);
appendString(LOC12, head);
appendString(LOC12, LOC13);
			result = LOC12;
		}
		goto LA8;
		LA10: ;
		{
			NimStringDesc* LOC15;
			LOC15 = 0;
			LOC15 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC15, head);
appendString(LOC15, tail);
			result = LOC15;
		}
		LA8: ;
	}
	goto LA1;
	LA6: ;
	{
		{
			NimStringDesc* LOC21;
			if (!(((NU8)(tail->data[0])) == ((NU8)(47)) || ((NU8)(tail->data[0])) == ((NU8)(47)))) goto LA19;
			LOC21 = 0;
			LOC21 = rawNewString(head->Sup.len + tail->Sup.len + 0);
appendString(LOC21, head);
appendString(LOC21, tail);
			result = LOC21;
		}
		goto LA17;
		LA19: ;
		{
			NimStringDesc* LOC23;
			LOC23 = 0;
			LOC23 = rawNewString(head->Sup.len + tail->Sup.len + 1);
appendString(LOC23, head);
appendChar(LOC23, 47);
appendString(LOC23, tail);
			result = LOC23;
		}
		LA17: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, HEX2F_117499)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	result = 0;
	result = nosjoinPath(head, tail);
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(void, rawcreatedir_121839)(NimStringDesc* dir) {
	{
		NIM_BOOL LOC3;
		int LOC4;
		NI32 LOC8;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = mkdir(dir->data, ((mode_t) 511));
		LOC3 = !((LOC4 == ((NI32) 0)));
		if (!(LOC3)) goto LA5;
		LOC3 = !((errno == EEXIST));
		LA5: ;
		if (!LOC3) goto LA6;
		LOC8 = 0;
		LOC8 = oslasterror_115041();
		raiseoserror_115009(LOC8);
	}
	LA6: ;
}

N_NIMCALL(void, noscreateDir)(NimStringDesc* dir) {
	NIM_BOOL omitnext;
	omitnext = NIM_FALSE;
	{
		NI i_122211;
		NI HEX3Atmp_122227;
		NI res_122230;
		i_122211 = 0;
		HEX3Atmp_122227 = 0;
		HEX3Atmp_122227 = (NI32)(dir->Sup.len - 1);
		res_122230 = 1;
		{
			while (1) {
				if (!(res_122230 <= HEX3Atmp_122227)) goto LA3;
				i_122211 = res_122230;
				{
					if (!(((NU8)(dir->data[i_122211])) == ((NU8)(47)) || ((NU8)(dir->data[i_122211])) == ((NU8)(47)))) goto LA6;
					{
						if (!omitnext) goto LA10;
						omitnext = NIM_FALSE;
					}
					goto LA8;
					LA10: ;
					{
						NimStringDesc* LOC13;
						LOC13 = 0;
						LOC13 = copyStrLast(dir, 0, (NI32)(i_122211 - 1));
						rawcreatedir_121839(LOC13);
					}
					LA8: ;
				}
				LA6: ;
				res_122230 += 1;
			} LA3: ;
		}
	}
	rawcreatedir_121839(dir);
}

N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0) {
	NimStringDesc* result;
	result = 0;
	result = copyString(parts[0]);
	{
		NI i_117475;
		NI HEX3Atmp_117479;
		NI res_117482;
		i_117475 = 0;
		HEX3Atmp_117479 = 0;
		HEX3Atmp_117479 = (partsLen0-1);
		res_117482 = 1;
		{
			while (1) {
				if (!(res_117482 <= HEX3Atmp_117479)) goto LA3;
				i_117475 = res_117482;
				result = nosjoinPath(result, parts[i_117475]);
				res_117482 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(filename->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISREG(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	NI extpos;
	result = 0;
	extpos = searchextpos_117751(filename);
	{
		NimStringDesc* LOC5;
		NimStringDesc* LOC6;
		if (!(extpos < 0)) goto LA3;
		LOC5 = 0;
		LOC6 = 0;
		LOC6 = normext_117741(ext);
		LOC5 = rawNewString(filename->Sup.len + LOC6->Sup.len + 0);
appendString(LOC5, filename);
appendString(LOC5, LOC6);
		result = LOC5;
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(filename);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NI, paramcount_123839)(void) {
	NI result;
	result = 0;
	result = ((NI) ((NI32)(cmdCount - ((NI32) 1))));
	return result;
}

N_NIMCALL(NimStringDesc*, paramstr_123809)(NI i) {
	NimStringDesc* result;
	indexerror3255* e_123816;
	NimStringDesc* LOC7;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (i < ((NI) (cmdCount)));
		if (!(LOC3)) goto LA4;
		LOC3 = (0 <= i);
		LA4: ;
		if (!LOC3) goto LA5;
		result = cstrToNimstr(cmdLine[(i)- 0]);
		goto BeforeRet;
	}
	LA5: ;
	e_123816 = 0;
	e_123816 = (indexerror3255*) newObj((&NTI123817), sizeof(indexerror3255));
	(*e_123816).Sup.Sup.m_type = (&NTI3255);
	LOC7 = 0;
	LOC7 = (*e_123816).Sup.message; (*e_123816).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1564));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	raiseException((Exception*)e_123816, "IndexError");
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringDesc* path) {
	NIM_BOOL result;
	result = 0;
	result = ((NU8)(path->data[0]) == (NU8)(47));
	return result;
}

N_NIMCALL(NimStringDesc*, nosunixToNativePath)(NimStringDesc* path, NimStringDesc* drive) {
	NimStringDesc* result;
	result = 0;
	result = copyString(path);
	return result;
}

N_NIMCALL(void, getenvvarsc_120202)(void) {
	{
		NI i;
		if (!!(envcomputed_120007)) goto LA3;
		if (environment_120009) nimGCunrefNoCycle(environment_120009);
		environment_120009 = (TY120008*) newSeqRC1((&NTI120008), 0);
		i = 0;
		{
			while (1) {
				NimStringDesc* LOC11;
				NimStringDesc* LOC12;
				{
					if (!(environ[(i)- 0] == NIM_NIL)) goto LA9;
					goto LA5;
				}
				LA9: ;
				LOC11 = 0;
				LOC11 = cstrToNimstr(environ[(i)- 0]);
				environment_120009 = (TY120008*) incrSeq(&(environment_120009)->Sup, sizeof(NimStringDesc*));
				LOC12 = 0;
				LOC12 = environment_120009->data[environment_120009->Sup.len-1]; environment_120009->data[environment_120009->Sup.len-1] = copyStringRC1(LOC11);
				if (LOC12) nimGCunrefNoCycle(LOC12);
				i += 1;
			}
		} LA5: ;
		envcomputed_120007 = NIM_TRUE;
	}
	LA3: ;
}

N_NIMCALL(NI, findenvvar_120605)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* LOC1;
	result = 0;
	getenvvarsc_120202();
	LOC1 = 0;
	LOC1 = rawNewString(key->Sup.len + 1);
appendString(LOC1, key);
appendChar(LOC1, 61);
	temp = LOC1;
	{
		NI i_120620;
		NI HEX3Atmp_120622;
		NI res_120625;
		i_120620 = 0;
		HEX3Atmp_120622 = 0;
		HEX3Atmp_120622 = (environment_120009->Sup.len-1);
		res_120625 = 0;
		{
			while (1) {
				if (!(res_120625 <= HEX3Atmp_120622)) goto LA4;
				i_120620 = res_120625;
				{
					NIM_BOOL LOC7;
					LOC7 = 0;
					LOC7 = nsuStartsWith(environment_120009->data[i_120620], temp);
					if (!LOC7) goto LA8;
					result = i_120620;
					goto BeforeRet;
				}
				LA8: ;
				res_120625 += 1;
			} LA4: ;
		}
	}
	result = -1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getenv_120642)(NimStringDesc* key) {
	NimStringDesc* result;
	NI i;
	result = 0;
	i = findenvvar_120605(key);
	{
		NI LOC5;
		if (!(0 <= i)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuFindChar(environment_120009->data[i], 61, 0);
		result = copyStr(environment_120009->data[i], (NI32)(LOC5 + 1));
		goto BeforeRet;
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING env;
		env = getenv(key->data);
		{
			if (!(env == NIM_NIL)) goto LA9;
			result = copyString(((NimStringDesc*) &TMP141));
			goto BeforeRet;
		}
		LA9: ;
		result = cstrToNimstr(env);
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetHomeDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_120642(((NimStringDesc*) &TMP1680));
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1681));
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NI, noscmpPaths)(NimStringDesc* patha, NimStringDesc* pathb) {
	NI result;
	result = 0;
	{
		if (!NIM_TRUE) goto LA3;
		result = cmp_4517(patha, pathb);
	}
	goto LA1;
	LA3: ;
	{
		result = nsuCmpIgnoreCase(patha, pathb);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, putenv_120667)(NimStringDesc* key, NimStringDesc* val) {
	NI indx;
	indx = findenvvar_120605(key);
	{
		NimStringDesc* LOC5;
		if (!(0 <= indx)) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC5, key);
appendChar(LOC5, 61);
appendString(LOC5, val);
		asgnRefNoCycle((void**) (&environment_120009->data[indx]), LOC5);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		LOC7 = 0;
		LOC7 = rawNewString(key->Sup.len + val->Sup.len + 1);
appendString(LOC7, key);
appendChar(LOC7, 61);
appendString(LOC7, val);
		environment_120009 = (TY120008*) incrSeq(&(environment_120009)->Sup, sizeof(NimStringDesc*));
		LOC8 = 0;
		LOC8 = environment_120009->data[environment_120009->Sup.len-1]; environment_120009->data[environment_120009->Sup.len-1] = copyStringRC1(LOC7);
		if (LOC8) nimGCunrefNoCycle(LOC8);
		indx = (environment_120009->Sup.len-1);
	}
	LA1: ;
	{
		int LOC11;
		NI32 LOC14;
		LOC11 = 0;
		LOC11 = putenv(environment_120009->data[indx]->data);
		if (!!((LOC11 == ((NI32) 0)))) goto LA12;
		LOC14 = 0;
		LOC14 = oslasterror_115041();
		raiseoserror_115009(LOC14);
	}
	LA12: ;
}

N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	result = 0;
	result = mnewString(512);
	{
		NCSTRING LOC3;
		NI LOC6;
		LOC3 = 0;
		LOC3 = getcwd(result->data, 512);
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		LOC6 = 0;
		LOC6 = strlen(result->data);
		result = setLengthStr(result, LOC6);
	}
	goto LA1;
	LA4: ;
	{
		NI32 LOC8;
		LOC8 = 0;
		LOC8 = oslasterror_115041();
		raiseoserror_115009(LOC8);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getenv_120642(((NimStringDesc*) &TMP1680));
	LOC1 = rawNewString(LOC2->Sup.len + 9);
appendString(LOC1, LOC2);
appendString(LOC1, ((NimStringDesc*) &TMP1909));
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path) {
	NIM_BOOL result;
	NI LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = parentdirpos_117566(path);
	result = (LOC1 < 0);
	return result;
}

N_NIMCALL(NIM_BOOL, existsenv_120657)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	{
		NCSTRING LOC3;
		LOC3 = 0;
		LOC3 = getenv(key->data);
		if (!!((LOC3 == NIM_NIL))) goto LA4;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	goto LA1;
	LA4: ;
	{
		NI LOC7;
		LOC7 = 0;
		LOC7 = findenvvar_120605(key);
		result = (0 <= LOC7);
		goto BeforeRet;
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL LOC1;
	int LOC2;
	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = stat(dir->data, (&res));
	LOC1 = (((NI32) 0) <= LOC2);
	if (!(LOC1)) goto LA3;
	LOC1 = S_ISDIR(res.st_mode);
	LA3: ;
	result = LOC1;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(time_t, nosgetLastModificationTime)(NimStringDesc* file) {
	time_t result;
	struct stat res;
	result = 0;
	memset((void*)(&res), 0, sizeof(res));
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = stat(file->data, (&res));
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_115041();
		raiseoserror_115009(LOC6);
	}
	LA4: ;
	result = res.st_mtime;
	goto BeforeRet;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	time_t LOC1;
	time_t LOC2;
	NI64 LOC3;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetLastModificationTime(a);
	LOC2 = 0;
	LOC2 = nosgetLastModificationTime(b);
	LOC3 = 0;
	LOC3 = ntDiffTime(LOC1, LOC2);
	result = (IL64(0) <= LOC3);
	return result;
}

N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int LOC1;
	memset((void*)(&a), 0, sizeof(a));
	memset((void*)(&b), 0, sizeof(b));
	a.tv_sec = (NI32)(milsecs / 1000);
	a.tv_nsec = ((NI) ((NI32)(((NI) ((NI32)(((NI) ((NI32)(milsecs % 1000))) * 1000))) * 1000)));
	LOC1 = 0;
	LOC1 = nanosleep((&a), (&b));
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_84368)(NimStringDesc* s, slice84375 x) {
	NimStringDesc* result;
	NI LOC1;
	NI LOC7;
	result = 0;
	LOC1 = 0;
	{
		if (!(0 <= x.A)) goto LA4;
		LOC1 = x.A;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (NI32)(s->Sup.len + x.A);
	}
	LA2: ;
	LOC7 = 0;
	{
		if (!(0 <= x.B)) goto LA10;
		LOC7 = x.B;
	}
	goto LA8;
	LA10: ;
	{
		LOC7 = (NI32)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice84375, HEX2EHEX2E_92298)(NI a_92302, NI b_92304) {
	slice84375 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a_92302;
	result.B = b_92304;
	return result;
}

N_NIMCALL(NimStringDesc*, expandtilde_125446)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC7;
		NimStringDesc* LOC11;
		slice84375 LOC12;
		NimStringDesc* LOC13;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = (1 < path->Sup.len);
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(path->data[0]) == (NU8)(126));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC7 = 0;
		LOC7 = ((NU8)(path->data[1]) == (NU8)(47));
		if (LOC7) goto LA8;
		LOC7 = ((NU8)(path->data[1]) == (NU8)(92));
		LA8: ;
		LOC3 = LOC7;
		LA6: ;
		if (!LOC3) goto LA9;
		LOC11 = 0;
		LOC11 = nosgetHomeDir();
		LOC12 = HEX2EHEX2E_92298(2, (NI32)(path->Sup.len - 1));
		LOC13 = 0;
		LOC13 = HEX5BHEX5D_84368(path, LOC12);
		result = HEX2F_117499(LOC11, LOC13);
	}
	goto LA1;
	LA9: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit)(void) {
NTI120008.size = sizeof(TY120008*);
NTI120008.kind = 24;
NTI120008.base = (&NTI149);
NTI120008.flags = 2;
NTI120008.marker = TMP52;
}

