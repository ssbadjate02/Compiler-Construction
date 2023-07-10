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
#define YYLAST   688

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
       2,     2,     2,    50,     2,     2,     2,    49,     2,     2,
      55,    56,    47,    45,    60,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    59,
      43,    52,    44,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,    51,     2,     2,     2,
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
       0,    77,    77,    78,    80,    86,    87,    88,    91,    92,
      95,    96,    97,    98,    99,   101,   102,   104,   105,   106,
     109,   110,   114,   115,   116,   117,   119,   120,   121,   122,
     123,   124,   128,   129,   130,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     168,   169,   170,   171,   174,   175,   176,   177,   180,   181,
     182,   183,   184,   185,   186,   187,   189,   218,   264,   265,
     270,   271,   275,   275,   275,   276,   276,   276,   277,   280,
     283,   284,   287,   288,   289,   293,   294,   295,   295,   295,
     298,   299,   303,   304,   305,   306,   310,   311,   312,   314,
     315,   318,   350,   356,   357,   360,   360,   361,   367
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
  "GOTO", "CONTINUE", "BREAK", "RETURN", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'!'", "'~'", "'='", "'?'", "':'", "'('", "')'", "'{'",
  "'}'", "';'", "','", "'['", "']'", "$accept", "declaration_list",
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
     295,   296,   297,    60,    62,    43,    45,    42,    47,    37,
      33,   126,    61,    63,    58,    40,    41,   123,   125,    59,
      44,    91,    93
};
# endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,   -87,   -30,   -87,     3,   -87,    19,   -87,   184,   -87,
     -43,   -21,    17,   -21,    -9,   -87,   -48,    17,   -87,   -87,
      16,   142,    96,   -87,   -87,    76,   202,   101,   -87,   -87,
     -87,   -87,    76,   -42,   -87,    75,   228,   -87,   -87,    32,
     -87,    82,    76,    76,   101,   101,   101,   101,   101,   317,
      14,   -87,   578,   -87,   -87,   -87,   -87,   293,    17,    31,
     -87,    75,   228,   -87,    76,   -87,    57,    59,    61,    65,
     228,   -87,   152,    86,   118,    35,   -87,   -87,   274,   374,
     120,   -87,   122,   -87,   228,   -87,   -87,   -87,   -87,   325,
      31,    31,   135,   135,    68,    68,   391,   101,   -27,     1,
      24,   578,   -87,   -87,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   124,
     -87,    76,   -87,   228,   -87,   128,   185,   101,   101,   101,
     153,   136,   138,   -87,   -87,   -87,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   -87,   -87,   -87,
     -87,   145,   -87,   -32,   -87,    38,   -87,   137,   -87,   101,
     151,   151,     7,     7,   607,   607,   635,   589,     7,     7,
     135,   135,    68,    68,   566,   101,    31,   -87,   -31,   440,
     454,   503,   160,    75,   -87,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   -87,   -87,   -87,   101,
      39,   578,   101,   304,   -87,   101,   228,   228,   228,   101,
      35,    51,   -87,   -87,    33,   183,   -87,   -87,   517,   101,
     -87,   -87,   228,   159,   578,   -87,   -87,   -87,   -87,   163,
     228,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     5,     7,     0,   118,     0,   117,     0,   113,
       0,     0,     0,    17,     0,     8,    11,     0,     1,   114,
       0,     0,    85,   112,     4,     0,     0,     0,   111,   115,
       5,   107,     0,     0,    88,     0,     0,    17,     9,    17,
      32,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    33,    10,    28,    26,    27,    34,     0,     0,   110,
     106,     0,    90,     3,     0,    83,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,    79,    68,    31,     0,
       0,    80,     0,    70,    86,    69,    71,    72,    73,     0,
      60,    61,    66,    67,    64,    65,     0,     0,     0,    31,
       0,    24,    62,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
     116,     0,     2,    91,    89,     0,     0,     0,     0,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    74,    75,
      81,     0,    20,     0,    30,     0,    13,     0,    12,     0,
      54,    55,    56,    57,    58,    59,    52,    53,    50,    51,
      46,    47,    48,    49,     0,     0,   109,    84,     0,     0,
       0,     0,     0,     0,   102,    40,    41,    42,    43,    44,
      38,    39,    36,    45,    37,    35,    87,    21,    15,     0,
      31,    25,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,    29,    18,     0,    92,    94,    95,     0,     0,
      16,    77,     0,     0,   100,   101,    98,    93,    96,     0,
       0,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,     9,     2,   -87,   196,   -87,    -6,   -87,   -86,
      21,     6,   -87,   -87,   -87,   -35,   -87,   -70,   165,    15,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   216,   -87,   -87,   -87,   220,   -87
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
      16,    10,     6,   153,    26,   135,    11,   102,   103,     5,
       6,   155,    20,    27,    60,   104,   105,     5,    61,    16,
     102,   103,    13,    32,   197,   204,    59,    23,   159,   205,
      78,   156,    28,   157,    21,   130,    90,    91,    39,    40,
      56,    42,    43,    99,    63,   102,   103,    52,    57,   150,
      24,    25,   114,   115,   116,   117,    78,   -22,    16,   -22,
     118,   -22,    27,   121,    78,    92,    93,    94,    95,    96,
     101,   122,    29,   120,    22,    27,   104,   105,    78,    37,
      44,    45,   158,    99,   159,    46,    47,    89,   150,   221,
      48,    99,    27,   159,    76,   -23,   198,   -23,   159,   -23,
      27,     1,    30,     3,    39,    40,    56,    42,    43,   220,
     101,   159,   126,   211,   127,   176,   128,    78,   101,   214,
     129,   118,   -82,   -82,   -82,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     219,   -14,   -14,   104,   105,   133,    44,    45,   179,   180,
     181,    46,    47,   200,    34,   132,    48,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     1,    30,
       3,   215,   216,   217,     1,     2,     3,   134,     4,   148,
     201,   149,   116,   117,    18,   175,   177,   227,   118,   182,
     178,   183,   210,    99,   199,   231,   203,   184,    31,    99,
      78,    78,    78,   196,   118,    39,    40,    41,    42,    43,
       1,     2,     3,    78,     4,   209,    78,   222,   228,   230,
     101,    38,    17,   212,    78,   225,   101,   123,    19,     0,
     218,    39,    40,    56,    42,    43,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,    46,    47,     1,    30,     3,    48,     0,    49,
      66,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,    44,    45,     0,     0,     0,    46,    47,
     102,   103,     0,    48,     0,    22,     0,    76,     0,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
       0,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,   111,
      39,    40,    56,    42,    43,     0,   146,     0,    39,    40,
      56,    42,    43,     0,     0,    27,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,   112,   113,   114,
     115,   116,   117,     0,     0,   119,     0,   118,     0,     0,
       0,     0,    44,    45,     0,     0,   213,    46,    47,     0,
      44,    45,    48,     0,    97,    46,    47,     0,     0,     0,
      48,   152,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   147,   112,   113,   114,   115,   116,   117,
       0,     0,     0,     0,   118,     0,     0,   154,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,   118,     0,     0,   206,   112,   113,   114,
     115,   116,   117,     0,     0,     0,     0,   118,     0,     0,
     207,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,   118,     0,     0,   208,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
     118,     0,     0,   223,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,     0,     0,     0,     0,     0,   112,
     113,   114,   115,   116,   117,   104,   105,   106,   107,   118,
     202,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,   118,   112,   113,   114,   115,   116,   117,     0,     0,
       0,     0,   118,   104,   105,   106,   107,   108,   109,     0,
     112,   113,   114,   115,   116,   117,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,   118
};

static const yytype_int16 yycheck[] =
{
       6,    31,     0,    89,    52,    75,     3,     6,     7,     0,
       8,    97,    55,    61,    56,     8,     9,     8,    60,    25,
       6,     7,     3,    21,    56,    56,    32,    12,    60,    60,
      36,    58,    17,    60,    55,    70,    42,    43,     3,     4,
       5,     6,     7,    49,    35,     6,     7,    26,    27,    84,
      59,    60,    45,    46,    47,    48,    62,    56,    64,    58,
      53,    60,    61,    61,    70,    44,    45,    46,    47,    48,
      49,    62,    56,    58,    57,    61,     8,     9,    84,     3,
      45,    46,    58,    89,    60,    50,    51,    55,   123,    56,
      55,    97,    61,    60,    59,    56,    58,    58,    60,    60,
      61,    26,    27,    28,     3,     4,     5,     6,     7,    58,
      89,    60,    55,   199,    55,   121,    55,   123,    97,   205,
      55,    53,    26,    27,    28,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     210,    59,    60,     8,     9,    59,    45,    46,   127,   128,
     129,    50,    51,   159,    58,     3,    55,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    26,    27,
      28,   206,   207,   208,    26,    27,    28,    59,    30,    59,
     159,    59,    47,    48,     0,    61,    58,   222,    53,    36,
       5,    55,   183,   199,    57,   230,   175,    59,    56,   205,
     206,   207,   208,    58,    53,     3,     4,     5,     6,     7,
      26,    27,    28,   219,    30,    55,   222,    34,    59,    56,
     199,    25,     6,   202,   230,   219,   205,    62,     8,    -1,
     209,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    51,    26,    27,    28,    55,    -1,    57,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    51,
       6,     7,    -1,    55,    -1,    57,    -1,    59,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
       3,     4,     5,     6,     7,    -1,    52,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    61,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,    43,    44,    45,
      46,    47,    48,    -1,    -1,    62,    -1,    53,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    62,    50,    51,    -1,
      45,    46,    55,    -1,    57,    50,    51,    -1,    -1,    -1,
      55,    56,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    56,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    56,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      56,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,     8,     9,    10,    11,    53,
      54,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    53,     8,     9,    10,    11,    12,    13,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    28,    30,    65,    66,    97,    98,    99,
      31,     3,    95,     3,    67,    68,    70,    95,     0,    99,
      55,    55,    57,    82,    59,    60,    52,    61,    82,    56,
      27,    56,    66,    96,    58,    83,    85,     3,    68,     3,
       4,     5,     6,     7,    45,    46,    50,    51,    55,    57,
      70,    71,    73,    75,    76,    77,     5,    73,   100,    70,
      56,    60,    64,    65,    66,    87,    32,    33,    35,    36,
      37,    38,    39,    40,    41,    42,    59,    65,    70,    73,
      74,    78,    79,    80,    81,    82,    89,    90,    94,    55,
      70,    70,    73,    73,    73,    73,    73,    57,    69,    70,
      72,    73,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    43,    44,    45,    46,    47,    48,    53,    62,
      82,    66,    65,    81,    88,    84,    55,    55,    55,    55,
      78,    91,     3,    59,    59,    80,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    52,    59,    59,    59,
      78,    86,    56,    72,    56,    72,    58,    60,    58,    60,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    61,    70,    58,     5,    73,
      73,    73,    36,    55,    59,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    58,    56,    58,    57,
      70,    73,    54,    73,    56,    60,    56,    56,    56,    55,
      65,    72,    73,    62,    72,    78,    78,    78,    73,    80,
      58,    56,    34,    56,    73,    74,    93,    78,    59,    92,
      56,    78
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
#line 77 "parser.y"
                                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1669 "y.tab.c"
    break;

  case 3:
#line 78 "parser.y"
                  {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1675 "y.tab.c"
    break;

  case 4:
#line 80 "parser.y"
                                                {
    check_multiple_declaration((yyvsp[-2].nPtr)->id.name,(yyvsp[-1].nPtr),scope,isInFunction,functionName);
    (yyval.nPtr) = opr(';',1,(yyvsp[-1].nPtr));
}
#line 1684 "y.tab.c"
    break;

  case 5:
#line 86 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1690 "y.tab.c"
    break;

  case 6:
#line 87 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1696 "y.tab.c"
    break;

  case 7:
#line 88 "parser.y"
                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1702 "y.tab.c"
    break;

  case 8:
#line 91 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1708 "y.tab.c"
    break;

  case 9:
#line 92 "parser.y"
                                                {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1714 "y.tab.c"
    break;

  case 10:
#line 95 "parser.y"
                                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1720 "y.tab.c"
    break;

  case 11:
#line 96 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1726 "y.tab.c"
    break;

  case 12:
#line 97 "parser.y"
                                                  {(yyval.nPtr) = opr('y',2,((yyvsp[-4].nPtr)),((yyvsp[-1].nPtr)));}
#line 1732 "y.tab.c"
    break;

  case 13:
#line 98 "parser.y"
                                                  {(yyval.nPtr) = opr('u',2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1738 "y.tab.c"
    break;

  case 14:
#line 99 "parser.y"
                                                 {(yyval.nPtr) = opr('s',2,(yyvsp[-2].nPtr),con((yyvsp[0].string)));}
#line 1744 "y.tab.c"
    break;

  case 15:
#line 101 "parser.y"
                                                  {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1750 "y.tab.c"
    break;

  case 16:
#line 102 "parser.y"
                                                {(yyval.nPtr) = opr('x',2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1756 "y.tab.c"
    break;

  case 17:
#line 104 "parser.y"
                                                {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1762 "y.tab.c"
    break;

  case 18:
#line 105 "parser.y"
                                                {(yyval.nPtr) = opr('2',3,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1768 "y.tab.c"
    break;

  case 19:
#line 106 "parser.y"
                                                {(yyval.nPtr) = opr('a',2,(yyvsp[-3].nPtr),(yyvsp[-1].nPtr));}
#line 1774 "y.tab.c"
    break;

  case 20:
#line 109 "parser.y"
                                                           {(yyval.nPtr) = opr('f',1,id((yyvsp[-2].string)));}
#line 1780 "y.tab.c"
    break;

  case 21:
#line 110 "parser.y"
                                                {(yyval.nPtr) = opr('f',2,id((yyvsp[-3].string)),(yyvsp[-1].nPtr));}
#line 1786 "y.tab.c"
    break;

  case 22:
#line 114 "parser.y"
                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1792 "y.tab.c"
    break;

  case 23:
#line 115 "parser.y"
                                        {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1798 "y.tab.c"
    break;

  case 24:
#line 116 "parser.y"
                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1804 "y.tab.c"
    break;

  case 25:
#line 117 "parser.y"
                                        {(yyval.nPtr) = opr(',',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1810 "y.tab.c"
    break;

  case 26:
#line 119 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1816 "y.tab.c"
    break;

  case 27:
#line 120 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1822 "y.tab.c"
    break;

  case 28:
#line 121 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1828 "y.tab.c"
    break;

  case 29:
#line 122 "parser.y"
                                                {'?',2,(yyvsp[-4].nPtr),opr(':',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyvsp[-4].nPtr),scope,isInFunction,functionName); check_undeclared_variables((yyvsp[-2].nPtr),scope,isInFunction,functionName); check_undeclared_variables((yyvsp[0].nPtr),scope,isInFunction,functionName);}
#line 1834 "y.tab.c"
    break;

  case 30:
#line 123 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[-1].nPtr); check_undeclared_variables((yyvsp[-1].nPtr),scope,isInFunction,functionName);}
#line 1840 "y.tab.c"
    break;

  case 31:
#line 124 "parser.y"
                                                {
        (yyval.nPtr) = (yyvsp[0].nPtr); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);
            
    }
#line 1849 "y.tab.c"
    break;

  case 32:
#line 128 "parser.y"
                                                {(yyval.nPtr) = con((yyvsp[0].string)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1855 "y.tab.c"
    break;

  case 33:
#line 129 "parser.y"
                                                {(yyval.nPtr) = (yyvsp[0].nPtr); check_valid_function_call((yyvsp[0].nPtr),scope,isInFunction,functionName);}
#line 1861 "y.tab.c"
    break;

  case 34:
#line 130 "parser.y"
                                                {(yyval.nPtr) = con((yyvsp[0].string)); }
#line 1867 "y.tab.c"
    break;

  case 35:
#line 141 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName); }
#line 1873 "y.tab.c"
    break;

  case 36:
#line 142 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('&',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1879 "y.tab.c"
    break;

  case 37:
#line 143 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('|',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1885 "y.tab.c"
    break;

  case 38:
#line 144 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('l',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1891 "y.tab.c"
    break;

  case 39:
#line 145 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('r',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1897 "y.tab.c"
    break;

  case 40:
#line 146 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1903 "y.tab.c"
    break;

  case 41:
#line 147 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1909 "y.tab.c"
    break;

  case 42:
#line 148 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('%',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1915 "y.tab.c"
    break;

  case 43:
#line 149 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1921 "y.tab.c"
    break;

  case 44:
#line 150 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1927 "y.tab.c"
    break;

  case 45:
#line 151 "parser.y"
                                {(yyval.nPtr) = opr('=',2,(yyvsp[-2].nPtr),opr('^',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr))); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1933 "y.tab.c"
    break;

  case 46:
#line 153 "parser.y"
                            {(yyval.nPtr) = opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1939 "y.tab.c"
    break;

  case 47:
#line 154 "parser.y"
                            {(yyval.nPtr) = opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1945 "y.tab.c"
    break;

  case 48:
#line 155 "parser.y"
                            {(yyval.nPtr) = opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1951 "y.tab.c"
    break;

  case 49:
#line 156 "parser.y"
                            {(yyval.nPtr) = opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1957 "y.tab.c"
    break;

  case 50:
#line 157 "parser.y"
                            {(yyval.nPtr) = opr('<',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1963 "y.tab.c"
    break;

  case 51:
#line 158 "parser.y"
                            {(yyval.nPtr) = opr('>',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1969 "y.tab.c"
    break;

  case 52:
#line 159 "parser.y"
                            {(yyval.nPtr) = opr('&',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1975 "y.tab.c"
    break;

  case 53:
#line 160 "parser.y"
                            {(yyval.nPtr) = opr('|',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1981 "y.tab.c"
    break;

  case 54:
#line 161 "parser.y"
                            {(yyval.nPtr) = opr('l',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1987 "y.tab.c"
    break;

  case 55:
#line 162 "parser.y"
                            {(yyval.nPtr) = opr('r',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1993 "y.tab.c"
    break;

  case 56:
#line 163 "parser.y"
                            {(yyval.nPtr) = opr(LE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 1999 "y.tab.c"
    break;

  case 57:
#line 164 "parser.y"
                            {(yyval.nPtr) = opr(GE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2005 "y.tab.c"
    break;

  case 58:
#line 165 "parser.y"
                            {(yyval.nPtr) = opr(EQ_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2011 "y.tab.c"
    break;

  case 59:
#line 166 "parser.y"
                            {(yyval.nPtr) = opr(NE_OP,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2017 "y.tab.c"
    break;

  case 60:
#line 168 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('+', 2, (yyvsp[0].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2023 "y.tab.c"
    break;

  case 61:
#line 169 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('+', 2, (yyvsp[0].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2029 "y.tab.c"
    break;

  case 62:
#line 170 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('+', 2, (yyvsp[-1].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2035 "y.tab.c"
    break;

  case 63:
#line 171 "parser.y"
                            {(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('-', 2, (yyvsp[-1].nPtr), con("1") ) );check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2041 "y.tab.c"
    break;

  case 64:
#line 174 "parser.y"
                            {(yyval.nPtr) = opr('!',1,(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2047 "y.tab.c"
    break;

  case 65:
#line 175 "parser.y"
                            {(yyval.nPtr) = opr('~',1,(yyvsp[0].nPtr)); check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2053 "y.tab.c"
    break;

  case 66:
#line 176 "parser.y"
                                        {(yyval.nPtr) = opr('+',1,(yyvsp[0].nPtr));check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2059 "y.tab.c"
    break;

  case 67:
#line 177 "parser.y"
                                                {(yyval.nPtr) = opr('-',1,(yyvsp[0].nPtr));check_undeclared_variables((yyval.nPtr),scope,isInFunction,functionName);}
#line 2065 "y.tab.c"
    break;

  case 69:
#line 181 "parser.y"
                         {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2071 "y.tab.c"
    break;

  case 70:
#line 182 "parser.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2077 "y.tab.c"
    break;

  case 71:
#line 183 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2083 "y.tab.c"
    break;

  case 72:
#line 184 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2089 "y.tab.c"
    break;

  case 73:
#line 185 "parser.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2095 "y.tab.c"
    break;

  case 75:
#line 187 "parser.y"
                {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2101 "y.tab.c"
    break;

  case 76:
#line 189 "parser.y"
                                       {
    (yyval.nPtr) = id((yyvsp[-1].string));
    char str[100];
    strcpy(str,(yyvsp[-1].string));
    char types[10][10];
    int j = 0;
    for(int i=0;i<99;i++){
        if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
            if(str[i+1] == 'd'){
                strcpy(types[j],"int");
            }
            else if(str[i+1] == 'f'){
                strcpy(types[j],"float");
            }
            else if(str[i+1] == 'c'){
                strcpy(types[j],"char");
            }
            else if(str[i+1] == 's'){
                strcpy(types[j],"string");
            }
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%s\n",types[i]);
    }
    printf("No Args");

}
#line 2135 "y.tab.c"
    break;

  case 77:
#line 218 "parser.y"
                                            {
    (yyval.nPtr) = id((yyvsp[-3].string));
    char str[100];
    strcpy(str,(yyvsp[-3].string));
    char types[10][10];
    int j = 0;
    for(int i=0;i<99;i++){
        if(str[i] == '%' && (str[i+1]=='d' || str[i+1] == 'f' || str[i+1] == 'c' || str[i+1] == 's')){
            if(str[i+1] == 'd'){
                strcpy(types[j],"int");
            }
            else if(str[i+1] == 'f'){
                strcpy(types[j],"float");
            }
            else if(str[i+1] == 'c'){
                strcpy(types[j],"char");
            }
            else if(str[i+1] == 's'){
                strcpy(types[j],"string");
            }
            j++;
        }
    }
    for(int i=0;i<j;i++){
        printf("%s\n",types[i]);
    }
    type_cnt = 0;
    memset(typess,0,sizeof(typess));
    arg_parse((yyvsp[-1].nPtr),scope,isInFunction,functionName);
    for(int i=0;i<type_cnt;i++){
        printf("%s\n",typess[i]);
    }
    if(j!=type_cnt){
        printf("\nError: Number of arguments do not match in printf\n");
        yyerror();
    }
    for(int i=0;i<j;i++){
        if(strcmp(types[i],typess[i])!=0){
            printf("\nError: Type of arguments do not match in printf\n");
            yyerror();
        }
    }
}
#line 2183 "y.tab.c"
    break;

  case 78:
#line 264 "parser.y"
               {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2189 "y.tab.c"
    break;

  case 80:
#line 270 "parser.y"
                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2195 "y.tab.c"
    break;

  case 81:
#line 271 "parser.y"
                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2201 "y.tab.c"
    break;

  case 82:
#line 275 "parser.y"
          {scope++;}
#line 2207 "y.tab.c"
    break;

  case 83:
#line 275 "parser.y"
                                             {scope--;}
#line 2213 "y.tab.c"
    break;

  case 84:
#line 275 "parser.y"
                                                            {(yyval.nPtr) = (yyvsp[-2].nPtr);}
#line 2219 "y.tab.c"
    break;

  case 85:
#line 276 "parser.y"
          {scope++;}
#line 2225 "y.tab.c"
    break;

  case 86:
#line 276 "parser.y"
                                   {scope--;}
#line 2231 "y.tab.c"
    break;

  case 87:
#line 276 "parser.y"
                                                 {(yyval.nPtr) = (yyvsp[-2].nPtr);}
#line 2237 "y.tab.c"
    break;

  case 88:
#line 277 "parser.y"
             {(yyval.nPtr) = id("empty");}
#line 2243 "y.tab.c"
    break;

  case 89:
#line 280 "parser.y"
                                                               {(yyval.nPtr) = opr('\n',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2249 "y.tab.c"
    break;

  case 90:
#line 283 "parser.y"
                    {(yyval.nPtr) = id("");}
#line 2255 "y.tab.c"
    break;

  case 91:
#line 284 "parser.y"
                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2261 "y.tab.c"
    break;

  case 92:
#line 287 "parser.y"
                                                {(yyval.nPtr) = opr(IF,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2267 "y.tab.c"
    break;

  case 93:
#line 288 "parser.y"
                                                  {(yyval.nPtr) = opr(IF+ELSE,3,(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2273 "y.tab.c"
    break;

  case 95:
#line 293 "parser.y"
                                                                                                        {(yyval.nPtr) = opr(WHILE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2279 "y.tab.c"
    break;

  case 96:
#line 294 "parser.y"
                                                                                                {(yyval.nPtr) = opr(DO+WHILE,2,(yyvsp[-5].nPtr),(yyvsp[-2].nPtr));}
#line 2285 "y.tab.c"
    break;

  case 97:
#line 295 "parser.y"
              {scope++;}
#line 2291 "y.tab.c"
    break;

  case 98:
#line 295 "parser.y"
                                                                                {scope--;}
#line 2297 "y.tab.c"
    break;

  case 99:
#line 295 "parser.y"
                                                                                                        {(yyval.nPtr) = opr(FOR,4,(yyvsp[-5].nPtr),(yyvsp[-4].nPtr),(yyvsp[-3].nPtr),(yyvsp[0].nPtr));}
#line 2303 "y.tab.c"
    break;

  case 100:
#line 298 "parser.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2309 "y.tab.c"
    break;

  case 101:
#line 299 "parser.y"
                 {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2315 "y.tab.c"
    break;

  case 102:
#line 303 "parser.y"
                                        {(yyval.nPtr) = opr('j',2,id("goto"),id((yyvsp[-1].string)));}
#line 2321 "y.tab.c"
    break;

  case 103:
#line 304 "parser.y"
                                                {(yyval.nPtr) = id("continue");}
#line 2327 "y.tab.c"
    break;

  case 104:
#line 305 "parser.y"
                                                        {(yyval.nPtr) = opr(BREAK,0);}
#line 2333 "y.tab.c"
    break;

  case 105:
#line 306 "parser.y"
                                      {(yyval.nPtr) = opr('e',2,id("return"),(yyvsp[0].nPtr));}
#line 2339 "y.tab.c"
    break;

  case 106:
#line 310 "parser.y"
                                                                {(yyval.nPtr) = opr('f',2,id((yyvsp[-3].string)),(yyvsp[-1].nPtr));isInFunction=1;strcpy(functionName,(yyvsp[-3].string));}
#line 2345 "y.tab.c"
    break;

  case 107:
#line 311 "parser.y"
                     {(yyval.nPtr) = id((yyvsp[-2].string));isInFunction=1;strcpy(functionName,(yyvsp[-2].string));}
#line 2351 "y.tab.c"
    break;

  case 108:
#line 312 "parser.y"
                     {(yyval.nPtr) = id((yyvsp[-2].string));isInFunction=1;strcpy(functionName,(yyvsp[-2].string));}
#line 2357 "y.tab.c"
    break;

  case 109:
#line 314 "parser.y"
                                                                         {(yyval.nPtr) = opr('z',2,(yyvsp[-3].nPtr),opr('k',2,((yyvsp[-1].nPtr)),(yyvsp[0].nPtr)));}
#line 2363 "y.tab.c"
    break;

  case 110:
#line 315 "parser.y"
                {(yyval.nPtr) = opr('k',2,((yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2369 "y.tab.c"
    break;

  case 111:
#line 318 "parser.y"
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
#line 2405 "y.tab.c"
    break;

  case 112:
#line 350 "parser.y"
                                              {
    (yyval.nPtr) = opr('g',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));
    
}
#line 2414 "y.tab.c"
    break;

  case 115:
#line 360 "parser.y"
                          {isInFunction = 1; strcpy(functionName,"MAIN");}
#line 2420 "y.tab.c"
    break;

  case 116:
#line 360 "parser.y"
                                                                                                {ex((yyvsp[0].nPtr), 0);icg_generation((yyvsp[0].nPtr));}
#line 2426 "y.tab.c"
    break;

  case 117:
#line 361 "parser.y"
                                                {                        
                                                if(if_assign)
                                                {											
                                                    ex((yyvsp[0].nPtr), 2); /*freeNode($2);*/
                                                }
                                            }
#line 2437 "y.tab.c"
    break;

  case 118:
#line 367 "parser.y"
                                                {                        
                                                if(if_assign)
                                                {											
                                                    ex((yyvsp[0].nPtr), 2); /*freeNode($2);*/
                                                }
                                            }
#line 2448 "y.tab.c"
    break;


#line 2452 "y.tab.c"

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
#line 375 "parser.y"

    
    
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
