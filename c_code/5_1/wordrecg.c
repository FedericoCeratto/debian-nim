/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tident200021 tident200021;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj200015 tidobj200015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY204333[255];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj200015  {
  TNimObject Sup;
NI Id;
};
struct  tident200021  {
  tidobj200015 Sup;
NimStringDesc* S;
tident200021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, initspecials_204403)(void);
N_NIMCALL(tident200021*, getident_200482)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_128885)(NimStringDesc* x);
N_NIMCALL(NU8, whichkeyword_204382)(tident200021* id);
N_NIMCALL(tident200021*, getident_200472)(NimStringDesc* identifier);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
STRING_LITERAL(TMP449, "", 0);
STRING_LITERAL(TMP450, "addr", 4);
STRING_LITERAL(TMP451, "and", 3);
STRING_LITERAL(TMP452, "as", 2);
STRING_LITERAL(TMP453, "asm", 3);
STRING_LITERAL(TMP454, "atomic", 6);
STRING_LITERAL(TMP455, "bind", 4);
STRING_LITERAL(TMP456, "block", 5);
STRING_LITERAL(TMP457, "break", 5);
STRING_LITERAL(TMP458, "case", 4);
STRING_LITERAL(TMP459, "cast", 4);
STRING_LITERAL(TMP460, "const", 5);
STRING_LITERAL(TMP461, "continue", 8);
STRING_LITERAL(TMP462, "converter", 9);
STRING_LITERAL(TMP463, "defer", 5);
STRING_LITERAL(TMP464, "discard", 7);
STRING_LITERAL(TMP465, "distinct", 8);
STRING_LITERAL(TMP466, "div", 3);
STRING_LITERAL(TMP467, "do", 2);
STRING_LITERAL(TMP468, "elif", 4);
STRING_LITERAL(TMP469, "else", 4);
STRING_LITERAL(TMP470, "end", 3);
STRING_LITERAL(TMP471, "enum", 4);
STRING_LITERAL(TMP472, "except", 6);
STRING_LITERAL(TMP473, "export", 6);
STRING_LITERAL(TMP474, "finally", 7);
STRING_LITERAL(TMP475, "for", 3);
STRING_LITERAL(TMP476, "from", 4);
STRING_LITERAL(TMP477, "func", 4);
STRING_LITERAL(TMP478, "generic", 7);
STRING_LITERAL(TMP479, "if", 2);
STRING_LITERAL(TMP480, "import", 6);
STRING_LITERAL(TMP481, "in", 2);
STRING_LITERAL(TMP482, "include", 7);
STRING_LITERAL(TMP483, "interface", 9);
STRING_LITERAL(TMP484, "is", 2);
STRING_LITERAL(TMP485, "isnot", 5);
STRING_LITERAL(TMP486, "iterator", 8);
STRING_LITERAL(TMP487, "let", 3);
STRING_LITERAL(TMP488, "macro", 5);
STRING_LITERAL(TMP489, "method", 6);
STRING_LITERAL(TMP490, "mixin", 5);
STRING_LITERAL(TMP491, "mod", 3);
STRING_LITERAL(TMP492, "nil", 3);
STRING_LITERAL(TMP493, "not", 3);
STRING_LITERAL(TMP494, "notin", 5);
STRING_LITERAL(TMP495, "object", 6);
STRING_LITERAL(TMP496, "of", 2);
STRING_LITERAL(TMP497, "or", 2);
STRING_LITERAL(TMP498, "out", 3);
STRING_LITERAL(TMP499, "proc", 4);
STRING_LITERAL(TMP500, "ptr", 3);
STRING_LITERAL(TMP501, "raise", 5);
STRING_LITERAL(TMP502, "ref", 3);
STRING_LITERAL(TMP503, "return", 6);
STRING_LITERAL(TMP504, "shl", 3);
STRING_LITERAL(TMP505, "shr", 3);
STRING_LITERAL(TMP506, "static", 6);
STRING_LITERAL(TMP507, "template", 8);
STRING_LITERAL(TMP508, "try", 3);
STRING_LITERAL(TMP509, "tuple", 5);
STRING_LITERAL(TMP510, "type", 4);
STRING_LITERAL(TMP511, "using", 5);
STRING_LITERAL(TMP512, "var", 3);
STRING_LITERAL(TMP513, "when", 4);
STRING_LITERAL(TMP514, "while", 5);
STRING_LITERAL(TMP515, "with", 4);
STRING_LITERAL(TMP516, "without", 7);
STRING_LITERAL(TMP517, "xor", 3);
STRING_LITERAL(TMP518, "yield", 5);
STRING_LITERAL(TMP519, ":", 1);
STRING_LITERAL(TMP520, "::", 2);
STRING_LITERAL(TMP521, "=", 1);
STRING_LITERAL(TMP522, ".", 1);
STRING_LITERAL(TMP523, "..", 2);
STRING_LITERAL(TMP524, "*", 1);
STRING_LITERAL(TMP525, "-", 1);
STRING_LITERAL(TMP526, "magic", 5);
STRING_LITERAL(TMP527, "thread", 6);
STRING_LITERAL(TMP528, "final", 5);
STRING_LITERAL(TMP529, "profiler", 8);
STRING_LITERAL(TMP530, "objchecks", 9);
STRING_LITERAL(TMP531, "destroy", 7);
STRING_LITERAL(TMP532, "immediate", 9);
STRING_LITERAL(TMP533, "destructor", 10);
STRING_LITERAL(TMP534, "delegator", 9);
STRING_LITERAL(TMP535, "override", 8);
STRING_LITERAL(TMP536, "importcpp", 9);
STRING_LITERAL(TMP537, "importobjc", 10);
STRING_LITERAL(TMP538, "importcompilerproc", 18);
STRING_LITERAL(TMP539, "importc", 7);
STRING_LITERAL(TMP540, "exportc", 7);
STRING_LITERAL(TMP541, "incompletestruct", 16);
STRING_LITERAL(TMP542, "requiresinit", 12);
STRING_LITERAL(TMP543, "align", 5);
STRING_LITERAL(TMP544, "nodecl", 6);
STRING_LITERAL(TMP545, "pure", 4);
STRING_LITERAL(TMP546, "sideeffect", 10);
STRING_LITERAL(TMP547, "header", 6);
STRING_LITERAL(TMP548, "nosideeffect", 12);
STRING_LITERAL(TMP549, "gcsafe", 6);
STRING_LITERAL(TMP550, "noreturn", 8);
STRING_LITERAL(TMP551, "merge", 5);
STRING_LITERAL(TMP552, "lib", 3);
STRING_LITERAL(TMP553, "dynlib", 6);
STRING_LITERAL(TMP554, "compilerproc", 12);
STRING_LITERAL(TMP555, "procvar", 7);
STRING_LITERAL(TMP556, "fatal", 5);
STRING_LITERAL(TMP557, "error", 5);
STRING_LITERAL(TMP558, "warning", 7);
STRING_LITERAL(TMP559, "hint", 4);
STRING_LITERAL(TMP560, "line", 4);
STRING_LITERAL(TMP561, "push", 4);
STRING_LITERAL(TMP562, "pop", 3);
STRING_LITERAL(TMP563, "define", 6);
STRING_LITERAL(TMP564, "undef", 5);
STRING_LITERAL(TMP565, "linedir", 7);
STRING_LITERAL(TMP566, "stacktrace", 10);
STRING_LITERAL(TMP567, "linetrace", 9);
STRING_LITERAL(TMP568, "link", 4);
STRING_LITERAL(TMP569, "compile", 7);
STRING_LITERAL(TMP570, "linksys", 7);
STRING_LITERAL(TMP571, "deprecated", 10);
STRING_LITERAL(TMP572, "varargs", 7);
STRING_LITERAL(TMP573, "callconv", 8);
STRING_LITERAL(TMP574, "breakpoint", 10);
STRING_LITERAL(TMP575, "debugger", 8);
STRING_LITERAL(TMP576, "nimcall", 7);
STRING_LITERAL(TMP577, "stdcall", 7);
STRING_LITERAL(TMP578, "cdecl", 5);
STRING_LITERAL(TMP579, "safecall", 8);
STRING_LITERAL(TMP580, "syscall", 7);
STRING_LITERAL(TMP581, "inline", 6);
STRING_LITERAL(TMP582, "noinline", 8);
STRING_LITERAL(TMP583, "fastcall", 8);
STRING_LITERAL(TMP584, "closure", 7);
STRING_LITERAL(TMP585, "noconv", 6);
STRING_LITERAL(TMP586, "on", 2);
STRING_LITERAL(TMP587, "off", 3);
STRING_LITERAL(TMP588, "checks", 6);
STRING_LITERAL(TMP589, "rangechecks", 11);
STRING_LITERAL(TMP590, "boundchecks", 11);
STRING_LITERAL(TMP591, "overflowchecks", 14);
STRING_LITERAL(TMP592, "nilchecks", 9);
STRING_LITERAL(TMP593, "floatchecks", 11);
STRING_LITERAL(TMP594, "nanchecks", 9);
STRING_LITERAL(TMP595, "infchecks", 9);
STRING_LITERAL(TMP596, "assertions", 10);
STRING_LITERAL(TMP597, "patterns", 8);
STRING_LITERAL(TMP598, "warnings", 8);
STRING_LITERAL(TMP599, "hints", 5);
STRING_LITERAL(TMP600, "optimization", 12);
STRING_LITERAL(TMP601, "raises", 6);
STRING_LITERAL(TMP602, "writes", 6);
STRING_LITERAL(TMP603, "reads", 5);
STRING_LITERAL(TMP604, "size", 4);
STRING_LITERAL(TMP605, "effects", 7);
STRING_LITERAL(TMP606, "tags", 4);
STRING_LITERAL(TMP607, "deadcodeelim", 12);
STRING_LITERAL(TMP608, "safecode", 8);
STRING_LITERAL(TMP609, "noforward", 9);
STRING_LITERAL(TMP610, "pragma", 6);
STRING_LITERAL(TMP611, "compiletime", 11);
STRING_LITERAL(TMP612, "noinit", 6);
STRING_LITERAL(TMP613, "passc", 5);
STRING_LITERAL(TMP614, "passl", 5);
STRING_LITERAL(TMP615, "borrow", 6);
STRING_LITERAL(TMP616, "discardable", 11);
STRING_LITERAL(TMP617, "fieldchecks", 11);
STRING_LITERAL(TMP618, "watchpoint", 10);
STRING_LITERAL(TMP619, "subschar", 8);
STRING_LITERAL(TMP620, "acyclic", 7);
STRING_LITERAL(TMP621, "shallow", 7);
STRING_LITERAL(TMP622, "unroll", 6);
STRING_LITERAL(TMP623, "linearscanend", 13);
STRING_LITERAL(TMP624, "computedgoto", 12);
STRING_LITERAL(TMP625, "injectstmt", 10);
STRING_LITERAL(TMP626, "experimental", 12);
STRING_LITERAL(TMP627, "write", 5);
STRING_LITERAL(TMP628, "gensym", 6);
STRING_LITERAL(TMP629, "inject", 6);
STRING_LITERAL(TMP630, "dirty", 5);
STRING_LITERAL(TMP631, "inheritable", 11);
STRING_LITERAL(TMP632, "threadvar", 9);
STRING_LITERAL(TMP633, "emit", 4);
STRING_LITERAL(TMP634, "asmnostackframe", 15);
STRING_LITERAL(TMP635, "implicitstatic", 14);
STRING_LITERAL(TMP636, "global", 6);
STRING_LITERAL(TMP637, "codegendecl", 11);
STRING_LITERAL(TMP638, "unchecked", 9);
STRING_LITERAL(TMP639, "guard", 5);
STRING_LITERAL(TMP640, "locks", 5);
STRING_LITERAL(TMP641, "auto", 4);
STRING_LITERAL(TMP642, "bool", 4);
STRING_LITERAL(TMP643, "catch", 5);
STRING_LITERAL(TMP644, "char", 4);
STRING_LITERAL(TMP645, "class", 5);
STRING_LITERAL(TMP646, "const_cast", 10);
STRING_LITERAL(TMP647, "default", 7);
STRING_LITERAL(TMP648, "delete", 6);
STRING_LITERAL(TMP649, "double", 6);
STRING_LITERAL(TMP650, "dynamic_cast", 12);
STRING_LITERAL(TMP651, "explicit", 8);
STRING_LITERAL(TMP652, "extern", 6);
STRING_LITERAL(TMP653, "false", 5);
STRING_LITERAL(TMP654, "float", 5);
STRING_LITERAL(TMP655, "friend", 6);
STRING_LITERAL(TMP656, "goto", 4);
STRING_LITERAL(TMP657, "int", 3);
STRING_LITERAL(TMP658, "long", 4);
STRING_LITERAL(TMP659, "mutable", 7);
STRING_LITERAL(TMP660, "namespace", 9);
STRING_LITERAL(TMP661, "new", 3);
STRING_LITERAL(TMP662, "operator", 8);
STRING_LITERAL(TMP663, "private", 7);
STRING_LITERAL(TMP664, "protected", 9);
STRING_LITERAL(TMP665, "public", 6);
STRING_LITERAL(TMP666, "register", 8);
STRING_LITERAL(TMP667, "reinterpret_cast", 16);
STRING_LITERAL(TMP668, "short", 5);
STRING_LITERAL(TMP669, "signed", 6);
STRING_LITERAL(TMP670, "sizeof", 6);
STRING_LITERAL(TMP671, "static_cast", 11);
STRING_LITERAL(TMP672, "struct", 6);
STRING_LITERAL(TMP673, "switch", 6);
STRING_LITERAL(TMP674, "this", 4);
STRING_LITERAL(TMP675, "throw", 5);
STRING_LITERAL(TMP676, "true", 4);
STRING_LITERAL(TMP677, "typedef", 7);
STRING_LITERAL(TMP678, "typeid", 6);
STRING_LITERAL(TMP679, "typename", 8);
STRING_LITERAL(TMP680, "union", 5);
STRING_LITERAL(TMP681, "packed", 6);
STRING_LITERAL(TMP682, "unsigned", 8);
STRING_LITERAL(TMP683, "virtual", 7);
STRING_LITERAL(TMP684, "void", 4);
STRING_LITERAL(TMP685, "volatile", 8);
STRING_LITERAL(TMP686, "wchar_t", 7);
STRING_LITERAL(TMP687, "alignas", 7);
STRING_LITERAL(TMP688, "alignof", 7);
STRING_LITERAL(TMP689, "constexpr", 9);
STRING_LITERAL(TMP690, "decltype", 8);
STRING_LITERAL(TMP691, "nullptr", 7);
STRING_LITERAL(TMP692, "noexcept", 8);
STRING_LITERAL(TMP693, "thread_local", 12);
STRING_LITERAL(TMP694, "static_assert", 13);
STRING_LITERAL(TMP695, "char16_t", 8);
STRING_LITERAL(TMP696, "char32_t", 8);
STRING_LITERAL(TMP697, "stdin", 5);
STRING_LITERAL(TMP698, "stdout", 6);
STRING_LITERAL(TMP699, "stderr", 6);
STRING_LITERAL(TMP700, "inout", 5);
STRING_LITERAL(TMP701, "bycopy", 6);
STRING_LITERAL(TMP702, "byref", 5);
STRING_LITERAL(TMP703, "oneway", 6);
NIM_CONST TY204333 specialwords_204332 = {((NimStringDesc*) &TMP449),
((NimStringDesc*) &TMP450),
((NimStringDesc*) &TMP451),
((NimStringDesc*) &TMP452),
((NimStringDesc*) &TMP453),
((NimStringDesc*) &TMP454),
((NimStringDesc*) &TMP455),
((NimStringDesc*) &TMP456),
((NimStringDesc*) &TMP457),
((NimStringDesc*) &TMP458),
((NimStringDesc*) &TMP459),
((NimStringDesc*) &TMP460),
((NimStringDesc*) &TMP461),
((NimStringDesc*) &TMP462),
((NimStringDesc*) &TMP463),
((NimStringDesc*) &TMP464),
((NimStringDesc*) &TMP465),
((NimStringDesc*) &TMP466),
((NimStringDesc*) &TMP467),
((NimStringDesc*) &TMP468),
((NimStringDesc*) &TMP469),
((NimStringDesc*) &TMP470),
((NimStringDesc*) &TMP471),
((NimStringDesc*) &TMP472),
((NimStringDesc*) &TMP473),
((NimStringDesc*) &TMP474),
((NimStringDesc*) &TMP475),
((NimStringDesc*) &TMP476),
((NimStringDesc*) &TMP477),
((NimStringDesc*) &TMP478),
((NimStringDesc*) &TMP479),
((NimStringDesc*) &TMP480),
((NimStringDesc*) &TMP481),
((NimStringDesc*) &TMP482),
((NimStringDesc*) &TMP483),
((NimStringDesc*) &TMP484),
((NimStringDesc*) &TMP485),
((NimStringDesc*) &TMP486),
((NimStringDesc*) &TMP487),
((NimStringDesc*) &TMP488),
((NimStringDesc*) &TMP489),
((NimStringDesc*) &TMP490),
((NimStringDesc*) &TMP491),
((NimStringDesc*) &TMP492),
((NimStringDesc*) &TMP493),
((NimStringDesc*) &TMP494),
((NimStringDesc*) &TMP495),
((NimStringDesc*) &TMP496),
((NimStringDesc*) &TMP497),
((NimStringDesc*) &TMP498),
((NimStringDesc*) &TMP499),
((NimStringDesc*) &TMP500),
((NimStringDesc*) &TMP501),
((NimStringDesc*) &TMP502),
((NimStringDesc*) &TMP503),
((NimStringDesc*) &TMP504),
((NimStringDesc*) &TMP505),
((NimStringDesc*) &TMP506),
((NimStringDesc*) &TMP507),
((NimStringDesc*) &TMP508),
((NimStringDesc*) &TMP509),
((NimStringDesc*) &TMP510),
((NimStringDesc*) &TMP511),
((NimStringDesc*) &TMP512),
((NimStringDesc*) &TMP513),
((NimStringDesc*) &TMP514),
((NimStringDesc*) &TMP515),
((NimStringDesc*) &TMP516),
((NimStringDesc*) &TMP517),
((NimStringDesc*) &TMP518),
((NimStringDesc*) &TMP519),
((NimStringDesc*) &TMP520),
((NimStringDesc*) &TMP521),
((NimStringDesc*) &TMP522),
((NimStringDesc*) &TMP523),
((NimStringDesc*) &TMP524),
((NimStringDesc*) &TMP525),
((NimStringDesc*) &TMP526),
((NimStringDesc*) &TMP527),
((NimStringDesc*) &TMP528),
((NimStringDesc*) &TMP529),
((NimStringDesc*) &TMP530),
((NimStringDesc*) &TMP531),
((NimStringDesc*) &TMP532),
((NimStringDesc*) &TMP533),
((NimStringDesc*) &TMP534),
((NimStringDesc*) &TMP535),
((NimStringDesc*) &TMP536),
((NimStringDesc*) &TMP537),
((NimStringDesc*) &TMP538),
((NimStringDesc*) &TMP539),
((NimStringDesc*) &TMP540),
((NimStringDesc*) &TMP541),
((NimStringDesc*) &TMP542),
((NimStringDesc*) &TMP543),
((NimStringDesc*) &TMP544),
((NimStringDesc*) &TMP545),
((NimStringDesc*) &TMP546),
((NimStringDesc*) &TMP547),
((NimStringDesc*) &TMP548),
((NimStringDesc*) &TMP549),
((NimStringDesc*) &TMP550),
((NimStringDesc*) &TMP551),
((NimStringDesc*) &TMP552),
((NimStringDesc*) &TMP553),
((NimStringDesc*) &TMP554),
((NimStringDesc*) &TMP555),
((NimStringDesc*) &TMP556),
((NimStringDesc*) &TMP557),
((NimStringDesc*) &TMP558),
((NimStringDesc*) &TMP559),
((NimStringDesc*) &TMP560),
((NimStringDesc*) &TMP561),
((NimStringDesc*) &TMP562),
((NimStringDesc*) &TMP563),
((NimStringDesc*) &TMP564),
((NimStringDesc*) &TMP565),
((NimStringDesc*) &TMP566),
((NimStringDesc*) &TMP567),
((NimStringDesc*) &TMP568),
((NimStringDesc*) &TMP569),
((NimStringDesc*) &TMP570),
((NimStringDesc*) &TMP571),
((NimStringDesc*) &TMP572),
((NimStringDesc*) &TMP573),
((NimStringDesc*) &TMP574),
((NimStringDesc*) &TMP575),
((NimStringDesc*) &TMP576),
((NimStringDesc*) &TMP577),
((NimStringDesc*) &TMP578),
((NimStringDesc*) &TMP579),
((NimStringDesc*) &TMP580),
((NimStringDesc*) &TMP581),
((NimStringDesc*) &TMP582),
((NimStringDesc*) &TMP583),
((NimStringDesc*) &TMP584),
((NimStringDesc*) &TMP585),
((NimStringDesc*) &TMP586),
((NimStringDesc*) &TMP587),
((NimStringDesc*) &TMP588),
((NimStringDesc*) &TMP589),
((NimStringDesc*) &TMP590),
((NimStringDesc*) &TMP591),
((NimStringDesc*) &TMP592),
((NimStringDesc*) &TMP593),
((NimStringDesc*) &TMP594),
((NimStringDesc*) &TMP595),
((NimStringDesc*) &TMP596),
((NimStringDesc*) &TMP597),
((NimStringDesc*) &TMP598),
((NimStringDesc*) &TMP599),
((NimStringDesc*) &TMP600),
((NimStringDesc*) &TMP601),
((NimStringDesc*) &TMP602),
((NimStringDesc*) &TMP603),
((NimStringDesc*) &TMP604),
((NimStringDesc*) &TMP605),
((NimStringDesc*) &TMP606),
((NimStringDesc*) &TMP607),
((NimStringDesc*) &TMP608),
((NimStringDesc*) &TMP609),
((NimStringDesc*) &TMP610),
((NimStringDesc*) &TMP611),
((NimStringDesc*) &TMP612),
((NimStringDesc*) &TMP613),
((NimStringDesc*) &TMP614),
((NimStringDesc*) &TMP615),
((NimStringDesc*) &TMP616),
((NimStringDesc*) &TMP617),
((NimStringDesc*) &TMP618),
((NimStringDesc*) &TMP619),
((NimStringDesc*) &TMP620),
((NimStringDesc*) &TMP621),
((NimStringDesc*) &TMP622),
((NimStringDesc*) &TMP623),
((NimStringDesc*) &TMP624),
((NimStringDesc*) &TMP625),
((NimStringDesc*) &TMP626),
((NimStringDesc*) &TMP627),
((NimStringDesc*) &TMP628),
((NimStringDesc*) &TMP629),
((NimStringDesc*) &TMP630),
((NimStringDesc*) &TMP631),
((NimStringDesc*) &TMP632),
((NimStringDesc*) &TMP633),
((NimStringDesc*) &TMP634),
((NimStringDesc*) &TMP635),
((NimStringDesc*) &TMP636),
((NimStringDesc*) &TMP637),
((NimStringDesc*) &TMP638),
((NimStringDesc*) &TMP639),
((NimStringDesc*) &TMP640),
((NimStringDesc*) &TMP641),
((NimStringDesc*) &TMP642),
((NimStringDesc*) &TMP643),
((NimStringDesc*) &TMP644),
((NimStringDesc*) &TMP645),
((NimStringDesc*) &TMP646),
((NimStringDesc*) &TMP647),
((NimStringDesc*) &TMP648),
((NimStringDesc*) &TMP649),
((NimStringDesc*) &TMP650),
((NimStringDesc*) &TMP651),
((NimStringDesc*) &TMP652),
((NimStringDesc*) &TMP653),
((NimStringDesc*) &TMP654),
((NimStringDesc*) &TMP655),
((NimStringDesc*) &TMP656),
((NimStringDesc*) &TMP657),
((NimStringDesc*) &TMP658),
((NimStringDesc*) &TMP659),
((NimStringDesc*) &TMP660),
((NimStringDesc*) &TMP661),
((NimStringDesc*) &TMP662),
((NimStringDesc*) &TMP663),
((NimStringDesc*) &TMP664),
((NimStringDesc*) &TMP665),
((NimStringDesc*) &TMP666),
((NimStringDesc*) &TMP667),
((NimStringDesc*) &TMP668),
((NimStringDesc*) &TMP669),
((NimStringDesc*) &TMP670),
((NimStringDesc*) &TMP671),
((NimStringDesc*) &TMP672),
((NimStringDesc*) &TMP673),
((NimStringDesc*) &TMP674),
((NimStringDesc*) &TMP675),
((NimStringDesc*) &TMP676),
((NimStringDesc*) &TMP677),
((NimStringDesc*) &TMP678),
((NimStringDesc*) &TMP679),
((NimStringDesc*) &TMP680),
((NimStringDesc*) &TMP681),
((NimStringDesc*) &TMP682),
((NimStringDesc*) &TMP683),
((NimStringDesc*) &TMP684),
((NimStringDesc*) &TMP685),
((NimStringDesc*) &TMP686),
((NimStringDesc*) &TMP687),
((NimStringDesc*) &TMP688),
((NimStringDesc*) &TMP689),
((NimStringDesc*) &TMP690),
((NimStringDesc*) &TMP691),
((NimStringDesc*) &TMP692),
((NimStringDesc*) &TMP693),
((NimStringDesc*) &TMP694),
((NimStringDesc*) &TMP695),
((NimStringDesc*) &TMP696),
((NimStringDesc*) &TMP697),
((NimStringDesc*) &TMP698),
((NimStringDesc*) &TMP699),
((NimStringDesc*) &TMP700),
((NimStringDesc*) &TMP701),
((NimStringDesc*) &TMP702),
((NimStringDesc*) &TMP703)}
;

N_NIMCALL(void, initspecials_204403)(void) {
	{
		NU8 s_204464;
		NU8 res_204476;
		s_204464 = 0;
		res_204476 = ((NU8) 1);
		{
			while (1) {
				NI LOC4;
				tident200021* LOC5;
				if (!(res_204476 <= ((NU8) 254))) goto LA3;
				s_204464 = res_204476;
				LOC4 = 0;
				LOC4 = hashignorestyle_128885(specialwords_204332[(s_204464)- 0]);
				LOC5 = 0;
				LOC5 = getident_200482(specialwords_204332[(s_204464)- 0], LOC4);
				(*LOC5).Sup.Id = ((NI) (s_204464));
				res_204476 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NU8, whichkeyword_204382)(tident200021* id) {
	NU8 result;
	result = 0;
	{
		if (!((*id).Sup.Id < 0)) goto LA3;
		result = ((NU8) 0);
	}
	goto LA1;
	LA3: ;
	{
		result = ((NU8) ((*id).Sup.Id));
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, whichkeyword_204393)(NimStringDesc* id) {
	NU8 result;
	tident200021* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = getident_200472(id);
	result = whichkeyword_204382(LOC1);
	return result;
}

N_NIMCALL(NI, findstr_204342)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NI i_204360;
		NI HEX3Atmp_204362;
		NI res_204365;
		i_204360 = 0;
		HEX3Atmp_204362 = 0;
		HEX3Atmp_204362 = (aLen0-1);
		res_204365 = 0;
		{
			while (1) {
				if (!(res_204365 <= HEX3Atmp_204362)) goto LA3;
				i_204360 = res_204365;
				{
					NI LOC6;
					LOC6 = 0;
					LOC6 = nsuCmpIgnoreStyle(a[i_204360], s);
					if (!(LOC6 == 0)) goto LA7;
					result = i_204360;
					goto BeforeRet;
				}
				LA7: ;
				res_204365 += 1;
			} LA3: ;
		}
	}
	result = -1;
	BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgInit)(void) {
	initspecials_204403();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_wordrecgDatInit)(void) {
}

