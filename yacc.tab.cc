/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FILENAME = 258,
     NUMBER = 259,
     NAME = 260,
     STRING = 261,
     SYS_AND = 262,
     CHAR = 263,
     CMD_FINISH = 264,
     CREATE = 265,
     DELETE = 266,
     DROP = 267,
     ERRORTOKEN = 268,
     EXECFILE = 269,
     FLOAT = 270,
     FROM = 271,
     INDEX = 272,
     INSERT = 273,
     INTEGER = 274,
     INTO = 275,
     KEY = 276,
     ON = 277,
     OR = 278,
     PRIMARY = 279,
     SHOW = 280,
     SELECT = 281,
     TABLE = 282,
     TABLES_IN_SHOW = 283,
     UNIQUE = 284,
     VALUES = 285,
     QUIT = 286,
     WHERE = 287,
     EQ = 288,
     NEQ = 289,
     LT = 290,
     GT = 291,
     LE = 292,
     GE = 293
   };
#endif
/* Tokens.  */
#define FILENAME 258
#define NUMBER 259
#define NAME 260
#define STRING 261
#define SYS_AND 262
#define CHAR 263
#define CMD_FINISH 264
#define CREATE 265
#define DELETE 266
#define DROP 267
#define ERRORTOKEN 268
#define EXECFILE 269
#define FLOAT 270
#define FROM 271
#define INDEX 272
#define INSERT 273
#define INTEGER 274
#define INTO 275
#define KEY 276
#define ON 277
#define OR 278
#define PRIMARY 279
#define SHOW 280
#define SELECT 281
#define TABLE 282
#define TABLES_IN_SHOW 283
#define UNIQUE 284
#define VALUES 285
#define QUIT 286
#define WHERE 287
#define EQ 288
#define NEQ 289
#define LT 290
#define GT 291
#define LE 292
#define GE 293




/* Copy the first part of user declarations.  */
#line 1 "yacc.yy"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Database.h"

extern int yylex(void);
extern char *yytext;
extern FILE *yyin;
extern int yyBatchFlag;

#ifdef SHOW_TIME
	extern clock_t clk_start;
#endif

/* Error Processing */
#define ErrorTokenLength 100
int ErrorFlag;
char ErrorToken [ErrorTokenLength];

int yyerror(NodeManager *YYAST, const char* str)
{
	/* dummy */
	return 0;
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 31 "yacc.yy"
{
	char *strval;
	Node *treeNode;
	/* warning: use double? */
	double numval;
}
/* Line 193 of yacc.c.  */
#line 207 "yacc.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 220 "yacc.tab.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   117

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,    43,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    15,    19,    22,    27,
      31,    34,    36,    40,    42,    44,    46,    48,    50,    57,
      66,    68,    70,    72,    74,    78,    80,    82,    86,    88,
      93,    95,    97,    98,   101,   103,   109,   113,   117,   123,
     124,   127,   129,   133,   137,   141,   143,   145,   147,   149,
     151,   153,   159,   163,   169,   171,   175,   177,   179,   184,
     186
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    45,    46,    -1,    31,     9,
      -1,    14,     3,     9,    -1,    25,    28,     9,    -1,    47,
       9,    -1,    47,    39,    70,     9,    -1,    47,    70,     9,
      -1,    70,     9,    -1,    48,    -1,    47,    39,    48,    -1,
      49,    -1,    59,    -1,    60,    -1,    65,    -1,    69,    -1,
      10,    27,    50,    40,    53,    41,    -1,    10,    17,    51,
      22,    50,    40,    52,    41,    -1,     5,    -1,     5,    -1,
       5,    -1,    54,    -1,    53,    42,    54,    -1,    55,    -1,
      58,    -1,     5,    56,    57,    -1,     8,    -1,     8,    40,
       4,    41,    -1,    19,    -1,    15,    -1,    -1,    24,    21,
      -1,    29,    -1,    24,    21,    40,     5,    41,    -1,    12,
      27,    50,    -1,    12,    17,    51,    -1,    26,    43,    16,
      50,    61,    -1,    -1,    32,    62,    -1,    63,    -1,    62,
       7,    63,    -1,    68,    64,    52,    -1,    52,    64,    68,
      -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    18,    20,    50,    30,    66,    -1,    40,
      67,    41,    -1,    66,    42,    40,    67,    41,    -1,    68,
      -1,    67,    42,    68,    -1,     6,    -1,     4,    -1,    11,
      16,    50,    61,    -1,     1,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    90,    93,    99,   118,   123,   132,   137,
     143,   160,   164,   171,   172,   173,   174,   175,   180,   187,
     198,   207,   216,   225,   226,   234,   235,   239,   252,   258,
     264,   269,   279,   282,   286,   293,   306,   311,   323,   333,
     334,   341,   342,   352,   359,   368,   373,   378,   383,   388,
     393,   405,   415,   419,   429,   430,   438,   444,   456,   470,
     482
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FILENAME", "NUMBER", "NAME", "STRING",
  "SYS_AND", "CHAR", "CMD_FINISH", "CREATE", "DELETE", "DROP",
  "ERRORTOKEN", "EXECFILE", "FLOAT", "FROM", "INDEX", "INSERT", "INTEGER",
  "INTO", "KEY", "ON", "OR", "PRIMARY", "SHOW", "SELECT", "TABLE",
  "TABLES_IN_SHOW", "UNIQUE", "VALUES", "QUIT", "WHERE", "EQ", "NEQ", "LT",
  "GT", "LE", "GE", "';'", "'('", "')'", "','", "'*'", "$accept",
  "stmt_list", "stmt", "sql_list", "sql", "create", "table_name",
  "index_name", "column_name", "create_table_element_list",
  "create_table_element", "column_def", "data_type", "column_def_opt",
  "table_constraint_def", "drop", "select", "opt_where", "expr_list",
  "expr", "comparison", "insert", "insert_val_list", "column_value_list",
  "column_value", "delete", "error_statment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    59,
      40,    41,    44,    42
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    46,    46,    46,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    49,    49,
      50,    51,    52,    53,    53,    54,    54,    55,    56,    56,
      56,    56,    57,    57,    57,    58,    59,    59,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    65,    66,    66,    67,    67,    68,    68,    69,    70,
      70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     3,     2,     4,     3,
       2,     1,     3,     1,     1,     1,     1,     1,     6,     8,
       1,     1,     1,     1,     3,     1,     1,     3,     1,     4,
       1,     1,     0,     2,     1,     5,     3,     3,     5,     0,
       2,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     5,     3,     5,     1,     3,     1,     1,     4,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     2,     0,    11,    13,    14,    15,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     1,     3,     7,     0,     0,    10,    21,     0,    20,
       0,    39,    37,    36,     5,     0,     6,     0,    12,     0,
       9,     0,     0,     0,    58,     0,    39,     8,     0,     0,
       0,     0,    23,    25,    26,    57,    22,    56,     0,    40,
      41,     0,     0,    51,    38,     0,    28,    31,    30,    32,
       0,    18,     0,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,    54,     0,     0,     0,     0,    34,    27,
       0,    24,    44,    42,    43,    52,     0,     0,    19,     0,
      33,     0,    55,     0,    29,    35,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,    40,    38,    68,    61,
      62,    63,    79,    99,    64,    16,    17,    54,    69,    70,
      89,    18,    73,    92,    71,    19,    20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int8 yypact[] =
{
      29,   -72,    -8,    -9,    10,   -72,     2,    36,   -17,    33,
      69,     3,   -72,    -1,   -72,   -72,   -72,   -72,   -72,   -72,
      70,    75,    76,    76,    75,    76,    73,    76,    74,    68,
     -72,   -72,   -72,   -72,    51,    77,   -72,   -72,    63,   -72,
      47,    56,   -72,   -72,   -72,    59,   -72,    76,   -72,    81,
     -72,    76,     1,    27,   -72,    52,    56,   -72,    53,    38,
      78,    17,   -72,   -72,   -72,   -72,   -72,   -72,    37,    84,
     -72,    37,    45,    54,   -72,    89,    55,   -72,   -72,    21,
      57,   -72,     1,   -72,   -72,   -72,   -72,   -72,   -72,    45,
      27,    89,    24,   -72,    58,    60,    96,    82,   -72,   -72,
      97,   -72,   -72,   -72,   -72,   -72,    45,    45,   -72,    64,
     -72,    65,   -72,    26,   -72,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,    93,   -72,    79,   -72,    -3,    83,   -65,   -72,
      28,   -72,   -72,   -72,   -72,   -72,   -72,    61,   -72,    18,
      40,   -72,   -72,     5,   -71,   -72,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       1,    93,    35,    31,     1,    26,    59,    23,    33,    21,
      95,    28,     5,     2,     3,     4,     5,     6,   102,    22,
      41,     7,    43,    49,    45,    60,   104,    24,     8,     9,
       1,    65,    66,    67,    10,   112,    93,    25,    34,     2,
       3,     4,     5,     6,    56,    97,    76,     7,    58,    65,
      98,    67,     1,    77,     8,     9,    27,    78,    81,    82,
      10,     2,     3,     4,     5,   105,   106,   116,   106,     7,
      83,    84,    85,    86,    87,    88,    29,     9,    30,    36,
      37,    39,    44,    46,    47,    51,    50,    52,    53,    55,
      57,    90,    72,    75,    66,    96,    94,   100,   107,    80,
     109,   108,   111,   110,    32,   114,   115,    42,   103,     0,
     101,    91,   113,    48,     0,     0,     0,    74
};

static const yytype_int8 yycheck[] =
{
       1,    72,    13,     0,     1,     3,     5,    16,     9,    17,
      75,    28,    13,    10,    11,    12,    13,    14,    89,    27,
      23,    18,    25,    34,    27,    24,    91,    17,    25,    26,
       1,     4,     5,     6,    31,   106,   107,    27,    39,    10,
      11,    12,    13,    14,    47,    24,     8,    18,    51,     4,
      29,     6,     1,    15,    25,    26,    20,    19,    41,    42,
      31,    10,    11,    12,    13,    41,    42,    41,    42,    18,
      33,    34,    35,    36,    37,    38,    43,    26,     9,     9,
       5,     5,     9,     9,    16,    22,     9,    40,    32,    30,
       9,     7,    40,    40,     5,    40,    42,    40,    40,    21,
       4,    41,     5,    21,    11,    41,    41,    24,    90,    -1,
      82,    71,   107,    34,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    10,    11,    12,    13,    14,    18,    25,    26,
      31,    45,    46,    47,    48,    49,    59,    60,    65,    69,
      70,    17,    27,    16,    17,    27,     3,    20,    28,    43,
       9,     0,    46,     9,    39,    70,     9,     5,    51,     5,
      50,    50,    51,    50,     9,    50,     9,    16,    48,    70,
       9,    22,    40,    32,    61,    30,    50,     9,    50,     5,
      24,    53,    54,    55,    58,     4,     5,     6,    52,    62,
      63,    68,    40,    66,    61,    40,     8,    15,    19,    56,
      21,    41,    42,    33,    34,    35,    36,    37,    38,    64,
       7,    64,    67,    68,    42,    52,    40,    24,    29,    57,
      40,    54,    68,    63,    52,    41,    42,    40,    41,     4,
      21,     5,    68,    67,    41,    41,    41
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YYAST, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, YYAST); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class NodeManager *YYAST)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, YYAST)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class NodeManager *YYAST;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (YYAST);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class NodeManager *YYAST)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, YYAST)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class NodeManager *YYAST;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, YYAST);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, class NodeManager *YYAST)
#else
static void
yy_reduce_print (yyvsp, yyrule, YYAST)
    YYSTYPE *yyvsp;
    int yyrule;
    class NodeManager *YYAST;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , YYAST);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, YYAST); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, class NodeManager *YYAST)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, YYAST)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    class NodeManager *YYAST;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (YYAST);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (class NodeManager *YYAST);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (class NodeManager *YYAST)
#else
int
yyparse (YYAST)
    class NodeManager *YYAST;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 94 "yacc.yy"
    { 
				/* !!!cleaning!!! */
				printf("Bye!\n");
				return 0; 
			;}
    break;

  case 5:
#line 100 "yacc.yy"
    {
				/* clear yyin buffer? */
				yyin = fopen((yyvsp[(2) - (3)].strval), "r");
				if (yyin == NULL)
				{
					fprintf(stderr, "Error: unable to open file \"%s\"\n", (yyvsp[(2) - (3)].strval));
					MINISQL_PROMPT1();
					yyin = stdin;
				}
				else 
				{
					#ifdef SHOW_TIME
					clk_start = clock();
					#endif
					yyBatchFlag = 1;
				}
				delete ((yyvsp[(2) - (3)].strval));
			;}
    break;

  case 6:
#line 119 "yacc.yy"
    {
				Database::getInstance()->show_tables();
				MINISQL_PROMPT1();
			;}
    break;

  case 7:
#line 124 "yacc.yy"
    {
				/* do something! */
				Database::getInstance()->processAST();
				if (yyBatchFlag)
					putchar('\n');
				else
					MINISQL_PROMPT1();
			;}
    break;

  case 8:
#line 133 "yacc.yy"
    {
				Database::getInstance()->processAST();
				goto processErrorToken;
			;}
    break;

  case 9:
#line 138 "yacc.yy"
    {
				YYAST->delLastRootNode();
				Database::getInstance()->processAST();
				goto processErrorToken;
			;}
    break;

  case 10:
#line 144 "yacc.yy"
    {
				processErrorToken:
				fprintf(stderr ,"Error: near \"%s\": syntax error\n", ErrorToken);
				YYAST->clean();
				ErrorFlag = 0;
				yyclearin;
				yyerrok;

				if (yyBatchFlag)
					putchar('\n');
				else
					MINISQL_PROMPT1();
			;}
    break;

  case 11:
#line 161 "yacc.yy"
    {
				YYAST->setRootNode((yyvsp[(1) - (1)].treeNode));
			;}
    break;

  case 12:
#line 165 "yacc.yy"
    {
				YYAST->setRootNode((yyvsp[(3) - (3)].treeNode));
			;}
    break;

  case 18:
#line 181 "yacc.yy"
    {
				(yyvsp[(3) - (6)].treeNode)->operation = OP_CREATE_TABLE;
				(yyvsp[(3) - (6)].treeNode)->rightSon = (yyvsp[(5) - (6)].treeNode);
				(yyvsp[(3) - (6)].treeNode)->leftSon = (yyvsp[(5) - (6)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (6)].treeNode);
			;}
    break;

  case 19:
#line 188 "yacc.yy"
    {
				(yyvsp[(3) - (8)].treeNode)->operation = OP_CREATE_INDEX;
				(yyvsp[(3) - (8)].treeNode)->leftSon = (yyvsp[(5) - (8)].treeNode);
				(yyvsp[(3) - (8)].treeNode)->rightSon = (yyvsp[(7) - (8)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (8)].treeNode);
			;}
    break;

  case 20:
#line 199 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->strval = (yyvsp[(1) - (1)].strval);
				(yyval.treeNode)->operation = VAL_NAME;
			;}
    break;

  case 21:
#line 208 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->strval = (yyvsp[(1) - (1)].strval);
				(yyval.treeNode)->operation = VAL_NAME;
			;}
    break;

  case 22:
#line 217 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->strval = (yyvsp[(1) - (1)].strval);
				(yyval.treeNode)->operation = VAL_NAME;
			;}
    break;

  case 24:
#line 227 "yacc.yy"
    {
				(yyvsp[(3) - (3)].treeNode)->leftSon = (yyvsp[(1) - (3)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 27:
#line 240 "yacc.yy"
    {
				(yyval.treeNode) = (yyvsp[(2) - (3)].treeNode);
				(yyval.treeNode)->strval = (yyvsp[(1) - (3)].strval);
				if ((yyvsp[(3) - (3)].numval) != 0)
				{
					(yyval.treeNode)->rightSon = YYAST->newEmptyNode();
					(yyval.treeNode)->rightSon->operation = (yyvsp[(3) - (3)].numval);
				}
			;}
    break;

  case 28:
#line 253 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = VAL_CHAR;
				(yyval.treeNode)->numval = 2;
			;}
    break;

  case 29:
#line 259 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = VAL_CHAR;
				(yyval.treeNode)->numval = (yyvsp[(3) - (4)].numval)+1;
			;}
    break;

  case 30:
#line 265 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = VAL_INT;
			;}
    break;

  case 31:
#line 271 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = VAL_FLOAT;
			;}
    break;

  case 32:
#line 279 "yacc.yy"
    {
				(yyval.numval) = 0;
			;}
    break;

  case 33:
#line 283 "yacc.yy"
    {
				(yyval.numval) = DEF_PRIMARY;
			;}
    break;

  case 34:
#line 287 "yacc.yy"
    {
				(yyval.numval) = DEF_UNIQUE;
			;}
    break;

  case 35:
#line 294 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = DEF_SINGLE_PRIMARY;
				(yyval.treeNode)->strval = (yyvsp[(4) - (5)].strval);
			;}
    break;

  case 36:
#line 307 "yacc.yy"
    {
				(yyvsp[(3) - (3)].treeNode)->operation = OP_DROP_TABLE;
				(yyval.treeNode) = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 37:
#line 312 "yacc.yy"
    {
				(yyvsp[(3) - (3)].treeNode)->operation = OP_DROP_INDEX;
				(yyval.treeNode) = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 38:
#line 324 "yacc.yy"
    {
				(yyvsp[(4) - (5)].treeNode)->operation = OP_SELECT;
				(yyvsp[(4) - (5)].treeNode)->rightSon = (yyvsp[(5) - (5)].treeNode);
				(yyval.treeNode) = (yyvsp[(4) - (5)].treeNode);
			;}
    break;

  case 39:
#line 333 "yacc.yy"
    { (yyval.treeNode) = nullptr; ;}
    break;

  case 40:
#line 335 "yacc.yy"
    {
				(yyval.treeNode) = (yyvsp[(2) - (2)].treeNode);
			;}
    break;

  case 42:
#line 343 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = OP_AND;
				(yyval.treeNode)->leftSon = (yyvsp[(1) - (3)].treeNode);
				(yyval.treeNode)->rightSon = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 43:
#line 353 "yacc.yy"
    {	
				/* keys are always at left */
				(yyval.treeNode) = (yyvsp[(2) - (3)].treeNode);
				(yyvsp[(2) - (3)].treeNode)->leftSon = (yyvsp[(3) - (3)].treeNode);
				(yyvsp[(2) - (3)].treeNode)->rightSon = (yyvsp[(1) - (3)].treeNode);
			;}
    break;

  case 44:
#line 360 "yacc.yy"
    {	
				(yyval.treeNode) = (yyvsp[(2) - (3)].treeNode);
				(yyvsp[(2) - (3)].treeNode)->leftSon = (yyvsp[(1) - (3)].treeNode);
				(yyvsp[(2) - (3)].treeNode)->rightSon = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 45:
#line 369 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_EQ;
			;}
    break;

  case 46:
#line 374 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_NEQ;
			;}
    break;

  case 47:
#line 379 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_LT;
			;}
    break;

  case 48:
#line 384 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_GT;
			;}
    break;

  case 49:
#line 389 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_LE;
			;}
    break;

  case 50:
#line 394 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->operation = CMP_GE;
			;}
    break;

  case 51:
#line 406 "yacc.yy"
    {
				(yyvsp[(3) - (5)].treeNode)->operation = OP_INSERT;
				(yyvsp[(3) - (5)].treeNode)->rightSon = (yyvsp[(5) - (5)].treeNode);
				(yyvsp[(3) - (5)].treeNode)->leftSon = (yyvsp[(5) - (5)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (5)].treeNode);
			;}
    break;

  case 52:
#line 416 "yacc.yy"
    {
				(yyval.treeNode) = (yyvsp[(2) - (3)].treeNode);
			;}
    break;

  case 53:
#line 420 "yacc.yy"
    {
				(yyvsp[(4) - (5)].treeNode)->rightSon = (yyvsp[(1) - (5)].treeNode);
				(yyval.treeNode) = (yyvsp[(4) - (5)].treeNode);
			;}
    break;

  case 55:
#line 431 "yacc.yy"
    {
				(yyvsp[(3) - (3)].treeNode)->leftSon = (yyvsp[(1) - (3)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (3)].treeNode);
			;}
    break;

  case 56:
#line 439 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->strval = (yyvsp[(1) - (1)].strval);
				(yyval.treeNode)->operation = VAL_CHAR;
			;}
    break;

  case 57:
#line 445 "yacc.yy"
    {
				(yyval.treeNode) = YYAST->newEmptyNode();
				(yyval.treeNode)->numval = (yyvsp[(1) - (1)].numval);
				(yyval.treeNode)->operation = VAL_NUMBER;
			;}
    break;

  case 58:
#line 457 "yacc.yy"
    {
				(yyvsp[(3) - (4)].treeNode)->operation = OP_DELECT;
				(yyvsp[(3) - (4)].treeNode)->rightSon = (yyvsp[(4) - (4)].treeNode);
				(yyval.treeNode) = (yyvsp[(3) - (4)].treeNode);
			;}
    break;

  case 59:
#line 471 "yacc.yy"
    {
				if (ErrorFlag == 0)
				{
					char *tokenTmpPtr;
					strncpy(ErrorToken, yytext, ErrorTokenLength);
					ErrorFlag = 1;
					tokenTmpPtr = strchr(ErrorToken, '\n');
					if (tokenTmpPtr)
						*tokenTmpPtr = 0;
				}
			;}
    break;

  case 60:
#line 483 "yacc.yy"
    {
				if (ErrorFlag == 0)
				{
					strncpy(ErrorToken, yytext, ErrorTokenLength);
					ErrorFlag = 1;
				}
			;}
    break;


/* Line 1267 of yacc.c.  */
#line 1955 "yacc.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YYAST, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (YYAST, yymsg);
	  }
	else
	  {
	    yyerror (YYAST, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, YYAST);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, YYAST);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YYAST, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, YYAST);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, YYAST);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 492 "yacc.yy"



