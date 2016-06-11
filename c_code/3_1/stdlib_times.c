/* Generated by Nim Compiler v0.14.0 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <time.h>
#include <string.h>
#include <sys/select.h>
#include <sys/time.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo110604 Timeinfo110604;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair146205 Keyvaluepair146205;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month110203;
typedef NU8 Weekday110205;
struct  Timeinfo110604  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month110203 month;
NI year;
Weekday110205 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
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
typedef Weekday110205 TY111453[7];
struct Keyvaluepair146205 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(void, getlocaltime_110639_2726502234)(time_t t0, Timeinfo110604* Result);
N_NIMCALL(void, tmtotimeinfo_111446_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo110604* Result);
N_NIMCALL(void, gettzname_110687_2726502234)(Keyvaluepair146205* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NI, gettimezone_110801_2726502234)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest0, void* src0, TNimType* mt0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(time_t, gettime_110637_2726502234)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x0, NI minchars0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
NIM_CONST TY111453 weekdays_111451_2726502234 = {((Weekday110205) 6),
((Weekday110205) 0),
((Weekday110205) 1),
((Weekday110205) 2),
((Weekday110205) 3),
((Weekday110205) 4),
((Weekday110205) 5)}
;
STRING_LITERAL(TMP3565, "UTC", 3);
extern TNimType NTI3408; /* RootObj */
TNimType NTI110604; /* TimeInfo */
extern TNimType NTI104; /* int */
TNimType NTI110607; /* range 0..61(int) */
TNimType NTI110609; /* range 0..59(int) */
TNimType NTI110611; /* range 0..23(int) */
TNimType NTI110614; /* range 1..31(int) */
TNimType NTI110203; /* Month */
TNimType NTI110205; /* WeekDay */
TNimType NTI110619; /* range 0..365(int) */
extern TNimType NTI130; /* bool */
extern TNimType NTI138; /* string */

N_NIMCALL(void, gettzname_110687_2726502234)(Keyvaluepair146205* Result) {
{	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(((NI) 0))- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(((NI) 1))- 0]));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_110801_2726502234)(void) {
	NI result0;
{	result0 = (NI)0;
	result0 = timezone;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tmtotimeinfo_111446_2726502234)(struct tm* tm0, NIM_BOOL local0, Timeinfo110604* Result) {
	Timeinfo110604 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI110604);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI110604);
	LOC1.second = ((NI) (((NI) ((*tm0).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm0).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm0).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm0).tm_mday))));
	LOC1.month = ((Month110203) ((*tm0).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm0).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_111451_2726502234[(((NI) ((*tm0).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm0).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm0).tm_isdst);
	{
		if (!local0) goto LA4;
		{
			Keyvaluepair146205 LOC10;
			if (!(((NI32) 0) < (*tm0).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_110687_2726502234((&LOC10));
			LOC1.tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			Keyvaluepair146205 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_110687_2726502234((&LOC12));
			LOC1.tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.tzname = copyString(((NimStringDesc*) &TMP3565));
	}
	LA2: ;
	{
		if (!local0) goto LA16;
		LOC1.timezone = gettimezone_110801_2726502234();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI110604));
}

N_NIMCALL(void, getlocaltime_110639_2726502234)(time_t t0, Timeinfo110604* Result) {
	time_t a0;
	struct tm* lt0;
	a0 = t0;
	lt0 = localtime((&a0));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI110604));
	(*Result).Sup.m_type = (&NTI110604);
	tmtotimeinfo_111446_2726502234((&(*lt0)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_110637_2726502234)(void) {
	time_t result0;
{	result0 = (time_t)0;
	result0 = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	memcpy(((NCSTRING) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((NCSTRING) ((*src0).data)), (NI)((*src0).Sup.len + ((NI) 1)));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result0;
	Timeinfo110604 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110604);
	LOC1 = (time_t)0;
	LOC1 = gettime_110637_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110604);
	getlocaltime_110639_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(ti0.year);
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti0.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result0;
	Timeinfo110604 ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110604);
	LOC1 = (time_t)0;
	LOC1 = gettime_110637_2726502234();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI110604);
	getlocaltime_110639_2726502234(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nsuIntToStr(((NI) (ti0.hour)), ((NI) 2));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) (ti0.minute)), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NF, toseconds_110659_2726502234)(time_t time0) {
	NF result0;
	result0 = (NF)0;
	result0 = ((NF) (time0));
	return result0;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result0;
	struct timeval a0;
	result0 = (NF)0;
	memset((void*)(&a0), 0, sizeof(a0));
	gettimeofday((&a0), NIM_NIL);
	result0 = ((NF)(((double) (a0.tv_sec))) + (NF)(((NF)(((double) (a0.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result0;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0) {
	NI64 result0;
	NF LOC1;
{	result0 = (NI64)0;
	LOC1 = (NF)0;
	LOC1 = difftime(a0, b0);
	result0 = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
	tzset();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TMP3558[11];
static TNimNode* TMP3559[12];
NI TMP3561;
static char* NIM_CONST TMP3560[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* TMP3562[7];
NI TMP3564;
static char* NIM_CONST TMP3563[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP19[33];
NTI110604.size = sizeof(Timeinfo110604);
NTI110604.kind = 17;
NTI110604.base = (&NTI3408);
TMP3558[0] = &TMP19[1];
NTI110607.size = sizeof(NI);
NTI110607.kind = 20;
NTI110607.base = (&NTI104);
NTI110607.flags = 3;
TMP19[1].kind = 1;
TMP19[1].offset = offsetof(Timeinfo110604, second);
TMP19[1].typ = (&NTI110607);
TMP19[1].name = "second";
TMP3558[1] = &TMP19[2];
NTI110609.size = sizeof(NI);
NTI110609.kind = 20;
NTI110609.base = (&NTI104);
NTI110609.flags = 3;
TMP19[2].kind = 1;
TMP19[2].offset = offsetof(Timeinfo110604, minute);
TMP19[2].typ = (&NTI110609);
TMP19[2].name = "minute";
TMP3558[2] = &TMP19[3];
NTI110611.size = sizeof(NI);
NTI110611.kind = 20;
NTI110611.base = (&NTI104);
NTI110611.flags = 3;
TMP19[3].kind = 1;
TMP19[3].offset = offsetof(Timeinfo110604, hour);
TMP19[3].typ = (&NTI110611);
TMP19[3].name = "hour";
TMP3558[3] = &TMP19[4];
NTI110614.size = sizeof(NI);
NTI110614.kind = 20;
NTI110614.base = (&NTI104);
NTI110614.flags = 3;
TMP19[4].kind = 1;
TMP19[4].offset = offsetof(Timeinfo110604, monthday);
TMP19[4].typ = (&NTI110614);
TMP19[4].name = "monthday";
TMP3558[4] = &TMP19[5];
NTI110203.size = sizeof(Month110203);
NTI110203.kind = 14;
NTI110203.base = 0;
NTI110203.flags = 3;
for (TMP3561 = 0; TMP3561 < 12; TMP3561++) {
TMP19[TMP3561+6].kind = 1;
TMP19[TMP3561+6].offset = TMP3561;
TMP19[TMP3561+6].name = TMP3560[TMP3561];
TMP3559[TMP3561] = &TMP19[TMP3561+6];
}
TMP19[18].len = 12; TMP19[18].kind = 2; TMP19[18].sons = &TMP3559[0];
NTI110203.node = &TMP19[18];
TMP19[5].kind = 1;
TMP19[5].offset = offsetof(Timeinfo110604, month);
TMP19[5].typ = (&NTI110203);
TMP19[5].name = "month";
TMP3558[5] = &TMP19[19];
TMP19[19].kind = 1;
TMP19[19].offset = offsetof(Timeinfo110604, year);
TMP19[19].typ = (&NTI104);
TMP19[19].name = "year";
TMP3558[6] = &TMP19[20];
NTI110205.size = sizeof(Weekday110205);
NTI110205.kind = 14;
NTI110205.base = 0;
NTI110205.flags = 3;
for (TMP3564 = 0; TMP3564 < 7; TMP3564++) {
TMP19[TMP3564+21].kind = 1;
TMP19[TMP3564+21].offset = TMP3564;
TMP19[TMP3564+21].name = TMP3563[TMP3564];
TMP3562[TMP3564] = &TMP19[TMP3564+21];
}
TMP19[28].len = 7; TMP19[28].kind = 2; TMP19[28].sons = &TMP3562[0];
NTI110205.node = &TMP19[28];
TMP19[20].kind = 1;
TMP19[20].offset = offsetof(Timeinfo110604, weekday);
TMP19[20].typ = (&NTI110205);
TMP19[20].name = "weekday";
TMP3558[7] = &TMP19[29];
NTI110619.size = sizeof(NI);
NTI110619.kind = 20;
NTI110619.base = (&NTI104);
NTI110619.flags = 3;
TMP19[29].kind = 1;
TMP19[29].offset = offsetof(Timeinfo110604, yearday);
TMP19[29].typ = (&NTI110619);
TMP19[29].name = "yearday";
TMP3558[8] = &TMP19[30];
TMP19[30].kind = 1;
TMP19[30].offset = offsetof(Timeinfo110604, isdst);
TMP19[30].typ = (&NTI130);
TMP19[30].name = "isDST";
TMP3558[9] = &TMP19[31];
TMP19[31].kind = 1;
TMP19[31].offset = offsetof(Timeinfo110604, tzname);
TMP19[31].typ = (&NTI138);
TMP19[31].name = "tzname";
TMP3558[10] = &TMP19[32];
TMP19[32].kind = 1;
TMP19[32].offset = offsetof(Timeinfo110604, timezone);
TMP19[32].typ = (&NTI104);
TMP19[32].name = "timezone";
TMP19[0].len = 11; TMP19[0].kind = 2; TMP19[0].sons = &TMP3558[0];
NTI110604.node = &TMP19[0];
}

