/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <glob.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct Tlinkedlist130028 Tlinkedlist130028;
typedef struct Tlistentry130022 Tlistentry130022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tcell46347 Tcell46347;
typedef struct TNimType TNimType;
typedef struct Tcellseq46363 Tcellseq46363;
typedef struct Tgcheap48216 Tgcheap48216;
typedef struct Tcellset46359 Tcellset46359;
typedef struct Tpagedesc46355 Tpagedesc46355;
typedef struct Tmemregion28210 Tmemregion28210;
typedef struct Tsmallchunk27440 Tsmallchunk27440;
typedef struct Tllchunk28204 Tllchunk28204;
typedef struct Tbigchunk27442 Tbigchunk27442;
typedef struct Tintset27417 Tintset27417;
typedef struct Ttrunk27413 Ttrunk27413;
typedef struct Tavlnode28208 Tavlnode28208;
typedef struct Tgcstat48214 Tgcstat48214;
typedef struct Stringtableobj134012 Stringtableobj134012;
typedef struct TNimNode TNimNode;
typedef struct TY122008 TY122008;
typedef struct Keyvaluepair134008 Keyvaluepair134008;
typedef struct TY119589 TY119589;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct Tstrentry130024 Tstrentry130024;
typedef struct Tbasechunk27438 Tbasechunk27438;
typedef struct Tfreecell27430 Tfreecell27430;
typedef struct Keyvaluepairseq134010 Keyvaluepairseq134010;
struct  Tlinkedlist130028  {
Tlistentry130022* head;
Tlistentry130022* tail;
NI counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tcell46347  {
NI refcount;
TNimType* typ;
};
struct  Tcellseq46363  {
NI len;
NI cap;
Tcell46347** d;
};
struct  Tcellset46359  {
NI counter;
NI max;
Tpagedesc46355* head;
Tpagedesc46355** data;
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
Tcellseq46363 zct;
Tcellseq46363 decstack;
Tcellset46359 cycleroots;
Tcellseq46363 tempstack;
NI recgclock;
Tmemregion28210 region;
Tgcstat48214 stat;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct TY119589 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
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
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15609;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15609 raiseAction;
};
typedef NimStringDesc* TY165566[1];
typedef NimStringDesc* TY155965[2];
struct  Tlistentry130022  {
  TNimObject Sup;
Tlistentry130022* prev;
Tlistentry130022* next;
};
struct  Tstrentry130024  {
  Tlistentry130022 Sup;
NimStringDesc* data;
};
typedef NU8 TY179407[32];
typedef NI TY27420[16];
struct  Tpagedesc46355  {
Tpagedesc46355* next;
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
struct  Stringtableobj134012  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq134010* data;
NU8 mode;
};
struct  Tfreecell27430  {
Tfreecell27430* next;
NI zerofield;
};
struct TY122008 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct Keyvaluepairseq134010 {
  TGenericSeq Sup;
  Keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr);
static N_INLINE(void, rtladdzct_51404)(Tcell46347* c);
N_NOINLINE(void, addzct_49817)(Tcellseq46363* s, Tcell46347* c);
N_NIMCALL(Stringtableobj134012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_52222)(Tcell46347* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c);
static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c);
N_NOINLINE(void, incl_47065)(Tcellset46359* s, Tcell46347* cell);
static N_INLINE(void, decref_51804)(Tcell46347* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_155365)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, Keyvaluepair134008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(Stringtableobj134012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_119292)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY119589* Result);
N_NIMCALL(void, nstPut)(Stringtableobj134012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_155428)(void);
N_NIMCALL(NimStringDesc*, shortendir_155407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_156205)(FILE* f, NimStringDesc** x, NI xLen0);
N_NIMCALL(void, write_13457)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_155825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_156339)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_156280)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_155374)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawfindfile2_156306)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_130705)(Tlinkedlist130028* list, Tlistentry130022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_76243, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_156459)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY179407 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_156409)(NimStringDesc* s, TY122008** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP41, "", 0);
STRING_LITERAL(TMP1435, "*.nimble", 8);
STRING_LITERAL(TMP1436, "*.babel", 7);
STRING_LITERAL(TMP1437, "nimcache", 8);
STRING_LITERAL(TMP1439, "\012", 1);
STRING_LITERAL(TMP1440, "cannot create directory: ", 25);
STRING_LITERAL(TMP1487, "nim", 3);
STRING_LITERAL(TMP1865, "lib", 3);
static NIM_CONST TY179407 TMP1866 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1867, "true", 4);
NU8 gidecmd_155115;
NU32 goptions_155126;
NU32 gglobaloptions_155128;
NI8 gexitcode_155129;
NU8 gcmd_155130;
NU8 gselectedgc_155131;
Tlinkedlist130028 searchpaths_155132;
Tlinkedlist130028 lazypaths_155133;
NimStringDesc* outfile_155134;
extern Tgcheap48216 gch_48244;
NimStringDesc* docseesrcurl_155135;
NimStringDesc* headerfile_155136;
NI gverbosity_155137;
NI gnumberofprocessors_155138;
NIM_BOOL gwholeproject_155139;
NimStringDesc* gevalexpr_155140;
NF glastcmdtime_155141;
NIM_BOOL glistfullpaths_155142;
NIM_BOOL isserving_155143;
NIM_BOOL gnonimblepath_155144;
NIM_BOOL gexperimentalmode_155145;
Stringtableobj134012* gconfigvars_155231;
Stringtableobj134012* gdlloverrides_155232;
NimStringDesc* libpath_155233;
NimStringDesc* gprojectname_155234;
NimStringDesc* gprojectpath_155235;
NimStringDesc* gprojectfull_155236;
NI32 gprojectmainidx_155237;
NimStringDesc* nimcachedir_155238;
NimStringDesc* command_155239;
TY122008* commandargs_155257;
extern TNimType NTI122008; /* seq[string] */
NIM_BOOL gkeepcomments_155258;
TY122008* implicitimports_155276;
TY122008* implicitincludes_155294;
Stringtableobj134012* packagecache_155601;
TNimType NTI155014; /* TOption */
TNimType NTI155016; /* TOptions */
extern TSafePoint* exchandler_17043;
extern TNimType NTI3433; /* OSError */
extern Exception* currexception_17045;

static N_INLINE(Tcell46347*, usrtocell_49846)(void* usr) {
	Tcell46347* result;
	result = 0;
	result = ((Tcell46347*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(Tcell46347))))));
	return result;
}

static N_INLINE(void, rtladdzct_51404)(Tcell46347* c) {
	addzct_49817((&gch_48244.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Tcell46347* c;
	c = usrtocell_49846(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49867)(Tcell46347* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50623)(Tcell46347* c) {
	{
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		incl_47065((&gch_48244.cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_52222)(Tcell46347* c) {
	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49867(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50623(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51804)(Tcell46347* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_51404(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49867(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50623(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		Tcell46347* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49846(src);
		incref_52222(LOC5);
	}
	LA3: ;
	{
		Tcell46347* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49846((*dest));
		decref_51804(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, canonicalizepath_155374)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	result = nosexpandFilename(path);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_155365)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	Keyvaluepair134008 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppDir();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitPath(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, shortendir_155407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
{	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_155365();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
	prefix = LOC1;
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = nsuStartsWith(dir, prefix);
		if (!LOC5) goto LA6;
		result = copyStr(dir, (prefix ? prefix->Sup.len : 0));
		goto BeforeRet;
	}
	LA6: ;
	LOC8 = 0;
	LOC8 = rawNewString(gprojectpath_155235->Sup.len + 1);
appendString(LOC8, gprojectpath_155235);
appendChar(LOC8, 47);
	prefix = LOC8;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = nsuStartsWith(dir, prefix);
		if (!LOC11) goto LA12;
		result = copyStr(dir, (prefix ? prefix->Sup.len : 0));
		goto BeforeRet;
	}
	LA12: ;
	result = copyString(dir);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getpackagename_155825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
{	result = 0;
	parents = ((NI) 0);
	{
		{
			NimStringDesc* d_155831;
			NimStringDesc* current_155888;
			d_155831 = 0;
			current_155888 = copyString(path);
			{
				while (1) {
					current_155888 = nosparentDir(current_155888);
					{
						if (!((current_155888 ? current_155888->Sup.len : 0) == ((NI) 0))) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_155831 = current_155888;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_155601, d_155831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_155601, d_155831);
						goto BeforeRet;
					}
					LA12: ;
					parents += ((NI) 1);
					{
						NimStringDesc* file_155841;
						NimStringDesc* HEX3Atmp_155855;
						glob_t f_155859;
						NI res_155861;
						int LOC15;
						file_155841 = 0;
						HEX3Atmp_155855 = 0;
						HEX3Atmp_155855 = HEX2F_119292(d_155831, ((NimStringDesc*) &TMP1435));
						memset((void*)(&f_155859), 0, sizeof(f_155859));
						res_155861 = 0;
						f_155859.gl_offs = ((NI) 0);
						f_155859.gl_pathc = ((NI) 0);
						f_155859.gl_pathv = NIM_NIL;
						LOC15 = 0;
						LOC15 = glob(HEX3Atmp_155855->data, ((int) 0), NIM_NIL, (&f_155859));
						res_155861 = ((NI) (LOC15));
						{
							if (!(res_155861 == ((NI) 0))) goto LA18;
							{
								NI i_155863;
								NI HEX3Atmp_155865;
								NI res_155867;
								i_155863 = 0;
								HEX3Atmp_155865 = 0;
								HEX3Atmp_155865 = (NI)(f_155859.gl_pathc - ((NI) 1));
								res_155867 = ((NI) 0);
								{
									while (1) {
										TY119589 LOC23;
										if (!(res_155867 <= HEX3Atmp_155865)) goto LA22;
										i_155863 = res_155867;
										file_155841 = cstrToNimstr(f_155859.gl_pathv[(i_155863)- 0]);
										memset((void*)(&LOC23), 0, sizeof(LOC23));
										nossplitFile(file_155841, (&LOC23));
										result = copyString(LOC23.Field1);
										goto LA1;
										res_155867 += ((NI) 1);
									} LA22: ;
								}
							}
						}
						LA18: ;
						globfree((&f_155859));
					}
					{
						NimStringDesc* file_155842;
						NimStringDesc* HEX3Atmp_155871;
						glob_t f_155875;
						NI res_155877;
						int LOC25;
						file_155842 = 0;
						HEX3Atmp_155871 = 0;
						HEX3Atmp_155871 = HEX2F_119292(d_155831, ((NimStringDesc*) &TMP1436));
						memset((void*)(&f_155875), 0, sizeof(f_155875));
						res_155877 = 0;
						f_155875.gl_offs = ((NI) 0);
						f_155875.gl_pathc = ((NI) 0);
						f_155875.gl_pathv = NIM_NIL;
						LOC25 = 0;
						LOC25 = glob(HEX3Atmp_155871->data, ((int) 0), NIM_NIL, (&f_155875));
						res_155877 = ((NI) (LOC25));
						{
							if (!(res_155877 == ((NI) 0))) goto LA28;
							{
								NI i_155879;
								NI HEX3Atmp_155881;
								NI res_155883;
								i_155879 = 0;
								HEX3Atmp_155881 = 0;
								HEX3Atmp_155881 = (NI)(f_155875.gl_pathc - ((NI) 1));
								res_155883 = ((NI) 0);
								{
									while (1) {
										TY119589 LOC33;
										if (!(res_155883 <= HEX3Atmp_155881)) goto LA32;
										i_155879 = res_155883;
										file_155842 = cstrToNimstr(f_155875.gl_pathv[(i_155879)- 0]);
										memset((void*)(&LOC33), 0, sizeof(LOC33));
										nossplitFile(file_155842, (&LOC33));
										result = copyString(LOC33.Field1);
										goto LA1;
										res_155883 += ((NI) 1);
									} LA32: ;
								}
							}
						}
						LA28: ;
						globfree((&f_155875));
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA36;
		result = copyString(((NimStringDesc*) &TMP41));
	}
	LA36: ;
	{
		NimStringDesc* d_155843;
		NimStringDesc* current_155892;
		d_155843 = 0;
		current_155892 = copyString(path);
		{
			while (1) {
				current_155892 = nosparentDir(current_155892);
				{
					if (!((current_155892 ? current_155892->Sup.len : 0) == ((NI) 0))) goto LA43;
					goto LA39;
				}
				LA43: ;
				d_155843 = current_155892;
				nstPut(packagecache_155601, d_155843, result);
				parents -= ((NI) 1);
				{
					if (!(parents <= ((NI) 0))) goto LA47;
					goto LA38;
				}
				LA47: ;
			}
		} LA39: ;
	} LA38: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_155428)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (nimcachedir_155238 ? nimcachedir_155238->Sup.len : 0))) goto LA3;
		result = copyString(nimcachedir_155238);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_155407(gprojectpath_155235);
		result = HEX2F_119292(LOC6, ((NimStringDesc*) &TMP1437));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_17043;
	exchandler_17043 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_17043 = (*exchandler_17043).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_17045;
	return result;
}

static N_INLINE(void, writeln_156205)(FILE* f, NimStringDesc** x, NI xLen0) {
	{
		NimStringDesc* i_156221;
		NI i_156229;
		i_156221 = 0;
		i_156229 = ((NI) 0);
		{
			while (1) {
				if (!(i_156229 < xLen0)) goto LA3;
				i_156221 = x[i_156229];
				write_13457(f, i_156221);
				i_156229 += ((NI) 1);
			} LA3: ;
		}
	}
	write_13457(f, ((NimStringDesc*) &TMP1439));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_17045), (*currexception_17045).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_156001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	Keyvaluepair134008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	NimStringDesc* subdir;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(f, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	subdir = getgeneratedpath_155428();
	{
		TSafePoint TMP1438;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1438);
		TMP1438.status = setjmp(TMP1438.context);
		if (TMP1438.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3433))) {
				TY165566 LOC9;
				NimStringDesc* LOC10;
				TMP1438.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1440));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_156205(stdout, LOC9, 1);
				exit(((NI) 1));
				popCurrentException();
			}
		}
		if (TMP1438.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_155958)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	Keyvaluepair134008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY155965 LOC2;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(path, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_155428();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_155944)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_155825(path);
	{
		if (!((x ? x->Sup.len : 0) == ((NI) 0))) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY119589 LOC6;
		NimStringDesc* p;
		NimStringDesc* file;
		NimStringDesc* ext;
		NimStringDesc* LOC7;
		NimStringDesc* LOC8;
		NimStringDesc* LOC9;
		memset((void*)(&LOC6), 0, sizeof(LOC6));
		nossplitFile(path, (&LOC6));
		p = 0;
		p = LOC6.Field0;
		file = 0;
		file = LOC6.Field1;
		ext = 0;
		ext = LOC6.Field2;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = rawNewString(x->Sup.len + file->Sup.len + 1);
appendString(LOC8, x);
appendChar(LOC8, 95);
appendString(LOC8, file);
		LOC9 = 0;
		LOC9 = HEX2F_119292(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_156280)(NimStringDesc* f) {
	NimStringDesc* result;
{	result = 0;
	{
		NimStringDesc* it_156284;
		Tstrentry130024* it_156290;
		it_156284 = 0;
		it_156290 = ((Tstrentry130024*) (searchpaths_155132.head));
		{
			while (1) {
				if (!!((it_156290 == NIM_NIL))) goto LA3;
				it_156284 = (*it_156290).data;
				result = nosjoinPath(it_156284, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_155374(result);
					goto BeforeRet;
				}
				LA7: ;
				it_156290 = ((Tstrentry130024*) ((*it_156290).Sup.next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_156306)(NimStringDesc* f) {
	NimStringDesc* result;
	Tstrentry130024* it;
{	result = 0;
	it = ((Tstrentry130024*) (lazypaths_155133.head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).data, f);
			{
				NIM_BOOL LOC5;
				Tlistentry130022* LOC8;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				LOC8 = 0;
				LOC8 = &it->Sup;
				bringtofront_130705((&lazypaths_155133), LOC8);
				result = canonicalizepath_155374(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((Tstrentry130024*) ((*it).Sup.next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP41));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_156339)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_156280(f);
	{
		NimStringDesc* LOC5;
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_156280(LOC5);
		{
			if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA8;
			result = rawfindfile2_156306(f);
			{
				NimStringDesc* LOC14;
				if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_156306(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_156349)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY119589 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1487));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(currentmodule, (&LOC1));
	currentpath = LOC1.Field0;
	result = HEX2F_119292(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_156339(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_155418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) < (path ? path->Sup.len : 0));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI)((path ? path->Sup.len : 0) - ((NI) 1))]) == (NU8)(47));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyStrLast(path, ((NI) 0), (NI)((path ? path->Sup.len : 0) - ((NI) 2)));
	}
	goto LA1;
	LA5: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, existsconfigvar_155324)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_155231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_155334)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_155231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_156459)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1865));
		if (!LOC3) goto LA4;
		start = ((NI) 3);
	}
	goto LA1;
	LA4: ;
	{
		start = ((NI) 0);
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1866, ((NI) 0));
	{
		if (!(((NI) 0) <= ende)) goto LA9;
		result = copyStrLast(s, start, (NI)(ende - ((NI) 1)));
	}
	goto LA7;
	LA9: ;
	{
		result = copyStr(s, start);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, incldynliboverride_156472)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_156459(lib);
	nstPut(gdlloverrides_155232, LOC1, ((NimStringDesc*) &TMP1867));
}

N_NIMCALL(void, setconfigvar_155344)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_155231, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_156481)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_156459(lib);
	result = nsthasKey(gdlloverrides_155232, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_156409)(NimStringDesc* s, TY122008** dest) {
	NI le;
	NI ri;
	le = nsuFindChar(s, 40, ((NI) 0));
	ri = nsuFindChar(s, 41, ((NI) ((NI)(le + ((NI) 1)))));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= le);
		if (!(LOC3)) goto LA4;
		LOC3 = (le < ri);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix = copyStrLast(s, ((NI) 0), (NI)(le - ((NI) 1)));
		suffix = copyStr(s, (NI)(ri + ((NI) 1)));
		{
			NimStringDesc* middle_156419;
			NimStringDesc* HEX3Atmp_156431;
			NI last_156435;
			middle_156419 = 0;
			HEX3Atmp_156431 = 0;
			HEX3Atmp_156431 = copyStrLast(s, (NI)(le + ((NI) 1)), (NI)(ri - ((NI) 1)));
			last_156435 = ((NI) 0);
			{
				if (!(((NI) 0) < (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0))) goto LA10;
				{
					while (1) {
						NI first_156437;
						NimStringDesc* LOC18;
						if (!(last_156435 <= (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0))) goto LA13;
						first_156437 = last_156435;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_156435 < (HEX3Atmp_156431 ? HEX3Atmp_156431->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_156431->data[last_156435]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_156435 += ((NI) 1);
							} LA15: ;
						}
						middle_156419 = copyStrLast(HEX3Atmp_156431, first_156437, (NI)(last_156435 - ((NI) 1)));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_156419->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_156419);
appendString(LOC18, suffix);
						libcandidates_156409(LOC18, dest);
						last_156435 += ((NI) 1);
					} LA13: ;
				}
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC20;
		(*dest) = (TY122008*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_155354)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_155134) && (outfile_155134)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_155134);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_155307)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(((NI) 0) < (commandargs_155257 ? commandargs_155257->Sup.len : 0))) goto LA3;
		result = copyString(commandargs_155257->data[((NI) 0)]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_155234);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_155605)(void) {
	asgnRef((void**) (&packagecache_155601), nstnewStringTable(((NU8) 1)));
}
NIM_EXTERNC N_NOINLINE(void, nimsrc_optionsInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	NimStringDesc* LOC8;
	NimStringDesc* LOC9;
	NimStringDesc* LOC10;
	goptions_155126 = 2202238;
	gglobaloptions_155128 = 8388608;
	gcmd_155130 = ((NU8) 0);
	gselectedgc_155131 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_155134; outfile_155134 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_155135; docseesrcurl_155135 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_155136; headerfile_155136 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_155137 = ((NI) 1);
	LOC4 = 0;
	LOC4 = gevalexpr_155140; gevalexpr_155140 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_155143 = NIM_FALSE;
	gnonimblepath_155144 = NIM_FALSE;
	asgnRef((void**) (&gconfigvars_155231), nstnewStringTable(((NU8) 2)));
	asgnRef((void**) (&gdlloverrides_155232), nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_155233; libpath_155233 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_155234; gprojectname_155234 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_155235; gprojectpath_155235 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_155236; gprojectfull_155236 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_155238; nimcachedir_155238 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_155239; command_155239 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_155257) nimGCunrefNoCycle(commandargs_155257);
	commandargs_155257 = (TY122008*) newSeqRC1((&NTI122008), 0);
	gkeepcomments_155258 = NIM_TRUE;
	if (implicitimports_155276) nimGCunrefNoCycle(implicitimports_155276);
	implicitimports_155276 = (TY122008*) newSeqRC1((&NTI122008), 0);
	if (implicitincludes_155294) nimGCunrefNoCycle(implicitincludes_155294);
	implicitincludes_155294 = (TY122008*) newSeqRC1((&NTI122008), 0);
	asgnRef((void**) (&packagecache_155601), nstnewStringTable(((NU8) 1)));
}

NIM_EXTERNC N_NOINLINE(void, nimsrc_optionsDatInit)(void) {
static TNimNode* TMP763[22];
NI TMP765;
static char* NIM_CONST TMP764[22] = {
"optNone", 
"optObjCheck", 
"optFieldCheck", 
"optRangeCheck", 
"optBoundsCheck", 
"optOverflowCheck", 
"optNilCheck", 
"optNaNCheck", 
"optInfCheck", 
"optAssert", 
"optLineDir", 
"optWarns", 
"optHints", 
"optOptimizeSpeed", 
"optOptimizeSize", 
"optStackTrace", 
"optLineTrace", 
"optEndb", 
"optByRef", 
"optProfiler", 
"optImplicitStatic", 
"optPatterns"};
static TNimNode TMP21[24];
NTI155014.size = sizeof(NU8);
NTI155014.kind = 14;
NTI155014.base = 0;
NTI155014.flags = 3;
for (TMP765 = 0; TMP765 < 22; TMP765++) {
TMP21[TMP765+0].kind = 1;
TMP21[TMP765+0].offset = TMP765;
TMP21[TMP765+0].name = TMP764[TMP765];
TMP763[TMP765] = &TMP21[TMP765+0];
}
TMP21[22].len = 22; TMP21[22].kind = 2; TMP21[22].sons = &TMP763[0];
NTI155014.node = &TMP21[22];
NTI155016.size = sizeof(NU32);
NTI155016.kind = 19;
NTI155016.base = (&NTI155014);
NTI155016.flags = 3;
TMP21[23].len = 0; TMP21[23].kind = 0;
NTI155016.node = &TMP21[23];
}

