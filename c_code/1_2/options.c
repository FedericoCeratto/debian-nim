/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <setjmp.h>

#include <stdio.h>

#include <stdlib.h>
typedef struct tlinkedlist129028 tlinkedlist129028;
typedef struct tlistentry129022 tlistentry129022;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell44733 tcell44733;
typedef struct TNimType TNimType;
typedef struct tcellseq44749 tcellseq44749;
typedef struct tgcheap46816 tgcheap46816;
typedef struct tcellset44745 tcellset44745;
typedef struct tpagedesc44741 tpagedesc44741;
typedef struct tmemregion27010 tmemregion27010;
typedef struct tsmallchunk26240 tsmallchunk26240;
typedef struct tllchunk27004 tllchunk27004;
typedef struct tbigchunk26242 tbigchunk26242;
typedef struct tintset26217 tintset26217;
typedef struct ttrunk26213 ttrunk26213;
typedef struct tavlnode27008 tavlnode27008;
typedef struct tgcstat46814 tgcstat46814;
typedef struct stringtableobj133012 stringtableobj133012;
typedef struct TNimNode TNimNode;
typedef struct TY120608 TY120608;
typedef struct keyvaluepair133008 keyvaluepair133008;
typedef struct twin32finddata104019 twin32finddata104019;
typedef struct tfiletime103079 tfiletime103079;
typedef struct TY116804 TY116804;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TSafePoint TSafePoint;
typedef struct tstrentry129024 tstrentry129024;
typedef struct tbasechunk26238 tbasechunk26238;
typedef struct tfreecell26230 tfreecell26230;
typedef struct keyvaluepairseq133010 keyvaluepairseq133010;
struct  tlinkedlist129028  {
tlistentry129022* Head;
tlistentry129022* Tail;
NI Counter;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tcell44733  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq44749  {
NI Len;
NI Cap;
tcell44733** D;
};
struct  tcellset44745  {
NI Counter;
NI Max;
tpagedesc44741* Head;
tpagedesc44741** Data;
};
typedef tsmallchunk26240* TY27022[512];
typedef ttrunk26213* ttrunkbuckets26215[256];
struct  tintset26217  {
ttrunkbuckets26215 Data;
};
struct  tmemregion27010  {
NI Minlargeobj;
NI Maxlargeobj;
TY27022 Freesmallchunks;
tllchunk27004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26242* Freechunkslist;
tintset26217 Chunkstarts;
tavlnode27008* Root;
tavlnode27008* Deleted;
tavlnode27008* Last;
tavlnode27008* Freeavlnodes;
};
struct  tgcstat46814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap46816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq44749 Zct;
tcellseq44749 Decstack;
tcellset44745 Cycleroots;
tcellseq44749 Tempstack;
NI Recgclock;
tmemregion27010 Region;
tgcstat46814 Stat;
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
struct keyvaluepair133008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  tfiletime103079  {
NI32 Dwlowdatetime;
NI32 Dwhighdatetime;
};
typedef NI16 TY104028[260];
typedef NI16 TY104032[14];
struct  twin32finddata104019  {
NI32 Dwfileattributes;
tfiletime103079 Ftcreationtime;
tfiletime103079 Ftlastaccesstime;
tfiletime103079 Ftlastwritetime;
NI32 Nfilesizehigh;
NI32 Nfilesizelow;
NI32 Dwreserved0;
NI32 Dwreserved1;
TY104028 Cfilename;
TY104032 Calternatefilename;
};
struct TY116804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
typedef N_STDCALL_PTR(NI32, TY104045) (NI hfindfile, twin32finddata104019* lpfindfiledata);
typedef N_STDCALL_PTR(void, TY104205) (NI hfindfile);
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
} TY14809;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY14809 raiseAction;
};
typedef NimStringDesc* TY198301[1];
typedef NimStringDesc* TY170951[2];
struct  tlistentry129022  {
  TNimObject Sup;
tlistentry129022* Prev;
tlistentry129022* Next;
};
struct  tstrentry129024  {
  tlistentry129022 Sup;
NimStringDesc* Data;
};
typedef NU8 TY212607[32];
typedef NI TY26220[8];
struct  tpagedesc44741  {
tpagedesc44741* Next;
NI Key;
TY26220 Bits;
};
struct  tbasechunk26238  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26240  {
  tbasechunk26238 Sup;
tsmallchunk26240* Next;
tsmallchunk26240* Prev;
tfreecell26230* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27004  {
NI Size;
NI Acc;
tllchunk27004* Next;
};
struct  tbigchunk26242  {
  tbasechunk26238 Sup;
tbigchunk26242* Next;
tbigchunk26242* Prev;
NI Align;
NF Data;
};
struct  ttrunk26213  {
ttrunk26213* Next;
NI Key;
TY26220 Bits;
};
typedef tavlnode27008* TY27014[2];
struct  tavlnode27008  {
TY27014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  stringtableobj133012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq133010* Data;
NU8 Mode;
};
struct  tfreecell26230  {
tfreecell26230* Next;
NI Zerofield;
};
struct TY120608 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq133010 {
  TGenericSeq Sup;
  keyvaluepair133008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell44733*, usrtocell_48446)(void* usr);
static N_INLINE(void, rtladdzct_50004)(tcell44733* c);
N_NOINLINE(void, addzct_48417)(tcellseq44749* s, tcell44733* c);
N_NIMCALL(stringtableobj133012*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_50825)(tcell44733* c);
static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c);
static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c);
N_NOINLINE(void, incl_45471)(tcellset44745* s, tcell44733* cell);
static N_INLINE(void, decref_50404)(tcell44733* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nosexpandFilename)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getprefixdir_170381)(void);
N_NIMCALL(void, nossplitPath)(NimStringDesc* path, keyvaluepair133008* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NIM_BOOL, nsthasKey)(stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(stringtableobj133012* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, HEX2F_116499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NI, findfirstfile_113416)(NimStringDesc* a, twin32finddata104019* b);
static N_INLINE(NIM_BOOL, skipfinddata_113436)(twin32finddata104019* f);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY116804* Result);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, HEX24_79195)(NI16* s);
N_NIMCALL(void, nstPut)(stringtableobj133012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, getgeneratedpath_170429)(void);
N_NIMCALL(NimStringDesc*, shortendir_170407)(NimStringDesc* dir);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, noscreateDir)(NimStringDesc* dir);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, writeln_171205)(FILE* f_171209, NimStringDesc** x_171213, NI x_171213Len0);
N_NIMCALL(void, write_12865)(FILE* f, NimStringDesc* s);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, getpackagename_170825)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, findfile_171356)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, rawfindfile_171292)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, canonicalizepath_170390)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, rawfindfile2_171318)(NimStringDesc* f);
N_NIMCALL(void, bringtofront_129741)(tlinkedlist129028* list, tlistentry129022* entry);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_74628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, canondynlibname_171468)(NimStringDesc* s);
N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, TY212607 chars, NI start);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(void, libcandidates_171409)(NimStringDesc* s, TY120608** dest);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
STRING_LITERAL(TMP41, "", 0);
STRING_LITERAL(TMP1367, "*.nimble", 8);
STRING_LITERAL(TMP1368, "*.babel", 7);
STRING_LITERAL(TMP1369, "nimcache", 8);
STRING_LITERAL(TMP1371, "\015\012", 2);
STRING_LITERAL(TMP1372, "cannot create directory: ", 25);
STRING_LITERAL(TMP1402, "nim", 3);
STRING_LITERAL(TMP1892, "lib", 3);
static NIM_CONST TY212607 TMP1893 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1894, "true", 4);
NU32 goptions_170116;
NU32 gglobaloptions_170118;
NI8 gexitcode_170119;
NU8 gcmd_170120;
NU8 gselectedgc_170121;
tlinkedlist129028 searchpaths_170122;
tlinkedlist129028 lazypaths_170123;
NimStringDesc* outfile_170124;
extern tgcheap46816 gch_46844;
NimStringDesc* docseesrcurl_170125;
NimStringDesc* headerfile_170126;
NI gverbosity_170127;
NI gnumberofprocessors_170128;
NIM_BOOL gwholeproject_170129;
NimStringDesc* gevalexpr_170130;
NF glastcmdtime_170131;
NIM_BOOL glistfullpaths_170132;
NIM_BOOL isserving_170133;
NI32 gdirtybufferidx_170134;
NI32 gdirtyoriginalidx_170135;
NIM_BOOL gnonimblepath_170136;
NIM_BOOL gexperimentalmode_170137;
stringtableobj133012* gconfigvars_170231;
stringtableobj133012* gdlloverrides_170232;
NimStringDesc* libpath_170233;
NimStringDesc* gprojectname_170234;
NimStringDesc* gprojectpath_170235;
NimStringDesc* gprojectfull_170236;
NI32 gprojectmainidx_170237;
NimStringDesc* nimcachedir_170238;
NimStringDesc* command_170239;
TY120608* commandargs_170261;
extern TNimType NTI120608; /* seq[string] */
NIM_BOOL gkeepcomments_170262;
TY120608* implicitimports_170284;
TY120608* implicitincludes_170306;
stringtableobj133012* packagecache_170601;
TNimType NTI170014; /* TOption */
TNimType NTI170016; /* TOptions */
extern TY104045 Dl_104044;
extern TY104205 Dl_104204;
extern TSafePoint* exchandler_16243;
extern TNimType NTI3233; /* OSError */
extern Exception* currexception_16245;

static N_INLINE(tcell44733*, usrtocell_48446)(void* usr) {
	tcell44733* result;
	result = 0;
	result = ((tcell44733*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell44733))))));
	return result;
}

static N_INLINE(void, rtladdzct_50004)(tcell44733* c) {
	addzct_48417((&gch_46844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell44733* c;
	c = usrtocell_48446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	LA3: ;
}

static N_INLINE(NIM_BOOL, canbecycleroot_48467)(tcell44733* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_49229)(tcell44733* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_45471((&gch_46844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_50825)(tcell44733* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_48467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_49229(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_50404)(tcell44733* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_48467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_49229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell44733* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_48446(src);
		incref_50825(LOC5);
	}
	LA3: ;
	{
		tcell44733* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_48446((*dest));
		decref_50404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(NimStringDesc*, canonicalizepath_170390)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosexpandFilename(path);
	result = nsuToLowerStr(LOC1);
	return result;
}

N_NIMCALL(NimStringDesc*, getprefixdir_170381)(void) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	keyvaluepair133008 LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetAppDir();
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	nossplitPath(LOC1, (&LOC2));
	result = copyString(LOC2.Field0);
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI64)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}

N_NIMCALL(NimStringDesc*, shortendir_170407)(NimStringDesc* dir) {
	NimStringDesc* result;
	NimStringDesc* prefix;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC8;
	result = 0;
	LOC1 = 0;
	LOC2 = 0;
	LOC2 = getprefixdir_170381();
	LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
	prefix = LOC1;
	{
		NIM_BOOL LOC5;
		LOC5 = 0;
		LOC5 = nsuStartsWith(dir, prefix);
		if (!LOC5) goto LA6;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA6: ;
	LOC8 = 0;
	LOC8 = rawNewString(gprojectpath_170235->Sup.len + 1);
appendString(LOC8, gprojectpath_170235);
appendChar(LOC8, 92);
	prefix = LOC8;
	{
		NIM_BOOL LOC11;
		LOC11 = 0;
		LOC11 = nsuStartsWith(dir, prefix);
		if (!LOC11) goto LA12;
		result = copyStr(dir, prefix->Sup.len);
		goto BeforeRet;
	}
	LA12: ;
	result = copyString(dir);
	BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, skipfinddata_113436)(twin32finddata104019* f) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result = 0;
	LOC1 = 0;
	LOC1 = (((NI) ((*f).Cfilename[(0)- 0])) == 46);
	if (!(LOC1)) goto LA2;
	LOC3 = 0;
	LOC3 = (((NI) ((*f).Cfilename[(1)- 0])) == 0);
	if (LOC3) goto LA4;
	LOC5 = 0;
	LOC5 = (((NI) ((*f).Cfilename[(1)- 0])) == 46);
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f).Cfilename[(2)- 0])) == 0);
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NimStringDesc*, getpackagename_170825)(NimStringDesc* path) {
	NimStringDesc* result;
	NI parents;
	result = 0;
	parents = 0;
	{
		{
			NimStringDesc* d_170831;
			NimStringDesc* current_170878;
			d_170831 = 0;
			current_170878 = copyString(path);
			{
				while (1) {
					current_170878 = nosparentDir(current_170878);
					{
						if (!(current_170878->Sup.len == 0)) goto LA7;
						goto LA3;
					}
					LA7: ;
					d_170831 = current_170878;
					{
						NIM_BOOL LOC11;
						LOC11 = 0;
						LOC11 = nsthasKey(packagecache_170601, d_170831);
						if (!LOC11) goto LA12;
						result = nstGet(packagecache_170601, d_170831);
						goto BeforeRet;
					}
					LA12: ;
					parents += 1;
					{
						NimStringDesc* file_170844;
						NimStringDesc* HEX3Atmp_170861;
						twin32finddata104019 f_170864;
						NI res_170866;
						file_170844 = 0;
						HEX3Atmp_170861 = 0;
						HEX3Atmp_170861 = HEX2F_116499(d_170831, ((NimStringDesc*) &TMP1367));
						memset((void*)(&f_170864), 0, sizeof(f_170864));
						res_170866 = 0;
						res_170866 = findfirstfile_113416(HEX3Atmp_170861, (&f_170864));
						{
							if (!!((res_170866 == -1))) goto LA17;
							{
								while (1) {
									{
										NIM_BOOL LOC23;
										NIM_BOOL LOC24;
										TY116804 LOC28;
										NimStringDesc* LOC29;
										NimStringDesc* LOC30;
										TY116804 LOC31;
										LOC23 = 0;
										LOC24 = 0;
										LOC24 = skipfinddata_113436((&f_170864));
										LOC23 = !(LOC24);
										if (!(LOC23)) goto LA25;
										LOC23 = ((NI32)(f_170864.Dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA25: ;
										if (!LOC23) goto LA26;
										memset((void*)(&LOC28), 0, sizeof(LOC28));
										nossplitFile(HEX3Atmp_170861, (&LOC28));
										LOC29 = 0;
										LOC29 = HEX24_79195(((NI16*) ((&f_170864.Cfilename[(0)- 0]))));
										LOC30 = 0;
										LOC30 = nosextractFilename(LOC29);
										file_170844 = HEX2F_116499(LOC28.Field0, LOC30);
										memset((void*)(&LOC31), 0, sizeof(LOC31));
										nossplitFile(file_170844, (&LOC31));
										result = copyString(LOC31.Field1);
										goto LA1;
									}
									LA26: ;
									{
										NI32 LOC34;
										LOC34 = 0;
										LOC34 = Dl_104044(res_170866, (&f_170864));
										if (!(LOC34 == ((NI32) 0))) goto LA35;
										goto LA19;
									}
									LA35: ;
								}
							} LA19: ;
							Dl_104204(res_170866);
						}
						LA17: ;
					}
					{
						NimStringDesc* file_170845;
						NimStringDesc* HEX3Atmp_170869;
						twin32finddata104019 f_170872;
						NI res_170874;
						file_170845 = 0;
						HEX3Atmp_170869 = 0;
						HEX3Atmp_170869 = HEX2F_116499(d_170831, ((NimStringDesc*) &TMP1368));
						memset((void*)(&f_170872), 0, sizeof(f_170872));
						res_170874 = 0;
						res_170874 = findfirstfile_113416(HEX3Atmp_170869, (&f_170872));
						{
							if (!!((res_170874 == -1))) goto LA40;
							{
								while (1) {
									{
										NIM_BOOL LOC46;
										NIM_BOOL LOC47;
										TY116804 LOC51;
										NimStringDesc* LOC52;
										NimStringDesc* LOC53;
										TY116804 LOC54;
										LOC46 = 0;
										LOC47 = 0;
										LOC47 = skipfinddata_113436((&f_170872));
										LOC46 = !(LOC47);
										if (!(LOC46)) goto LA48;
										LOC46 = ((NI32)(f_170872.Dwfileattributes & ((NI32) 16)) == ((NI32) 0));
										LA48: ;
										if (!LOC46) goto LA49;
										memset((void*)(&LOC51), 0, sizeof(LOC51));
										nossplitFile(HEX3Atmp_170869, (&LOC51));
										LOC52 = 0;
										LOC52 = HEX24_79195(((NI16*) ((&f_170872.Cfilename[(0)- 0]))));
										LOC53 = 0;
										LOC53 = nosextractFilename(LOC52);
										file_170845 = HEX2F_116499(LOC51.Field0, LOC53);
										memset((void*)(&LOC54), 0, sizeof(LOC54));
										nossplitFile(file_170845, (&LOC54));
										result = copyString(LOC54.Field1);
										goto LA1;
									}
									LA49: ;
									{
										NI32 LOC57;
										LOC57 = 0;
										LOC57 = Dl_104044(res_170874, (&f_170872));
										if (!(LOC57 == ((NI32) 0))) goto LA58;
										goto LA42;
									}
									LA58: ;
								}
							} LA42: ;
							Dl_104204(res_170874);
						}
						LA40: ;
					}
				}
			} LA3: ;
		}
	} LA1: ;
	{
		if (!result == 0) goto LA62;
		result = copyString(((NimStringDesc*) &TMP41));
	}
	LA62: ;
	{
		NimStringDesc* d_170846;
		NimStringDesc* current_170882;
		d_170846 = 0;
		current_170882 = copyString(path);
		{
			while (1) {
				current_170882 = nosparentDir(current_170882);
				{
					if (!(current_170882->Sup.len == 0)) goto LA69;
					goto LA65;
				}
				LA69: ;
				d_170846 = current_170882;
				nstPut(packagecache_170601, d_170846, result);
				parents -= 1;
				{
					if (!(parents <= 0)) goto LA73;
					goto LA64;
				}
				LA73: ;
			}
		} LA65: ;
	} LA64: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getgeneratedpath_170429)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < nimcachedir_170238->Sup.len)) goto LA3;
		result = copyString(nimcachedir_170238);
	}
	goto LA1;
	LA3: ;
	{
		NimStringDesc* LOC6;
		LOC6 = 0;
		LOC6 = shortendir_170407(gprojectpath_170235);
		result = HEX2F_116499(LOC6, ((NimStringDesc*) &TMP1369));
	}
	LA1: ;
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16243;
	exchandler_16243 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16243 = (*exchandler_16243).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16245;
	return result;
}

static N_INLINE(void, writeln_171205)(FILE* f_171209, NimStringDesc** x_171213, NI x_171213Len0) {
	{
		NimStringDesc* i_171226;
		NI i_171234;
		i_171226 = 0;
		i_171234 = 0;
		{
			while (1) {
				if (!(i_171234 < x_171213Len0)) goto LA3;
				i_171226 = x_171213[i_171234];
				write_12865(f_171209, i_171226);
				i_171234 += 1;
			} LA3: ;
		}
	}
	write_12865(f_171209, ((NimStringDesc*) &TMP1371));
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16245), (*currexception_16245).parent);
}

N_NIMCALL(NimStringDesc*, completegeneratedfilepath_171001)(NimStringDesc* f, NIM_BOOL createsubdir) {
	NimStringDesc* result;
	keyvaluepair133008 LOC1;
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
	subdir = getgeneratedpath_170429();
	{
		TSafePoint TMP1370;
		if (!createsubdir) goto LA4;
		pushSafePoint(&TMP1370);
		TMP1370.status = setjmp(TMP1370.context);
		if (TMP1370.status == 0) {
			noscreateDir(subdir);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3233))) {
				TY198301 LOC9;
				NimStringDesc* LOC10;
				TMP1370.status = 0;
				memset((void*)LOC9, 0, sizeof(LOC9));
				LOC10 = 0;
				LOC10 = rawNewString(subdir->Sup.len + 25);
appendString(LOC10, ((NimStringDesc*) &TMP1372));
appendString(LOC10, subdir);
				LOC9[0] = LOC10;
				writeln_171205(stdout, LOC9, 1);
				exit(1);
				popCurrentException();
			}
		}
		if (TMP1370.status != 0) reraiseException();
	}
	LA4: ;
	result = nosjoinPath(subdir, tail);
	return result;
}

N_NIMCALL(NimStringDesc*, togeneratedfile_170942)(NimStringDesc* path, NimStringDesc* ext) {
	NimStringDesc* result;
	keyvaluepair133008 LOC1;
	NimStringDesc* head;
	NimStringDesc* tail;
	TY170951 LOC2;
	result = 0;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitPath(path, (&LOC1));
	head = 0;
	head = copyString(LOC1.Field0);
	tail = 0;
	tail = copyString(LOC1.Field1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = getgeneratedpath_170429();
	LOC2[1] = noschangeFileExt(tail, ext);
	result = nosjoinPathOpenArray(LOC2, 2);
	return result;
}

N_NIMCALL(NimStringDesc*, withpackagename_170928)(NimStringDesc* path) {
	NimStringDesc* result;
	NimStringDesc* x;
	result = 0;
	x = getpackagename_170825(path);
	{
		if (!(x->Sup.len == 0)) goto LA3;
		result = copyString(path);
	}
	goto LA1;
	LA3: ;
	{
		TY116804 LOC6;
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
		LOC9 = HEX2F_116499(p, LOC8);
		LOC7 = rawNewString(LOC9->Sup.len + ext->Sup.len + 0);
appendString(LOC7, LOC9);
appendString(LOC7, ext);
		result = LOC7;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile_171292)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	{
		NimStringDesc* it_171296;
		tstrentry129024* it_171302;
		it_171296 = 0;
		it_171302 = ((tstrentry129024*) (searchpaths_170122.Head));
		{
			while (1) {
				if (!!((it_171302 == NIM_NIL))) goto LA3;
				it_171296 = (*it_171302).Data;
				result = nosjoinPath(it_171296, f);
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = nosexistsFile(result);
					if (!LOC6) goto LA7;
					result = canonicalizepath_170390(result);
					goto BeforeRet;
				}
				LA7: ;
				it_171302 = ((tstrentry129024*) ((*it_171302).Sup.Next));
			} LA3: ;
		}
	}
	result = copyString(((NimStringDesc*) &TMP41));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, rawfindfile2_171318)(NimStringDesc* f) {
	NimStringDesc* result;
	tstrentry129024* it;
	result = 0;
	it = ((tstrentry129024*) (lazypaths_170123.Head));
	{
		while (1) {
			if (!!((it == NIM_NIL))) goto LA2;
			result = nosjoinPath((*it).Data, f);
			{
				NIM_BOOL LOC5;
				tlistentry129022* LOC8;
				LOC5 = 0;
				LOC5 = nosexistsFile(result);
				if (!LOC5) goto LA6;
				LOC8 = 0;
				LOC8 = &it->Sup;
				bringtofront_129741((&lazypaths_170123), LOC8);
				result = canonicalizepath_170390(result);
				goto BeforeRet;
			}
			LA6: ;
			it = ((tstrentry129024*) ((*it).Sup.Next));
		} LA2: ;
	}
	result = copyString(((NimStringDesc*) &TMP41));
	BeforeRet: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findfile_171356)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = rawfindfile_171292(f);
	{
		NimStringDesc* LOC5;
		if (!(result->Sup.len == 0)) goto LA3;
		LOC5 = 0;
		LOC5 = nsuToLowerStr(f);
		result = rawfindfile_171292(LOC5);
		{
			if (!(result->Sup.len == 0)) goto LA8;
			result = rawfindfile2_171318(f);
			{
				NimStringDesc* LOC14;
				if (!(result->Sup.len == 0)) goto LA12;
				LOC14 = 0;
				LOC14 = nsuToLowerStr(f);
				result = rawfindfile2_171318(LOC14);
			}
			LA12: ;
		}
		LA8: ;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NimStringDesc*, findmodule_171366)(NimStringDesc* modulename, NimStringDesc* currentmodule) {
	NimStringDesc* result;
	NimStringDesc* m;
	NimStringDesc* currentpath;
	TY116804 LOC1;
	result = 0;
	m = nosaddFileExt(modulename, ((NimStringDesc*) &TMP1402));
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(currentmodule, (&LOC1));
	currentpath = LOC1.Field0;
	result = HEX2F_116499(currentpath, m);
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		result = findfile_171356(m);
	}
	LA5: ;
	return result;
}

N_NIMCALL(NimStringDesc*, removetrailingdirsep_170418)(NimStringDesc* path) {
	NimStringDesc* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 < path->Sup.len);
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(path->data[(NI64)(path->Sup.len - 1)]) == (NU8)(92));
		LA4: ;
		if (!LOC3) goto LA5;
		result = copyStrLast(path, 0, (NI64)(path->Sup.len - 2));
	}
	goto LA1;
	LA5: ;
	{
		result = copyString(path);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, existsconfigvar_170340)(NimStringDesc* key) {
	NIM_BOOL result;
	result = 0;
	result = nsthasKey(gconfigvars_170231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, getconfigvar_170350)(NimStringDesc* key) {
	NimStringDesc* result;
	result = 0;
	result = nstGet(gconfigvars_170231, key);
	return result;
}

N_NIMCALL(NimStringDesc*, canondynlibname_171468)(NimStringDesc* s) {
	NimStringDesc* result;
	NI start;
	NI ende;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = nsuStartsWith(s, ((NimStringDesc*) &TMP1892));
		if (!LOC3) goto LA4;
		start = 3;
	}
	goto LA1;
	LA4: ;
	{
		start = 0;
	}
	LA1: ;
	ende = nsuFindCharSet(s, TMP1893, 0);
	{
		if (!(0 <= ende)) goto LA9;
		result = copyStrLast(s, start, (NI64)(ende - 1));
	}
	goto LA7;
	LA9: ;
	{
		result = copyStr(s, start);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, incldynliboverride_171481)(NimStringDesc* lib) {
	NimStringDesc* LOC1;
	LOC1 = 0;
	LOC1 = canondynlibname_171468(lib);
	nstPut(gdlloverrides_170232, LOC1, ((NimStringDesc*) &TMP1894));
}

N_NIMCALL(void, setconfigvar_170360)(NimStringDesc* key, NimStringDesc* val) {
	nstPut(gconfigvars_170231, key, val);
}

N_NIMCALL(NIM_BOOL, isdynliboverride_171490)(NimStringDesc* lib) {
	NIM_BOOL result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = canondynlibname_171468(lib);
	result = nsthasKey(gdlloverrides_170232, LOC1);
	return result;
}

N_NIMCALL(void, libcandidates_171409)(NimStringDesc* s, TY120608** dest) {
	NI le;
	NI ri;
	le = nsuFindChar(s, 40, 0);
	ri = nsuFindChar(s, 41, (NI64)(le + 1));
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix;
		NimStringDesc* suffix;
		LOC3 = 0;
		LOC3 = (0 <= le);
		if (!(LOC3)) goto LA4;
		LOC3 = (le < ri);
		LA4: ;
		if (!LOC3) goto LA5;
		prefix = copyStrLast(s, 0, (NI64)(le - 1));
		suffix = copyStr(s, (NI64)(ri + 1));
		{
			NimStringDesc* middle_171420;
			NimStringDesc* HEX3Atmp_171440;
			NI last_171444;
			middle_171420 = 0;
			HEX3Atmp_171440 = 0;
			HEX3Atmp_171440 = copyStrLast(s, (NI64)(le + 1), (NI64)(ri - 1));
			last_171444 = 0;
			{
				if (!(0 < HEX3Atmp_171440->Sup.len)) goto LA10;
				{
					while (1) {
						NI first_171446;
						NimStringDesc* LOC18;
						if (!(last_171444 <= HEX3Atmp_171440->Sup.len)) goto LA13;
						first_171446 = last_171444;
						{
							while (1) {
								NIM_BOOL LOC16;
								LOC16 = 0;
								LOC16 = (last_171444 < HEX3Atmp_171440->Sup.len);
								if (!(LOC16)) goto LA17;
								LOC16 = !(((NU8)(HEX3Atmp_171440->data[last_171444]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								last_171444 += 1;
							} LA15: ;
						}
						middle_171420 = copyStrLast(HEX3Atmp_171440, first_171446, (NI64)(last_171444 - 1));
						LOC18 = 0;
						LOC18 = rawNewString(prefix->Sup.len + middle_171420->Sup.len + suffix->Sup.len + 0);
appendString(LOC18, prefix);
appendString(LOC18, middle_171420);
appendString(LOC18, suffix);
						libcandidates_171409(LOC18, dest);
						last_171444 += 1;
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
		(*dest) = (TY120608*) incrSeq(&((*dest))->Sup, sizeof(NimStringDesc*));
		LOC20 = 0;
		LOC20 = (*dest)->data[(*dest)->Sup.len-1]; (*dest)->data[(*dest)->Sup.len-1] = copyStringRC1(s);
		if (LOC20) nimGCunrefNoCycle(LOC20);
	}
	LA1: ;
}

N_NIMCALL(NimStringDesc*, getoutfile_170370)(NimStringDesc* filename, NimStringDesc* ext) {
	NimStringDesc* result;
	result = 0;
	{
		if (!!(((outfile_170124) && (outfile_170124)->Sup.len == 0))) goto LA3;
		result = copyString(outfile_170124);
	}
	goto LA1;
	LA3: ;
	{
		result = noschangeFileExt(filename, ext);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NimStringDesc*, maincommandarg_170319)(void) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(0 < commandargs_170261->Sup.len)) goto LA3;
		result = copyString(commandargs_170261->data[0]);
	}
	goto LA1;
	LA3: ;
	{
		result = copyString(gprojectname_170234);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetpackagecache_170605)(void) {
	asgnRef((void**) (&packagecache_170601), nstnewStringTable(((NU8) 0)));
}
NIM_EXTERNC N_NOINLINE(void, HEX00_optionsInit)(void) {
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
	goptions_170116 = 2202238;
	gglobaloptions_170118 = 134217728;
	gcmd_170120 = ((NU8) 0);
	gselectedgc_170121 = ((NU8) 3);
	LOC1 = 0;
	LOC1 = outfile_170124; outfile_170124 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	LOC2 = 0;
	LOC2 = docseesrcurl_170125; docseesrcurl_170125 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	LOC3 = 0;
	LOC3 = headerfile_170126; headerfile_170126 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	gverbosity_170127 = 1;
	LOC4 = 0;
	LOC4 = gevalexpr_170130; gevalexpr_170130 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC4) nimGCunrefNoCycle(LOC4);
	isserving_170133 = NIM_FALSE;
	gdirtybufferidx_170134 = ((NI32) 0);
	gdirtyoriginalidx_170135 = ((NI32) 0);
	gnonimblepath_170136 = NIM_FALSE;
	asgnRef((void**) (&gconfigvars_170231), nstnewStringTable(((NU8) 2)));
	asgnRef((void**) (&gdlloverrides_170232), nstnewStringTable(((NU8) 1)));
	LOC5 = 0;
	LOC5 = libpath_170233; libpath_170233 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC5) nimGCunrefNoCycle(LOC5);
	LOC6 = 0;
	LOC6 = gprojectname_170234; gprojectname_170234 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC6) nimGCunrefNoCycle(LOC6);
	LOC7 = 0;
	LOC7 = gprojectpath_170235; gprojectpath_170235 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC7) nimGCunrefNoCycle(LOC7);
	LOC8 = 0;
	LOC8 = gprojectfull_170236; gprojectfull_170236 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC8) nimGCunrefNoCycle(LOC8);
	LOC9 = 0;
	LOC9 = nimcachedir_170238; nimcachedir_170238 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC9) nimGCunrefNoCycle(LOC9);
	LOC10 = 0;
	LOC10 = command_170239; command_170239 = copyStringRC1(((NimStringDesc*) &TMP41));
	if (LOC10) nimGCunrefNoCycle(LOC10);
	if (commandargs_170261) nimGCunrefNoCycle(commandargs_170261);
	commandargs_170261 = (TY120608*) newSeqRC1((&NTI120608), 0);
	gkeepcomments_170262 = NIM_TRUE;
	if (implicitimports_170284) nimGCunrefNoCycle(implicitimports_170284);
	implicitimports_170284 = (TY120608*) newSeqRC1((&NTI120608), 0);
	if (implicitincludes_170306) nimGCunrefNoCycle(implicitincludes_170306);
	implicitincludes_170306 = (TY120608*) newSeqRC1((&NTI120608), 0);
	asgnRef((void**) (&packagecache_170601), nstnewStringTable(((NU8) 0)));
}

NIM_EXTERNC N_NOINLINE(void, HEX00_optionsDatInit)(void) {
static TNimNode* TMP775[22];
NI TMP777;
static char* NIM_CONST TMP776[22] = {
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
static TNimNode TMP23[24];
NTI170014.size = sizeof(NU8);
NTI170014.kind = 14;
NTI170014.base = 0;
NTI170014.flags = 3;
for (TMP777 = 0; TMP777 < 22; TMP777++) {
TMP23[TMP777+0].kind = 1;
TMP23[TMP777+0].offset = TMP777;
TMP23[TMP777+0].name = TMP776[TMP777];
TMP775[TMP777] = &TMP23[TMP777+0];
}
TMP23[22].len = 22; TMP23[22].kind = 2; TMP23[22].sons = &TMP775[0];
NTI170014.node = &TMP23[22];
NTI170016.size = sizeof(NU32);
NTI170016.kind = 19;
NTI170016.base = (&NTI170014);
NTI170016.flags = 3;
TMP23[23].len = 0; TMP23[23].kind = 0;
NTI170016.node = &TMP23[23];
}

