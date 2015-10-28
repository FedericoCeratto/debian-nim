/* Generated by Nim Compiler v0.12.0 */
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
typedef struct Timeinfo108410 Timeinfo108410;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Keyvaluepair145208 Keyvaluepair145208;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Timeinfo108410  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
NU8 month;
NI year;
NU8 weekday;
NI yearday;
NIM_BOOL isdst;
NimStringDesc* tzname;
NI timezone;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 TY109055[7];
struct Keyvaluepair145208 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
N_NIMCALL(void, getlocaltime_108476)(time_t t, Timeinfo108410* Result);
N_NIMCALL(void, tmtotimeinfo_109048)(struct tm* tm, NIM_BOOL local, Timeinfo108410* Result);
N_NIMCALL(void, gettzname_108569)(Keyvaluepair145208* Result);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NI, gettimezone_108604)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest, void* src, TNimType* mt);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_NIMCALL(time_t, gettime_108471)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY109055 weekdays_109053 = {((NU8) 6),
((NU8) 0),
((NU8) 1),
((NU8) 2),
((NU8) 3),
((NU8) 4),
((NU8) 5)}
;
STRING_LITERAL(TMP3368, "UTC", 3);
extern TNimType NTI4011; /* RootObj */
TNimType NTI108410; /* TimeInfo */
extern TNimType NTI108; /* int */
TNimType NTI108413; /* range 0..61(int) */
TNimType NTI108416; /* range 0..59(int) */
TNimType NTI108418; /* range 0..23(int) */
TNimType NTI108421; /* range 1..31(int) */
TNimType NTI108206; /* Month */
TNimType NTI108208; /* WeekDay */
TNimType NTI108426; /* range 0..365(int) */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */

N_NIMCALL(void, gettzname_108569)(Keyvaluepair145208* Result) {
{	unsureAsgnRef((void**) (&(*Result).Field0), cstrToNimstr(tzname[(((NI) 0))- 0]));
	unsureAsgnRef((void**) (&(*Result).Field1), cstrToNimstr(tzname[(((NI) 1))- 0]));
	goto BeforeRet;
	}BeforeRet: ;
}

N_NIMCALL(NI, gettimezone_108604)(void) {
	NI result;
{	result = 0;
	result = timezone;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tmtotimeinfo_109048)(struct tm* tm, NIM_BOOL local, Timeinfo108410* Result) {
	Timeinfo108410 LOC1;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI108410);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI108410);
	LOC1.second = ((NI) (((NI) ((*tm).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm).tm_mday))));
	LOC1.month = ((NU8) ((*tm).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_109053[(((NI) ((*tm).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm).tm_isdst);
	{
		if (!local) goto LA4;
		{
			Keyvaluepair145208 LOC10;
			if (!(((NI32) 0) < (*tm).tm_isdst)) goto LA8;
			memset((void*)(&LOC10), 0, sizeof(LOC10));
			gettzname_108569((&LOC10));
			LOC1.tzname = copyString(LOC10.Field1);
		}
		goto LA6;
		LA8: ;
		{
			Keyvaluepair145208 LOC12;
			memset((void*)(&LOC12), 0, sizeof(LOC12));
			gettzname_108569((&LOC12));
			LOC1.tzname = copyString(LOC12.Field0);
		}
		LA6: ;
	}
	goto LA2;
	LA4: ;
	{
		LOC1.tzname = copyString(((NimStringDesc*) &TMP3368));
	}
	LA2: ;
	{
		if (!local) goto LA16;
		LOC1.timezone = gettimezone_108604();
	}
	goto LA14;
	LA16: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA14: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI108410));
}

N_NIMCALL(void, getlocaltime_108476)(time_t t, Timeinfo108410* Result) {
	time_t a;
	struct tm* lt;
	a = t;
	lt = localtime((&a));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI108410));
	(*Result).Sup.m_type = (&NTI108410);
	tmtotimeinfo_109048((&(*lt)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_108471)(void) {
	time_t result;
{	result = 0;
	result = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
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

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result;
	Timeinfo108410 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI108410);
	LOC1 = 0;
	LOC1 = gettime_108471();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI108410);
	getlocaltime_108476(LOC1, (&ti));
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nimIntToStr(ti.year);
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result;
	Timeinfo108410 ti;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result = 0;
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI108410);
	LOC1 = 0;
	LOC1 = gettime_108471();
	chckNil((void*)(&ti));
	memset((void*)(&ti), 0, sizeof(ti));
	ti.Sup.m_type = (&NTI108410);
	getlocaltime_108476(LOC1, (&ti));
	LOC2 = 0;
	LOC3 = 0;
	LOC3 = nsuIntToStr(((NI) (ti.hour)), ((NI) 2));
	LOC4 = 0;
	LOC4 = nsuIntToStr(((NI) (ti.minute)), ((NI) 2));
	LOC5 = 0;
	LOC5 = nsuIntToStr(((NI) (ti.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result = LOC2;
	return result;
}

N_NIMCALL(NF, toseconds_108511)(time_t time) {
	NF result;
	result = 0;
	result = ((NF) (time));
	return result;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result;
	struct timeval a;
	result = 0;
	memset((void*)(&a), 0, sizeof(a));
	gettimeofday((&a), NIM_NIL);
	result = ((NF)(((double) (a.tv_sec))) + (NF)(((NF)(((double) (a.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a, time_t b) {
	NI64 result;
	NF LOC1;
{	result = 0;
	LOC1 = 0;
	LOC1 = difftime(a, b);
	result = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
	tzset();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* TMP3361[11];
static TNimNode* TMP3362[12];
NI TMP3364;
static char* NIM_CONST TMP3363[12] = {
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
static TNimNode* TMP3365[7];
NI TMP3367;
static char* NIM_CONST TMP3366[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode TMP15[33];
NTI108410.size = sizeof(Timeinfo108410);
NTI108410.kind = 17;
NTI108410.base = (&NTI4011);
TMP3361[0] = &TMP15[1];
NTI108413.size = sizeof(NI);
NTI108413.kind = 20;
NTI108413.base = (&NTI108);
NTI108413.flags = 3;
TMP15[1].kind = 1;
TMP15[1].offset = offsetof(Timeinfo108410, second);
TMP15[1].typ = (&NTI108413);
TMP15[1].name = "second";
TMP3361[1] = &TMP15[2];
NTI108416.size = sizeof(NI);
NTI108416.kind = 20;
NTI108416.base = (&NTI108);
NTI108416.flags = 3;
TMP15[2].kind = 1;
TMP15[2].offset = offsetof(Timeinfo108410, minute);
TMP15[2].typ = (&NTI108416);
TMP15[2].name = "minute";
TMP3361[2] = &TMP15[3];
NTI108418.size = sizeof(NI);
NTI108418.kind = 20;
NTI108418.base = (&NTI108);
NTI108418.flags = 3;
TMP15[3].kind = 1;
TMP15[3].offset = offsetof(Timeinfo108410, hour);
TMP15[3].typ = (&NTI108418);
TMP15[3].name = "hour";
TMP3361[3] = &TMP15[4];
NTI108421.size = sizeof(NI);
NTI108421.kind = 20;
NTI108421.base = (&NTI108);
NTI108421.flags = 3;
TMP15[4].kind = 1;
TMP15[4].offset = offsetof(Timeinfo108410, monthday);
TMP15[4].typ = (&NTI108421);
TMP15[4].name = "monthday";
TMP3361[4] = &TMP15[5];
NTI108206.size = sizeof(NU8);
NTI108206.kind = 14;
NTI108206.base = 0;
NTI108206.flags = 3;
for (TMP3364 = 0; TMP3364 < 12; TMP3364++) {
TMP15[TMP3364+6].kind = 1;
TMP15[TMP3364+6].offset = TMP3364;
TMP15[TMP3364+6].name = TMP3363[TMP3364];
TMP3362[TMP3364] = &TMP15[TMP3364+6];
}
TMP15[18].len = 12; TMP15[18].kind = 2; TMP15[18].sons = &TMP3362[0];
NTI108206.node = &TMP15[18];
TMP15[5].kind = 1;
TMP15[5].offset = offsetof(Timeinfo108410, month);
TMP15[5].typ = (&NTI108206);
TMP15[5].name = "month";
TMP3361[5] = &TMP15[19];
TMP15[19].kind = 1;
TMP15[19].offset = offsetof(Timeinfo108410, year);
TMP15[19].typ = (&NTI108);
TMP15[19].name = "year";
TMP3361[6] = &TMP15[20];
NTI108208.size = sizeof(NU8);
NTI108208.kind = 14;
NTI108208.base = 0;
NTI108208.flags = 3;
for (TMP3367 = 0; TMP3367 < 7; TMP3367++) {
TMP15[TMP3367+21].kind = 1;
TMP15[TMP3367+21].offset = TMP3367;
TMP15[TMP3367+21].name = TMP3366[TMP3367];
TMP3365[TMP3367] = &TMP15[TMP3367+21];
}
TMP15[28].len = 7; TMP15[28].kind = 2; TMP15[28].sons = &TMP3365[0];
NTI108208.node = &TMP15[28];
TMP15[20].kind = 1;
TMP15[20].offset = offsetof(Timeinfo108410, weekday);
TMP15[20].typ = (&NTI108208);
TMP15[20].name = "weekday";
TMP3361[7] = &TMP15[29];
NTI108426.size = sizeof(NI);
NTI108426.kind = 20;
NTI108426.base = (&NTI108);
NTI108426.flags = 3;
TMP15[29].kind = 1;
TMP15[29].offset = offsetof(Timeinfo108410, yearday);
TMP15[29].typ = (&NTI108426);
TMP15[29].name = "yearday";
TMP3361[8] = &TMP15[30];
TMP15[30].kind = 1;
TMP15[30].offset = offsetof(Timeinfo108410, isdst);
TMP15[30].typ = (&NTI138);
TMP15[30].name = "isDST";
TMP3361[9] = &TMP15[31];
TMP15[31].kind = 1;
TMP15[31].offset = offsetof(Timeinfo108410, tzname);
TMP15[31].typ = (&NTI149);
TMP15[31].name = "tzname";
TMP3361[10] = &TMP15[32];
TMP15[32].kind = 1;
TMP15[32].offset = offsetof(Timeinfo108410, timezone);
TMP15[32].typ = (&NTI108);
TMP15[32].name = "timezone";
TMP15[0].len = 11; TMP15[0].kind = 2; TMP15[0].sons = &TMP3361[0];
NTI108410.node = &TMP15[0];
}
