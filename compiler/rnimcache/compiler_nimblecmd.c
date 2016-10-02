/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing  -I/home/ubuntu/nim-ci/Nim/lib -o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_nimblecmd.o /home/ubuntu/nim-ci/Nim/compiler/rnimcache/compiler_nimblecmd.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <dirent.h>
#include <setjmp.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo192336 Tlineinfo192336;
typedef struct Tlinkedlist147016 Tlinkedlist147016;
typedef struct Tlistentry147010 Tlistentry147010;
typedef struct Stringtableobj152608 Stringtableobj152608;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Keyvaluepairseq152606 Keyvaluepairseq152606;
typedef struct Keyvaluepair152604 Keyvaluepair152604;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo192336  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist147016  {
Tlistentry147010* head;
Tlistentry147010* tail;
NI counter;
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
} TY17211;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY17211 raiseAction;
};
typedef NIM_CHAR TY120771[256];
struct  Stringtableobj152608  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq152606* data;
NU8 mode;
};
struct Keyvaluepair152604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry147010  {
  TNimObject Sup;
Tlistentry147010* prev;
Tlistentry147010* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq152606 {
  TGenericSeq Sup;
  Keyvaluepair152604 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_147213)(Tlinkedlist147016* list, NimStringDesc* data);
N_NIMCALL(void, prependstr_147413)(Tlinkedlist147016* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_277113)(NimStringDesc* dir, Tlineinfo192336 info);
N_NIMCALL(Stringtableobj152608*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalmem_7488)(void* a, void* b, NI size);
N_NIMCALL(NimStringDesc*, HEX2F_128265)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, direxists_131608)(NimStringDesc* dir);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
N_NIMCALL(void, addpackage_277084)(Stringtableobj152608* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_277008)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79210, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_277034)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_153214)(Stringtableobj152608* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj152608* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NU8, getsymlinkfilekind_137218)(NimStringDesc* path);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_277108)(NimStringDesc* p, Tlineinfo192336 info);
N_NIMCALL(void, message_197095)(Tlineinfo192336 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1828, ".", 1);
STRING_LITERAL(TMP1829, "..", 2);
STRING_LITERAL(TMP1830, "head", 4);
extern Tlinkedlist147016 searchpaths_170131;
extern TSafePoint* exchandler_18837;
extern Tlinkedlist147016 lazypaths_170132;

N_NIMCALL(void, addpath_277003)(NimStringDesc* path, Tlineinfo192336 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_147213((&searchpaths_170131), path);
		if (!!(LOC3)) goto LA4;
		prependstr_147413((&searchpaths_170131), path);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_18837;
	exchandler_18837 = s;
}

static N_INLINE(NIM_BOOL, equalmem_7488)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = memcmp(a, b, ((size_t) (size)));
	result = (LOC1 == ((NI32) 0));
	return result;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
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
	LOC11 = equalmem_7488(((void*) ((*a).data)), ((void*) ((*b).data)), ((NI) ((*a).Sup.len)));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, direxists_131608)(NimStringDesc* dir) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsDir(dir);
	return result;
}

N_NIMCALL(NI, versionsplitpos_277008)(NimStringDesc* s) {
	NI result;
	result = 0;
	result = (NI)((s ? s->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (((NI) 1) < result);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s->data[result])) >= ((NU8)(48)) && ((NU8)(s->data[result])) <= ((NU8)(57)) || ((NU8)(s->data[result])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s->data[result]) == (NU8)(45)))) goto LA7;
		result = (s ? s->Sup.len : 0);
	}
	LA7: ;
	return result;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_277034)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1830))) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i = ((NI) 0);
	j = ((NI) 0);
	vera = ((NI) 0);
	verb = ((NI) 0);
	{
		while (1) {
			NI ii;
			NI jj;
			ii = npuParseInt(a, (&vera), i);
			jj = npuParseInt(b, (&verb), j);
			{
				NIM_BOOL LOC9;
				LOC9 = 0;
				LOC9 = (ii <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result = (((NI) 0) < jj);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera < verb)) goto LA15;
				result = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb < vera)) goto LA18;
				result = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i += ii;
			j += jj;
			{
				if (!((NU8)(a->data[i]) == (NU8)(46))) goto LA22;
				i += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b->data[j]) == (NU8)(46))) goto LA26;
				j += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, addpackage_277084)(Stringtableobj152608* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_277008(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_153214(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_277034(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1830));
	}
	LA1: ;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_18837 = (*exchandler_18837).prev;
}

static N_INLINE(void, copymem_7478)(void* dest, void* source, NI size) {
	void* LOC1;
	LOC1 = 0;
	LOC1 = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copymem_7478(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_277108)(NimStringDesc* p, Tlineinfo192336 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_147213((&searchpaths_170131), p);
		if (!!(LOC3)) goto LA4;
		message_197095(info, ((NU16) 280), p);
		prependstr_147413((&lazypaths_170132), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_277113)(NimStringDesc* dir, Tlineinfo192336 info) {
	Stringtableobj152608* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_277139;
		NimStringDesc* p_277140;
		DIR* d_277167;
		k_277139 = 0;
		p_277140 = 0;
		d_277167 = opendir(dir->data);
		{
			TSafePoint TMP1827;
			if (!!((d_277167 == NIM_NIL))) goto LA8;
			pushSafePoint(&TMP1827);
			TMP1827.status = setjmp(TMP1827.context);
			if (TMP1827.status == 0) {
				{
					while (1) {
						{
							struct dirent* x_277169;
							NimStringDesc* volatile y_277171;
							x_277169 = readdir(d_277167);
							{
								if (!(x_277169 == NIM_NIL)) goto LA16;
								goto LA11;
							}
							LA16: ;
							y_277171 = cstrToNimstr(((NCSTRING) ((*x_277169).d_name)));
							{
								NIM_BOOL LOC20;
								struct stat s_277173;
								NU8 volatile k_277175;
								LOC20 = 0;
								LOC20 = !(eqStrings(y_277171, ((NimStringDesc*) &TMP1828)));
								if (!(LOC20)) goto LA21;
								LOC20 = !(eqStrings(y_277171, ((NimStringDesc*) &TMP1829)));
								LA21: ;
								if (!LOC20) goto LA22;
								memset((void*)(&s_277173), 0, sizeof(s_277173));
								{
									if (!NIM_TRUE) goto LA26;
									y_277171 = HEX2F_128265(dir, y_277171);
								}
								LA26: ;
								k_277175 = ((NU8) 0);
								{
									if (!!(((*x_277169).d_type == ((NI8) 0)))) goto LA30;
									{
										if (!((*x_277169).d_type == ((NI8) 4))) goto LA34;
										k_277175 = ((NU8) 2);
									}
									LA34: ;
									{
										if (!((*x_277169).d_type == ((NI8) 10))) goto LA38;
										{
											NIM_BOOL LOC42;
											LOC42 = 0;
											LOC42 = direxists_131608(y_277171);
											if (!LOC42) goto LA43;
											k_277175 = ((NU8) 3);
										}
										goto LA40;
										LA43: ;
										{
											k_277175 = ((NU8) 1);
										}
										LA40: ;
									}
									LA38: ;
									k_277139 = k_277175;
									p_277140 = y_277171;
									{
										NIM_BOOL LOC48;
										LOC48 = 0;
										LOC48 = (k_277139 == ((NU8) 2));
										if (!(LOC48)) goto LA49;
										LOC48 = !(((NU8)(p_277140->data[pos]) == (NU8)(46)));
										LA49: ;
										if (!LOC48) goto LA50;
										addpackage_277084(packages, p_277140);
									}
									LA50: ;
									goto LA13;
								}
								LA30: ;
								{
									int LOC54;
									LOC54 = 0;
									LOC54 = lstat(y_277171->data, (&s_277173));
									if (!(LOC54 < ((NI32) 0))) goto LA55;
									goto LA11;
								}
								LA55: ;
								{
									NIM_BOOL LOC59;
									LOC59 = 0;
									LOC59 = S_ISDIR(s_277173.st_mode);
									if (!LOC59) goto LA60;
									k_277175 = ((NU8) 2);
								}
								goto LA57;
								LA60: ;
								{
									NIM_BOOL LOC63;
									LOC63 = 0;
									LOC63 = S_ISLNK(s_277173.st_mode);
									if (!LOC63) goto LA64;
									k_277175 = getsymlinkfilekind_137218(y_277171);
								}
								goto LA57;
								LA64: ;
								LA57: ;
								k_277139 = k_277175;
								p_277140 = y_277171;
								{
									NIM_BOOL LOC68;
									LOC68 = 0;
									LOC68 = (k_277139 == ((NU8) 2));
									if (!(LOC68)) goto LA69;
									LOC68 = !(((NU8)(p_277140->data[pos]) == (NU8)(46)));
									LA69: ;
									if (!LOC68) goto LA70;
									addpackage_277084(packages, p_277140);
								}
								LA70: ;
							}
							LA22: ;
						} LA13: ;
					}
				} LA11: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				int LOC74;
				LOC74 = 0;
				LOC74 = closedir(d_277167);
			}
			if (TMP1827.status != 0) reraiseException();
		}
		LA8: ;
	}
	{
		NimStringDesc* p_277150;
		p_277150 = 0;
		{
			NimStringDesc* key_277181;
			NimStringDesc* val_277183;
			key_277181 = 0;
			val_277183 = 0;
			{
				NI h_277185;
				NI HEX3Atmp_277187;
				NI res_277189;
				h_277185 = 0;
				HEX3Atmp_277187 = 0;
				HEX3Atmp_277187 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_277189 = ((NI) 0);
				{
					while (1) {
						if (!(res_277189 <= HEX3Atmp_277187)) goto LA79;
						h_277185 = res_277189;
						{
							NimStringDesc* res_277193;
							if (!!((*packages).data->data[h_277185].Field0 == 0)) goto LA82;
							key_277181 = (*packages).data->data[h_277185].Field0;
							val_277183 = (*packages).data->data[h_277185].Field1;
							{
								if (!eqStrings(val_277183, ((NimStringDesc*) &TMP1830))) goto LA86;
								res_277193 = key_277181;
							}
							goto LA84;
							LA86: ;
							{
								NimStringDesc* LOC89;
								LOC89 = 0;
								LOC89 = rawNewString(key_277181->Sup.len + val_277183->Sup.len + 1);
appendString(LOC89, key_277181);
appendChar(LOC89, 45);
appendString(LOC89, val_277183);
								res_277193 = LOC89;
							}
							LA84: ;
							p_277150 = res_277193;
							addnimblepath_277108(p_277150, info);
						}
						LA82: ;
						res_277189 += ((NI) 1);
					} LA79: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_277194)(NimStringDesc* path, Tlineinfo192336 info) {
	addpathrec_277113(path, info);
	addnimblepath_277108(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

