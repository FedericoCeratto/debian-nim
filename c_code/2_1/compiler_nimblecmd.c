/* Generated by Nim Compiler v0.13.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo183337 Tlineinfo183337;
typedef struct Tlinkedlist135016 Tlinkedlist135016;
typedef struct Tlistentry135010 Tlistentry135010;
typedef struct Stringtableobj140209 Stringtableobj140209;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepairseq140207 Keyvaluepairseq140207;
typedef struct Keyvaluepair140205 Keyvaluepair140205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo183337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
typedef NIM_CHAR TY110371[256];
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
struct  Stringtableobj140209  {
  TNimObject Sup;
NI counter;
Keyvaluepairseq140207* data;
NU8 mode;
};
struct Keyvaluepair140205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  Tlistentry135010  {
  TNimObject Sup;
Tlistentry135010* prev;
Tlistentry135010* next;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct Keyvaluepairseq140207 {
  TGenericSeq Sup;
  Keyvaluepair140205 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_135213)(Tlinkedlist135016 list, NimStringDesc* data);
N_NIMCALL(void, prependstr_135413)(Tlinkedlist135016* list, NimStringDesc* data);
N_NIMCALL(void, addpathrec_198184)(NimStringDesc* dir, Tlineinfo183337 info);
N_NIMCALL(Stringtableobj140209*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_118465)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, direxists_121808)(NimStringDesc* dir);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
N_NIMCALL(void, addpackage_198084)(Stringtableobj140209* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_198008)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_79810, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_198034)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_140814)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj140209* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_198108)(NimStringDesc* p, Tlineinfo183337 info);
N_NIMCALL(void, message_188095)(Tlineinfo183337 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1796, ".", 1);
STRING_LITERAL(TMP1797, "..", 2);
STRING_LITERAL(TMP1798, "head", 4);
extern Tlinkedlist135016 searchpaths_161125;
extern Tlinkedlist135016 lazypaths_161126;

N_NIMCALL(void, addpath_198003)(NimStringDesc* path, Tlineinfo183337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_135213(searchpaths_161125, path);
		if (!!(LOC3)) goto LA4;
		prependstr_135413((&searchpaths_161125), path);
	}
	LA4: ;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
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
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NIM_BOOL, direxists_121808)(NimStringDesc* dir) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsDir(dir);
	return result;
}

N_NIMCALL(NI, versionsplitpos_198008)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_198034)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1798))) goto LA3;
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

N_NIMCALL(void, addpackage_198084)(Stringtableobj140209* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_198008(p);
	name = copyStrLast(p, ((NI) 0), (NI)(x - ((NI) 1)));
	{
		NimStringDesc* version;
		if (!(x < (p ? p->Sup.len : 0))) goto LA3;
		version = copyStr(p, (NI)(x + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = 0;
			LOC7 = getordefault_140814(packages, name);
			LOC8 = 0;
			LOC8 = HEX3CHEX2E_198034(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1798));
	}
	LA1: ;
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

N_NIMCALL(void, addnimblepath_198108)(NimStringDesc* p, Tlineinfo183337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_135213(searchpaths_161125, p);
		if (!!(LOC3)) goto LA4;
		message_188095(info, ((NU16) 280), p);
		prependstr_135413((&lazypaths_161126), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_198184)(NimStringDesc* dir, Tlineinfo183337 info) {
	Stringtableobj140209* packages;
	NI pos;
	packages = nstnewStringTable(((NU8) 2));
	pos = (NI)((dir ? dir->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir->data[pos])) == ((NU8)(47)) || ((NU8)(dir->data[pos])) == ((NU8)(47)))) goto LA3;
		pos += ((NI) 1);
	}
	LA3: ;
	{
		NU8 k_198210;
		NimStringDesc* p_198211;
		DIR* d_198238;
		k_198210 = 0;
		p_198211 = 0;
		d_198238 = opendir(dir->data);
		{
			int LOC72;
			if (!!((d_198238 == NIM_NIL))) goto LA8;
			{
				while (1) {
					{
						struct dirent* x_198240;
						NimStringDesc* y_198242;
						x_198240 = readdir(d_198238);
						{
							if (!(x_198240 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						y_198242 = cstrToNimstr(((NCSTRING) ((*x_198240).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_198244;
							NU8 k_198246;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_198242, ((NimStringDesc*) &TMP1796)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_198242, ((NimStringDesc*) &TMP1797)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_198244), 0, sizeof(s_198244));
							{
								if (!NIM_TRUE) goto LA25;
								y_198242 = HEX2F_118465(dir, y_198242);
							}
							LA25: ;
							k_198246 = ((NU8) 0);
							{
								if (!!(((*x_198240).d_type == ((NI8) 0)))) goto LA29;
								{
									if (!((*x_198240).d_type == ((NI8) 4))) goto LA33;
									k_198246 = ((NU8) 2);
								}
								LA33: ;
								{
									if (!((*x_198240).d_type == ((NI8) 10))) goto LA37;
									{
										NIM_BOOL LOC41;
										LOC41 = 0;
										LOC41 = direxists_121808(y_198242);
										if (!LOC41) goto LA42;
										k_198246 = ((NU8) 3);
									}
									goto LA39;
									LA42: ;
									{
										k_198246 = (NU8)(k_198246 + ((NI) 1));
									}
									LA39: ;
								}
								LA37: ;
								k_198210 = k_198246;
								p_198211 = y_198242;
								{
									NIM_BOOL LOC47;
									LOC47 = 0;
									LOC47 = (k_198210 == ((NU8) 2));
									if (!(LOC47)) goto LA48;
									LOC47 = !(((NU8)(p_198211->data[pos]) == (NU8)(46)));
									LA48: ;
									if (!LOC47) goto LA49;
									addpackage_198084(packages, p_198211);
								}
								LA49: ;
								goto LA12;
							}
							LA29: ;
							{
								int LOC53;
								LOC53 = 0;
								LOC53 = lstat(y_198242->data, (&s_198244));
								if (!(LOC53 < ((NI32) 0))) goto LA54;
								goto LA10;
							}
							LA54: ;
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = S_ISDIR(s_198244.st_mode);
								if (!LOC58) goto LA59;
								k_198246 = ((NU8) 2);
							}
							LA59: ;
							{
								NIM_BOOL LOC63;
								LOC63 = 0;
								LOC63 = S_ISLNK(s_198244.st_mode);
								if (!LOC63) goto LA64;
								k_198246 = (NU8)(k_198246 + ((NI) 1));
							}
							LA64: ;
							k_198210 = k_198246;
							p_198211 = y_198242;
							{
								NIM_BOOL LOC68;
								LOC68 = 0;
								LOC68 = (k_198210 == ((NU8) 2));
								if (!(LOC68)) goto LA69;
								LOC68 = !(((NU8)(p_198211->data[pos]) == (NU8)(46)));
								LA69: ;
								if (!LOC68) goto LA70;
								addpackage_198084(packages, p_198211);
							}
							LA70: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			LOC72 = 0;
			LOC72 = closedir(d_198238);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_198221;
		p_198221 = 0;
		{
			NimStringDesc* key_198252;
			NimStringDesc* val_198254;
			key_198252 = 0;
			val_198254 = 0;
			{
				NI h_198256;
				NI HEX3Atmp_198258;
				NI res_198260;
				h_198256 = 0;
				HEX3Atmp_198258 = 0;
				HEX3Atmp_198258 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_198260 = ((NI) 0);
				{
					while (1) {
						if (!(res_198260 <= HEX3Atmp_198258)) goto LA77;
						h_198256 = res_198260;
						{
							NimStringDesc* res_198264;
							if (!!((*packages).data->data[h_198256].Field0 == 0)) goto LA80;
							key_198252 = (*packages).data->data[h_198256].Field0;
							val_198254 = (*packages).data->data[h_198256].Field1;
							{
								if (!eqStrings(val_198254, ((NimStringDesc*) &TMP1798))) goto LA84;
								res_198264 = key_198252;
							}
							goto LA82;
							LA84: ;
							{
								NimStringDesc* LOC87;
								LOC87 = 0;
								LOC87 = rawNewString(key_198252->Sup.len + val_198254->Sup.len + 1);
appendString(LOC87, key_198252);
appendChar(LOC87, 45);
appendString(LOC87, val_198254);
								res_198264 = LOC87;
							}
							LA82: ;
							p_198221 = res_198264;
							addnimblepath_198108(p_198221, info);
						}
						LA80: ;
						res_198260 += ((NI) 1);
					} LA77: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_198265)(NimStringDesc* path, Tlineinfo183337 info) {
	addpathrec_198184(path, info);
	addnimblepath_198108(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

