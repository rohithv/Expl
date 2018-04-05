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
void argcheck(char *, tnode *);
void paramcheck(char *);


#line 82 "y.tab.c" /* yacc.c:339  */

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
    TUPLE = 298
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

#line 219 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      45,    46,     2,     2,    47,     2,    52,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    25,    26,    29,    30,    33,    34,    37,
      38,    41,    43,    44,    47,    48,    52,    53,    56,    65,
      66,    67,    70,    72,    74,    75,    76,    79,    80,    83,
      85,    86,    89,    91,    93,   102,   103,   107,   108,   109,
     110,   111,   112,   113,   114,   117,   120,   122,   124,   125,
     128,   130,   132,   134,   135,   136,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   162,   163,   166,   169,
     171,   174,   175,   177,   180,   201
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
  "NOTTK", "TUPLE", "';'", "'('", "')'", "','", "'{'", "'}'", "'['", "']'",
  "'.'", "$accept", "Program", "GDeclBlock", "GDeclList", "GDecl", "Tuple",
  "GidList", "Gid", "FDefBlock", "FDef", "ParamList", "Param", "Type",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "Body", "RetStmt",
  "MainBlock", "Slist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt",
  "IfStmt", "WhileStmt", "DoWhileStmt", "UntilStmt", "PlainStmt", "expr",
  "ArgList", "Iden", "Id1", "Field", YY_NULLPTR
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
     295,   296,   297,   298,    59,    40,    41,    44,   123,   125,
      91,    93,    46
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,  -109,    -5,     3,    12,   -24,  -109,  -109,  -109,    -4,
    -109,    31,    33,  -109,    12,  -109,    -7,  -109,    13,  -109,
    -109,    43,    35,     7,   -19,  -109,  -109,    49,    45,  -109,
    -109,    56,    60,    12,  -109,   160,    90,  -109,    33,    12,
      96,    12,    61,    30,  -109,    39,  -109,  -109,   -30,    33,
     160,   160,   114,  -109,  -109,  -109,  -109,    36,  -109,    44,
      78,    33,    12,    62,  -109,   100,  -109,    47,   193,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,    65,  -109,    68,    -2,   110,    28,  -109,  -109,   388,
      46,  -109,    92,    92,  -109,  -109,    47,    47,    47,    47,
      47,    47,    47,    47,   160,    78,  -109,    39,     1,  -109,
     505,    75,  -109,  -109,   160,   176,   110,    37,  -109,  -109,
    -109,    80,    81,    82,    83,   505,   104,   105,   107,   505,
     406,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
     135,  -109,   388,  -109,   103,  -109,    39,   160,    33,   160,
     160,   517,  -109,  -109,  -109,   431,   160,   139,  -109,   160,
    -109,  -109,   230,   111,   246,   283,   115,   160,   336,  -109,
     342,   112,   117,   137,   136,   160,   382,  -109,  -109,  -109,
    -109,   505,   505,   299,  -109,   443,   468,    -8,   505,   124,
     127,  -109,   480,  -109,  -109,   131,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,     0,     0,     0,     0,     4,     6,    11,     0,
       8,     0,     0,     1,     0,    17,     0,     3,     0,     5,
       7,     0,     0,    81,     0,    13,    14,    80,    83,    16,
       2,     0,     0,    21,    82,     0,     0,     9,     0,    21,
       0,    21,     0,     0,    20,     0,    70,    71,    81,     0,
       0,     0,     0,    72,    80,    84,    12,     0,    85,     0,
      26,     0,     0,    81,    22,     0,    73,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    15,     0,     0,     0,     0,    19,    74,    77,
       0,    60,    56,    57,    58,    59,    65,    66,    61,    62,
      63,    64,    67,    68,     0,    26,    25,     0,     0,    28,
       0,     0,    10,    75,     0,     0,     0,     0,    31,    24,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    34,    76,    79,     0,    29,     0,     0,     0,     0,
       0,     0,    54,    55,    53,     0,     0,     0,    35,     0,
      18,    30,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    33,    47,    46,
      45,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,    51,     0,    49,    50,     0,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,   168,  -109,   118,   140,  -109,   171,
      48,   125,     2,    84,  -109,    95,  -109,    70,  -109,     5,
    -108,  -107,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
      -9,  -109,   -12,   -11,  -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    10,    11,    24,    25,    14,    15,
      43,    44,    45,    85,   108,   109,   117,   111,   157,     6,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      52,    90,    53,    54,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    27,     5,    13,    12,    31,    16,     1,     1,    17,
       1,    12,     1,     1,    18,    65,    16,   151,   182,    30,
      35,   155,    36,   158,     1,    37,    26,    27,    38,     7,
      19,    18,   106,     2,    64,   119,   191,    66,     8,     8,
      22,    67,    68,    21,   158,    23,    22,    34,   158,    26,
      27,    63,    69,    70,    71,    72,    89,    35,    32,    36,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   112,   185,   186,    38,    61,    62,   158,   158,
     192,   145,    82,    62,   146,   158,   107,    57,    33,    59,
      83,    62,   113,   114,    39,   115,   118,    40,   140,    71,
      72,    41,    55,    46,    47,   142,    42,    22,    58,    60,
     107,    84,    48,   140,    36,   104,   105,   140,   140,    69,
      70,    71,    72,   110,   141,   147,   148,   149,   150,    73,
      74,    75,    76,    77,    78,   161,   163,    49,   162,   140,
     164,   165,    50,   140,   159,    51,    88,   168,   152,   153,
     170,   154,   160,   169,    79,    80,   179,   172,   176,   181,
     175,   180,   182,    46,    47,    81,   183,    22,   193,   140,
     140,   194,    48,   140,   140,   196,   140,    20,    56,    86,
     140,    69,    70,    71,    72,    29,   144,    87,     0,   116,
       0,    73,    74,    75,    76,    77,    78,    49,    69,    70,
      71,    72,    50,   120,     0,    51,     0,     0,    73,    74,
      75,    76,    77,    78,     0,     0,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,     0,    79,    80,    69,    70,    71,    72,    91,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
      79,    80,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    69,    70,
      71,    72,   173,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,     0,    79,    80,     0,     0,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    69,    70,    71,    72,   187,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    73,    74,    75,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,     0,     0,
     177,     0,    79,    80,     0,     0,   178,    69,    70,    71,
      72,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    73,    74,    75,    76,    77,    78,     0,
       0,     0,     0,    22,     0,     0,   121,   122,    23,     0,
       0,     0,    79,    80,     0,     0,   184,   123,    79,    80,
       0,   124,   125,     0,   126,   127,   128,   129,    22,     0,
       0,   121,   122,    23,     0,   156,     0,     0,     0,     0,
      22,     0,   123,   121,   122,    23,   124,   125,     0,   126,
     127,   128,   129,   167,   123,     0,   188,   189,   124,   125,
       0,   126,   127,   128,   129,    22,     0,     0,   121,   122,
      23,     0,     0,     0,     0,     0,     0,    22,     0,   123,
     121,   122,    23,   124,   125,   190,   126,   127,   128,   129,
       0,   123,     0,     0,   195,   124,   125,     0,   126,   127,
     128,   129,    22,     0,     0,   121,   122,    23,     0,     0,
       0,     0,     0,     0,    22,     0,   123,   121,   122,    23,
     124,   125,     0,   126,   127,   128,   129,     0,   123,     0,
       0,     0,   166,   125,     0,   126,   127,   128,   129
};

static const yytype_int16 yycheck[] =
{
      12,    12,     0,     0,     2,    12,     4,    12,    12,     4,
      12,     9,    12,    12,    38,    45,    14,   125,    26,    14,
      50,   129,    52,   130,    12,    44,    38,    38,    47,    34,
      34,    38,    34,    33,    45,    34,    44,    49,    43,    43,
       7,    50,    51,    12,   151,    12,     7,    12,   155,    61,
      61,    12,     5,     6,     7,     8,    65,    50,    45,    52,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    44,   181,   182,    47,    46,    47,   185,   186,
     188,    44,    46,    47,    47,   192,    84,    39,    45,    41,
      46,    47,    46,    47,    45,   104,   107,    52,   110,     7,
       8,    45,    12,     3,     4,   114,    46,     7,    12,    48,
     108,    33,    12,   125,    52,    50,    48,   129,   130,     5,
       6,     7,     8,    13,    49,    45,    45,    45,    45,    15,
      16,    17,    18,    19,    20,   146,   148,    37,   147,   151,
     149,   150,    42,   155,     9,    45,    46,   156,    44,    44,
     159,    44,    49,    14,    40,    41,    44,    46,   167,    22,
      45,    44,    26,     3,     4,    51,   175,     7,    44,   181,
     182,    44,    12,   185,   186,    44,   188,     9,    38,    61,
     192,     5,     6,     7,     8,    14,   116,    62,    -1,   105,
      -1,    15,    16,    17,    18,    19,    20,    37,     5,     6,
       7,     8,    42,   108,    -1,    45,    -1,    -1,    15,    16,
      17,    18,    19,    20,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    40,    41,     5,     6,     7,     8,    46,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,     5,     6,
       7,     8,    46,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,     5,     6,     7,     8,    46,    -1,     5,     6,     7,
       8,    15,    16,    17,    18,    19,    20,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      44,    -1,    40,    41,    -1,    -1,    44,     5,     6,     7,
       8,    -1,    -1,     5,     6,     7,     8,    15,    16,    17,
      18,    19,    20,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    -1,    40,    41,    -1,    -1,    44,    21,    40,    41,
      -1,    25,    26,    -1,    28,    29,    30,    31,     7,    -1,
      -1,    10,    11,    12,    -1,    39,    -1,    -1,    -1,    -1,
       7,    -1,    21,    10,    11,    12,    25,    26,    -1,    28,
      29,    30,    31,    32,    21,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    21,
      10,    11,    12,    25,    26,    27,    28,    29,    30,    31,
      -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      30,    31,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    21,    10,    11,    12,
      25,    26,    -1,    28,    29,    30,    31,    -1,    21,    -1,
      -1,    -1,    25,    26,    -1,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    33,    54,    55,    65,    72,    34,    43,    56,
      57,    58,    65,     0,    61,    62,    65,    72,    38,    34,
      57,    12,     7,    12,    59,    60,    85,    86,    87,    62,
      72,    12,    45,    45,    12,    50,    52,    44,    47,    45,
      52,    45,    46,    63,    64,    65,     3,     4,    12,    37,
      42,    45,    83,    85,    86,    12,    60,    63,    12,    63,
      48,    46,    47,    12,    86,    45,    85,    83,    83,     5,
       6,     7,     8,    15,    16,    17,    18,    19,    20,    40,
      41,    51,    46,    46,    33,    66,    59,    64,    46,    83,
      84,    46,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    50,    48,    34,    65,    67,    68,
      13,    70,    44,    46,    47,    83,    66,    69,    86,    34,
      68,    10,    11,    21,    25,    26,    28,    29,    30,    31,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      85,    49,    83,    51,    70,    44,    47,    45,    45,    45,
      45,    73,    44,    44,    44,    73,    39,    71,    74,     9,
      49,    86,    83,    85,    83,    83,    25,    32,    83,    14,
      83,    46,    46,    46,    46,    45,    83,    44,    44,    44,
      44,    22,    26,    83,    44,    73,    73,    46,    23,    24,
      27,    44,    73,    44,    44,    24,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      63,    63,    64,    65,    66,    66,    66,    67,    67,    68,
      69,    69,    70,    71,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    76,    77,    78,    78,
      79,    80,    81,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      85,    86,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       7,     1,     3,     1,     1,     4,     2,     1,     9,     3,
       1,     0,     2,     1,     3,     2,     0,     2,     1,     3,
       3,     1,     4,     3,     8,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     4,    10,     8,
       8,     7,     5,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     1,     2,     3,     4,     3,     1,     4,     7,
       1,     1,     2,     1,     3,     3
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
#line 29 "expl.y" /* yacc.c:1646  */
    { print_symbol_table(); }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 30 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 33 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 34 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 37 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; paramlist=NULL; }
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 41 "expl.y" /* yacc.c:1646  */
    { currtype = TLookup("tuple");}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 43 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 44 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 47 "expl.y" /* yacc.c:1646  */
    { createSymbolTableEntry((yyvsp[0])); }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 48 "expl.y" /* yacc.c:1646  */
    { Install((yyvsp[-3])->varname,currtype,0,0,0,paramlist,flabel++); /*currtype=NULL*/; paramlist=NULL;
								if((yyvsp[-3])->nodetype==POINTER){ Gsymbol *p= Lookup((yyvsp[-3])->varname); p->pointer=1; }}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "expl.y" /* yacc.c:1646  */
    {  }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "expl.y" /* yacc.c:1646  */
    {  }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 56 "expl.y" /* yacc.c:1646  */
    { //createLsymbolEntries(paramlist);  
															paramcheck((yyvsp[-7])->varname);
															print_local_table();
															CodeGenerate((yyvsp[-1]), (yyvsp[-7])->varname);
															initialize_local_table();
															paramlist=NULL;
															
															}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "expl.y" /* yacc.c:1646  */
    { addParam(parameter); parameter=NULL; }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "expl.y" /* yacc.c:1646  */
    { addParam(parameter), parameter=NULL; }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "expl.y" /* yacc.c:1646  */
    { /* No Action */ }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "expl.y" /* yacc.c:1646  */
    { createParamNode((yyvsp[-1])->type,(yyvsp[0])->varname,(yyvsp[0])->nodetype); currtype=oldtype; }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 72 "expl.y" /* yacc.c:1646  */
    { oldtype=currtype; currtype=TLookup((yyvsp[0])->varname); (yyval)=createTree(0,currtype,(yyvsp[0])->varname,TYPE,NULL,NULL,NULL); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 74 "expl.y" /* yacc.c:1646  */
    { /* No Action */createLsymbolEntries(paramlist);   }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 75 "expl.y" /* yacc.c:1646  */
    { /* No Action */createLsymbolEntries(paramlist);   }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 76 "expl.y" /* yacc.c:1646  */
    { createLsymbolEntries(paramlist);   }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 79 "expl.y" /* yacc.c:1646  */
    {  /* No Action */ }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "expl.y" /* yacc.c:1646  */
    {  /* No Action */ }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "expl.y" /* yacc.c:1646  */
    { currtype=NULL; }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 85 "expl.y" /* yacc.c:1646  */
    { LInstall((yyvsp[0])->varname, currtype,local_binding++, (yyvsp[0])->nodetype==POINTER ? 1 : 0); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "expl.y" /* yacc.c:1646  */
    { LInstall((yyvsp[0])->varname, currtype,local_binding++, (yyvsp[0])->nodetype==POINTER ? 1 : 0); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,CONN,(yyvsp[-2]),NULL,(yyvsp[-1])); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,(yyvsp[-1])->type,NULL,RET, (yyvsp[-1]), NULL, NULL); }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 93 "expl.y" /* yacc.c:1646  */
    { if((yyvsp[-7])->type != TLookup("int")){
																yyerror("Function Main expects integer return type");
																exit(1);
															}
														print_local_table();
														CodeGenerate((yyvsp[-1]), "main");
														initialize_local_table();
														paramlist=NULL;}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,CONN,(yyvsp[-1]),NULL,(yyvsp[0]));}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 117 "expl.y" /* yacc.c:1646  */
    {typecheck((yyvsp[-2])); (yyval)=createTree(0,NULL,NULL,READOP,(yyvsp[-2]),NULL,NULL);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,WRITEOP,(yyvsp[-2]),NULL,NULL);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "expl.y" /* yacc.c:1646  */
    {typecheck((yyvsp[-3])); (yyval)=createTree(0,NULL,NULL,ASS,(yyvsp[-3]),NULL,(yyvsp[-1]));}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,IFSTMT,(yyvsp[-7]),(yyvsp[-4]),(yyvsp[-2]));}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,IFSTMT,(yyvsp[-5]),(yyvsp[-2]),NULL);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,WHILESTMT,(yyvsp[-5]),NULL,(yyvsp[-2]));}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,DOWHILESTMT,(yyvsp[-5]),NULL,(yyvsp[-2])); }
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 132 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,NULL,NULL,UNTILSTMT,(yyvsp[-3]),NULL,(yyvsp[-1])); }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,BRKP,NULL,NULL,NULL);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 135 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,BREAK,NULL,NULL,NULL);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,NULL,NULL,CONTINUE,NULL,NULL,NULL);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 139 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,PLUSOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 140 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,MINUSOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,MULOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("int"),NULL,DIVOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 143 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 144 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,LTOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 145 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,GTOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 146 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,LEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 147 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,GEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 148 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,EQOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "expl.y" /* yacc.c:1646  */
    {(yyval)=createTree(0,TLookup("bool"),NULL,NEOP,(yyvsp[-2]),NULL,(yyvsp[0]));}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,AND,(yyvsp[-2]),NULL,(yyvsp[0])); }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,OR,(yyvsp[-2]),NULL,(yyvsp[0])); }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree(0,TLookup("bool"),NULL,NOT,(yyvsp[0]),NULL,NULL); }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "expl.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); typecheck((yyval));}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "expl.y" /* yacc.c:1646  */
    { typecheck((yyvsp[0])); (yyval)=createTree((yyvsp[0])->val,(yyvsp[0])->type,(yyvsp[0])->varname,ADDR,(yyvsp[0])->left,(yyvsp[0])->middle,(yyvsp[0])->right); free((yyvsp[0])); }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[-2])->val, NULL,(yyvsp[-2])->varname, FUNCTION, NULL, NULL, NULL); free((yyvsp[-2])); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "expl.y" /* yacc.c:1646  */
    {  argcheck((yyvsp[-3])->varname, (yyvsp[-1]));
							(yyval)=createTree((yyvsp[-3])->val, NULL,(yyvsp[-3])->varname, FUNCTION, (yyvsp[-1]), NULL, NULL); free((yyvsp[-3])); }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "expl.y" /* yacc.c:1646  */
    { (yyvsp[0])->middle=(yyvsp[-2]); (yyval)=(yyvsp[0]); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[-1])->val,(yyvsp[-3])->type,(yyvsp[-3])->varname,(yyvsp[-3])->nodetype,(yyvsp[-1]),(yyvsp[-3])->middle,(yyvsp[-3])->right); //typecheck($$);
				//free($3);
				free((yyvsp[-3])); }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[-4])->val,(yyvsp[-6])->type,(yyvsp[-6])->varname,(yyvsp[-6])->nodetype,(yyvsp[-4]),(yyvsp[-6])->middle,(yyvsp[-1])); //typecheck($$);
									free((yyvsp[-6]));}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 171 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 174 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 175 "expl.y" /* yacc.c:1646  */
    { (yyval)=createTree((yyvsp[0])->val,(yyvsp[0])->type,(yyvsp[0])->varname,POINTER,(yyvsp[0])->left,(yyvsp[0])->middle,(yyvsp[0])->right);
				free((yyvsp[0])); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "expl.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "expl.y" /* yacc.c:1646  */
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
				  }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 201 "expl.y" /* yacc.c:1646  */
    {  }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2022 "y.tab.c" /* yacc.c:1646  */
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
#line 203 "expl.y" /* yacc.c:1906  */


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
	int binding=-2;
	tmp=p;
	while(tmp!=NULL){
		tmp=tmp->next;
		binding--;
	}
	while(p!=NULL){
		LInstall(p->name, p->type,binding, p->pointer);
		binding=binding+1;
		p=p->next;
	}
}

void paramcheck(char *fname){
	Gsymbol *p;
	param *decl, *def;
	int count1,count2;
	p=Lookup(fname);
	if(p==NULL){
		yyerror("Undeclared Function");
		exit(1);
	}
	count1=0;
	decl=p->paramlist;
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
	decl=p->paramlist;
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

void argcheck(char *fname, tnode *t){
	Gsymbol *p;
	tnode *tmp;
	param *decl;
	int count1, count2;
	p=Lookup(fname);
	if(p==NULL){
		yyerror("Undeclared Function");
		exit(1);
	}
	tmp=t;
	decl=p->paramlist;
	count1=0;
	while(decl!=NULL){
		count1++;
		decl=decl->next;
	}
	count2=0;
	while(tmp!=NULL){
		count2++;
		tmp=tmp->middle;
	}
	if(count1 != count2){
		yyerror("Arguments count mismatch with function definition");
		exit(1);
	}
	tmp=t;
	decl=p->paramlist;
	
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

