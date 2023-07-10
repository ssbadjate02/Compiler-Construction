/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdarg.h>
    // #include "header.h"
    #include "symboltable.c"
    #define here printf("\n\nHEHEHEHEHRRHERE\n\n");
    
    
    void yyerror();
    int yylex();
    int yywrap();
    int ex (nodeType *p, int flag);
    nodeType *opr(int oper, int nops, ...);
    nodeType *id(char *identifier);
    nodeType *con(char *value);
    int scope = 0;
    int if_assign = 1;
    char functionName[40];
    int isInFunction =0;
    

#line 95 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    INC_OP = 261,
    DEC_OP = 262,
    LEFT_OP = 263,
    RIGHT_OP = 264,
    LE_OP = 265,
    GE_OP = 266,
    EQ_OP = 267,
    NE_OP = 268,
    AND_OP = 269,
    OR_OP = 270,
    MUL_ASSIGN = 271,
    DIV_ASSIGN = 272,
    MOD_ASSIGN = 273,
    ADD_ASSIGN = 274,
    SUB_ASSIGN = 275,
    LEFT_ASSIGN = 276,
    RIGHT_ASSIGN = 277,
    AND_ASSIGN = 278,
    XOR_ASSIGN = 279,
    OR_ASSIGN = 280,
    CHAR = 281,
    INT = 282,
    FLOAT = 283,
    CONST = 284,
    VOID = 285,
    MAIN = 286,
    PRINTF = 287,
    IF = 288,
    ELSE = 289,
    SWITCH = 290,
    WHILE = 291,
    DO = 292,
    FOR = 293,
    GOTO = 294,
    CONTINUE = 295,
    BREAK = 296,
    RETURN = 297
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define LEFT_OP 263
#define RIGHT_OP 264
#define LE_OP 265
#define GE_OP 266
#define EQ_OP 267
#define NE_OP 268
#define AND_OP 269
#define OR_OP 270
#define MUL_ASSIGN 271
#define DIV_ASSIGN 272
#define MOD_ASSIGN 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define LEFT_ASSIGN 276
#define RIGHT_ASSIGN 277
#define AND_ASSIGN 278
#define XOR_ASSIGN 279
#define OR_ASSIGN 280
#define CHAR 281
#define INT 282
#define FLOAT 283
#define CONST 284
#define VOID 285
#define MAIN 286
#define PRINTF 287
#define IF 288
#define ELSE 289
#define SWITCH 290
#define WHILE 291
#define DO 292
#define FOR 293
#define GOTO 294
#define CONTINUE 295
#define BREAK 296
#define RETURN 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parser.y"

    int ival;
    nodeType *nPtr;
    char string[128];

#line 237 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

#define YYUNDEFTOK  2
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,     2,     2,    53,     2,     2,
      56,    57,    51,    49,    43,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    60,
      47,    44,    48,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,    55,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    80,    82,    88,    89,    90,    93,    94,
      97,    98,    99,   100,   101,   103,   104,   106,   107,   108,
     111,   112,   116,   117,   118,   119,   121,   122,   123,   124,
     125,   126,   130,   131,   132,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     170,   171,   172,   173,   176,   177,   178,   179,   182,   183,
     184,   185,   186,   187,   188,   189,   191,   221,   353,   354,
     359,   360,   364,   364,   364,   365,   365,   365,   366,   369,
     372,   373,   376,   377,   378,   382,   383,   384,   384,   384,
     387,   388,   391,   392,   393,   394,   398,   399,   400,   402,
     403,   406,   438,   444,   445,   448,   448,   449,   455
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CHAR", "INT", "FLOAT", "CONST",
  "VOID", "MAIN", "PRINTF", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "','", "'='", "'?'", "':'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'('", "')'",
  "'{'", "'}'", "';'", "'['", "']'", "$accept", "declaration_list",
  "declaration", "specifier", "declarator_list", "declarator", "arglist2",
  "var", "func_call", "arglist", "expr", "assignment", "binary_expr",
  "unary_expr1", "unary_expr2", "statement", "print",
  "expression_statement", "statement_list", "compound_statement", "$@1",
  "$@2", "$@3", "$@4", "declaration_statment_list", "statement_com_list",
  "selection_statement", "iteration_statement", "$@5", "$@6",
  "expr_or_assignment", "jump_statement", "function_declarator",
  "specifier_declator_list", "function_definition", "translation_unit",
  "external_declaration", "$@7", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    44,    61,    63,    58,    60,    62,    43,
      45,    42,    47,    37,    33,   126,    40,    41,   123,   125,
      59,    91,    93
};
# endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,   -86,   -28,   -86,     4,   -86,     5,   -86,     1,   -86,
     -15,   -11,    35,   -11,   -22,   -86,    -2,    35,   -86,   -86,
       3,     6,   -13,   -86,   101,   -86,   269,   361,   -86,   -86,
     -86,   -86,   101,    42,   -86,   162,   228,   -86,   -86,    49,
     -86,    12,   101,   101,   361,   361,   361,   361,   361,   296,
      13,   -86,   530,   -86,   -86,   -86,   -86,   196,    35,    55,
     162,   -86,   228,   -86,   101,   -86,    57,    95,    97,   112,
     228,   -86,   105,   109,   117,    47,   -86,   -86,   273,   373,
     126,   -86,   131,   -86,   228,   -86,   -86,   -86,   -86,   306,
      55,    55,   103,   103,    78,    78,   387,   361,   -37,    18,
      30,   530,   -86,   -86,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   136,
     -86,   101,   -86,   228,   -86,   135,   194,   361,   361,   361,
     167,   156,   154,   -86,   -86,   -86,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   -86,   -86,   -86,
     -86,   158,   -86,    52,   -86,    39,   157,   -86,   361,   -86,
     -86,   -86,    72,    72,   554,   554,   583,   133,   522,    72,
      72,   103,   103,    78,    78,   361,    55,   -86,    63,   437,
     448,   459,   163,   162,   -86,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   -86,   -86,   -86,   361,
      33,   530,   361,   327,   361,   -86,   228,   228,   228,   361,
      47,    41,   538,   -86,   113,   184,   -86,   -86,   509,   361,
     -86,   -86,   228,   161,   530,   -86,   -86,   -86,   -86,   165,
     228,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     5,     7,     0,   118,     0,   117,     0,   113,
       0,     0,     0,    17,     0,     8,    11,     0,     1,   114,
       0,     0,    85,   112,     0,     4,     0,     0,   111,   115,
       5,   107,     0,     0,    88,     0,     0,    17,     9,    17,
      32,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    33,    10,    28,    26,    27,    34,     0,     0,   110,
       0,   106,    90,     3,     0,    83,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,    79,    68,    31,     0,
       0,    80,     0,    70,    86,    69,    71,    72,    73,     0,
      60,    61,    66,    67,    64,    65,     0,     0,     0,    31,
       0,    24,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
     116,     0,     2,    91,    89,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    74,    75,
      81,     0,    20,     0,    30,     0,     0,    13,     0,    12,
      54,    55,    56,    57,    58,    59,    52,    53,     0,    50,
      51,    46,    47,    48,    49,     0,   109,    84,     0,     0,
       0,     0,     0,     0,   102,    40,    41,    42,    43,    44,
      38,    39,    36,    45,    37,    35,    87,    21,    15,     0,
      31,    25,     0,     0,     0,    76,     0,     0,     0,     0,
       0,     0,    29,    18,     0,    92,    94,    95,     0,     0,
      16,    77,     0,     0,   100,   101,    98,    93,    96,     0,
       0,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,     9,     2,   -86,   202,   -86,    -6,   -86,   -85,
      21,     8,   -86,   -86,   -86,   -35,   -86,   -70,   166,    -1,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   223,   -86,   -86,   -86,   229,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    62,    77,    64,    14,    15,    98,    50,    51,   100,
      79,    80,    53,    54,    55,    81,    82,    83,    84,    85,
      35,   125,    36,   151,    65,   124,    86,    87,   131,   229,
     226,    88,    12,    33,     7,     8,     9,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    18,     6,    10,   153,   135,   156,    11,    13,     5,
       6,    23,   155,   -82,   -82,   -82,    28,     5,    16,   102,
     103,    24,   157,    32,   102,   103,    59,     1,     2,     3,
      78,     4,     1,    30,     3,   130,    90,    91,    25,   102,
     103,    20,    26,    99,    63,    21,    34,    52,    57,   150,
      39,    40,    56,    42,    43,   -14,    78,   120,    16,    27,
      29,   -22,   121,    31,    78,    92,    93,    94,    95,    96,
     101,   122,   -14,   158,    27,   -22,   -23,   -22,    78,    27,
     104,   105,   158,    99,   158,    60,   104,   105,   150,   159,
     -23,    99,   -23,    22,    27,   158,    44,    45,   198,    61,
     220,    46,    47,    48,    37,    89,   204,    76,   132,   197,
     101,   104,   105,   126,   211,   176,    27,    78,   101,   214,
     205,   115,   116,   117,   118,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     219,   104,   105,   106,   107,   108,   109,   110,   179,   180,
     181,   127,   200,   128,   117,   118,   158,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   129,   133,
     221,   215,   216,   217,     1,     2,     3,   134,     4,   201,
     113,   114,   115,   116,   117,   118,   148,   227,     1,    30,
       3,   149,   210,    99,   177,   231,   203,   175,    99,   178,
      78,    78,    78,   182,   104,   105,   106,   107,   108,   109,
     110,   111,   183,    78,   184,   199,    78,   196,   222,   209,
     101,   228,   230,   212,    78,   101,    38,   225,   123,    17,
     218,    39,    40,    56,    42,    43,     0,    19,     0,     0,
     224,   112,     0,   113,   114,   115,   116,   117,   118,     0,
       0,     0,     0,     0,     1,    30,     3,     0,   119,     0,
      66,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,     0,    39,    40,    41,    42,    43,    44,    45,   102,
     103,     0,    46,    47,    48,     0,    22,     0,    76,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    39,
      40,    56,    42,    43,     0,     0,     0,     0,     0,    39,
      40,    56,    42,    43,     0,     0,     0,   146,    44,    45,
       0,     0,     0,    46,    47,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    27,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,    44,    45,     0,     0,     0,
      46,    47,    48,     0,    97,    44,    45,     0,     0,     0,
      46,    47,    48,   152,    39,    40,    56,    42,    43,     0,
       0,     0,   112,     0,   113,   114,   115,   116,   117,   118,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   213,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
      44,    45,     0,     0,     0,    46,    47,    48,   112,     0,
     113,   114,   115,   116,   117,   118,     0,     0,     0,     0,
       0,     0,   112,   147,   113,   114,   115,   116,   117,   118,
       0,     0,     0,     0,   154,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
       0,     0,   112,     0,   113,   114,   115,   116,   117,   118,
       0,     0,     0,   112,   206,   113,   114,   115,   116,   117,
     118,     0,     0,     0,   112,   207,   113,   114,   115,   116,
     117,   118,     0,     0,     0,     0,   208,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   104,   105,
     106,   107,   108,   109,   110,   111,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,   113,   114,   115,   116,
     117,   118,   104,   105,   106,   107,   223,   112,   202,   113,
     114,   115,   116,   117,   118,   112,     0,   113,   114,   115,
     116,   117,   118,     0,     0,   113,   114,   115,   116,   117,
     118,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   114,   115,   116,   117,   118
};

static const yytype_int16 yycheck[] =
{
       6,     0,     0,    31,    89,    75,    43,     3,     3,     0,
       8,    12,    97,    26,    27,    28,    17,     8,    24,     6,
       7,    43,    59,    21,     6,     7,    32,    26,    27,    28,
      36,    30,    26,    27,    28,    70,    42,    43,    60,     6,
       7,    56,    44,    49,    35,    56,    59,    26,    27,    84,
       3,     4,     5,     6,     7,    43,    62,    58,    64,    61,
      57,    43,    60,    57,    70,    44,    45,    46,    47,    48,
      49,    62,    60,    43,    61,    57,    43,    59,    84,    61,
       8,     9,    43,    89,    43,    43,     8,     9,   123,    59,
      57,    97,    59,    58,    61,    43,    49,    50,    59,    57,
      59,    54,    55,    56,     3,    56,    43,    60,     3,    57,
      89,     8,     9,    56,   199,   121,    61,   123,    97,   204,
      57,    49,    50,    51,    52,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     210,     8,     9,    10,    11,    12,    13,    14,   127,   128,
     129,    56,   158,    56,    51,    52,    43,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    56,    60,
      57,   206,   207,   208,    26,    27,    28,    60,    30,   158,
      47,    48,    49,    50,    51,    52,    60,   222,    26,    27,
      28,    60,   183,   199,    59,   230,   175,    61,   204,     5,
     206,   207,   208,    36,     8,     9,    10,    11,    12,    13,
      14,    15,    56,   219,    60,    58,   222,    59,    34,    56,
     199,    60,    57,   202,   230,   204,    24,   219,    62,     6,
     209,     3,     4,     5,     6,     7,    -1,     8,    -1,    -1,
     219,    45,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    62,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,     3,     4,     5,     6,     7,    49,    50,     6,
       7,    -1,    54,    55,    56,    -1,    58,    -1,    60,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    44,    49,    50,
      -1,    -1,    -1,    54,    55,    56,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    61,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    51,    52,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    62,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    56,    45,    -1,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    60,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    45,    57,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    45,    57,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    57,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,     8,     9,
      10,    11,    12,    13,    14,    15,     8,     9,    10,    11,
      12,    13,    14,    15,    45,    -1,    47,    48,    49,    50,
      51,    52,     8,     9,    10,    11,    57,    45,    46,    47,
      48,    49,    50,    51,    52,    45,    -1,    47,    48,    49,
      50,    51,    52,    -1,    -1,    47,    48,    49,    50,    51,
      52,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    28,    30,    65,    66,    97,    98,    99,
      31,     3,    95,     3,    67,    68,    70,    95,     0,    99,
      56,    56,    58,    82,    43,    60,    44,    61,    82,    57,
      27,    57,    66,    96,    59,    83,    85,     3,    68,     3,
       4,     5,     6,     7,    49,    50,    54,    55,    56,    58,
      70,    71,    73,    75,    76,    77,     5,    73,   100,    70,
      43,    57,    64,    65,    66,    87,    32,    33,    35,    36,
      37,    38,    39,    40,    41,    42,    60,    65,    70,    73,
      74,    78,    79,    80,    81,    82,    89,    90,    94,    56,
      70,    70,    73,    73,    73,    73,    73,    58,    69,    70,
      72,    73,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    45,    47,    48,    49,    50,    51,    52,    62,
      82,    66,    65,    81,    88,    84,    56,    56,    56,    56,
      78,    91,     3,    60,    60,    80,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    44,    60,    60,    60,
      78,    86,    57,    72,    57,    72,    43,    59,    43,    59,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    61,    70,    59,     5,    73,
      73,    73,    36,    56,    60,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    59,    57,    59,    58,
      70,    73,    46,    73,    43,    57,    57,    57,    57,    56,
      65,    72,    73,    62,    72,    78,    78,    78,    73,    80,
      59,    57,    34,    57,    73,    74,    93,    78,    60,    92,
      57,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    65,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    83,    84,    82,    85,    86,    82,    82,    87,
      88,    88,    89,    89,    89,    90,    90,    91,    92,    90,
      93,    93,    94,    94,    94,    94,    95,    95,    95,    96,
      96,    97,    97,    98,    98,   100,    99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     1,     1,     1,     3,
       3,     1,     5,     5,     3,     3,     5,     1,     7,     4,
       3,     4,     1,     3,     1,     3,     1,     1,     1,     5,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     6,     2,     1,
       1,     2,     0,     0,     5,     0,     0,     5,     2,     2,
       0,     1,     5,     7,     5,     5,     7,     0,     0,     9,
       1,     1,     3,     2,     2,     2,     4,     3,     3,     4,
       2,     3,     3,     1,     2,     0,     6,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 79 "parser.y"
                                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1659 "y.tab.c"
    break;

  case 3:
#line 80 "parser.y"
                  {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1665 "y.tab.c"
    break;

  case 4:
#line 82 "parser.y"
                                                {
    check_multiple_declaration((yyvsp[-2].nPtr)->id.name,(yyvsp[-1].nPtr),scope,isInFunction,functionName);
    (yyval.nPtr) = opr(';',1,(yyvsp[-1].nPtr));
}
#line 1674 "y.tab.c"
    break;

  case 5:
#line 88 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1680 "y.tab.c"
    break;

  case 6:
#line 89 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1686 "y.tab.c"
    break;

  case 7:
#line 90 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1692 "y.tab.c"
    break;

  case 8:
#line 93 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1698 "y.tab.c"
    break;

  case 9:
#line 94 "parser.y"
                                                {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1704 "y.tab.c"
    break;

  case 10:
#line 97 "parser.y"
                                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1710 "y.tab.c"
    break;

  case 11:
#line 98 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1716 "y.tab.c"
    break;

  case 12:
#line 99 "parser.y"
                                                  {(yyval.nPtr) = opr('y',2,((yyvsp[-4].nPtr)),((yyvsp[-1].nPtr)));}
#line 1722 "y.tab.c"
    break;

  case 13:
#line 100 "parser.y"
                                                  {(yyval.nPtr) = opr('u',2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1728 "y.tab.c"
    break;

  case 14:
#line 101 "parser.y"
                                                 {(yyval.nPtr) = opr('s',2,(yyvsp[-2].nPtr),con((yyvsp[0].string)));}
#line 1734 "y.tab.c"
    break;

  case 15:
#line 103 "parser.y"
                                                  {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1740 "y.tab.c"
    break;

  case 16:
#line 104 "parser.y"
                                                {(yyval.nPtr) = opr('x',2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1746 "y.tab.c"
    break;

  case 17:
#line 106 "parser.y"
                                                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1752 "y.tab.c"
    break;

  case 18:
#line 107 "parser.y"
                                                {(yyval.nPtr) = opr('2',3,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1758 "y.tab.c"
    break;

  case 19:
#line 108 "parser.y"
                                                {(yyval.nPtr) = opr('a',2,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 1764 "y.tab.c"
    break;

  case 20:
#line 111 "parser.y"
                                                           {(yyval.nPtr) = opr('f',1,id((yyvsp[-2].string)));}
#line 1770 "y.tab.c"
    break;

  case 21:
#line 112 "parser.y"
                                                {(yyval.nPtr) = opr('f',2,id((yyvsp[-3].string)),(yyvsp[-1].nPtr));}
#line 1776 "y.tab.c"
    break;

  case 22:
#line 116 "parser.y"
                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1782 "y.tab.c"
    break;

  case 23:
#line 117 "parser.y"
                                        {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1788 "y.tab.c"
    break;

  case 24:
#line 118 "parser.y"
                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1794 "y.tab.c"
    break;

  case 25:
#line 119 "parser.y"
                                        {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1800 "y.tab.c"
    break;

  case 26:
#line 121 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1806 "y.tab.c"
    break;

  case 27:
#line 122 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1812 "y.tab.c"
    break;

  case 28:
#line 123 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1818 "y.tab.c"
    break;

  case 29:
#line 124 "parser.y"
                                                {'?',2,(yyvsp[-4].nPtr),opr(':',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyvsp[-4].nPtr),scope,isInFunction,functionName); check_undeclared_variables((yyvsp[-2].nPtr),scope,isInFunction,functionName); check_undeclared_variables((yyvsp[0].nPtr),scope,isInFunction,functionName);}
#line 1824 "y.tab.c"
    break;

  case 30:
#line 125 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[-1].nPtr); check_undeclared_variables((yyvsp[-1].nPtr),scope,isInFunction,functionName);}
#line 1830 "y.tab.c"
    break;

  case 31:
#line 126 "parser.y"
                                                {
        (yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);
            
    }
#line 1839 "y.tab.c"
    break;

  case 32:
#line 130 "parser.y"
                                                {(yyval.nPtr) = con((yyvsp[0].string)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1845 "y.tab.c"
    break;

  case 33:
#line 131 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_valid_function_call((yyvsp[0].nPtr),scope,isInFunction,functionName);}
#line 1851 "y.tab.c"
    break;

  case 34:
#line 132 "parser.y"
                                                {(yyval.nPtr) = con((yyvsp[0].string)); }
#line 1857 "y.tab.c"
    break;

  case 35:
#line 143 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName); }
#line 1863 "y.tab.c"
    break;

  case 36:
#line 144 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('&',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1869 "y.tab.c"
    break;

  case 37:
#line 145 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('|',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1875 "y.tab.c"
    break;

  case 38:
#line 146 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('l',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1881 "y.tab.c"
    break;

  case 39:
#line 147 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('r',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1887 "y.tab.c"
    break;

  case 40:
#line 148 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1893 "y.tab.c"
    break;

  case 41:
#line 149 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1899 "y.tab.c"
    break;

  case 42:
#line 150 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('%',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1905 "y.tab.c"
    break;

  case 43:
#line 151 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1911 "y.tab.c"
    break;

  case 44:
#line 152 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1917 "y.tab.c"
    break;

  case 45:
#line 153 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('^',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1923 "y.tab.c"
    break;

  case 46:
#line 155 "parser.y"
                            {(yyval.nPtr) = opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1929 "y.tab.c"
    break;

  case 47:
#line 156 "parser.y"
                            {(yyval.nPtr) = opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1935 "y.tab.c"
    break;

  case 48:
#line 157 "parser.y"
                            {(yyval.nPtr) = opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1941 "y.tab.c"
    break;

  case 49:
#line 158 "parser.y"
                            {(yyval.nPtr) = opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1947 "y.tab.c"
    break;

  case 50:
#line 159 "parser.y"
                            {(yyval.nPtr) = opr('<',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1953 "y.tab.c"
    break;

  case 51:
#line 160 "parser.y"
                            {(yyval.nPtr) = opr('>',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1959 "y.tab.c"
    break;

  case 52:
#line 161 "parser.y"
                            {(yyval.nPtr) = opr('&',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1965 "y.tab.c"
    break;

  case 53:
#line 162 "parser.y"
                            {(yyval.nPtr) = opr('|',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1971 "y.tab.c"
    break;

  case 54:
#line 163 "parser.y"
                            {(yyval.nPtr) = opr('l',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1977 "y.tab.c"
    break;

  case 55:
#line 164 "parser.y"
                            {(yyval.nPtr) = opr('r',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1983 "y.tab.c"
    break;

  case 56:
#line 165 "parser.y"
                            {(yyval.nPtr) = opr(LE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1989 "y.tab.c"
    break;

  case 57:
#line 166 "parser.y"
                            {(yyval.nPtr) = opr(GE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1995 "y.tab.c"
    break;

  case 58:
#line 167 "parser.y"
                            {(yyval.nPtr) = opr(EQ_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2001 "y.tab.c"
    break;

  case 59:
#line 168 "parser.y"
                            {(yyval.nPtr) = opr(NE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2007 "y.tab.c"
    break;

  case 60:
#line 170 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('+', 2, (yyvsp[0].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2013 "y.tab.c"
    break;

  case 61:
#line 171 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('+', 2, (yyvsp[0].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2019 "y.tab.c"
    break;

  case 62:
#line 172 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('+', 2, (yyvsp[-1].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2025 "y.tab.c"
    break;

  case 63:
#line 173 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('-', 2, (yyvsp[-1].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2031 "y.tab.c"
    break;

  case 64:
#line 176 "parser.y"
                            {(yyval.nPtr) = opr('!',1,(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2037 "y.tab.c"
    break;

  case 65:
#line 177 "parser.y"
                            {(yyval.nPtr) = opr('~',1,(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2043 "y.tab.c"
    break;

  case 66:
#line 178 "parser.y"
                                        {(yyval.nPtr) = opr('+',1,(yyvsp[0].nPtr));check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2049 "y.tab.c"
    break;

  case 67:
#line 179 "parser.y"
                                                {(yyval.nPtr) = opr('-',1,(yyvsp[0].nPtr));check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2055 "y.tab.c"
    break;

  case 69:
#line 183 "parser.y"
                         {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2061 "y.tab.c"
    break;

  case 70:
#line 184 "parser.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2067 "y.tab.c"
    break;

  case 71:
#line 185 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2073 "y.tab.c"
    break;

  case 72:
#line 186 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2079 "y.tab.c"
    break;

  case 73:
#line 187 "parser.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2085 "y.tab.c"
    break;

  case 75:
#line 189 "parser.y"
                {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2091 "y.tab.c"
    break;

  case 76:
#line 191 "parser.y"
                                       {
    (yyval.nPtr) = id((yyvsp[-1].string));
    // char str[100];
    // strcpy(str,$3);
    // char types[10][10];
    // int j = 0;
    // for(int i=0;i<99;i++){
    //     if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
    //         if(str[i+1] == 'd'){
    //             strcpy(types[j],"int");
    //         }
    //         else if(str[i+1] == 'f'){
    //             strcpy(types[j],"float");
    //         }
    //         else if(str[i+1] == 'c'){
    //             strcpy(types[j],"char");
    //         }
    //         else if(str[i+1] == 's'){
    //             strcpy(types[j],"string");
    //         }
    //         j++;
    //     }
    // }
    // for(int i=0;i<j;i++){
    //     printf("%s\n",types[i]);
    // }
    // printf("%s",str);
    // printf("No Args");

}
#line 2126 "y.tab.c"
    break;

  case 77:
#line 221 "parser.y"
                                            {
    (yyval.nPtr) = id((yyvsp[-3].string));
    // char str[100];
    // strcpy(str,$3);
    // char types[10][10];
    // int j = 0;
    // for(int i=0;i<99;i++){
    //     if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
    //         if(str[i+1] == 'd'){
    //             strcpy(types[j],"int");
    //         }
    //         else if(str[i+1] == 'f'){
    //             strcpy(types[j],"float");
    //         }
    //         else if(str[i+1] == 'c'){
    //             strcpy(types[j],"char");
    //         }
    //         else if(str[i+1] == 's'){
    //             strcpy(types[j],"string");
    //         }
    //         j++;
    //     }
    // }
    // for(int i=0;i<j;i++){
    //     printf("%s\n",types[i]);
    // }
    // type_cnt = 0;
    // memset(typess,0,sizeof(typess));
    // memset(fargs,0,sizeof(typess));
    
    // arg_parse($5,scope,isInFunction,functionName);
    //for(int i=0;i<type_cnt;i++){
        //printf("Here => %s %s\n",fargs[i],typess[i]);
    //}
    // if(j!=type_cnt){
    //     printf("\nError: Number of arguments do not match in printf\n");
    //     yyerror();
    // }
    // for(int i=0;i<j;i++){
    //     // printf("%s %s\n",types[i],typess[i]);
    //     if(strcmp(types[i],typess[i])!=0){
    //         printf("\nError: Type of arguments do not match in printf\n");
    //         yyerror();
    //     }
    // }
    // char output[100];
    // int vv = 0;
    // int ii = 0;
    // printf("--------------code_output_here------------\n");
    // for(int i=1;i<99;i++){
    //     if(str[i] == '"'){
    //         break;
    //     }
    //     if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
    //        if(str[i+1] == 'd'){
    //             int sc = 0;
    //             for(;sc<=scope;sc++) {
    //                 char scopeName[40],funcScopeName[40];
    //                 sprintf(scopeName, "%d+%s", sc, fargs[vv]);
    //                 if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    //                 else strcpy(funcScopeName,scopeName);
    //                 int hash = fast_string_hash(funcScopeName);
    //                 if(symbol_table[hash].len > 0){
    //                     break;
    //                 }
    //             }
                    
    //                 // printf("scc%dscc",sc);
    //                 char scopeName[40],funcScopeName[40];
    //                 sprintf(scopeName, "%d+%s", sc, fargs[vv]);
    //                 if(isInFunction) sprintf(funcScopeName,"%d+%s+%s",sc,functionName,scopeName);
    //                 else strcpy(funcScopeName,scopeName);
    //                 int hash = fast_string_hash(funcScopeName);
    //                 // int x = &symbol_table[hash].value;
    //                 // printf("Hash %d\n",*(int *)symbol_table[hash].value);
    //                 if(($5->opr.oper == (int)'a')){
    //                         int idx = atoi($5->opr.op[1]->con.value);
    //                         int *arr = ((int *)symbol_table[hash].value);

    //                         printf("%d",arr[idx]);
    //                 }
    //                 else{
    //                         printf("%d",*((int *)symbol_table[hash].value));
    //                 }
    //             i++;
    //             vv++;
    //         }
    //         else if(str[i+1] == 'f'){
    //             int sc = 0;
    //             for(;sc<=scope;sc++) {
    //                 char scopeName[40],funcScopeName[40];
    //                 sprintf(scopeName, "%d+%s", sc, fargs[vv]);
    //                 if(isInFunction) sprintf(funcScopeName,"1+%s+%s",functionName,scopeName);
    //                 else strcpy(funcScopeName,scopeName);
    //                 int hash = fast_string_hash(funcScopeName);
    //                 if(symbol_table[hash].len > 0){
    //                     break;
    //                 }
    //             }
    //                 // printf("scc%dscc",sc);
    //                 char scopeName[40],funcScopeName[40];
    //                 sprintf(scopeName, "%d+%s", sc, fargs[vv]);
    //                 if(isInFunction) sprintf(funcScopeName,"%d+%s+%s",sc,functionName,scopeName);
    //                 else strcpy(funcScopeName,scopeName);
    //                 int hash = fast_string_hash(funcScopeName);
    //                 // int x = &symbol_table[hash].value;
    //                 // printf("Hash %d\n",*(int *)symbol_table[hash].value);
    //                 printf("%f",*((float *)symbol_table[hash].value));
    //             i++;
    //             vv++;
    //         }
            
    //     }
    //     else if(str[i] == '\\' && str[i+1] == 'n'){
    //         printf("\n");
    //         i++;
    //     }
    //     else{
    //         printf("%c",str[i]);
    //     }
    // }
    
    // int kk = 1;
    // while(output[kk+1]!='\0'){
    //     printf("%c",output[kk]);
    //     kk++;
    // }
    
}
#line 2260 "y.tab.c"
    break;

  case 78:
#line 353 "parser.y"
               {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2266 "y.tab.c"
    break;

  case 80:
#line 359 "parser.y"
                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2272 "y.tab.c"
    break;

  case 81:
#line 360 "parser.y"
                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2278 "y.tab.c"
    break;

  case 82:
#line 364 "parser.y"
          {scope++;}
#line 2284 "y.tab.c"
    break;

  case 83:
#line 364 "parser.y"
                                             {scope--;}
#line 2290 "y.tab.c"
    break;

  case 84:
#line 364 "parser.y"
                                                            {(yyval.nPtr) = (yyvsp[-2].nPtr);}
#line 2296 "y.tab.c"
    break;

  case 85:
#line 365 "parser.y"
          {scope++;}
#line 2302 "y.tab.c"
    break;

  case 86:
#line 365 "parser.y"
                                   {scope--;}
#line 2308 "y.tab.c"
    break;

  case 87:
#line 365 "parser.y"
                                                 {(yyval.nPtr) = (yyvsp[-2].nPtr);}
#line 2314 "y.tab.c"
    break;

  case 88:
#line 366 "parser.y"
             {(yyval.nPtr) = id("empty");}
#line 2320 "y.tab.c"
    break;

  case 89:
#line 369 "parser.y"
                                                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2326 "y.tab.c"
    break;

  case 90:
#line 372 "parser.y"
                    {(yyval.nPtr) = id("");}
#line 2332 "y.tab.c"
    break;

  case 91:
#line 373 "parser.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2338 "y.tab.c"
    break;

  case 92:
#line 376 "parser.y"
                                                {(yyval.nPtr) = opr(IF,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2344 "y.tab.c"
    break;

  case 93:
#line 377 "parser.y"
                                                  {(yyval.nPtr) = opr(IF+ELSE,3,(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2350 "y.tab.c"
    break;

  case 95:
#line 382 "parser.y"
                                                                                                        {(yyval.nPtr) = opr(WHILE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2356 "y.tab.c"
    break;

  case 96:
#line 383 "parser.y"
                                                                                                {(yyval.nPtr) = opr(DO+WHILE,2,(yyvsp[-5].nPtr),(yyvsp[-2].nPtr));}
#line 2362 "y.tab.c"
    break;

  case 97:
#line 384 "parser.y"
          {scope++;}
#line 2368 "y.tab.c"
    break;

  case 98:
#line 384 "parser.y"
                                                                            {scope--;}
#line 2374 "y.tab.c"
    break;

  case 99:
#line 384 "parser.y"
                                                                                                        {(yyval.nPtr) = opr(FOR,4,(yyvsp[-5].nPtr),(yyvsp[-4].nPtr),(yyvsp[-3].nPtr),(yyvsp[0].nPtr));}
#line 2380 "y.tab.c"
    break;

  case 100:
#line 387 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2386 "y.tab.c"
    break;

  case 101:
#line 388 "parser.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2392 "y.tab.c"
    break;

  case 102:
#line 391 "parser.y"
                                        {(yyval.nPtr) = opr('j',2,id("goto"),id((yyvsp[-1].string)));}
#line 2398 "y.tab.c"
    break;

  case 103:
#line 392 "parser.y"
                                                {(yyval.nPtr) = id("continue");}
#line 2404 "y.tab.c"
    break;

  case 104:
#line 393 "parser.y"
                                                        {(yyval.nPtr) = opr(BREAK,0);}
#line 2410 "y.tab.c"
    break;

  case 105:
#line 394 "parser.y"
                                      {(yyval.nPtr) = opr('j',2,id("return"),(yyvsp[0].nPtr));}
#line 2416 "y.tab.c"
    break;

  case 106:
#line 398 "parser.y"
                                                                {(yyval.nPtr) = opr('f',2,id((yyvsp[-3].string)),(yyvsp[-1].nPtr));isInFunction=1;strcpy(functionName,(yyvsp[-3].string));}
#line 2422 "y.tab.c"
    break;

  case 107:
#line 399 "parser.y"
                     {(yyval.nPtr) = id((yyvsp[-2].string));isInFunction=1;strcpy(functionName,(yyvsp[-2].string));}
#line 2428 "y.tab.c"
    break;

  case 108:
#line 400 "parser.y"
                     {(yyval.nPtr) = id((yyvsp[-2].string));isInFunction=1;strcpy(functionName,(yyvsp[-2].string));}
#line 2434 "y.tab.c"
    break;

  case 109:
#line 402 "parser.y"
                                                                         {(yyval.nPtr) = opr('z',2,(yyvsp[-3].nPtr),opr('k',2,((yyvsp[-1].nPtr)),(yyvsp[0].nPtr)));}
#line 2440 "y.tab.c"
    break;

  case 110:
#line 403 "parser.y"
                {(yyval.nPtr) = opr('k',2,((yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2446 "y.tab.c"
    break;

  case 111:
#line 406 "parser.y"
                                                   {
    //Storing Function in Symbol Table
    // insert_function($1,$2);
    insert_function((yyvsp[-2].nPtr)->id.name,(yyvsp[-1].nPtr),isInFunction,functionName);
    isInFunction =0;
    strcpy(functionName,"+GLOBAL+");
    // char *specifier = $1->id.name;
    // char *name = $2->opr.op[0]->id.name;
    // int hash = fast_function_insert(specifier,name);
    
    // int i = 0;
    // nodeType* root = $2->opr.op[1];
    // //Insert Args as Global Variables while function calling
    // //Now Just Store Args in Symbol Table
    // while(root->opr.op[1]->opr.op[0] != NULL)
    // {

    //     // printf("%s ",root->opr.op[1]->opr.op[0]->id.name);
    //     strcpy(symbol_table_function[hash].argstype[i],root->opr.op[1]->opr.op[0]->id.name);
    //     strcpy(symbol_table_function[hash].args[i],root->opr.op[1]->opr.op[1]->id.name);
    //     i++;
    //     root = root->opr.op[0];
    // }
    // strcpy(symbol_table_function[hash].argstype[i] , root->opr.op[0]->id.name);
    // strcpy(symbol_table_function[hash].args[i] , root->opr.op[1]->id.name);
    // i++;
    // symbol_table_function[hash].args_len = i;
    
    // Compound Statement
    (yyval.nPtr) = opr('g',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));
}
#line 2482 "y.tab.c"
    break;

  case 112:
#line 438 "parser.y"
                                              {
    (yyval.nPtr) = opr('g',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));
    
}
#line 2491 "y.tab.c"
    break;

  case 115:
#line 448 "parser.y"
                          {isInFunction = 1; strcpy(functionName,"MAIN");}
#line 2497 "y.tab.c"
    break;

  case 116:
#line 448 "parser.y"
                                                                                                {ex((yyvsp[0].nPtr), 0);icg_generation((yyvsp[0].nPtr));}
#line 2503 "y.tab.c"
    break;

  case 117:
#line 449 "parser.y"
                                                {                        
                                                if(if_assign)
                                                {											
                                                    ex((yyvsp[0].nPtr), 2); /*freeNode($2);*/
                                                }
                                            }
#line 2514 "y.tab.c"
    break;

  case 118:
#line 455 "parser.y"
                                                {                        
                                                if(if_assign)
                                                {											
                                                    ex((yyvsp[0].nPtr), 2); /*freeNode($2);*/
                                                }
                                            }
#line 2525 "y.tab.c"
    break;


#line 2529 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 463 "parser.y"

    
    
int main() {
    yyparse();
    print_symbol_table();
}
    
void yyerror() {
    printf("Invalid Syntax");
}
    
    
    
nodeType *con(char *value)
{
    nodeType *p;
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeCon;
    strcpy(p->con.value, value);
    /* printf("value=%s",value) */
    return p;
}
nodeType *id(char *identifier) {
    nodeType *p;
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeId;
    strcpy(p->id.name,identifier);
    /* printf("The copied identifier %s\n", p->id.name); */
    return p;
}
    
nodeType *opr(int oper, int nops, ...)
{
    va_list ap;
    nodeType *p;
    int i;
    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");
    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}
