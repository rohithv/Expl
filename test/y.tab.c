/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "expl.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include "expl.c"
#define YYSTYPE tnode *
int yyerror(char const *);
int yylex(void);
void createSymbolTableEntry(tnode *);
void createParamNode(TypeTable * , char *, int );
void addParam(param *);
void createLsymbolEntries(param *);
void argcheck(char *, tnode *, param *, int);
void paramcheck(char *);
void addfield();
MemberFuncList *checkMemberFunc(ClassTable *, char *, tnode*);


#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    TXT = 259,
    PLUS = 260,
    MINUS = 261,
    MUL = 262,
    DIV = 263,
    ASSIGN = 264,
    WRITE = 265,
    READ = 266,
    ID = 267,
    BEGINTK = 268,
    END = 269,
    EQ = 270,
    NE = 271,
    LT = 272,
    GT = 273,
    LE = 274,
    GE = 275,
    IF = 276,
    THEN = 277,
    ELSE = 278,
    ENDIF = 279,
    WHILE = 280,
    DO = 281,
    ENDWHILE = 282,
    BREAKTK = 283,
    CONTINUETK = 284,
    BRKPTK = 285,
    REPEAT = 286,
    UNTIL = 287,
    DECL = 288,
    ENDDECL = 289,
    INT = 290,
    STR = 291,
    ADDRTK = 292,
    MAINTK = 293,
    RETURN = 294,
    ANDTK = 295,
    ORTK = 296,
    NOTTK = 297,
    TUPLE = 298,
    TYPETK = 299,
    ENDTYPE = 300,
    NULLTK = 301,
    ALLOC = 302,
    INITIALIZE = 303,
    FREE = 304,
    MOD = 305,
    CLASS = 306,
    ENDCLASS = 307,
    DELETE = 308,
    NEW = 309,
    EXTENDS = 310,
    SELF = 311,
    LET = 312,
    ENDLET = 313,
    IN = 314
  };
#endif
/* Tokens.  */
#define NUM 258
#define TXT 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIV 263
#define ASSIGN 264
#define WRITE 265
#define READ 266
#define ID 267
#define BEGINTK 268
#define END 269
#define EQ 270
#define NE 271
#define LT 272
#define GT 273
#define LE 274
#define GE 275
#define IF 276
#define THEN 277
#define ELSE 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define BREAKTK 283
#define CONTINUETK 284
#define BRKPTK 285
#define REPEAT 286
#define UNTIL 287
#define DECL 288
#define ENDDECL 289
#define INT 290
#define STR 291
#define ADDRTK 292
#define MAINTK 293
#define RETURN 294
#define ANDTK 295
#define ORTK 296
#define NOTTK 297
#define TUPLE 298
#define TYPETK 299
#define ENDTYPE 300
#define NULLTK 301
#define ALLOC 302
#define INITIALIZE 303
#define FREE 304
#define MOD 305
#define CLASS 306
#define ENDCLASS 307
#define DELETE 308
#define NEW 309
#define EXTENDS 310
#define SELF 311
#define LET 312
#define ENDLET 313
#define IN 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 253 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   800

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    64,     2,     2,    65,     2,    68,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    29,    32,    33,    36,    37,    40,
      42,    43,    46,    47,    50,    52,    53,    56,    58,    59,
      63,    64,    67,    68,    71,    71,    77,    78,    80,    82,
      83,    86,    87,    90,    91,    94,    96,    97,   100,   101,
     105,   106,   109,   118,   119,   120,   123,   125,   134,   135,
     136,   139,   140,   143,   145,   146,   149,   150,   153,   155,
     164,   165,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   180,   185,   187,   190,   192,   194,   195,   198,   200,
     202,   204,   205,   206,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   230,   231,   232,   233,   234,   235,
     236,   239,   240,   241,   244,   247,   249,   252,   253,   255,
     258,   302,   322,   350,   360,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "TXT", "PLUS", "MINUS", "MUL",
  "DIV", "ASSIGN", "WRITE", "READ", "ID", "BEGINTK", "END", "EQ", "NE",
  "LT", "GT", "LE", "GE", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO",
  "ENDWHILE", "BREAKTK", "CONTINUETK", "BRKPTK", "REPEAT", "UNTIL", "DECL",
  "ENDDECL", "INT", "STR", "ADDRTK", "MAINTK", "RETURN", "ANDTK", "ORTK",
  "NOTTK", "TUPLE", "TYPETK", "ENDTYPE", "NULLTK", "ALLOC", "INITIALIZE",
  "FREE", "MOD", "CLASS", "ENDCLASS", "DELETE", "NEW", "EXTENDS", "SELF",
  "LET", "ENDLET", "IN", "'{'", "'}'", "';'", "'('", "')'", "','", "'['",
  "']'", "'.'", "$accept", "Program", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "Fieldlists", "Fld", "MethodDecl", "Mdecl",
  "MethodDefns", "TypeDefBlock", "TypeDefList", "TypeDef", "$@1",
  "FieldDeclList", "FieldDecl", "GDeclBlock", "GDeclList", "GDecl",
  "Tuple", "GidList", "Gid", "FDefBlock", "FDef", "ParamList", "Param",
  "Type", "LDeclBlock", "LDeclList", "LDecl", "IdList", "Body", "RetStmt",
  "MainBlock", "Slist", "Stmt", "LetStmt", "LetAsgn", "InputStmt",
  "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt", "DoWhileStmt",
  "UntilStmt", "PlainStmt", "expr", "ArgList", "Iden", "Id1", "Field",
  "FieldFunction", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     123,   125,    59,    40,    41,    44,    91,    93,    46
};
# endif

#define YYPACT_NINF -195

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-195)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,    22,    38,   -11,    39,     5,  -195,  -195,    57,    10,
    -195,  -195,  -195,    26,     7,  -195,    45,  -195,    27,    61,
      54,  -195,    61,    75,  -195,  -195,    82,  -195,  -195,    29,
    -195,   121,    -3,    61,  -195,     6,  -195,    50,    -5,  -195,
     134,  -195,  -195,  -195,  -195,    88,   142,   -40,    87,     9,
    -195,  -195,    93,    90,  -195,  -195,    94,    95,  -195,  -195,
      98,   149,    61,  -195,   301,   150,   152,  -195,    -3,    61,
     154,    61,   107,  -195,   156,  -195,    11,  -195,   -18,  -195,
       8,  -195,  -195,    30,    -3,   301,  -195,   110,   112,   113,
     114,   116,   103,   301,   102,  -195,  -195,   115,  -195,  -195,
    -195,  -195,     3,  -195,    18,   137,    13,   168,    61,  -195,
      -3,    61,   117,  -195,   301,   169,  -195,    89,   120,   124,
      -3,    -3,   177,   178,   312,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   126,   181,
    -195,   136,    17,   184,  -195,    61,   135,    -4,  -195,   187,
      32,  -195,   641,    67,   138,  -195,  -195,   140,   143,   146,
     139,  -195,   708,   708,   108,   108,    89,    89,    89,    89,
      89,    89,  -195,  -195,   108,   301,   148,   137,  -195,     8,
      21,  -195,   577,   145,    71,  -195,  -195,  -195,  -195,   301,
     301,  -195,  -195,  -195,   301,   266,   301,   184,    49,  -195,
    -195,  -195,   151,   153,   157,   159,   710,   155,   161,   162,
     710,   301,   176,   186,   577,  -195,  -195,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,   204,  -195,   179,   641,    73,
      76,  -195,    80,   158,  -195,     8,   301,    -3,   301,   301,
     743,  -195,  -195,  -195,   610,   468,   203,  -195,   226,  -195,
     301,  -195,  -195,  -195,  -195,  -195,  -195,   362,   180,   378,
     415,   182,   301,  -195,   233,   185,  -195,   484,   188,   189,
     221,   220,   301,   521,   301,   196,  -195,  -195,  -195,   710,
     710,   431,  -195,   641,   710,   544,   643,    -2,   486,   710,
     197,   201,  -195,  -195,   677,  -195,  -195,   202,  -195
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      21,     0,     0,     6,     0,     0,    23,     1,     0,     0,
      24,    20,    22,    10,     0,     8,     0,    47,     0,     0,
       0,     4,     0,     0,     5,     7,     0,    30,    35,     0,
      32,     0,     0,     0,    41,     0,     3,     0,     0,    27,
       0,    11,    13,    29,    31,     0,     0,   117,     0,     0,
      37,    38,   116,   119,    40,     2,     0,     0,    25,    26,
       0,     0,    45,   118,     0,     0,     0,    33,     0,    45,
       0,    45,     0,    28,     0,    12,     0,    16,     0,    44,
       0,    99,   100,   117,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,   101,   116,   119,   110,   120,
     122,    36,     0,   121,     0,    50,     0,     0,     0,    15,
       0,     0,   117,    46,   112,     0,   102,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   114,     0,
      39,     0,     0,     0,    14,    45,     0,     0,    19,     0,
       0,    43,   113,     0,   120,   107,   105,     0,     0,     0,
     122,    89,    84,    85,    86,    87,    94,    95,    90,    91,
      92,    93,    96,    97,    88,     0,   121,    50,    49,     0,
       0,    52,     0,     0,     0,     9,    18,    34,   103,     0,
     112,   106,   108,   109,   112,     0,   112,     0,     0,    55,
      48,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    70,    62,    63,    64,
      65,    66,    67,    68,    69,     0,    59,     0,   111,     0,
       0,   115,     0,     0,    53,     0,     0,     0,     0,     0,
       0,    82,    83,    81,     0,     0,     0,    57,     0,    60,
       0,    17,   124,   123,   125,    42,    54,     0,     0,     0,
       0,     0,     0,    58,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    74,    73,     0,
       0,     0,    80,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    71,     0,    77,    78,     0,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -195,  -195,  -195,  -195,   244,  -195,  -195,  -195,  -195,   192,
    -195,  -195,  -195,   272,  -195,  -195,   240,  -195,  -195,   250,
    -195,   170,   219,  -195,   -31,   -66,   183,    -8,   111,  -195,
     109,  -195,    96,    77,    47,  -194,  -182,  -195,  -195,  -195,
    -195,  -195,  -195,  -195,  -195,  -195,  -195,   101,  -159,   -19,
     -26,   -32,  -195
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    14,    15,    16,    61,    75,    76,    77,
     147,     3,     5,     6,    22,    38,    39,    19,    29,    30,
      31,    49,    50,    33,    34,    78,    79,    80,   143,   180,
     181,   198,   183,   213,    21,   214,   215,   216,   265,   217,
     218,   219,   220,   221,   222,   223,   224,   152,   153,    95,
      96,    97,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      53,    20,    54,   102,    46,   104,    52,    17,    17,    47,
      32,    35,   240,    51,    40,    46,   244,     4,    56,    13,
     112,    32,    17,   107,   280,    35,    64,     1,    65,    17,
      40,   229,   249,    17,     4,   230,    53,   232,     7,    17,
       8,    17,    52,    18,    37,   108,   110,   111,    53,    51,
      11,   178,    53,    48,   113,   200,    58,   185,   249,    24,
     292,    27,   249,    43,    48,   116,    36,   140,   111,    13,
      28,    67,    28,    17,    68,   144,   145,   148,    53,   184,
      55,    23,   141,   111,    52,   285,   286,    41,    53,    53,
     288,    51,    37,   114,   187,   294,    64,    68,   115,    10,
     149,   157,   158,   249,   249,    26,   249,   125,   126,   127,
     128,   234,   249,    57,   235,    42,   186,   129,   130,   131,
     132,   133,   134,   129,   130,   131,   132,   133,   134,   135,
     136,   188,   189,    45,   179,   227,   111,   252,   189,   149,
     253,   189,   135,   136,   254,   189,    60,    53,   135,   136,
      53,    62,   137,   199,    63,    66,    69,    71,    70,    72,
      73,    74,    99,   225,   100,    94,   103,   105,   106,   138,
     142,   123,   179,   118,    53,   119,   120,   121,    53,   122,
     146,   154,    53,   139,   155,    65,   117,   225,   156,   159,
     160,   225,   175,   176,   124,   225,   177,   182,   145,    56,
     247,   190,   194,    53,   191,    53,   226,   192,    53,   256,
     193,   196,    53,   250,   236,   264,   237,   241,   258,   255,
     238,   225,   239,   242,   243,   225,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   246,
     266,   251,   274,   279,   269,   272,   280,    53,    53,   275,
     277,   278,    53,    53,    53,   284,    53,    53,    25,   295,
     225,   225,    53,   296,   298,   225,   225,   225,   109,   225,
     225,   125,   126,   127,   128,   225,   195,    12,    59,    44,
     150,   129,   130,   131,   132,   133,   134,   101,   197,   201,
     228,   248,     0,   233,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,    82,   135,   136,    46,     0,
       0,     0,   245,    83,     0,     0,   137,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   231,     0,     0,     0,   257,    84,   259,
     260,     0,     0,    85,     0,     0,     0,    86,    87,    88,
      89,   267,   135,   136,    90,    91,     0,    92,     0,     0,
       0,     0,   137,   273,    93,     0,     0,   125,   126,   127,
     128,     0,     0,   281,     0,   283,   161,   129,   130,   131,
     132,   133,   134,   125,   126,   127,   128,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,     0,
       0,     0,   135,   136,     0,     0,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,     0,   135,   136,
     125,   126,   127,   128,     0,     0,   268,     0,   137,     0,
     129,   130,   131,   132,   133,   134,   125,   126,   127,   128,
       0,     0,   270,     0,     0,     0,   129,   130,   131,   132,
     133,   134,     0,     0,     0,   135,   136,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,   135,   136,   125,   126,   127,   128,     0,     0,   271,
       0,   137,     0,   129,   130,   131,   132,   133,   134,   125,
     126,   127,   128,    46,     0,   287,   202,   203,    47,   129,
     130,   131,   132,   133,   134,     0,     0,   204,   135,   136,
       0,   205,   206,     0,   207,   208,   209,   210,   137,     0,
       0,     0,     0,     0,   135,   136,   125,   126,   127,   128,
     263,     0,     0,     0,   137,     0,   129,   130,   131,   132,
     133,   134,    48,   212,   293,     0,   276,     0,     0,     0,
       0,    46,     0,     0,   202,   203,    47,     0,     0,     0,
       0,   135,   136,     0,     0,   204,     0,   289,   290,   205,
     206,   137,   207,   208,   209,   210,     0,     0,     0,     0,
       0,     0,     0,   282,    46,     0,     0,   202,   203,    47,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
      48,   212,   205,   206,     0,   207,   208,   209,   210,     0,
       0,     0,     0,     0,     0,     0,   211,    46,     0,     0,
     202,   203,    47,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,    48,   212,   205,   206,     0,   207,   208,
     209,   210,   262,     0,     0,     0,   125,   126,   127,   128,
      46,     0,     0,   202,   203,    47,   129,   130,   131,   132,
     133,   134,     0,     0,   204,     0,    48,   212,   205,   206,
     291,   207,   208,   209,   210,     0,     0,     0,     0,     0,
       0,   135,   136,     0,    46,     0,     0,   202,   203,    47,
       0,   137,     0,     0,     0,     0,     0,     0,   204,    48,
     212,   297,   205,   206,     0,   207,   208,   209,   210,     0,
       0,     0,     0,     0,     0,   127,   128,    46,     0,     0,
     202,   203,    47,   129,   130,   131,   132,   133,   134,     0,
       0,   204,     0,    48,   212,   205,   206,     0,   207,   208,
     209,   210,     0,     0,     0,     0,     0,     0,   135,   136,
      46,     0,     0,   202,   203,    47,     0,     0,   137,     0,
       0,     0,     0,     0,   204,     0,    48,   212,   261,   206,
       0,   207,   208,   209,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
     212
};

static const yytype_int16 yycheck[] =
{
      32,     9,    33,    69,     7,    71,    32,    12,    12,    12,
      18,    19,   206,    32,    22,     7,   210,    12,    12,    12,
      12,    29,    12,    12,    26,    33,    66,    44,    68,    12,
      38,   190,   214,    12,    12,   194,    68,   196,     0,    12,
      51,    12,    68,    33,    38,    34,    64,    65,    80,    68,
      45,    34,    84,    56,    80,    34,    61,    61,   240,    52,
      62,    34,   244,    34,    56,    84,    19,    64,    65,    12,
      43,    62,    43,    12,    65,    62,    63,   108,   110,   145,
      33,    55,    64,    65,   110,   279,   280,    12,   120,   121,
     284,   110,    38,    63,    62,   289,    66,    65,    68,    60,
     108,   120,   121,   285,   286,    60,   288,     5,     6,     7,
       8,    62,   294,    63,    65,    33,   147,    15,    16,    17,
      18,    19,    20,    15,    16,    17,    18,    19,    20,    40,
      41,    64,    65,    12,   142,    64,    65,    64,    65,   147,
      64,    65,    40,    41,    64,    65,    12,   179,    40,    41,
     182,    63,    50,   179,    12,    68,    63,    63,    68,    64,
      62,    12,    12,   182,    12,    64,    12,    60,    12,    67,
      33,    68,   180,    63,   206,    63,    63,    63,   210,    63,
      12,    12,   214,    68,    64,    68,    85,   206,    64,    12,
      12,   210,    66,    12,    93,   214,    60,    13,    63,    12,
      14,    63,    63,   235,    64,   237,    61,    64,   240,   235,
      64,    63,   244,     9,    63,    12,    63,    62,   237,    61,
      63,   240,    63,    62,    62,   244,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    63,
      14,    62,     9,    22,    64,    63,    26,   279,   280,    64,
      62,    62,   284,   285,   286,    59,   288,   289,    14,    62,
     279,   280,   294,    62,    62,   284,   285,   286,    76,   288,
     289,     5,     6,     7,     8,   294,   175,     5,    38,    29,
     110,    15,    16,    17,    18,    19,    20,    68,   177,   180,
     189,   214,    -1,   197,   111,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    40,    41,     7,    -1,
      -1,    -1,   211,    12,    -1,    -1,    50,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    67,    -1,    -1,    -1,   236,    37,   238,
     239,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      49,   250,    40,    41,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    50,   262,    63,    -1,    -1,     5,     6,     7,
       8,    -1,    -1,   272,    -1,   274,    64,    15,    16,    17,
      18,    19,    20,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    40,    41,
       5,     6,     7,     8,    -1,    -1,    64,    -1,    50,    -1,
      15,    16,    17,    18,    19,    20,     5,     6,     7,     8,
      -1,    -1,    64,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    40,    41,     5,     6,     7,     8,    -1,    -1,    64,
      -1,    50,    -1,    15,    16,    17,    18,    19,    20,     5,
       6,     7,     8,     7,    -1,    64,    10,    11,    12,    15,
      16,    17,    18,    19,    20,    -1,    -1,    21,    40,    41,
      -1,    25,    26,    -1,    28,    29,    30,    31,    50,    -1,
      -1,    -1,    -1,    -1,    40,    41,     5,     6,     7,     8,
      62,    -1,    -1,    -1,    50,    -1,    15,    16,    17,    18,
      19,    20,    56,    57,    58,    -1,    62,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    21,    -1,    23,    24,    25,
      26,    50,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      56,    57,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,     7,    -1,    -1,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    56,    57,    25,    26,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,     5,     6,     7,     8,
       7,    -1,    -1,    10,    11,    12,    15,    16,    17,    18,
      19,    20,    -1,    -1,    21,    -1,    56,    57,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,     7,    -1,    -1,    10,    11,    12,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    21,    56,
      57,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,     7,    -1,    -1,
      10,    11,    12,    15,    16,    17,    18,    19,    20,    -1,
      -1,    21,    -1,    56,    57,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
       7,    -1,    -1,    10,    11,    12,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    56,    57,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    70,    80,    12,    81,    82,     0,    51,    71,
      60,    45,    82,    12,    72,    73,    74,    12,    33,    86,
      96,   103,    83,    55,    52,    73,    60,    34,    43,    87,
      88,    89,    96,    92,    93,    96,   103,    38,    84,    85,
      96,    12,    33,    34,    88,    12,     7,    12,    56,    90,
      91,   118,   119,   120,    93,   103,    12,    63,    61,    85,
      12,    75,    63,    12,    66,    68,    68,    62,    65,    63,
      68,    63,    64,    62,    12,    76,    77,    78,    94,    95,
      96,     3,     4,    12,    37,    42,    46,    47,    48,    49,
      53,    54,    56,    63,   116,   118,   119,   120,   121,    12,
      12,    91,    94,    12,    94,    60,    12,    12,    34,    78,
      64,    65,    12,   119,    63,    68,   118,   116,    63,    63,
      63,    63,    63,    68,   116,     5,     6,     7,     8,    15,
      16,    17,    18,    19,    20,    40,    41,    50,    67,    68,
      64,    64,    33,    97,    62,    63,    12,    79,    93,    96,
      90,    95,   116,   117,    12,    64,    64,   118,   118,    12,
      12,    64,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,    66,    12,    60,    34,    96,
      98,    99,    13,   101,    94,    61,    93,    62,    64,    65,
      63,    64,    64,    64,    63,   116,    63,    97,   100,   119,
      34,    99,    10,    11,    21,    25,    26,    28,    29,    30,
      31,    39,    57,   102,   104,   105,   106,   108,   109,   110,
     111,   112,   113,   114,   115,   118,    61,    64,   116,   117,
     117,    67,   117,   101,    62,    65,    63,    63,    63,    63,
     104,    62,    62,    62,   104,   116,    63,    14,   102,   105,
       9,    62,    64,    64,    64,    61,   119,   116,   118,   116,
     116,    25,    32,    62,    12,   107,    14,   116,    64,    64,
      64,    64,    63,   116,     9,    64,    62,    62,    62,    22,
      26,   116,    62,   116,    59,   104,   104,    64,   104,    23,
      24,    27,    62,    58,   104,    62,    62,    24,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    79,    79,
      80,    80,    81,    81,    83,    82,    84,    84,    85,    86,
      86,    87,    87,    88,    88,    89,    90,    90,    91,    91,
      92,    92,    93,    94,    94,    94,    95,    96,    97,    97,
      97,    98,    98,    99,   100,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   107,   108,   109,   110,   111,   111,   112,   113,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   117,   118,   118,   118,   119,   119,   119,
     120,   120,   120,   121,   121,   121
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     0,     2,     1,     8,
       1,     3,     2,     0,     3,     2,     1,     6,     2,     1,
       3,     0,     2,     1,     0,     5,     2,     1,     3,     3,
       2,     2,     1,     3,     7,     1,     3,     1,     1,     4,
       2,     1,     9,     3,     1,     0,     2,     1,     3,     2,
       0,     2,     1,     3,     3,     1,     4,     3,     3,     8,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     3,     5,     5,     4,    10,     8,     8,     7,
       5,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     2,     4,     1,     3,     4,     3,     4,     4,
       1,     3,     0,     1,     4,     7,     1,     1,     2,     1,
       3,     3,     3,     6,     6,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 32 "expl.y" /* yacc.c:1646  */
    { sp++; global_var=sp; }
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "expl.y" /* yacc.c:1646  */
    { /*Empty*/sp++;global_var=sp; }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 40 "expl.y" /* yacc.c:1646  */
    { createVfuncTable(); currclass=NULL; }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 42 "expl.y" /* yacc.c:1646  */
    { currclass=CInstall((yyvsp[0])->varname,NULL); free((yyvsp[0])); }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "expl.y" /* yacc.c:1646  */
    { currclass=CInstall((yyvsp[-2])->varname, (yyvsp[0])->varname); free((yyvsp[-2])); free((yyvsp[0])); }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 50 "expl.y" /* yacc.c:1646  */
    { Class_Finstall(currclass, (yyvsp[-2])->varname, (yyvsp[-1])->varname); free((yyvsp[-2])); free((yyvsp[-1])); }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 52 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 53 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 56 "expl.y" /* yacc.c:1646  */
    { Class_Minstall(currclass, (yyvsp[-4])->varname, TLookup((yyvsp[-5])->varname), paramlist); paramlist=NULL; }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "expl.y" /* yacc.c:1646  */
    {  }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "expl.y" /* yacc.c:1646  */
    {  }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 63 "expl.y" /* yacc.c:1646  */
    { printTypeTable(); }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 64 "expl.y" /* yacc.c:1646  */
    { /*Typedef can be null*/printTypeTable(); }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 67 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 68 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 71 "expl.y" /* yacc.c:1646  */
    {TInstall((yyvsp[-1])->varname,0,NULL);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 71 "expl.y" /* yacc.c:1646  */
    { TypeTable *ttable=TLookup((yyvsp[-4])->varname);
																	 //fieldcheck(fieldlist);
																	 ttable->fields=fieldlist;
																	 fieldlist=NULL;
																	 ttable->size=getSize(ttable);}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 77 "expl.y" /* yacc.c:1646  */
    { addfield(); }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 78 "expl.y" /* yacc.c:1646  */
    { field->fieldIndex=0; fieldlist=field; field=NULL; }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "expl.y" /* yacc.c:1646  */
    { field=(FieldList *)malloc(sizeof(FieldList)); field->name=(yyvsp[-1])->varname; field->type=(yyvsp[-2])->type; field->next=NULL; }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 82 "expl.y" /* yacc.c:1646  */
    { print_symbol_table(); let_entries = sp-global_var;}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 83 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 87 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; }
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; paramlist=NULL; declclass=NULL; }
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 94 "expl.y" /* yacc.c:1646  */
    { currtype = TLookup("tuple"); declclass=NULL;}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 96 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 97 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 100 "expl.y" /* yacc.c:1646  */
    { createSymbolTableEntry((yyvsp[0])); }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 101 "expl.y" /* yacc.c:1646  */
    { Install((yyvsp[-3])->varname,currtype,0,0,0,paramlist,flabel++); /*currtype=NULL*/; paramlist=NULL;
								if((yyvsp[-3])->nodetype==POINTER){ Gsymbol *p= Lookup((yyvsp[-3])->varname); p->pointer=1; }}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "expl.y" /* yacc.c:1646  */
    { /*Empty*/ }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 109 "expl.y" /* yacc.c:1646  */
    { //createLsymbolEntries(paramlist);  
															paramcheck((yyvsp[-7])->varname);
															print_local_table();
															CodeGenerate((yyvsp[-1]), (yyvsp[-7])->varname);
															initialize_local_table();
															paramlist=NULL;
															
															}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "expl.y" /* yacc.c:1646  */
    { addParam(parameter); parameter=NULL; }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 119 "expl.y" /* yacc.c:1646  */
    { addParam(parameter), parameter=NULL; }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 120 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 123 "expl.y" /* yacc.c:1646  */
    { createParamNode((yyvsp[-1])->type,(yyvsp[0])->varname,(yyvsp[0])->nodetype); currtype=oldtype; }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 125 "expl.y" /* yacc.c:1646  */
    { oldtype=currtype; currtype=TLookup((yyvsp[0])->varname);
			oldclass=declclass; declclass=CLookup((yyvsp[0])->varname); 
			if(declclass!=NULL){
				(yyval)=createTree(0,NULL,(yyvsp[0])->varname,CLASSNODE,NULL,NULL,NULL);
			}else{
				(yyval)=createTree(0,currtype,(yyvsp[0])->varname,TYPE,NULL,NULL,NULL);
			}
			}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "expl.y" /* yacc.c:1646  */
    { /* No Action */createLsymbolEntries(paramlist);   }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "expl.y" /* yacc.c:1646  */
    { /* No Action */createLsymbolEntries(paramlist);   }
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 136 "expl.y" /* yacc.c:1646  */
    { createLsymbolEntries(paramlist);   }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "expl.y" /* yacc.c:1646  */
    {  /* No Action */ }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 140 "expl.y" /* yacc.c:1646  */
    {  /* No Action */ }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 145 "expl.y" /* yacc.c:1646  */
    { LInstall((yyvsp[0])->varname, currtype,local_binding++, (yyvsp[0])->nodetype==POINTER ? 1 : 0); }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 146 "expl.y" /* yacc.c:1646  */
    { LInstall((yyvsp[0])->varname, currtype,local_binding++, (yyvsp[0])->nodetype==POINTER ? 1 : 0); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 149 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,CONN,(yyvsp[-2]),NULL,(yyvsp[-1])); }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 150 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 153 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,(yyvsp[-1])->type,NULL,RET, (yyvsp[-1]), NULL, NULL); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "expl.y" /* yacc.c:1646  */
    { if((yyvsp[-7])->type != TLookup("int")){
																yyerror("Function Main expects integer return type");
																exit(1);
															}
														print_local_table();
														CodeGenerate((yyvsp[-1]), "main");
														initialize_local_table();
														paramlist=NULL;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 164 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,CONN,(yyvsp[-1]),NULL,(yyvsp[0]));}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 165 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 170 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 171 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 172 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 174 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 175 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 176 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 180 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("void"), NULL, LETNODE, (yyvsp[-4]), NULL, (yyvsp[-1])); (yyval)->letlist=let_list;
														if(let_list!=NULL){	let_list=let_list->next; } asgn=NULL;
												}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 185 "expl.y" /* yacc.c:1646  */
    {  (yyval) = createTree(0,TLookup("void"),NULL, LETASGN, (yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 187 "expl.y" /* yacc.c:1646  */
    {typecheck((yyvsp[-2])); (yyval)=createTree(0,NULL,NULL,READOP,(yyvsp[-2]),NULL,NULL);}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 190 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,WRITEOP,(yyvsp[-2]),NULL,NULL);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 192 "expl.y" /* yacc.c:1646  */
    {typecheck((yyvsp[-3])); (yyval)=createTree(0,NULL,NULL,ASS,(yyvsp[-3]),NULL,(yyvsp[-1]));}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,IFSTMT,(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]));}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 195 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,IFSTMT,(yyvsp[-5]),(yyvsp[-2]),NULL);}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,WHILESTMT,(yyvsp[-5]),NULL,(yyvsp[-2]));}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 200 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,DOWHILESTMT,(yyvsp[-5]),NULL,(yyvsp[-2])); }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 202 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,UNTILSTMT,(yyvsp[-3]),NULL,(yyvsp[-1])); }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 204 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,BRKP,NULL,NULL,NULL);}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 205 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,BREAK,NULL,NULL,NULL);}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 206 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,CONTINUE,NULL,NULL,NULL);}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 209 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,PLUSOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 210 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,MINUSOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 211 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,MULOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 212 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,DIVOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 213 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,MODOP,(yyvsp[-2]),NULL,(yyvsp[0])); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 214 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 215 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,LTOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 216 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,GTOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 217 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,LEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 218 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,GEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 219 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,EQOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 220 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,NEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 221 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,AND,(yyvsp[-2]),NULL,(yyvsp[0])); }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 222 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,OR,(yyvsp[-2]),NULL,(yyvsp[0])); }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 223 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,NOT,(yyvsp[0]),NULL,NULL); }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 224 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 225 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 226 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); typecheck((yyval));}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 227 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[0])); (yyval)=createTree((yyvsp[0])->val,(yyvsp[0])->type,(yyvsp[0])->varname,ADDR,(yyvsp[0])->left,(yyvsp[0])->middle,(yyvsp[0])->right); free((yyvsp[0])); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 228 "expl.y" /* yacc.c:1646  */
    {  argcheck((yyvsp[-3])->varname, (yyvsp[-1]), NULL, 0);
							(yyval)=createTree((yyvsp[-3])->val, NULL,(yyvsp[-3])->varname, FUNCTION, (yyvsp[-1]), NULL, NULL); free((yyvsp[-3])); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 230 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("null"),NULL,NULLNODE,NULL,NULL,NULL); }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 231 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("int"),NULL,INITNODE,NULL,NULL,NULL); }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 232 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[-1])); (yyval)=createTree(0,TLookup("int"),NULL,FREENODE,(yyvsp[-1]),NULL,NULL); }
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 233 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("null"),NULL,ALLOCNODE,NULL,NULL,NULL); }
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 234 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[-1])); (yyval)=createTree(0,TLookup("int"),NULL,FREENODE,(yyvsp[-1]),NULL,NULL); }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 235 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,NEWNODE,NULL,NULL,NULL); (yyval)->ctype=CLookup((yyvsp[-1])->varname); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 236 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 239 "expl.y" /* yacc.c:1646  */
    { (yyvsp[0])->middle=(yyvsp[-2]); (yyval)=(yyvsp[0]); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 240 "expl.y" /* yacc.c:1646  */
    { (yyval)=NULL; }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 241 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 244 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[-1])->val,(yyvsp[-3])->type,(yyvsp[-3])->varname,(yyvsp[-3])->nodetype,(yyvsp[-1]),(yyvsp[-3])->middle,(yyvsp[-3])->right); //typecheck($$);
				//free($3);
				free((yyvsp[-3])); }
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 247 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[-4])->val,(yyvsp[-6])->type,(yyvsp[-6])->varname,(yyvsp[-6])->nodetype,(yyvsp[-4]),(yyvsp[-6])->middle,(yyvsp[-1])); //typecheck($$);
									free((yyvsp[-6]));}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 249 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 252 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 253 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[0])->val,(yyvsp[0])->type,(yyvsp[0])->varname,POINTER,(yyvsp[0])->left,(yyvsp[0])->middle,(yyvsp[0])->right);
				free((yyvsp[0])); }
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 255 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 258 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[-2]));
					if((yyvsp[-2])->type==TLookup("tuple")){
						Gsymbol *p= Lookup((yyvsp[-2])->varname);
						TupleList *list= p->tuplelist;
						while(list!=NULL){
							if(!strcmp(list->name,(yyvsp[0])->varname)){
								(yyvsp[-2])->type=list->type;
								(yyvsp[-2])->nodetype=TUPLEFIELD;
								(yyvsp[-2])->tuplefield=(yyvsp[0]);
								(yyval)=(yyvsp[-2]);
								break;
							}
							list=list->next;
						}
						if(list==NULL){
							yyerror("Invalid  Attribute for tuple type");
							exit(1);
						}
								
					}
					else{
						FieldList *f;
						if((yyvsp[-2])->type==TLookup("int") || (yyvsp[-2])->type==TLookup("str")){
							yyerror("invalid field access");
							exit(1);
						}
						f=FLookup((yyvsp[-2])->type,(yyvsp[0])->varname);
						if(f==NULL){
							fprintf(stderr,"error, %d: No field named %s in %s type",line,(yyvsp[0])->varname,(yyvsp[-2])->type->name);
							exit(1);
						}
						if((yyvsp[-2])->ctype !=NULL){
							fprintf(stderr,"error, %d: Cannot access private variable from a class\n",line);
							exit(1);
						}
						(yyvsp[-2])->nodetype=FIELD;
						(yyvsp[-2])->field=(yyvsp[0]);
						(yyvsp[0])->type=f->type;
						(yyvsp[0])->val=f->fieldIndex;
						(yyvsp[-2])->type=(yyvsp[0])->type;
						(yyval)=(yyvsp[-2]);
					}
					
				  }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 302 "expl.y" /* yacc.c:1646  */
    { tnode *t1; FieldList *f;
						 t1=(yyvsp[-2]);
						 while(t1->field!=NULL)
							 t1=t1->field;
						 if(t1->ctype!=NULL){
							 fprintf(stderr,"error, %d : Cannot access private variables of a class\n",line);
							 exit(1);
						 }
						 f=FLookup(t1->type,(yyvsp[0])->varname);
						 if(f==NULL){
							fprintf(stderr,"error, %d: No field named %s in %s type\n",line,(yyvsp[0])->varname,t1->type->name);
							exit(1);
						 }
						 t1->nodetype=FIELD;
						 t1->field=(yyvsp[0]);
						 (yyvsp[0])->type=f->type;
						 (yyvsp[0])->val=f->fieldIndex;
						 (yyvsp[-2])->type=(yyvsp[0])->type;
						 (yyval)=(yyvsp[-2]);
						 }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 322 "expl.y" /* yacc.c:1646  */
    { FieldList *flist;
						//Gsymbol *gs;
						if(currclass==NULL){
							fprintf(stderr,"error, %d:self can only be used inside a class definition\n",line);
							exit(1);
						}
						else
							flist=currclass->memberfield;
						while(flist!=NULL){
							if(!strcmp((yyvsp[0])->varname,flist->name))
								break;
							flist=flist->next;
						}
						if(flist==NULL){
							fprintf(stderr,"error, %d:Undeclared variable %s inside the class %s\n",line,(yyvsp[0])->varname,currclass->name);
							exit(1);
						}
						(yyval)=createTree(0,NULL,"self",FIELD,NULL,NULL,NULL);
						(yyval)->field=(yyvsp[0]);
						(yyvsp[0])->val=flist->fieldIndex;
						(yyvsp[0])->type=flist->type;
						(yyvsp[0])->ctype=flist->ctype;
						(yyval)->type=flist->type;
						(yyval)->ctype=flist->ctype;
						(yyval)->Gentry=(Gsymbol *)LLookup("self");
						}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 350 "expl.y" /* yacc.c:1646  */
    { if(currclass==NULL){ fprintf(stderr,"error %d : self can only be used inside a class definition\n",line); exit(1);}
											  MemberFuncList *mfunc=checkMemberFunc(currclass, (yyvsp[-3])->varname, (yyvsp[-1]));
											  (yyval)=createTree(0,NULL,"self",FIELDFUNCTION,NULL,NULL,NULL);
											  (yyvsp[-3])->type=mfunc->type;
											  argcheck((yyvsp[-3])->varname, (yyvsp[-1]), mfunc->paramlist, 1);
											  (yyval)->type=(yyvsp[-3])->type;
											  (yyval)->ctype=currclass;
											  (yyval)->field=(yyvsp[-3]);
											  (yyval)->Gentry=(Gsymbol *)LLookup("self");
											  (yyvsp[-3])->left=(yyvsp[-1]);}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 360 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[-5]));
											  MemberFuncList *mfunc=checkMemberFunc((yyvsp[-5])->ctype, (yyvsp[-3])->varname, (yyvsp[-1]));
											  (yyval)=createTree(0,NULL,(yyvsp[-5])->varname,FIELDFUNCTION,NULL,NULL,NULL);
											  (yyvsp[-3])->type=mfunc->type;
											  argcheck((yyvsp[-3])->varname, (yyvsp[-1]), mfunc->paramlist, 1);
											  (yyval)->type=(yyvsp[-3])->type;
											  (yyval)->ctype=(yyvsp[-5])->ctype;
											  (yyval)->field=(yyvsp[-3]);
											  (yyval)->Gentry=(yyvsp[-5])->Gentry;
											  (yyvsp[-3])->left=(yyvsp[-1]); }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 370 "expl.y" /* yacc.c:1646  */
    { tnode *tmp;
											  MemberFuncList *mfunc;
											  tmp=(yyvsp[-5]);
											  tmp=tmp->field;
											  if(tmp->field!=NULL){
												  fprintf(stderr,"error %d : illegal member function access\n",line);
												  exit(1);
											  }
											  mfunc=checkMemberFunc(tmp->ctype, (yyvsp[-3])->varname, (yyvsp[-1]));
											  (yyvsp[-5])->nodetype=FIELDFUNCTION;
											  (yyval)=(yyvsp[-5]);
											  (yyvsp[-3])->type=mfunc->type;
											  argcheck((yyvsp[-3])->varname, (yyvsp[-1]), mfunc->paramlist, 1);
											  (yyval)->type=(yyvsp[-3])->type;
											  
											  tmp->field=(yyvsp[-3]);
											  (yyvsp[-3])->left=(yyvsp[-1]);
											}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2518 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 389 "expl.y" /* yacc.c:1906  */


int yyerror(char const *s){
	fprintf(stderr,"error, %d : %s\n",line,s);
	return 1;
}

void createSymbolTableEntry(tnode *t){
		int r=1,c=1, l=1;
		Gsymbol *p;
		if(t->left)
			r=t->left->val;
		if(t->right)
			c=t->right->val;
		if(currtype==TLookup("tuple")){
			TupleList *list=paramlist;
			int size=0;
			while(list!=NULL){
				size++;
				list=list->next;
			}
			r=size;
		}
		if(declclass!=NULL){
			Install(t->varname,currtype,2,r,c,NULL,-1);
		}
		else
			Install(t->varname,currtype,r*c,r,c,NULL,-1);
		//printf("%s %d\n",t->varname,t->nodetype);
		p=Lookup(t->varname);
		if(t->nodetype == POINTER){
			p->pointer=1;
		}
		else
			p->pointer=0;
		
		if(currtype==TLookup("tuple")){
			p->tuplelist=paramlist;
		}
		else
			p->tuplelist=NULL;
		free(t);
}

void createParamNode(TypeTable *type, char *name, int nodetype){
	param *tmp, *newnode;
	newnode=(param *)malloc(sizeof(param));
	newnode->type=type;
	newnode->name=(char *)malloc((strlen(name)+1)*sizeof(char));
	strcpy(newnode->name,name);
	if(nodetype==POINTER)
		newnode->pointer=1;
	else
		newnode->pointer=0;
	parameter=newnode;
}

void addParam(param *p){
	if(p==NULL){
		yyerror("parameter error");
		exit(1);
	}
	p->next=paramlist;
	paramlist=p;
}

void createLsymbolEntries(param *p){
	param *tmp;
	Lsymbol *lsymbol;
	int binding=-2;
	tmp=p;
	while(tmp!=NULL){
		tmp=tmp->next;
		binding--;
	}
	if(currclass!=NULL){
		binding-=2;
		lsymbol=LInstall("self", NULL, binding, 0);
		binding+=2;
	}
	while(p!=NULL){
		lsymbol=LInstall(p->name, p->type,binding, p->pointer);
		binding=binding+1;
		p=p->next;
	}
}

void paramcheck(char *fname){
	Gsymbol *p;
	param *decl,*decl2, *def;
	MemberFuncList *mfunc;
	int count1,count2;
	count1=0;
	if(currclass==NULL){
		p=Lookup(fname);
		if(p==NULL){
			yyerror("Undeclared Function");
			exit(1);
		}
		
		decl2=p->paramlist;
	}else{
		mfunc=currclass->vfuncptr;
		while(mfunc!=NULL){
			if(!strcmp(mfunc->name, fname) && hasSameSignature(mfunc->paramlist,paramlist))
				break;
			mfunc=mfunc->next;
		}
		if(mfunc==NULL){
			fprintf(stderr,"error, %d: Undeclared function %s inside class %s\n",line,fname,currclass->name);
			exit(1);
		}
		decl2=mfunc->paramlist;
	}
	decl=decl2;
	while(decl!=NULL){
		count1++;
		decl=decl->next;
	}
	def=paramlist;
	count2=0;
	while(def!=NULL){
		count2++;
		def=def->next;
	}
	if(count1!=count2){
		yyerror("Parameters count mismatch with declaration");
		exit(1);
	}
	def=paramlist;
	decl=decl2;
	while(def!=NULL && decl!=NULL){
		if(def->type != decl->type || def->pointer!=decl->pointer){
			yyerror("Parameter Type mismatch with declaration");
			exit(1);
		}
		if(strcmp(def->name, decl->name)){
			yyerror("Parameter name mismatch with declaration");
			exit(1);
		}
		def=def->next;
		decl=decl->next;
	}
}

void argcheck(char *fname, tnode *t, param *paramlist, int flag){
	Gsymbol *p;
	tnode *tmp;
	param *decl, *decl2;
	int count1, count2;
	if(flag==0){
		p=Lookup(fname);
		if(p==NULL){
			yyerror("Undeclared Function");
			exit(1);
		}
		decl2=p->paramlist;
	}else
		decl2=paramlist;
	decl=decl2;
	count1=0;
	while(decl!=NULL){
		count1++;
		decl=decl->next;
	}
	count2=0;
	tmp=t;
	while(tmp!=NULL){
		count2++;
		tmp=tmp->middle;
	}
	if(count1 != count2){
		yyerror("Arguments count mismatch with function definition");
		exit(1);
	}
	tmp=t;
	decl=decl2;
	
	while(tmp!=NULL && decl!=NULL){
		if(tmp->type != decl->type){
			yyerror("Argument type mismatch with definition");
			exit(1);
		}
		if(decl->pointer==1){
			if(!(tmp->nodetype==ADDR) && !(tmp->nodetype== VAR && tmp->Gentry->pointer==1)){
				yyerror("Arguments type mismatch with definition pointer declaration");
				exit(1);
			}
		}
		tmp=tmp->middle;
		decl=decl->next;
	}
}

void addfield(){
	FieldList *tmp=fieldlist;
	while(tmp!=NULL){
		if(!strcmp(tmp->name,field->name)){
			yyerror("Field Redeclared in type declaration");
			exit(1);
		}
		tmp=tmp->next;
	}
	field->fieldIndex=fieldlist->fieldIndex+1; 
	field->next=fieldlist; 
	fieldlist=field;
	field=NULL;
}

MemberFuncList *checkMemberFunc(ClassTable *class, char *name, tnode *arg){
	MemberFuncList *mfunc=NULL;
	if(class==NULL){
		fprintf(stderr,"error, %d : Member functions can only be accessed through class variables\n",line);
		exit(1);
	}
	mfunc=class->vfuncptr;
	while(mfunc!=NULL){
		if(!strcmp(mfunc->name,name) && hasSameSignatureArg(mfunc->paramlist, arg))
			break;
		mfunc=mfunc->next;
	}
	if(mfunc==NULL){
		fprintf(stderr,"error, %d : Member function %s not defined inside %s class\n",line,name,class->name);
		exit(1);
	}
	return mfunc;
}
