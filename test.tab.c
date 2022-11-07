/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "test.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "symbol_table.h"
#include "scope.h"
#include "misc.h"
#include "stack.h"
#include "test.tab.h"
#include "lex.yy.c"

#define TRACE_ENABLED false


// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

scope_node_t *curr_scope;

extern char *yytext;
extern int yylineno;

char datatype[100];
int num_params;

symbol_node_t * redefined_error_check(char *symbol);


// ICG 3-address-code
stack *three_address_code_stack;
TAC_code_stack *TAC_code;

TAC_buffer_node *curr_buff = NULL;
bool BUFFER_ENABLED = true;
// If BUFFER_ENABLED is true, TAC is directed to a buffer instead of stdout

char temp_buf[100];
int LABEL_COUNT = 1;
int loopStartLabel = -1, loopEndLabel = -1;
extern FILE *fp;

#line 119 "test.tab.c"

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

#include "test.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HAI = 3,                        /* HAI  */
  YYSYMBOL_COMMA = 4,                      /* COMMA  */
  YYSYMBOL_HAS = 5,                        /* HAS  */
  YYSYMBOL_A = 6,                          /* A  */
  YYSYMBOL_IT = 7,                         /* IT  */
  YYSYMBOL_HASA = 8,                       /* HASA  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_VAR = 10,                       /* VAR  */
  YYSYMBOL_YR = 11,                        /* YR  */
  YYSYMBOL_FUNC = 12,                      /* FUNC  */
  YYSYMBOL_I = 13,                         /* I  */
  YYSYMBOL_IM = 14,                        /* IM  */
  YYSYMBOL_IN = 15,                        /* IN  */
  YYSYMBOL_LOOP = 16,                      /* LOOP  */
  YYSYMBOL_EXIT = 17,                      /* EXIT  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_IFELSE = 19,                    /* IFELSE  */
  YYSYMBOL_PRINT = 20,                     /* PRINT  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_SWITCH = 23,                    /* SWITCH  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_NUMBR = 25,                     /* NUMBR  */
  YYSYMBOL_YARN = 26,                      /* YARN  */
  YYSYMBOL_NUMBAR = 27,                    /* NUMBAR  */
  YYSYMBOL_TROOF = 28,                     /* TROOF  */
  YYSYMBOL_BUKKIT = 29,                    /* BUKKIT  */
  YYSYMBOL_NOOB = 30,                      /* NOOB  */
  YYSYMBOL_EMPT = 31,                      /* EMPT  */
  YYSYMBOL_BTW = 32,                       /* BTW  */
  YYSYMBOL_INPUT = 33,                     /* INPUT  */
  YYSYMBOL_GTFO = 34,                      /* GTFO  */
  YYSYMBOL_DEFAULT = 35,                   /* DEFAULT  */
  YYSYMBOL_UPPIN = 36,                     /* UPPIN  */
  YYSYMBOL_OUTTA = 37,                     /* OUTTA  */
  YYSYMBOL_FOUND = 38,                     /* FOUND  */
  YYSYMBOL_MKAY = 39,                      /* MKAY  */
  YYSYMBOL_IFUSAYSO = 40,                  /* IFUSAYSO  */
  YYSYMBOL_AN = 41,                        /* AN  */
  YYSYMBOL_SUM = 42,                       /* SUM  */
  YYSYMBOL_DIFF = 43,                      /* DIFF  */
  YYSYMBOL_MULT = 44,                      /* MULT  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_MOD = 46,                       /* MOD  */
  YYSYMBOL_MIN = 47,                       /* MIN  */
  YYSYMBOL_MAX = 48,                       /* MAX  */
  YYSYMBOL_IFSTMT = 49,                    /* IFSTMT  */
  YYSYMBOL_IFBREAK = 50,                   /* IFBREAK  */
  YYSYMBOL_NERFIN = 51,                    /* NERFIN  */
  YYSYMBOL_WILE = 52,                      /* WILE  */
  YYSYMBOL_TIL = 53,                       /* TIL  */
  YYSYMBOL_VISIBLE = 54,                   /* VISIBLE  */
  YYSYMBOL_DIFFERENT = 55,                 /* DIFFERENT  */
  YYSYMBOL_R = 56,                         /* R  */
  YYSYMBOL_BOTH = 57,                      /* BOTH  */
  YYSYMBOL_SAEM = 58,                      /* SAEM  */
  YYSYMBOL_EITHER = 59,                    /* EITHER  */
  YYSYMBOL_WON = 60,                       /* WON  */
  YYSYMBOL_NOT = 61,                       /* NOT  */
  YYSYMBOL_ALL = 62,                       /* ALL  */
  YYSYMBOL_ANY = 63,                       /* ANY  */
  YYSYMBOL_OF = 64,                        /* OF  */
  YYSYMBOL_OIC = 65,                       /* OIC  */
  YYSYMBOL_OMG = 66,                       /* OMG  */
  YYSYMBOL_STRING = 67,                    /* STRING  */
  YYSYMBOL_IfWithoutElse = 68,             /* IfWithoutElse  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '/'  */
  YYSYMBOL_71_ = 71,                       /* '%'  */
  YYSYMBOL_72_ = 72,                       /* '+'  */
  YYSYMBOL_73_ = 73,                       /* '-'  */
  YYSYMBOL_74_ = 74,                       /* '('  */
  YYSYMBOL_75_ = 75,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_start = 77,                     /* start  */
  YYSYMBOL_Prog = 78,                      /* Prog  */
  YYSYMBOL_PreProDirective = 79,           /* PreProDirective  */
  YYSYMBOL_Argument = 80,                  /* Argument  */
  YYSYMBOL_ArgumentFunction = 81,          /* ArgumentFunction  */
  YYSYMBOL_ParameterFunction = 82,         /* ParameterFunction  */
  YYSYMBOL_Parameter = 83,                 /* Parameter  */
  YYSYMBOL_Declaration = 84,               /* Declaration  */
  YYSYMBOL_Type = 85,                      /* Type  */
  YYSYMBOL_Assignment = 86,                /* Assignment  */
  YYSYMBOL_FunctCall = 87,                 /* FunctCall  */
  YYSYMBOL_ArrayUsage = 88,                /* ArrayUsage  */
  YYSYMBOL_Funct = 89,                     /* Funct  */
  YYSYMBOL_90_1 = 90,                      /* $@1  */
  YYSYMBOL_comp_stmt = 91,                 /* comp_stmt  */
  YYSYMBOL_Scope_Start = 92,               /* Scope_Start  */
  YYSYMBOL_Scope_End = 93,                 /* Scope_End  */
  YYSYMBOL_StmtList = 94,                  /* StmtList  */
  YYSYMBOL_Stmt = 95,                      /* Stmt  */
  YYSYMBOL_Return_Statement = 96,          /* Return_Statement  */
  YYSYMBOL_Switch = 97,                    /* Switch  */
  YYSYMBOL_Cases = 98,                     /* Cases  */
  YYSYMBOL_Case = 99,                      /* Case  */
  YYSYMBOL_Default = 100,                  /* Default  */
  YYSYMBOL_loopy = 101,                    /* loopy  */
  YYSYMBOL_ForExitGoto = 102,              /* ForExitGoto  */
  YYSYMBOL_IncTop = 103,                   /* IncTop  */
  YYSYMBOL_RepeatForLabel = 104,           /* RepeatForLabel  */
  YYSYMBOL_Const = 105,                    /* Const  */
  YYSYMBOL_Operation = 106,                /* Operation  */
  YYSYMBOL_Temp = 107,                     /* Temp  */
  YYSYMBOL_IfStmt = 108,                   /* IfStmt  */
  YYSYMBOL_109_2 = 109,                    /* $@2  */
  YYSYMBOL_110_3 = 110,                    /* $@3  */
  YYSYMBOL_111_4 = 111,                    /* $@4  */
  YYSYMBOL_IfNotGoto = 112,                /* IfNotGoto  */
  YYSYMBOL_ElseNotGoto = 113,              /* ElseNotGoto  */
  YYSYMBOL_PrintFunc = 114,                /* PrintFunc  */
  YYSYMBOL_Printables = 115,               /* Printables  */
  YYSYMBOL_E = 116                         /* E  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    71,     2,     2,
      74,    75,    69,    72,     2,    73,     2,    70,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,    94,    95,    96,    97,    98,    99,   100,
     101,   106,   174,   175,   177,   178,   181,   182,   185,   186,
     188,   189,   190,   191,   192,   195,   196,   197,   198,   199,
     200,   201,   204,   205,   206,   209,   212,   216,   216,   246,
     249,   250,   252,   253,   254,   257,   258,   259,   260,   261,
     262,   263,   266,   269,   272,   273,   276,   279,   280,   283,
     305,   319,   323,   334,   335,   338,   339,   342,   343,   346,
     346,   352,   357,   352,   366,   382,   392,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "HAI", "COMMA", "HAS",
  "A", "IT", "HASA", "NUM", "VAR", "YR", "FUNC", "I", "IM", "IN", "LOOP",
  "EXIT", "ELSE", "IFELSE", "PRINT", "IF", "BREAK", "SWITCH", "CASE",
  "NUMBR", "YARN", "NUMBAR", "TROOF", "BUKKIT", "NOOB", "EMPT", "BTW",
  "INPUT", "GTFO", "DEFAULT", "UPPIN", "OUTTA", "FOUND", "MKAY",
  "IFUSAYSO", "AN", "SUM", "DIFF", "MULT", "DIV", "MOD", "MIN", "MAX",
  "IFSTMT", "IFBREAK", "NERFIN", "WILE", "TIL", "VISIBLE", "DIFFERENT",
  "R", "BOTH", "SAEM", "EITHER", "WON", "NOT", "ALL", "ANY", "OF", "OIC",
  "OMG", "STRING", "IfWithoutElse", "'*'", "'/'", "'%'", "'+'", "'-'",
  "'('", "')'", "$accept", "start", "Prog", "PreProDirective", "Argument",
  "ArgumentFunction", "ParameterFunction", "Parameter", "Declaration",
  "Type", "Assignment", "FunctCall", "ArrayUsage", "Funct", "$@1",
  "comp_stmt", "Scope_Start", "Scope_End", "StmtList", "Stmt",
  "Return_Statement", "Switch", "Cases", "Case", "Default", "loopy",
  "ForExitGoto", "IncTop", "RepeatForLabel", "Const", "Operation", "Temp",
  "IfStmt", "$@2", "$@3", "$@4", "IfNotGoto", "ElseNotGoto", "PrintFunc",
  "Printables", "E", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    42,
      47,    37,    43,    45,    40,    41
};
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,  -142,    -9,    -5,     1,     5,     3,    18,   417,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,    23,    10,   330,    32,
      41,  -142,  -142,   356,   356,   356,   356,   356,  -142,  -142,
      -7,  -142,  -142,  -142,  -142,  -142,  -142,   292,    47,  -142,
      49,   356,   356,   356,   356,   356,   356,    38,    33,    34,
     356,    35,    36,  -142,  -142,  -142,  -142,   356,  -142,    60,
     356,    20,    63,  -142,    68,    69,    71,    72,    73,     3,
    -142,    58,  -142,   356,    74,    75,    76,    77,    89,    90,
     356,   356,   356,   356,  -142,   356,   356,  -142,    43,   122,
    -142,  -142,   123,   356,   356,   356,   356,   356,    -7,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   356,   356,
     356,   356,   356,   356,    94,    96,   104,   105,    -7,    -7,
    -142,  -142,    43,   356,   356,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,   356,   356,   356,
     356,   100,   108,    43,    98,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,   266,    13,  -142,    32,  -142,  -142,   134,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   126,    60,
     135,   102,  -142,   143,   141,   -31,   146,    43,    43,    97,
    -142,   113,  -142,   164,   266,    43,  -142,   -22,  -142,   116,
     266,  -142,  -142,   156,  -142,  -142,   158,    43,  -142,   266,
      19,   120,  -142,  -142,  -142,  -142,   356,    43,   223,   138,
     160,   162,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,     0,     0,     0,     0,     0,     0,     0,     6,
       8,    23,    22,    24,     7,    10,     0,     0,     0,    15,
      13,    83,    84,     0,     0,     0,     0,     0,    82,    85,
      68,     1,     2,     5,     4,     3,     9,     0,     0,   100,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,    33,    34,    32,     0,    37,    14,
       0,     0,    12,   101,     0,     0,     0,     0,     0,     0,
      76,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,    17,     0,     0,
      19,    35,     0,     0,     0,     0,     0,     0,    68,    27,
      28,    26,    29,    25,    30,    31,    21,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    68,
      40,    38,    44,     0,     0,    77,    78,    79,    80,    81,
      67,    86,    87,    88,    89,    90,    96,     0,     0,     0,
       0,     0,     0,    44,     0,    16,    18,    91,    92,    93,
      94,    97,    98,    43,   101,    49,     0,    41,    46,     0,
      39,    42,    50,    51,    45,    47,    48,    74,     0,    52,
       0,     0,    55,     0,     0,    58,     0,    44,    44,     0,
      54,     0,    60,    69,    57,    44,    53,     0,    75,     0,
      56,    65,    66,     0,    71,    70,     0,    44,    61,    72,
       0,     0,    64,    63,    62,    73,     0,    44,     0,     0,
       0,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   168,  -142,  -142,    22,  -142,    50,   109,
    -142,     4,   161,   173,  -142,    95,  -142,  -142,  -141,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,   -38,  -142,  -142,  -142,  -142,  -142,  -142,    53,   115,
     -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    61,    58,    59,    62,   158,   159,
      11,    12,    13,    14,    88,   143,   122,   160,   144,   161,
     162,   163,   175,   180,   181,   164,   187,   200,   206,   204,
     193,    70,   165,   189,   197,   201,   171,   194,   166,    30,
     167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    16,   153,    17,   178,    64,    65,    66,    67,    68,
      29,    19,    21,    22,   191,    20,     5,   168,    31,    72,
      38,    17,    54,    74,    75,    76,    77,    78,    79,   192,
      37,     1,    84,     2,    69,   179,   183,   184,     3,    87,
       4,     5,    90,    57,   190,    23,    24,    25,    26,    27,
      10,    18,    60,    15,    73,   107,   199,    17,    34,    91,
     130,    36,   114,   115,   116,   117,   208,   118,   119,    18,
      28,   202,   203,    29,   120,   125,   126,   127,   128,   129,
     141,   142,     6,    99,   100,   101,   102,   103,   104,   105,
     131,   132,   133,   134,   135,   136,    80,    82,    83,    85,
      86,    89,    81,     2,    92,   145,   146,    39,   154,    93,
      94,     5,    95,    96,    97,   108,   109,   110,   111,   147,
     148,   149,   150,    99,   100,   101,   102,   103,   104,   105,
     112,   113,   155,   123,   124,   137,   156,   138,   157,   151,
      41,    42,    43,    44,    45,   139,   140,   152,   170,   172,
     173,   174,     6,    46,   176,    47,   182,    48,    49,    50,
      51,    52,   177,   186,   185,    53,   195,   196,   198,     2,
     205,   211,   212,    39,   154,   210,    33,     5,   169,    55,
     106,    35,   188,   121,    98,     0,     0,     0,   207,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   155,     0,
       0,     0,   156,     0,     0,     0,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     6,    46,
       0,    47,     0,    48,    49,    50,    51,    52,     2,     0,
       0,    53,    39,   154,     0,     0,     5,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   105,     0,     0,   155,     0,     0,
       0,   156,     0,     0,     0,    41,    42,    43,    44,    45,
       0,     2,     0,     0,     0,    39,   154,     6,    46,     5,
      47,     0,    48,    49,    50,    51,    52,     0,     0,     0,
      53,    99,   100,   101,   102,   103,   104,   105,    71,     0,
     155,    39,    63,     0,   156,     0,     0,     0,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       6,    46,     0,    47,     0,    48,    49,    50,    51,    52,
       0,     0,     0,    53,    41,    42,    43,    44,    45,    39,
      40,     0,     0,     5,     0,     0,     0,    46,     0,    47,
       0,    48,    49,    50,    51,    52,     0,     0,     0,    53,
       0,     0,     0,     0,     0,    39,    63,     0,     0,     0,
       0,     0,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,    47,     0,    48,
      49,    50,    51,    52,     0,     0,     0,    53,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    47,     0,    48,    49,    50,    51,    52,
       1,     0,     2,    53,     0,     0,     0,     3,     0,     4,
       5,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6
};

static const yytype_int16 yycheck[] =
{
      18,    10,   143,     8,    35,    23,    24,    25,    26,    27,
       6,    10,     9,    10,    36,    10,    13,     4,     0,    37,
      10,     8,    18,    41,    42,    43,    44,    45,    46,    51,
       7,     3,    50,     5,    41,    66,   177,   178,    10,    57,
      12,    13,    60,    11,   185,    42,    43,    44,    45,    46,
       0,    56,    11,     0,     7,    73,   197,     8,     8,    39,
      98,     8,    80,    81,    82,    83,   207,    85,    86,    56,
      67,    52,    53,    69,    31,    93,    94,    95,    96,    97,
     118,   119,    54,    25,    26,    27,    28,    29,    30,    31,
     108,   109,   110,   111,   112,   113,    58,    64,    64,    64,
      64,    41,    64,     5,    41,   123,   124,     9,    10,    41,
      41,    13,    41,    41,    41,    41,    41,    41,    41,   137,
     138,   139,   140,    25,    26,    27,    28,    29,    30,    31,
      41,    41,    34,    11,    11,    41,    38,    41,    40,    39,
      42,    43,    44,    45,    46,    41,    41,    39,    14,    23,
      15,    49,    54,    55,    11,    57,    10,    59,    60,    61,
      62,    63,    21,    50,    67,    67,    50,    11,    10,     5,
      50,    11,    10,     9,    10,    37,     8,    13,   156,    18,
      71,     8,    18,    88,    69,    -1,    -1,    -1,   206,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    59,    60,    61,    62,    63,     5,    -1,
      -1,    67,     9,    10,    -1,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      -1,     5,    -1,    -1,    -1,     9,    10,    54,    55,    13,
      57,    -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    25,    26,    27,    28,    29,    30,    31,     6,    -1,
      34,     9,    10,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    67,    42,    43,    44,    45,    46,     9,
      10,    -1,    -1,    13,    -1,    -1,    -1,    55,    -1,    57,
      -1,    59,    60,    61,    62,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    61,    62,    63,
       3,    -1,     5,    67,    -1,    -1,    -1,    10,    -1,    12,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,    10,    12,    13,    54,    77,    78,    79,
      84,    86,    87,    88,    89,   114,    10,     8,    56,    10,
      10,     9,    10,    42,    43,    44,    45,    46,    67,    87,
     115,     0,    17,    79,    84,    89,   114,     7,    10,     9,
      10,    42,    43,    44,    45,    46,    55,    57,    59,    60,
      61,    62,    63,    67,    87,    88,   116,    11,    81,    82,
      11,    80,    83,    10,   116,   116,   116,   116,   116,    41,
     107,     6,   116,     7,   116,   116,   116,   116,   116,   116,
      58,    64,    64,    64,   116,    64,    64,   116,    90,    41,
     116,    39,    41,    41,    41,    41,    41,    41,   115,    25,
      26,    27,    28,    29,    30,    31,    85,   116,    41,    41,
      41,    41,    41,    41,   116,   116,   116,   116,   116,   116,
      31,    91,    92,    11,    11,   116,   116,   116,   116,   116,
     107,   116,   116,   116,   116,   116,   116,    41,    41,    41,
      41,   107,   107,    91,    94,   116,   116,   116,   116,   116,
     116,    39,    39,    94,    10,    34,    38,    40,    84,    85,
      93,    95,    96,    97,   101,   108,   114,   116,     4,    82,
      14,   112,    23,    15,    49,    98,    11,    21,    35,    66,
      99,   100,    10,    94,    94,    67,    50,   102,    18,   109,
      94,    36,    51,   106,   113,    50,    11,   110,    10,    94,
     103,   111,    52,    53,   105,    50,   104,   116,    94,    14,
      37,    11,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    88,    90,    89,    91,
      92,    93,    94,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    96,    97,    98,    98,    99,   100,   100,   101,
     102,   103,   104,   105,   105,   106,   106,   107,   107,   109,
     108,   110,   111,   108,   112,   113,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     0,     1,     0,     4,     2,     4,     2,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     4,     5,     0,     5,     3,
       1,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     6,     2,     0,     3,     2,     0,    18,
       0,     0,     0,     1,     1,     1,     1,     3,     0,     0,
       7,     0,     0,    11,     0,     0,     3,     4,     4,     4,
       4,     4,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     2,     4,     5,     5,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 12: /* Argument: Parameter  */
#line 174 "test.y"
                     {printf(" para ");}
#line 1439 "test.tab.c"
    break;

  case 14: /* ArgumentFunction: ParameterFunction  */
#line 177 "test.y"
                                     {printf(" para ");}
#line 1445 "test.tab.c"
    break;

  case 19: /* Parameter: YR E  */
#line 186 "test.y"
           {printf(" NO ");}
#line 1451 "test.tab.c"
    break;

  case 25: /* Type: BUKKIT  */
#line 195 "test.y"
             { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1457 "test.tab.c"
    break;

  case 26: /* Type: NUMBAR  */
#line 196 "test.y"
            { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1463 "test.tab.c"
    break;

  case 27: /* Type: NUMBR  */
#line 197 "test.y"
           { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1469 "test.tab.c"
    break;

  case 28: /* Type: YARN  */
#line 198 "test.y"
          { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1475 "test.tab.c"
    break;

  case 29: /* Type: TROOF  */
#line 199 "test.y"
           { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1481 "test.tab.c"
    break;

  case 30: /* Type: NOOB  */
#line 200 "test.y"
          { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1487 "test.tab.c"
    break;

  case 31: /* Type: EMPT  */
#line 201 "test.y"
          { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1493 "test.tab.c"
    break;

  case 35: /* FunctCall: I VAR Argument MKAY  */
#line 209 "test.y"
                                { scope_error_check((yyvsp[-2].char_ptr)); num_param_check((yyvsp[-2].char_ptr)); check_is_function((yyvsp[-2].char_ptr)); /*symbl_tbl_insrt(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */}
#line 1499 "test.tab.c"
    break;

  case 37: /* $@1: %empty  */
#line 216 "test.y"
                                  {   curr_buff = get_new_node(TAC_code);
                                sprintf(temp_buf, "Function  %s begins here:\n", (yyvsp[-1].char_ptr));
                                strcat(curr_buff->code, temp_buf);
                            }
#line 1508 "test.tab.c"
    break;

  case 38: /* Funct: FUNC VAR ArgumentFunction $@1 comp_stmt  */
#line 221 "test.y"
                {

                                    symbol_node_t *node = redefined_error_check((yyvsp[-3].char_ptr));
                                    char funcType[100] = "Function: ";
                                    strcat(funcType, datatype);

                                    if(!node) {
                                        symbol_node_t *node = symbl_tbl_insrt(symbol_table,(yyvsp[-3].char_ptr), curr_scope->scope_num, funcType, "", yylineno);
                                        node->num_params = num_params;
                                        curr_buff = get_new_node(TAC_code);
                                        sprintf(temp_buf, "Function ends here:\n");
                                        strcat(curr_buff->code, temp_buf);
                                    }


                                    else {
                                        node->is_function_defined = true;
                                        node->num_params = num_params;
                                        curr_buff = get_new_node(TAC_code);
                                        sprintf(temp_buf, "Function ends here\n");
                                        strcat(curr_buff->code, temp_buf);
                                    }

                                }
#line 1537 "test.tab.c"
    break;

  case 40: /* Scope_Start: EMPT  */
#line 249 "test.y"
                   {curr_scope = add_child_scope(curr_scope);}
#line 1543 "test.tab.c"
    break;

  case 41: /* Scope_End: IFUSAYSO  */
#line 250 "test.y"
                     {curr_scope = goto_parent_scope(curr_scope);}
#line 1549 "test.tab.c"
    break;

  case 52: /* Return_Statement: FOUND ParameterFunction  */
#line 266 "test.y"
                                             {trace("Return_Statement Call\n");}
#line 1555 "test.tab.c"
    break;

  case 59: /* loopy: Type IM IN YR VAR ForExitGoto Operation YR VAR IncTop Const RepeatForLabel E StmtList IM OUTTA YR VAR  */
#line 283 "test.y"
                                                                                                             {
                                                                                                TAC_buffer_node *temp = TAC_code->stack_arr[TAC_code->top -1];
                                                                                                while(temp->next != NULL)
                                                                                                    temp = temp->next;
                                                                                                temp->next = TAC_code->stack_arr[TAC_code->top];
                                                                                                TAC_code->stack_arr[TAC_code->top] = NULL;

                                                                                                while(temp->next != NULL)
                                                                                                    temp = temp->next;
                                                                                                temp->next = TAC_code->stack_arr[TAC_code->top -2];
                                                                                                TAC_code->stack_arr[TAC_code->top -2] = TAC_code->stack_arr[TAC_code->top -1];
                                                                                                TAC_code->stack_arr[TAC_code->top -1] = NULL;
                                                                                                TAC_code->top -= 2;

                                                                                                curr_buff = get_new_node(TAC_code);
                                                                                                sprintf(curr_buff->code, "GOTO Label%d\n", (yyvsp[-6].a));
                                                                                                curr_buff = get_new_node(TAC_code);
                                                                                                sprintf(curr_buff->code, "\nLabel%d:\n", (yyvsp[-12].a));
                                                                                            }
#line 1579 "test.tab.c"
    break;

  case 60: /* ForExitGoto: %empty  */
#line 305 "test.y"
        {
            stack_node reg = popStack(three_address_code_stack);
            curr_buff = get_new_node(TAC_code);

            sprintf(temp_buf, "IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            loopEndLabel = LABEL_COUNT;

            (yyval.a) = LABEL_COUNT++;
            TAC_code->top++;
        }
#line 1595 "test.tab.c"
    break;

  case 61: /* IncTop: %empty  */
#line 319 "test.y"
      { TAC_code->top++; }
#line 1601 "test.tab.c"
    break;

  case 62: /* RepeatForLabel: %empty  */
#line 323 "test.y"
        {
            curr_buff = get_new_node(TAC_code);
            sprintf(temp_buf, "Label%d:\n", LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            loopStartLabel = LABEL_COUNT;
            (yyval.a) = LABEL_COUNT++;
        }
#line 1613 "test.tab.c"
    break;

  case 69: /* $@2: %empty  */
#line 346 "test.y"
                                        {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", (yyvsp[-3].a));
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    }
#line 1623 "test.tab.c"
    break;

  case 71: /* $@3: %empty  */
#line 352 "test.y"
                                                          {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", (yyvsp[-5].a));
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    }
#line 1633 "test.tab.c"
    break;

  case 72: /* $@4: %empty  */
#line 357 "test.y"
                 {
                                                                                        curr_buff = get_new_node(TAC_code);
                                                                                        sprintf(temp_buf, "\nLabel%d:\n", (yyvsp[-2].a));
                                                                                        strcat(curr_buff->code, temp_buf);
                                                                                    }
#line 1643 "test.tab.c"
    break;

  case 74: /* IfNotGoto: %empty  */
#line 366 "test.y"
        {
            stack_node reg = popStack(three_address_code_stack);
            curr_buff = get_new_node(TAC_code);

            if(BUFFER_ENABLED) {
                sprintf(temp_buf, "IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);
                strcat(curr_buff->code, temp_buf);
            }
            else
                printf("IF NOT %s GOTO Label%d\n", reg.var_name, LABEL_COUNT);

            (yyval.a) = LABEL_COUNT++;
        }
#line 1661 "test.tab.c"
    break;

  case 75: /* ElseNotGoto: %empty  */
#line 382 "test.y"
        {
            curr_buff = get_new_node(TAC_code);
            sprintf(temp_buf, "GOTO Label%d\n", LABEL_COUNT);
            strcat(curr_buff->code, temp_buf);
            (yyval.a) = LABEL_COUNT++;
        }
#line 1672 "test.tab.c"
    break;

  case 83: /* Printables: NUM  */
#line 402 "test.y"
          {printf(" num ");}
#line 1678 "test.tab.c"
    break;

  case 100: /* E: NUM  */
#line 423 "test.y"
        {printf(" num ");}
#line 1684 "test.tab.c"
    break;


#line 1688 "test.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 428 "test.y"

inline void print_TAC_operator(char *op) {

    curr_buff = get_new_node(TAC_code);
    stack_node op2 = popStack(three_address_code_stack);
    stack_node op1 = popStack(three_address_code_stack);

    pushStack(three_address_code_stack, TEMP_VAR);
    print_st(three_address_code_stack, curr_buff);

    if(BUFFER_ENABLED) {
        sprintf(temp_buf, " = %s %s %s\n", op1.var_name, op, op2.var_name);
        strcat(curr_buff->code, temp_buf);
    }
    else
        printf(" = %s %s %s\n", op1.var_name, op, op2.var_name);
}

// used the function defined in scope.c for checing the scope error
inline void scope_error_check(char *symbol){
    if(!scope_check(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " not found in current or ancestor scopes"));
    }
}


// we had count of parameter which we are again verfitying 
// it should have equal count as it has in declaration.
inline void num_param_check(char *symbol) {

    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    char msg[100] = "Too few arguments passed to ";
    if(node != NULL && num_params > node->num_params) {
        yyerror(strcat(msg, symbol));
    }
    else if(node != NULL && num_params < node->num_params) {
        yyerror(strcat(msg, symbol));
    }
}

inline void redeclaration_error_check(char *symbol){
    if(check_in_current_scope(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " already declared in current scope"));
    }
}

symbol_node_t * redefined_error_check(char *symbol){
    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);


    if(node != NULL && node->is_function_defined)
        yyerror(strcat(symbol, " : a redefinition"));

    return node;
}

inline void arr_dimension_check(char *symbol, char *arr_size){

    if(atoi(arr_size) < 1){ //  function of ascii to integer 
        yyerror(strcat(symbol, " has non-positive array size"));
    }
}

inline void arr_subscript_check(char *symbol){


    symbol_node_t *node = symbl_tbl_lkp(symbol_table, symbol);

    if(!strstr(node->type, "Array")){ // this function returns the first occurence of substring in other
        yyerror(strcat(symbol, " is not an array"));
    }
}



inline void void_param_check(char *type) {
    if(!strcmp(type, "void")) {
        yyerror("Parameter of function has void datatype");
    }
}

inline void check_is_function(char *func_name) {

    symbol_node_t *node = symbl_tbl_lkp(symbol_table, func_name);
    if(node == NULL) {
        yyerror(strcat(func_name, " function not declared"));
    }
    if(!strstr(node->type, "Function")) {
        yyerror(strcat(func_name, " is not a function"));
    }
}

inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr, FORE_CYN "%-20.20s%20.20s%20d\n" RESET, s, yytext, yylineno);
}

extern FILE *yyin;
int main(int argc , char **argv)
{
    curr_scope = init_scope();
    symbl_tbl_initlze(symbol_table);
    symbl_tbl_initlze(constant_table);
    three_address_code_stack = init_s();

    TAC_code = init_code_stack();
    printf("\n");
    yyin = fopen(argv[1], "r");
    yyparse();

    print_TAC_code(TAC_code);

    // symbl_tbl_prnt(symbol_table, "Symbol Table");
    // symbl_tbl_prnt(constant_table, "Constant Table"); 
    printf(FORE_GRN "\n\n Parsing of the sample input code given in test.c is  complete  ✔ \n\n" RESET);

    symbl_tbl_fr(symbol_table);
    symbl_tbl_fr(constant_table);

    // TODO: Free Scope
    f_s(three_address_code_stack);
    return 0;
}


void yyerror(const char *s) {


        printf(FORE_RED "%d : %s %s\n" RESET, yylineno, s, yytext ); // FOR_RED are for color, defined in ascii color code 

        // these re defined in misc.h so that we can use them here easily and convinently
    printf(FORE_RED "\nParsing failed for code in test.c ✘ \n\n" RESET);
    exit(-2);
}
