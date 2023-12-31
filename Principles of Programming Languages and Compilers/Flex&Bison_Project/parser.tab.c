/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"


    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "print_console.c"

    //pointer to input file of lexer
    extern FILE *yyin; 
    //pointer to output file of lexer
    extern FILE *yyout;
    //line counter
    extern int line_no;
    //reads the input stream generates tokens
    extern int yylex();
    //temporary token save
    extern char* yytext;

    //Function Initilize
    int yylex();
    void yyerror(char *message);


/* Line 371 of yacc.c  */
#line 92 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMENT = 258,
     ML_COMMENT = 259,
     BREAK = 260,
     VARS = 261,
     QM = 262,
     NEWLINE = 263,
     STARTMAIN = 264,
     ENDMAIN = 265,
     IF = 266,
     THEN = 267,
     ELSEIF = 268,
     ELSE = 269,
     ENDIF = 270,
     FOR = 271,
     TO = 272,
     STEP = 273,
     ENDFOR = 274,
     SWITCH = 275,
     CASE = 276,
     ENDSWITCH = 277,
     RETURN = 278,
     PRINT = 279,
     WHILE = 280,
     ENDWHILE = 281,
     INDENT = 282,
     FUNCTION = 283,
     END_FUNCTION = 284,
     ADD_ASSIGN = 285,
     SUB_ASSIGN = 286,
     DIV_ASSIGN = 287,
     DEC_OP = 288,
     INC_OP = 289,
     AND_OP = 290,
     OR_OP = 291,
     EQ_OP = 292,
     GE_OP = 293,
     LE_OP = 294,
     NE_OP = 295,
     L_BRACE = 296,
     R_BRACE = 297,
     COMMA = 298,
     COLON = 299,
     ASSIGN = 300,
     L_PAR = 301,
     R_PAR = 302,
     L_BRACK = 303,
     R_BRACK = 304,
     DOT = 305,
     UNDERSCORE = 306,
     MINUS = 307,
     PLUS = 308,
     MUL = 309,
     DIV = 310,
     LT = 311,
     GT = 312,
     FLOAT = 313,
     CHAR = 314,
     STRING = 315,
     IDENTIFIER = 316,
     INTEGER = 317,
     PROGRAM = 318
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 27 "parser.y"

	char name[500];
	int integer_val;


/* Line 387 of yacc.c  */
#line 201 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 229 "parser.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    53,    55,    57,    59,    61,    63,
      67,    73,    76,    79,    82,    86,    89,    94,    97,    99,
     102,   106,   110,   114,   116,   121,   126,   131,   139,   143,
     146,   151,   156,   163,   172,   176,   180,   184,   186,   189,
     193,   196,   203,   206,   209,   212,   216,   222,   225,   228,
     239,   242,   245,   248,   256,   264,   267,   271,   281,   284,
     290,   293,   296,   299,   304,   309,   313,   315,   317,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   341,   346,
     349,   351,   354,   356,   358,   364,   371,   374,   379,   384,
     387,   390,   393,   396,   402,   413,   422,   426,   429,   434,
     439,   440,   444,   446,   450,   454,   458,   462,   465,   467
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    63,    61,     8,    -1,    65,    66,    -1,
      65,    96,    -1,    77,    -1,    78,    -1,    79,    -1,    81,
      -1,    72,    -1,    74,    -1,    92,    -1,    69,    -1,    94,
      -1,    67,    -1,    76,    -1,    83,    -1,    86,    -1,    98,
      -1,     8,    -1,    99,    -1,   100,    -1,    96,    -1,     5,
       7,     8,    -1,    59,    -1,    62,    -1,    58,    -1,    61,
      -1,    60,    -1,     6,    68,    75,    -1,     6,    68,    61,
      43,    61,    -1,     6,    70,    -1,    69,    70,    -1,    69,
       7,    -1,    69,    70,     7,    -1,    68,    75,    -1,    68,
      61,    43,    61,    -1,    43,    88,    -1,    88,    -1,    43,
      61,    -1,    61,    43,    61,    -1,    70,    43,    61,    -1,
      70,    43,    88,    -1,    66,    -1,    23,    62,     7,     8,
      -1,    23,    61,     7,     8,    -1,    23,   101,     7,     8,
      -1,    28,    61,    46,    91,    47,     8,    66,    -1,    72,
      71,    73,    -1,    29,     8,    -1,    61,    46,    91,    47,
      -1,    61,    46,    68,    47,    -1,    61,    46,    68,    43,
      68,    47,    -1,    61,    46,    68,    43,    68,    43,    68,
      47,    -1,    74,     7,     8,    -1,    61,    90,    68,    -1,
      68,    90,    61,    -1,    75,    -1,    75,    90,    -1,    75,
      90,    75,    -1,    76,     7,    -1,    11,    46,    75,    47,
      12,     8,    -1,    77,    66,    -1,    77,    80,    -1,    77,
      78,    -1,    77,    78,    79,    -1,    13,    46,    75,    47,
      66,    -1,    14,    66,    -1,    15,     8,    -1,    16,    61,
      44,    45,    62,    17,    62,    18,    62,     8,    -1,    81,
      66,    -1,    81,    82,    -1,    19,     8,    -1,    20,    46,
      56,    61,    57,    47,     8,    -1,    20,    46,    56,    61,
      57,    47,     3,    -1,    83,    84,    -1,    83,    84,    85,
      -1,    21,    46,    56,    62,    57,    47,     8,    66,    67,
      -1,    22,     8,    -1,    25,    46,    76,    47,     8,    -1,
      86,    66,    -1,    86,    87,    -1,    26,     8,    -1,    61,
      48,    62,    49,    -1,    61,    48,    61,    49,    -1,    88,
      45,    62,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    33,    -1,    34,    -1,    56,    -1,    57,    -1,    35,
      -1,    36,    -1,    61,    -1,    68,    61,    43,    68,    61,
      -1,    61,    61,    43,    91,    -1,    61,    61,    -1,     3,
      -1,    92,    66,    -1,    93,    -1,     4,    -1,    24,    46,
      68,    47,     7,    -1,    24,    46,    68,    95,    47,     7,
      -1,    94,     8,    -1,    48,    43,    61,    49,    -1,    48,
      43,    88,    49,    -1,     9,     8,    -1,    96,    66,    -1,
      96,    97,    -1,    10,     8,    -1,    61,    45,    41,    99,
      42,    -1,    61,    45,    61,    46,    48,    46,    99,    47,
      49,    47,    -1,    61,    45,    61,    46,    99,    91,    99,
      47,    -1,    61,    45,    74,    -1,    89,     7,    -1,    68,
      43,    68,    91,    -1,    61,    45,    68,     7,    -1,    -1,
      61,    45,   101,    -1,   102,    -1,   101,    53,   102,    -1,
     101,    52,   102,    -1,   101,    54,   102,    -1,   101,    55,
     102,    -1,   101,     7,    -1,    62,    -1,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   121,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   145,   151,   152,   153,   154,   155,   160,
     161,   162,   163,   164,   165,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   180,   181,   182,   187,   188,   191,
     193,   194,   195,   196,   197,   202,   203,   206,   207,   208,
     209,   215,   216,   217,   218,   219,   221,   222,   223,   225,
     226,   227,   229,   234,   235,   236,   237,   240,   241,   246,
     247,   248,   250,   255,   256,   258,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   276,   277,   278,   279,
     285,   285,   285,   286,   291,   291,   291,   292,   293,   298,
     299,   300,   302,   307,   308,   309,   310,   311,   314,   315,
     316,   323,   325,   326,   327,   328,   329,   330,   333,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "ML_COMMENT", "BREAK", "VARS",
  "QM", "NEWLINE", "STARTMAIN", "ENDMAIN", "IF", "THEN", "ELSEIF", "ELSE",
  "ENDIF", "FOR", "TO", "STEP", "ENDFOR", "SWITCH", "CASE", "ENDSWITCH",
  "RETURN", "PRINT", "WHILE", "ENDWHILE", "INDENT", "FUNCTION",
  "END_FUNCTION", "ADD_ASSIGN", "SUB_ASSIGN", "DIV_ASSIGN", "DEC_OP",
  "INC_OP", "AND_OP", "OR_OP", "EQ_OP", "GE_OP", "LE_OP", "NE_OP",
  "L_BRACE", "R_BRACE", "COMMA", "COLON", "ASSIGN", "L_PAR", "R_PAR",
  "L_BRACK", "R_BRACK", "DOT", "UNDERSCORE", "MINUS", "PLUS", "MUL", "DIV",
  "LT", "GT", "FLOAT", "CHAR", "STRING", "IDENTIFIER", "INTEGER",
  "PROGRAM", "$accept", "program", "line", "break", "data_type",
  "variable", "variable_dictionary", "return", "function", "end_function",
  "function_call", "inspector", "inspector_gen", "if_stmt", "elseif_stmt",
  "else_stmt", "end_if_stmt", "for_statement", "end_for_statement",
  "switch", "case", "end_switch", "while", "end_while", "array",
  "array_value", "operators", "optional_parameters", "comments",
  "ml_comments", "print", "print_name_var", "start_main", "end_main",
  "dictionaries", "dictionary_data", "calc_assignment", "int_op",
  "int_data", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    72,    72,    73,
      74,    74,    74,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    78,    79,    80,    81,
      81,    81,    82,    83,    83,    83,    83,    84,    85,    86,
      86,    86,    87,    88,    88,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    94,    94,    94,    95,    95,    96,
      96,    96,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   101,   101,   101,   101,   101,   101,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       5,     2,     2,     2,     3,     2,     4,     2,     1,     2,
       3,     3,     3,     1,     4,     4,     4,     7,     3,     2,
       4,     4,     6,     8,     3,     3,     3,     1,     2,     3,
       2,     6,     2,     2,     2,     3,     5,     2,     2,    10,
       2,     2,     2,     7,     7,     2,     3,     9,     2,     5,
       2,     2,     2,     4,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     2,     1,     1,     5,     6,     2,     4,     4,     2,
       2,     2,     2,     5,    10,     8,     3,     2,     4,     4,
       0,     3,     1,     3,     3,     3,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,   100,   103,     0,   120,    19,
       0,     0,     0,   120,     0,     0,     0,     0,     0,    26,
      24,    28,    27,    25,     3,    14,     0,    12,     9,    10,
      57,    15,     5,     6,     7,     8,    16,    17,     0,     0,
      11,   102,    13,     4,    18,    20,    21,     2,     0,     0,
      27,    43,     0,    31,    38,    22,   109,     0,     0,    67,
       0,     0,     0,     0,     0,    90,    91,    94,    95,    86,
      87,    88,    89,     0,     0,     0,    92,    93,     0,     0,
       0,    33,     0,    32,     0,     0,     0,    58,    60,     0,
      62,     6,    63,     0,    70,    71,     0,    75,     0,    80,
      81,     0,   117,   101,   106,     0,   110,   111,    23,    39,
      37,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,   120,   129,   128,     0,   116,
     121,   122,    96,     0,     0,     0,     0,    55,     0,    56,
       0,    35,    34,   129,   128,     0,     0,    48,    54,    59,
      68,    65,    72,     0,     0,    76,    82,    85,   112,    40,
       0,    41,    42,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,   119,   127,     0,
       0,     0,     0,    99,     0,    51,     0,    50,    84,    83,
     118,     0,     0,     0,   127,    49,     0,    78,    30,     0,
      66,     0,     0,   104,     0,     0,    79,     0,     0,   113,
       0,    27,     0,     0,   129,   128,   124,   123,   125,   126,
       0,     0,     0,    36,    45,    44,    46,     0,    61,     0,
       0,     0,     0,   105,   120,   120,     0,   120,    98,     0,
      52,     0,     0,     0,    74,    73,   107,   108,    47,     0,
       0,     0,     0,    97,     0,     0,     0,   115,    53,     0,
       0,     0,     0,    69,   114,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    51,    25,    26,    27,    53,    85,    28,   147,
      29,    30,    31,    32,    33,    34,    92,    35,    95,    36,
      97,   155,    37,   100,    38,    39,    78,   134,    40,    41,
      42,   169,    55,   107,    44,    45,    46,   130,   131
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -122
static const yytype_int16 yypact[] =
{
     -13,   -45,   130,    52,  -122,  -122,  -122,    51,   260,  -122,
      57,    20,    24,   492,    10,    29,    45,    48,    13,  -122,
    -122,  -122,   559,  -122,  -122,  -122,   488,   234,    73,    91,
     147,   102,   320,  -122,  -122,   346,    93,   406,    71,   110,
     492,  -122,   123,   432,  -122,  -122,  -122,  -122,   129,    60,
      67,  -122,   499,    97,    71,   432,  -122,   150,   150,  -122,
      98,    89,   159,   150,   101,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,    28,   164,   -47,  -122,  -122,   159,   159,
      88,  -122,   529,     0,   -34,   122,   145,   150,  -122,   148,
    -122,   143,  -122,   151,  -122,  -122,   114,   146,   161,  -122,
    -122,   115,  -122,  -122,  -122,   168,  -122,  -122,  -122,   131,
    -122,   132,   584,   147,  -122,   133,   147,   149,   152,   153,
     134,  -122,    -8,    -3,   164,   239,    -1,   193,   194,    91,
      25,  -122,   -38,   -25,   158,   157,   166,  -122,   164,  -122,
     595,  -122,  -122,   206,   220,    30,   226,  -122,  -122,  -122,
    -122,  -122,  -122,   172,   227,  -122,  -122,  -122,  -122,  -122,
     175,   131,  -122,   237,   492,   184,   195,   244,   210,   208,
     248,   199,   214,   222,   229,   228,   113,  -122,  -122,   -14,
     -14,   -14,   -14,   232,   159,  -122,   235,  -122,  -122,  -122,
    -122,   218,   273,   274,   275,  -122,   224,  -122,  -122,   279,
    -122,   272,   243,  -122,   230,   295,  -122,   296,   159,  -122,
     259,   -32,    50,   164,  -122,  -122,  -122,  -122,  -122,  -122,
     164,    12,   159,  -122,  -122,  -122,  -122,   249,  -122,   245,
      23,    14,   261,  -122,   492,   239,   159,   239,  -122,   159,
    -122,   247,   262,   293,  -122,  -122,  -122,  -122,  -122,   265,
     105,   266,   267,  -122,   307,   254,   268,  -122,  -122,   492,
     319,   283,   327,  -122,  -122,  -122
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,    -2,    75,    -6,  -122,   311,  -122,  -122,  -122,
     269,   -33,   276,  -122,   309,   252,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,    -7,  -122,   -18,  -121,  -122,  -122,
    -122,  -122,   344,  -122,  -122,  -115,  -122,   263,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
      24,    54,    52,   172,    88,   -27,   -27,   142,    80,   -27,
     175,    59,    87,   208,   135,   136,     3,   190,   184,   114,
      54,    82,   185,   183,   117,   118,   244,   143,   144,   183,
      90,   245,   178,    94,    80,    99,   186,   194,   103,   167,
     168,   106,   110,   115,   170,   176,   113,   214,   215,   141,
       1,   113,   113,   106,   149,   239,   122,   113,    48,   240,
      47,   213,    75,   246,    80,    56,    57,   128,   133,   125,
      58,    60,   137,   138,    64,    61,   113,   179,   180,   181,
     182,   113,   179,   180,   181,   182,    19,    20,    21,   126,
     127,    62,   237,   236,    63,    80,    84,   185,    86,   238,
      65,    66,    67,    68,    69,    70,    71,    72,   162,    88,
     111,   186,    73,    74,    96,    75,   101,   102,   171,   174,
     249,   109,   251,    76,    77,   216,   217,   218,   219,   190,
       4,   104,   171,     5,     6,     7,     8,   108,     9,    10,
     115,    11,   119,    12,    13,   120,    14,   124,   239,   139,
      15,   146,   240,   148,    16,    17,   150,    13,    18,   152,
     153,   210,   200,    19,    20,    21,   132,    23,   154,   156,
     212,    19,    20,    21,   211,    23,   158,   157,   221,    75,
      65,    66,    67,    68,    69,    70,    71,    72,    19,    20,
      21,    22,    23,   159,   161,   166,   163,   232,   165,   164,
     -25,   177,   128,    76,    77,   187,   188,   171,    19,    20,
      21,   116,    23,   192,   171,   189,   241,    19,    20,    21,
     121,    23,    19,    20,    21,   132,    23,   193,   196,   174,
     250,   174,   248,   252,   195,   197,   198,     5,     6,     7,
       8,    81,     9,    10,   171,    11,   201,    12,    13,   199,
      14,   203,   202,   204,    15,   205,   206,   262,    16,    17,
     186,   207,    18,     5,     6,     7,     8,   208,     9,    10,
     209,    11,    79,    12,    13,   220,    14,    49,   222,   223,
      15,   224,   225,   226,    16,    17,   227,   228,    18,   229,
     230,   231,    19,    20,    21,    50,    23,    19,    20,    21,
     173,    23,   233,    49,   234,   235,   242,   243,   253,   254,
     247,   255,   256,   257,   258,   259,   260,   261,    19,    20,
      21,    50,    23,     5,     6,     7,     8,   263,     9,    10,
     264,    11,     7,    12,    13,    89,    14,   265,    83,   123,
      15,    91,   129,   151,    16,    17,    43,   145,    18,     5,
       6,     7,     8,     0,     9,    10,     0,    11,     0,    12,
      13,     0,    14,     0,     0,    93,    15,     0,     0,     0,
      16,    17,     0,     0,    18,     0,     0,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    21,    22,    23,     5,
       6,     7,     8,     0,     9,    10,     0,    11,     0,    12,
      13,     0,    14,     0,     0,     0,    15,     0,     0,     0,
      16,    17,    98,     0,    18,     5,     6,     7,     8,     0,
       9,    10,   105,    11,     0,    12,    13,     0,    14,     0,
       0,     0,    15,     0,     0,     0,    16,    17,     0,     0,
      18,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,    22,    23,     5,     6,     7,     8,     0,
       9,    10,     0,    11,     0,    12,    13,     0,    14,     0,
       0,     0,    15,     0,     0,     0,    16,    17,     0,     0,
      18,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    79,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    79,     0,    76,    77,     0,     0,     0,     0,
      19,    20,    21,    22,    23,    76,    77,    19,    20,    21,
     112,    23,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    19,    20,    21,
     140,    23,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,    73,    74,     0,    75,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,   160,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,   191,     0,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,     8,     8,   124,     7,    43,     7,     7,    26,    47,
     125,    13,    30,    45,    61,    62,    61,   138,    43,    52,
      27,    27,    47,    61,    57,    58,     3,    61,    62,    61,
      32,     8,     7,    35,    52,    37,    61,     7,    40,    47,
      48,    43,    49,    43,    47,    46,    52,    61,    62,    82,
      63,    57,    58,    55,    87,    43,    62,    63,     7,    47,
       8,   176,    48,    49,    82,     8,    46,    73,    74,    41,
      46,    61,    78,    79,    61,    46,    82,    52,    53,    54,
      55,    87,    52,    53,    54,    55,    58,    59,    60,    61,
      62,    46,   213,    43,    46,   113,    23,    47,     7,   220,
      33,    34,    35,    36,    37,    38,    39,    40,   115,     7,
      43,    61,    45,    46,    21,    48,    45,     7,   124,   125,
     235,    61,   237,    56,    57,   179,   180,   181,   182,   250,
       0,     8,   138,     3,     4,     5,     6,     8,     8,     9,
      43,    11,    44,    13,    14,    56,    16,    46,    43,    61,
      20,    29,    47,     8,    24,    25,     8,    14,    28,     8,
      46,    48,   164,    58,    59,    60,    61,    62,    22,     8,
     176,    58,    59,    60,    61,    62,     8,    62,   184,    48,
      33,    34,    35,    36,    37,    38,    39,    40,    58,    59,
      60,    61,    62,    61,    61,    61,    47,   204,    45,    47,
       7,     7,   208,    56,    57,    47,    49,   213,    58,    59,
      60,    61,    62,     7,   220,    49,   222,    58,    59,    60,
      61,    62,    58,    59,    60,    61,    62,     7,    56,   235,
     236,   237,   234,   239,     8,     8,    61,     3,     4,     5,
       6,     7,     8,     9,   250,    11,    62,    13,    14,    12,
      16,     7,    57,    43,    20,    47,     8,   259,    24,    25,
      61,    47,    28,     3,     4,     5,     6,    45,     8,     9,
      42,    11,    43,    13,    14,    43,    16,    43,    43,    61,
      20,     8,     8,     8,    24,    25,    62,     8,    28,    17,
      47,    61,    58,    59,    60,    61,    62,    58,    59,    60,
      61,    62,     7,    43,     8,    46,    57,    62,    61,    47,
      49,    18,    47,    47,    47,     8,    62,    49,    58,    59,
      60,    61,    62,     3,     4,     5,     6,     8,     8,     9,
      47,    11,     5,    13,    14,    15,    16,   262,    27,    63,
      20,    32,    73,    91,    24,    25,     2,    84,    28,     3,
       4,     5,     6,    -1,     8,     9,    -1,    11,    -1,    13,
      14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      24,    25,    -1,    -1,    28,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,     3,
       4,     5,     6,    -1,     8,     9,    -1,    11,    -1,    13,
      14,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    -1,    28,     3,     4,     5,     6,    -1,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    -1,    -1,    -1,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,     3,     4,     5,     6,    -1,
       8,     9,    -1,    11,    -1,    13,    14,    -1,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    -1,    56,    57,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    56,    57,    58,    59,    60,
      61,    62,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    43,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    65,    61,     0,     3,     4,     5,     6,     8,
       9,    11,    13,    14,    16,    20,    24,    25,    28,    58,
      59,    60,    61,    62,    66,    67,    68,    69,    72,    74,
      75,    76,    77,    78,    79,    81,    83,    86,    88,    89,
      92,    93,    94,    96,    98,    99,   100,     8,     7,    43,
      61,    66,    68,    70,    88,    96,     8,    46,    46,    66,
      61,    46,    46,    46,    61,    33,    34,    35,    36,    37,
      38,    39,    40,    45,    46,    48,    56,    57,    90,    43,
      90,     7,    68,    70,    23,    71,     7,    90,     7,    15,
      66,    78,    80,    19,    66,    82,    21,    84,    26,    66,
      87,    45,     7,    66,     8,    10,    66,    97,     8,    61,
      88,    43,    61,    68,    75,    43,    61,    75,    75,    44,
      56,    61,    68,    76,    46,    41,    61,    62,    68,    74,
     101,   102,    61,    68,    91,    61,    62,    68,    68,    61,
      61,    75,     7,    61,    62,   101,    29,    73,     8,    75,
       8,    79,     8,    46,    22,    85,     8,    62,     8,    61,
      43,    61,    88,    47,    47,    45,    61,    47,    48,    95,
      47,    68,    91,    61,    68,    99,    46,     7,     7,    52,
      53,    54,    55,    61,    43,    47,    61,    47,    49,    49,
      91,    43,     7,     7,     7,     8,    56,     8,    61,    12,
      66,    62,    57,     7,    43,    47,     8,    47,    45,    42,
      48,    61,    68,    99,    61,    62,   102,   102,   102,   102,
      43,    68,    43,    61,     8,     8,     8,    62,     8,    17,
      47,    61,    88,     7,     8,    46,    43,    91,    91,    43,
      47,    68,    57,    62,     3,     8,    49,    49,    66,    99,
      68,    99,    68,    61,    47,    18,    47,    47,    47,     8,
      62,    49,    66,     8,    47,    67
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
        case 5:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    {;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    {;}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    {;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    {;}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    {;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 128 "parser.y"
    {;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 129 "parser.y"
    {;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    {;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    {;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    {;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    {;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 134 "parser.y"
    {;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    {;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    {;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 137 "parser.y"
    {;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 138 "parser.y"
    {;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    {;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 140 "parser.y"
    {;}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 323 "parser.y"
    { Change((yyvsp[(1) - (3)].name), (yyvsp[(3) - (3)].integer_val)); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 325 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (1)].integer_val); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 326 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (3)].integer_val) + (yyvsp[(3) - (3)].integer_val); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 327 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (3)].integer_val) - (yyvsp[(3) - (3)].integer_val); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 328 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (3)].integer_val) * (yyvsp[(3) - (3)].integer_val); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 329 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (3)].integer_val) / (yyvsp[(3) - (3)].integer_val); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 333 "parser.y"
    { (yyval.integer_val) = (yyvsp[(1) - (1)].integer_val); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 334 "parser.y"
    { (yyval.integer_val) = Search((yyvsp[(1) - (1)].name)) -> integer_val; }
    break;


/* Line 1792 of yacc.c  */
#line 1896 "parser.tab.c"
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 338 "parser.y"


/* ------------------------------------------------ C FUNCTIONS -------------------------------------------- */

void yyerror(char *message){
	printf("Error: \"%s\"\t in line %d. Token = %s\n", message, line_no, yytext);
	exit(1);
}	

/* ------------------------------------------ MAIN FUNCTION --------------------------------------------- */

int main(int argc, char *argv[]){

	hashTable = (hash *) calloc(SIZE, sizeof(hash));

    	int flag;

	yyin = fopen(argv[1],"r");
	//yyparse(): reads tokens, executes actions
	flag = yyparse();
	fclose(yyin);

	printf("Parsing finished succesfully!\n\n");
	printf(" __________________________\n");
	Print();
	printf(" __________________________\n");

	return flag;   
}