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
typedef struct Tlineinfo181337 Tlineinfo181337;
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
struct  Tlineinfo181337  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist135016  {
Tlistentry135010* head;
Tlistentry135010* tail;
NI counter;
};
typedef NIM_CHAR TY110370[256];
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
N_NIMCALL(void, addpathrec_196184)(NimStringDesc* dir, Tlineinfo181337 info);
N_NIMCALL(Stringtableobj140209*, nstnewStringTable)(NU8 mode);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, HEX2F_118665)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(NIM_BOOL, direxists_122008)(NimStringDesc* dir);
N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
N_NIMCALL(void, addpackage_196084)(Stringtableobj140209* packages, NimStringDesc* p);
N_NIMCALL(NI, versionsplitpos_196008)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_80010, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_196034)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(NimStringDesc*, getordefault_140814)(Stringtableobj140209* t, NimStringDesc* key);
N_NIMCALL(void, nstPut)(Stringtableobj140209* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, addnimblepath_196108)(NimStringDesc* p, Tlineinfo181337 info);
N_NIMCALL(void, message_186095)(Tlineinfo181337 info, NU16 msg, NimStringDesc* arg);
STRING_LITERAL(TMP1792, ".", 1);
STRING_LITERAL(TMP1793, "..", 2);
STRING_LITERAL(TMP1794, "head", 4);
extern Tlinkedlist135016 searchpaths_159125;
extern Tlinkedlist135016 lazypaths_159126;

N_NIMCALL(void, addpath_196003)(NimStringDesc* path, Tlineinfo181337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_135213(searchpaths_159125, path);
		if (!!(LOC3)) goto LA4;
		prependstr_135413((&searchpaths_159125), path);
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

static N_INLINE(NIM_BOOL, direxists_122008)(NimStringDesc* dir) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsDir(dir);
	return result;
}

N_NIMCALL(NI, versionsplitpos_196008)(NimStringDesc* s) {
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

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_196034)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI vera;
	NI verb;
{	result = 0;
	{
		if (!eqStrings(a, ((NimStringDesc*) &TMP1794))) goto LA3;
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

N_NIMCALL(void, addpackage_196084)(Stringtableobj140209* packages, NimStringDesc* p) {
	NI x;
	NimStringDesc* name;
	x = versionsplitpos_196008(p);
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
			LOC8 = HEX3CHEX2E_196034(LOC7, version);
			if (!LOC8) goto LA9;
			nstPut(packages, name, version);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages, name, ((NimStringDesc*) &TMP1794));
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

N_NIMCALL(void, addnimblepath_196108)(NimStringDesc* p, Tlineinfo181337 info) {
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = contains_135213(searchpaths_159125, p);
		if (!!(LOC3)) goto LA4;
		message_186095(info, ((NU16) 280), p);
		prependstr_135413((&lazypaths_159126), p);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_196184)(NimStringDesc* dir, Tlineinfo181337 info) {
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
		NU8 k_196210;
		NimStringDesc* p_196211;
		DIR* d_196238;
		k_196210 = 0;
		p_196211 = 0;
		d_196238 = opendir(dir->data);
		{
			int LOC72;
			if (!!((d_196238 == NIM_NIL))) goto LA8;
			{
				while (1) {
					{
						struct dirent* x_196240;
						NimStringDesc* y_196242;
						x_196240 = readdir(d_196238);
						{
							if (!(x_196240 == NIM_NIL)) goto LA15;
							goto LA10;
						}
						LA15: ;
						y_196242 = cstrToNimstr(((NCSTRING) ((*x_196240).d_name)));
						{
							NIM_BOOL LOC19;
							struct stat s_196244;
							NU8 k_196246;
							LOC19 = 0;
							LOC19 = !(eqStrings(y_196242, ((NimStringDesc*) &TMP1792)));
							if (!(LOC19)) goto LA20;
							LOC19 = !(eqStrings(y_196242, ((NimStringDesc*) &TMP1793)));
							LA20: ;
							if (!LOC19) goto LA21;
							memset((void*)(&s_196244), 0, sizeof(s_196244));
							{
								if (!NIM_TRUE) goto LA25;
								y_196242 = HEX2F_118665(dir, y_196242);
							}
							LA25: ;
							k_196246 = ((NU8) 0);
							{
								if (!!(((*x_196240).d_type == ((NI8) 0)))) goto LA29;
								{
									if (!((*x_196240).d_type == ((NI8) 4))) goto LA33;
									k_196246 = ((NU8) 2);
								}
								LA33: ;
								{
									if (!((*x_196240).d_type == ((NI8) 10))) goto LA37;
									{
										NIM_BOOL LOC41;
										LOC41 = 0;
										LOC41 = direxists_122008(y_196242);
										if (!LOC41) goto LA42;
										k_196246 = ((NU8) 3);
									}
									goto LA39;
									LA42: ;
									{
										k_196246 = (NU8)(k_196246 + ((NI) 1));
									}
									LA39: ;
								}
								LA37: ;
								k_196210 = k_196246;
								p_196211 = y_196242;
								{
									NIM_BOOL LOC47;
									LOC47 = 0;
									LOC47 = (k_196210 == ((NU8) 2));
									if (!(LOC47)) goto LA48;
									LOC47 = !(((NU8)(p_196211->data[pos]) == (NU8)(46)));
									LA48: ;
									if (!LOC47) goto LA49;
									addpackage_196084(packages, p_196211);
								}
								LA49: ;
								goto LA12;
							}
							LA29: ;
							{
								int LOC53;
								LOC53 = 0;
								LOC53 = lstat(y_196242->data, (&s_196244));
								if (!(LOC53 < ((NI32) 0))) goto LA54;
								goto LA10;
							}
							LA54: ;
							{
								NIM_BOOL LOC58;
								LOC58 = 0;
								LOC58 = S_ISDIR(s_196244.st_mode);
								if (!LOC58) goto LA59;
								k_196246 = ((NU8) 2);
							}
							LA59: ;
							{
								NIM_BOOL LOC63;
								LOC63 = 0;
								LOC63 = S_ISLNK(s_196244.st_mode);
								if (!LOC63) goto LA64;
								k_196246 = (NU8)(k_196246 + ((NI) 1));
							}
							LA64: ;
							k_196210 = k_196246;
							p_196211 = y_196242;
							{
								NIM_BOOL LOC68;
								LOC68 = 0;
								LOC68 = (k_196210 == ((NU8) 2));
								if (!(LOC68)) goto LA69;
								LOC68 = !(((NU8)(p_196211->data[pos]) == (NU8)(46)));
								LA69: ;
								if (!LOC68) goto LA70;
								addpackage_196084(packages, p_196211);
							}
							LA70: ;
						}
						LA21: ;
					} LA12: ;
				}
			} LA10: ;
			LOC72 = 0;
			LOC72 = closedir(d_196238);
		}
		LA8: ;
	}
	{
		NimStringDesc* p_196221;
		p_196221 = 0;
		{
			NimStringDesc* key_196252;
			NimStringDesc* val_196254;
			key_196252 = 0;
			val_196254 = 0;
			{
				NI h_196256;
				NI HEX3Atmp_196258;
				NI res_196260;
				h_196256 = 0;
				HEX3Atmp_196258 = 0;
				HEX3Atmp_196258 = ((*packages).data ? ((*packages).data->Sup.len-1) : -1);
				res_196260 = ((NI) 0);
				{
					while (1) {
						if (!(res_196260 <= HEX3Atmp_196258)) goto LA77;
						h_196256 = res_196260;
						{
							NimStringDesc* res_196264;
							if (!!((*packages).data->data[h_196256].Field0 == 0)) goto LA80;
							key_196252 = (*packages).data->data[h_196256].Field0;
							val_196254 = (*packages).data->data[h_196256].Field1;
							{
								if (!eqStrings(val_196254, ((NimStringDesc*) &TMP1794))) goto LA84;
								res_196264 = key_196252;
							}
							goto LA82;
							LA84: ;
							{
								NimStringDesc* LOC87;
								LOC87 = 0;
								LOC87 = rawNewString(key_196252->Sup.len + val_196254->Sup.len + 1);
appendString(LOC87, key_196252);
appendChar(LOC87, 45);
appendString(LOC87, val_196254);
								res_196264 = LOC87;
							}
							LA82: ;
							p_196221 = res_196264;
							addnimblepath_196108(p_196221, info);
						}
						LA80: ;
						res_196260 += ((NI) 1);
					} LA77: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_196265)(NimStringDesc* path, Tlineinfo181337 info) {
	addpathrec_196184(path, info);
	addnimblepath_196108(path, info);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

