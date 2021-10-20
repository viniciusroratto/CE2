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
#line 6 "parser.y"

#ifndef PARSER
#include <stdio.h>
#include <stdlib.h>
#include "AST.h"
#define YYERROR_VERBOSE 1


int yylex(void);
void yyerror (char const *s);
int get_line_number();


extern void *arvore;
void exporta (void *arvore);
void libera (void *arvore);
Nodo * criaNodo (Nodo * data[], int filhos);



#line 92 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PR_INT = 3,                  /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 4,                /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 5,                 /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_CHAR = 6,                 /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_STRING = 7,               /* TK_PR_STRING  */
  YYSYMBOL_TK_PR_IF = 8,                   /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 9,                 /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 10,                /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 11,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_DO = 12,                  /* TK_PR_DO  */
  YYSYMBOL_TK_PR_INPUT = 13,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 14,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 15,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_CONST = 16,               /* TK_PR_CONST  */
  YYSYMBOL_TK_PR_STATIC = 17,              /* TK_PR_STATIC  */
  YYSYMBOL_TK_PR_FOREACH = 18,             /* TK_PR_FOREACH  */
  YYSYMBOL_TK_PR_FOR = 19,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_PR_SWITCH = 20,              /* TK_PR_SWITCH  */
  YYSYMBOL_TK_PR_CASE = 21,                /* TK_PR_CASE  */
  YYSYMBOL_TK_PR_BREAK = 22,               /* TK_PR_BREAK  */
  YYSYMBOL_TK_PR_CONTINUE = 23,            /* TK_PR_CONTINUE  */
  YYSYMBOL_TK_PR_CLASS = 24,               /* TK_PR_CLASS  */
  YYSYMBOL_TK_PR_PRIVATE = 25,             /* TK_PR_PRIVATE  */
  YYSYMBOL_TK_PR_PUBLIC = 26,              /* TK_PR_PUBLIC  */
  YYSYMBOL_TK_PR_PROTECTED = 27,           /* TK_PR_PROTECTED  */
  YYSYMBOL_TK_PR_END = 28,                 /* TK_PR_END  */
  YYSYMBOL_TK_PR_DEFAULT = 29,             /* TK_PR_DEFAULT  */
  YYSYMBOL_TK_OC_LE = 30,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 31,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 32,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 33,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 34,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 35,                  /* TK_OC_OR  */
  YYSYMBOL_TK_OC_SL = 36,                  /* TK_OC_SL  */
  YYSYMBOL_TK_OC_SR = 37,                  /* TK_OC_SR  */
  YYSYMBOL_TK_LIT_INT = 38,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 39,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 40,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 41,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 42,               /* TK_LIT_CHAR  */
  YYSYMBOL_TK_LIT_STRING = 43,             /* TK_LIT_STRING  */
  YYSYMBOL_TK_IDENTIFICADOR = 44,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TOKEN_ERRO = 45,                /* TOKEN_ERRO  */
  YYSYMBOL_46_ = 46,                       /* '|'  */
  YYSYMBOL_47_ = 47,                       /* '^'  */
  YYSYMBOL_48_ = 48,                       /* '<'  */
  YYSYMBOL_49_ = 49,                       /* '>'  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '/'  */
  YYSYMBOL_54_ = 54,                       /* '%'  */
  YYSYMBOL_55_ = 55,                       /* '~'  */
  YYSYMBOL_56_ = 56,                       /* "<="  */
  YYSYMBOL_57_ = 57,                       /* '&'  */
  YYSYMBOL_58_ = 58,                       /* '#'  */
  YYSYMBOL_59_ = 59,                       /* '*'  */
  YYSYMBOL_60_ = 60,                       /* '?'  */
  YYSYMBOL_61_ = 61,                       /* '!'  */
  YYSYMBOL_62_ = 62,                       /* ':'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* ';'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_programa = 72,                  /* programa  */
  YYSYMBOL_decl = 73,                      /* decl  */
  YYSYMBOL_varglobal = 74,                 /* varglobal  */
  YYSYMBOL_tipo = 75,                      /* tipo  */
  YYSYMBOL_static = 76,                    /* static  */
  YYSYMBOL_lista = 77,                     /* lista  */
  YYSYMBOL_func = 78,                      /* func  */
  YYSYMBOL_cabecalho = 79,                 /* cabecalho  */
  YYSYMBOL_param = 80,                     /* param  */
  YYSYMBOL_lista_parametros = 81,          /* lista_parametros  */
  YYSYMBOL_const = 82,                     /* const  */
  YYSYMBOL_corpo = 83,                     /* corpo  */
  YYSYMBOL_comando = 84,                   /* comando  */
  YYSYMBOL_varlocal = 85,                  /* varlocal  */
  YYSYMBOL_tipo2 = 86,                     /* tipo2  */
  YYSYMBOL_lista_varlocal = 87,            /* lista_varlocal  */
  YYSYMBOL_saida = 88,                     /* saida  */
  YYSYMBOL_shift = 89,                     /* shift  */
  YYSYMBOL_fluxo = 90,                     /* fluxo  */
  YYSYMBOL_atrib_for = 91,                 /* atrib_for  */
  YYSYMBOL_expr = 92,                      /* expr  */
  YYSYMBOL_expr_pr = 93,                   /* expr_pr  */
  YYSYMBOL_expr_pr_lst = 94,               /* expr_pr_lst  */
  YYSYMBOL_lit = 95,                       /* lit  */
  YYSYMBOL_lit_num = 96,                   /* lit_num  */
  YYSYMBOL_bool = 97                       /* bool  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   645

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
       2,     2,     2,    61,     2,    58,     2,    54,    57,     2,
      67,    68,    59,    51,    66,    52,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    65,
      48,    50,    49,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    46,    70,    55,     2,     2,     2,
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
      45,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   125,   125,   129,   130,   131,   135,   136,   142,   143,
     144,   145,   146,   150,   151,   155,   156,   163,   167,   171,
     172,   176,   177,   181,   182,   186,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   209,
     210,   211,   217,   218,   219,   220,   221,   225,   226,   231,
     232,   236,   237,   238,   239,   243,   244,   245,   246,   250,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   287,
     291,   292,   296,   297,   298,   299,   300,   301,   305,   306,
     310,   311
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_PR_INT",
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_CHAR", "TK_PR_STRING", "TK_PR_IF",
  "TK_PR_THEN", "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT",
  "TK_PR_OUTPUT", "TK_PR_RETURN", "TK_PR_CONST", "TK_PR_STATIC",
  "TK_PR_FOREACH", "TK_PR_FOR", "TK_PR_SWITCH", "TK_PR_CASE",
  "TK_PR_BREAK", "TK_PR_CONTINUE", "TK_PR_CLASS", "TK_PR_PRIVATE",
  "TK_PR_PUBLIC", "TK_PR_PROTECTED", "TK_PR_END", "TK_PR_DEFAULT",
  "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE", "TK_OC_AND", "TK_OC_OR",
  "TK_OC_SL", "TK_OC_SR", "TK_LIT_INT", "TK_LIT_FLOAT", "TK_LIT_FALSE",
  "TK_LIT_TRUE", "TK_LIT_CHAR", "TK_LIT_STRING", "TK_IDENTIFICADOR",
  "TOKEN_ERRO", "'|'", "'^'", "'<'", "'>'", "'='", "'+'", "'-'", "'/'",
  "'%'", "'~'", "\"<=\"", "'&'", "'#'", "'*'", "'?'", "'!'", "':'", "'['",
  "']'", "';'", "','", "'('", "')'", "'{'", "'}'", "$accept", "programa",
  "decl", "varglobal", "tipo", "static", "lista", "func", "cabecalho",
  "param", "lista_parametros", "const", "corpo", "comando", "varlocal",
  "tipo2", "lista_varlocal", "saida", "shift", "fluxo", "atrib_for",
  "expr", "expr_pr", "expr_pr_lst", "lit", "lit_num", "bool", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   124,    94,    60,    62,
      61,    43,    45,    47,    37,   126,   301,    38,    35,    42,
      63,    33,    58,    91,    93,    59,    44,    40,    41,   123,
     125
};
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,   -55,    15,   -55,    14,   -24,    30,    14,   -47,   -55,
     -55,   -54,   -55,   -55,   -55,   -55,   -55,   -55,    76,   -55,
       6,   -55,     4,    -6,   -55,   -17,    -4,    48,   123,    64,
      27,    31,    32,   -20,    84,    36,    39,    46,    49,    52,
      54,    -7,   -55,    51,   107,    64,    64,    61,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,    62,   -55,   -55,   -55,   -55,
     -55,   -21,    64,    64,    64,    64,    64,    64,    64,   310,
     -55,   -55,    86,    76,   -55,    94,    98,    64,    64,    64,
     215,    76,   -55,    76,    76,    76,    73,   -55,   -55,    96,
     149,   180,    76,    76,    64,    64,   294,   294,    26,    22,
      22,    81,   211,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      76,    97,    82,   -55,   -55,   -55,   346,   418,   242,   -55,
     -55,   -55,   -55,   -55,   105,   -55,   -55,   -55,   -55,   -55,
      89,   -47,   146,   -55,   -55,   453,   273,   109,   -55,   100,
     100,   100,   100,    53,    53,   585,   585,   100,   100,   294,
     294,   132,    26,    26,    22,   488,   -55,    64,    64,    76,
     -18,   113,   -45,    84,   -55,   177,   -47,   -55,    64,   -55,
     -55,    64,   554,   521,   -55,   150,   152,    64,    76,   144,
     155,   -55,   107,   -47,   -55,   273,   -55,    86,   -55,   -55,
     382,   -55,   131,   138,   163,   -55,   -55,   148,    76,   -55,
     -55,   -55,    89,   -47,   -55,   -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      14,    13,     0,     2,    14,     0,     0,    14,     0,     1,
       3,     0,    11,    10,     8,     9,    12,     4,    14,    17,
       0,    16,     0,    24,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    23,     0,    14,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    49,     0,    50,    98,    99,   101,
     100,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    65,     0,    14,    35,     0,     0,     0,     0,     0,
       0,    14,    25,    14,    14,    14,     0,    15,    18,     0,
       0,     0,    14,    14,     0,     0,    66,    67,    69,    71,
      70,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,     0,    34,    53,    51,     0,     0,     0,    45,
      44,    42,    43,    46,     0,    37,    26,    32,    36,     7,
      22,     0,     0,    30,    31,     0,    91,     0,    64,    84,
      85,    86,    87,    83,    82,    79,    81,    77,    78,    72,
      73,    75,    76,    80,    74,     0,    29,     0,     0,    14,
       0,     0,    48,    24,    19,    55,     0,    61,     0,    89,
      63,     0,    59,     0,    27,     0,     0,     0,    14,     0,
       0,    39,    14,     0,    58,    91,    88,     0,    54,    52,
       0,    33,     0,    48,     0,    56,    90,     0,    14,    40,
      41,    47,    22,     0,    28,    21,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,    50,   -55,   -42,     1,   182,   -55,   -55,   -55,
      12,   -30,    -8,   -32,   -55,   -55,    33,   -55,   -55,   -55,
      28,   -39,   -55,    35,    45,   -55,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    34,    24,     7,     8,    43,
     174,    44,    35,    36,    37,   134,   191,    55,    38,    39,
     122,    69,   147,   179,    56,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,     6,    89,   189,    80,     6,    90,    91,     6,    20,
      42,    21,    22,    23,    -5,     9,    75,    76,   185,   186,
      11,   190,    18,    96,    97,    98,    99,   100,   101,   102,
      77,     1,   187,    12,    13,    14,    15,    16,   126,   127,
     128,   123,    94,    78,    40,     6,    95,    79,    41,   135,
      45,   136,   137,   138,    10,   145,   146,    17,    21,    22,
     143,   144,   -20,    46,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   118,   119,   117,    25,   118,   119,    26,   166,    27,
      28,    29,    47,     1,    72,    30,    73,    74,    31,    32,
      42,    81,    57,    58,    59,    60,   115,   116,    61,    82,
     117,    83,   118,   119,    84,    62,    63,    85,    86,    88,
      33,    64,    65,    66,     1,    67,    92,    93,   182,   183,
     121,    68,   124,   175,   107,   108,   125,   184,   139,   195,
     140,   119,   196,   192,   168,    18,   -38,   167,   200,   172,
     204,   113,   114,   115,   116,   173,   201,   117,   176,   118,
     119,    48,    49,    50,    51,    52,    53,    54,   194,    48,
      49,    50,    51,    52,    53,   209,   214,   180,   188,   103,
     104,   105,   106,   107,   108,   205,   116,   193,   198,   117,
     199,   118,   119,     6,   202,   109,   110,   111,   112,   203,
     113,   114,   115,   116,   190,   216,   117,   212,   118,   119,
     103,   104,   105,   106,   107,   108,   213,   141,   129,   130,
     131,   132,   133,    87,   215,   207,   109,   110,   111,   112,
     206,   113,   114,   115,   116,     0,   211,   117,     0,   118,
     119,   103,   104,   105,   106,   107,   108,   210,   142,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,   117,     0,
     118,   119,   103,   104,   105,   106,   107,   108,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,     0,   113,   114,   115,   116,     0,     0,   117,
       0,   118,   119,   103,   104,   105,   106,   107,   108,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   116,   107,   108,
     117,     0,   118,   119,     0,     0,     0,     0,     0,   178,
     103,   104,   105,   106,   107,   108,     0,   115,   116,     0,
       0,   117,     0,   118,   119,     0,   109,   110,   111,   112,
       0,   113,   114,   115,   116,     0,     0,   117,     0,   118,
     119,     0,     0,     0,     0,   120,   103,   104,   105,   106,
     107,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,   110,   111,   112,     0,   113,   114,   115,
     116,     0,     0,   117,     0,   118,   119,     0,     0,     0,
       0,   169,   103,   104,   105,   106,   107,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   112,     0,   113,   114,   115,   116,     0,     0,   117,
       0,   118,   119,     0,     0,     0,     0,   208,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,   112,     0,   113,
     114,   115,   116,     0,     0,   117,     0,   118,   119,     0,
       0,     0,   170,   103,   104,   105,   106,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     110,   111,   112,     0,   113,   114,   115,   116,     0,     0,
     117,     0,   118,   119,     0,     0,     0,   177,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,   112,     0,   113,
     114,   115,   116,     0,     0,   117,     0,   118,   119,     0,
     181,   103,   104,   105,   106,   107,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,   110,   111,
     112,     0,   113,   114,   115,   116,     0,     0,   117,     0,
     118,   119,     0,   197,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     109,   110,   111,   112,     0,   113,   114,   115,   116,     0,
       0,   117,     0,   118,   119,   103,   104,   105,   106,   107,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,   112,     0,   113,   114,   115,   116,
       0,     0,   117,     0,   118,   119
};

static const yytype_int16 yycheck[] =
{
       8,     0,    44,    48,    34,     4,    45,    46,     7,    63,
      16,    65,    66,    67,     0,     0,    36,    37,    36,    37,
      44,    66,    69,    62,    63,    64,    65,    66,    67,    68,
      50,    17,    50,     3,     4,     5,     6,     7,    77,    78,
      79,    73,    63,    63,    38,    44,    67,    67,    44,    81,
      67,    83,    84,    85,     4,    94,    95,     7,    65,    66,
      92,    93,    68,    67,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    59,    60,    57,     8,    59,    60,    11,   120,    13,
      14,    15,    44,    17,    67,    19,    65,    65,    22,    23,
      16,    65,    38,    39,    40,    41,    53,    54,    44,    70,
      57,    65,    59,    60,    65,    51,    52,    65,    64,    68,
      44,    57,    58,    59,    17,    61,    65,    65,   167,   168,
      44,    67,    38,   141,    34,    35,    38,   169,    65,   178,
      44,    60,   181,   173,    62,    69,    70,    50,   187,    44,
     192,    51,    52,    53,    54,    66,   188,    57,    12,    59,
      60,    38,    39,    40,    41,    42,    43,    44,   176,    38,
      39,    40,    41,    42,    43,    44,   208,    68,    65,    30,
      31,    32,    33,    34,    35,   193,    54,    10,    38,    57,
      38,    59,    60,   192,    50,    46,    47,    48,    49,    44,
      51,    52,    53,    54,    66,   213,    57,    44,    59,    60,
      30,    31,    32,    33,    34,    35,    68,    68,     3,     4,
       5,     6,     7,    41,   212,   197,    46,    47,    48,    49,
     195,    51,    52,    53,    54,    -1,   203,    57,    -1,    59,
      60,    30,    31,    32,    33,    34,    35,   202,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    60,    30,    31,    32,    33,    34,    35,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    59,    60,    30,    31,    32,    33,    34,    35,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    34,    35,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      30,    31,    32,    33,    34,    35,    -1,    53,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    65,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    64,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    64,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      62,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      59,    60,    -1,    62,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    59,    60,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    53,    54,
      -1,    -1,    57,    -1,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    72,    73,    74,    75,    76,    78,    79,     0,
      73,    44,     3,     4,     5,     6,     7,    73,    69,    83,
      63,    65,    66,    67,    77,     8,    11,    13,    14,    15,
      19,    22,    23,    44,    76,    83,    84,    85,    89,    90,
      38,    44,    16,    80,    82,    67,    67,    44,    38,    39,
      40,    41,    42,    43,    44,    88,    95,    38,    39,    40,
      41,    44,    51,    52,    57,    58,    59,    61,    67,    92,
      96,    97,    67,    65,    65,    36,    37,    50,    63,    67,
      82,    65,    70,    65,    65,    65,    64,    77,    68,    75,
      92,    92,    65,    65,    63,    67,    92,    92,    92,    92,
      92,    92,    92,    30,    31,    32,    33,    34,    35,    46,
      47,    48,    49,    51,    52,    53,    54,    57,    59,    60,
      65,    44,    91,    84,    38,    38,    92,    92,    92,     3,
       4,     5,     6,     7,    86,    84,    84,    84,    84,    65,
      44,    68,    68,    84,    84,    92,    92,    93,    68,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    84,    50,    62,    65,
      64,    68,    44,    66,    81,    83,    12,    64,    66,    94,
      68,    62,    92,    92,    84,    36,    37,    50,    65,    48,
      66,    87,    82,    10,    83,    92,    92,    62,    38,    38,
      92,    84,    50,    44,    75,    83,    94,    91,    65,    44,
      95,    87,    44,    68,    84,    81,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    79,    80,
      80,    81,    81,    82,    82,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    86,    86,    86,    86,    86,    87,    87,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     3,     6,     2,     2,
       2,     2,     2,     1,     0,     3,     1,     2,     5,     4,
       0,     5,     0,     1,     0,     3,     3,     5,     8,     4,
       4,     4,     3,     6,     3,     2,     3,     3,     0,     5,
       7,     7,     1,     1,     1,     1,     1,     3,     0,     1,
       1,     3,     6,     3,     6,     5,     7,     9,     6,     3,
       1,     4,     1,     4,     3,     1,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     2,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     1,
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
  case 2: /* programa: decl  */
#line 125 "parser.y"
               {arvore = (yyval.nodo); printf("DECL\n");}
#line 1421 "parser.tab.c"
    break;

  case 3: /* decl: varglobal decl  */
#line 129 "parser.y"
                        { printf("VARGLOBAL\n"); }
#line 1427 "parser.tab.c"
    break;

  case 4: /* decl: func decl  */
#line 130 "parser.y"
                        {printf("FUNC"); Nodo * data[2] = {(yyvsp[-1].nodo),(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1433 "parser.tab.c"
    break;

  case 5: /* decl: %empty  */
#line 131 "parser.y"
      { }
#line 1439 "parser.tab.c"
    break;

  case 6: /* varglobal: tipo TK_IDENTIFICADOR lista  */
#line 135 "parser.y"
                                { }
#line 1445 "parser.tab.c"
    break;

  case 7: /* varglobal: tipo TK_IDENTIFICADOR '[' TK_LIT_INT ']' ';'  */
#line 136 "parser.y"
                                                   {}
#line 1451 "parser.tab.c"
    break;

  case 17: /* func: cabecalho corpo  */
#line 163 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-1].nodo),(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1457 "parser.tab.c"
    break;

  case 18: /* cabecalho: tipo TK_IDENTIFICADOR '(' param ')'  */
#line 167 "parser.y"
                                        {Nodo * data[2] = {(yyvsp[-3].nodo), (yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1463 "parser.tab.c"
    break;

  case 19: /* param: const tipo TK_IDENTIFICADOR lista_parametros  */
#line 171 "parser.y"
                                                 {Nodo * data[2] = {(yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1469 "parser.tab.c"
    break;

  case 20: /* param: %empty  */
#line 172 "parser.y"
      { }
#line 1475 "parser.tab.c"
    break;

  case 21: /* lista_parametros: ',' const tipo TK_IDENTIFICADOR lista_parametros  */
#line 176 "parser.y"
                                                     {Nodo * data[2] = {(yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1481 "parser.tab.c"
    break;

  case 22: /* lista_parametros: %empty  */
#line 177 "parser.y"
      { }
#line 1487 "parser.tab.c"
    break;

  case 25: /* corpo: '{' comando '}'  */
#line 186 "parser.y"
                    {Nodo * data[1] = {(yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data,1);}
#line 1493 "parser.tab.c"
    break;

  case 26: /* comando: varlocal ';' comando  */
#line 193 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1499 "parser.tab.c"
    break;

  case 27: /* comando: TK_IDENTIFICADOR '=' expr ';' comando  */
#line 194 "parser.y"
                                            {Nodo * data[3] = {(yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1505 "parser.tab.c"
    break;

  case 28: /* comando: TK_IDENTIFICADOR '[' expr ']' '=' expr ';' comando  */
#line 195 "parser.y"
                                                         {Nodo * data[4] = {(yyvsp[-7].nodo), (yyvsp[-5].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,4);}
#line 1511 "parser.tab.c"
    break;

  case 29: /* comando: TK_PR_RETURN expr ';' comando  */
#line 196 "parser.y"
                                    {Nodo * data[3] = {(yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1517 "parser.tab.c"
    break;

  case 30: /* comando: TK_PR_INPUT TK_IDENTIFICADOR ';' comando  */
#line 197 "parser.y"
                                               {Nodo * data[3] = {(yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1523 "parser.tab.c"
    break;

  case 31: /* comando: TK_PR_OUTPUT saida ';' comando  */
#line 198 "parser.y"
                                     {Nodo * data[3] = {(yyvsp[-3].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1529 "parser.tab.c"
    break;

  case 32: /* comando: shift ';' comando  */
#line 199 "parser.y"
                        {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1535 "parser.tab.c"
    break;

  case 33: /* comando: TK_IDENTIFICADOR '(' expr ')' ';' comando  */
#line 200 "parser.y"
                                             {Nodo * data[3] = {(yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1541 "parser.tab.c"
    break;

  case 34: /* comando: TK_PR_BREAK ';' comando  */
#line 201 "parser.y"
                             {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1547 "parser.tab.c"
    break;

  case 35: /* comando: TK_PR_CONTINUE ';'  */
#line 202 "parser.y"
                        {Nodo * data[1] = {(yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data,1);}
#line 1553 "parser.tab.c"
    break;

  case 36: /* comando: fluxo ';' comando  */
#line 203 "parser.y"
                        {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1559 "parser.tab.c"
    break;

  case 37: /* comando: corpo ';' comando  */
#line 204 "parser.y"
                        {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1565 "parser.tab.c"
    break;

  case 38: /* comando: %empty  */
#line 205 "parser.y"
      { }
#line 1571 "parser.tab.c"
    break;

  case 39: /* varlocal: static const tipo2 TK_IDENTIFICADOR lista_varlocal  */
#line 209 "parser.y"
                                                       { }
#line 1577 "parser.tab.c"
    break;

  case 40: /* varlocal: static const tipo2 TK_IDENTIFICADOR '<' '=' TK_IDENTIFICADOR  */
#line 210 "parser.y"
                                                                   {Nodo * data[2] = {(yyvsp[-3].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1583 "parser.tab.c"
    break;

  case 41: /* varlocal: static const tipo2 TK_IDENTIFICADOR '<' '=' lit  */
#line 211 "parser.y"
                                                      {Nodo * data[2] = {(yyvsp[-3].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,2);}
#line 1589 "parser.tab.c"
    break;

  case 47: /* lista_varlocal: ',' TK_IDENTIFICADOR lista_varlocal  */
#line 225 "parser.y"
                                        { }
#line 1595 "parser.tab.c"
    break;

  case 48: /* lista_varlocal: %empty  */
#line 226 "parser.y"
      { }
#line 1601 "parser.tab.c"
    break;

  case 49: /* saida: TK_IDENTIFICADOR  */
#line 231 "parser.y"
                     {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,1);}
#line 1607 "parser.tab.c"
    break;

  case 50: /* saida: lit  */
#line 232 "parser.y"
          {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,1);}
#line 1613 "parser.tab.c"
    break;

  case 51: /* shift: TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT  */
#line 236 "parser.y"
                                         {Nodo * data[3] = {(yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1619 "parser.tab.c"
    break;

  case 52: /* shift: TK_IDENTIFICADOR '[' expr ']' TK_OC_SR TK_LIT_INT  */
#line 237 "parser.y"
                                                       {Nodo * data[4] = {(yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,4);}
#line 1625 "parser.tab.c"
    break;

  case 53: /* shift: TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT  */
#line 238 "parser.y"
                                           {Nodo * data[3] = {(yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,3);}
#line 1631 "parser.tab.c"
    break;

  case 54: /* shift: TK_IDENTIFICADOR '[' expr ']' TK_OC_SL TK_LIT_INT  */
#line 239 "parser.y"
                                                       {Nodo * data[4] = {(yyvsp[-5].nodo), (yyvsp[-3].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,4);}
#line 1637 "parser.tab.c"
    break;

  case 55: /* fluxo: TK_PR_IF '(' expr ')' corpo  */
#line 243 "parser.y"
                                {Nodo * data[3] = {(yyvsp[-4].nodo),(yyvsp[-2].nodo),(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 3);}
#line 1643 "parser.tab.c"
    break;

  case 56: /* fluxo: TK_PR_IF '(' expr ')' corpo TK_PR_ELSE corpo  */
#line 244 "parser.y"
                                                   {Nodo * data[5] = {(yyvsp[-6].nodo),(yyvsp[-4].nodo),(yyvsp[-2].nodo), (yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data,5);}
#line 1649 "parser.tab.c"
    break;

  case 57: /* fluxo: TK_PR_FOR '(' atrib_for ':' expr ':' atrib_for ')' corpo  */
#line 245 "parser.y"
                                                               {Nodo * data[5] = {(yyvsp[-8].nodo),(yyvsp[-6].nodo),(yyvsp[-4].nodo), (yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 5);}
#line 1655 "parser.tab.c"
    break;

  case 58: /* fluxo: TK_PR_WHILE '(' expr ')' TK_PR_DO corpo  */
#line 246 "parser.y"
                                              {Nodo * data[4] = {(yyvsp[-5].nodo),(yyvsp[-3].nodo),(yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 4);}
#line 1661 "parser.tab.c"
    break;

  case 59: /* atrib_for: TK_IDENTIFICADOR '=' expr  */
#line 250 "parser.y"
                              {Nodo * data[2] = {(yyvsp[-2].nodo),(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1667 "parser.tab.c"
    break;

  case 60: /* expr: TK_IDENTIFICADOR  */
#line 255 "parser.y"
                     {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1673 "parser.tab.c"
    break;

  case 61: /* expr: TK_IDENTIFICADOR '[' expr ']'  */
#line 256 "parser.y"
                                 {Nodo * data[2] = {(yyvsp[-3].nodo),(yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1679 "parser.tab.c"
    break;

  case 62: /* expr: lit_num  */
#line 257 "parser.y"
              {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1685 "parser.tab.c"
    break;

  case 63: /* expr: TK_IDENTIFICADOR '(' expr_pr ')'  */
#line 258 "parser.y"
                                       {Nodo * data[2] = {(yyvsp[-3].nodo),(yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1691 "parser.tab.c"
    break;

  case 64: /* expr: '(' expr ')'  */
#line 259 "parser.y"
                    {Nodo * data[1] = {(yyvsp[-1].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1697 "parser.tab.c"
    break;

  case 65: /* expr: bool  */
#line 260 "parser.y"
           {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1703 "parser.tab.c"
    break;

  case 66: /* expr: '+' expr  */
#line 261 "parser.y"
               {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1709 "parser.tab.c"
    break;

  case 67: /* expr: '-' expr  */
#line 262 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1715 "parser.tab.c"
    break;

  case 68: /* expr: '!' expr  */
#line 263 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1721 "parser.tab.c"
    break;

  case 69: /* expr: '&' expr  */
#line 264 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1727 "parser.tab.c"
    break;

  case 70: /* expr: '*' expr  */
#line 265 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1733 "parser.tab.c"
    break;

  case 71: /* expr: '#' expr  */
#line 266 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1739 "parser.tab.c"
    break;

  case 72: /* expr: expr '+' expr  */
#line 267 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1745 "parser.tab.c"
    break;

  case 73: /* expr: expr '-' expr  */
#line 268 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1751 "parser.tab.c"
    break;

  case 74: /* expr: expr '*' expr  */
#line 269 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1757 "parser.tab.c"
    break;

  case 75: /* expr: expr '/' expr  */
#line 270 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1763 "parser.tab.c"
    break;

  case 76: /* expr: expr '%' expr  */
#line 271 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1769 "parser.tab.c"
    break;

  case 77: /* expr: expr '<' expr  */
#line 272 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1775 "parser.tab.c"
    break;

  case 78: /* expr: expr '>' expr  */
#line 273 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1781 "parser.tab.c"
    break;

  case 79: /* expr: expr '|' expr  */
#line 274 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1787 "parser.tab.c"
    break;

  case 80: /* expr: expr '&' expr  */
#line 275 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1793 "parser.tab.c"
    break;

  case 81: /* expr: expr '^' expr  */
#line 276 "parser.y"
                    {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1799 "parser.tab.c"
    break;

  case 82: /* expr: expr TK_OC_OR expr  */
#line 277 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1805 "parser.tab.c"
    break;

  case 83: /* expr: expr TK_OC_AND expr  */
#line 278 "parser.y"
                          {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1811 "parser.tab.c"
    break;

  case 84: /* expr: expr TK_OC_LE expr  */
#line 279 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1817 "parser.tab.c"
    break;

  case 85: /* expr: expr TK_OC_GE expr  */
#line 280 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1823 "parser.tab.c"
    break;

  case 86: /* expr: expr TK_OC_EQ expr  */
#line 281 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1829 "parser.tab.c"
    break;

  case 87: /* expr: expr TK_OC_NE expr  */
#line 282 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-2].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1835 "parser.tab.c"
    break;

  case 88: /* expr: expr '?' expr ':' expr  */
#line 283 "parser.y"
                             {Nodo * data[2] = {(yyvsp[-4].nodo), (yyvsp[-2].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1841 "parser.tab.c"
    break;

  case 89: /* expr_pr: expr expr_pr_lst  */
#line 287 "parser.y"
                      {Nodo * data[2] = {(yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1847 "parser.tab.c"
    break;

  case 90: /* expr_pr_lst: ',' expr expr_pr_lst  */
#line 291 "parser.y"
                         {Nodo * data[2] = {(yyvsp[-1].nodo), (yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 2);}
#line 1853 "parser.tab.c"
    break;

  case 91: /* expr_pr_lst: %empty  */
#line 292 "parser.y"
      { }
#line 1859 "parser.tab.c"
    break;

  case 92: /* lit: TK_LIT_INT  */
#line 296 "parser.y"
               {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1865 "parser.tab.c"
    break;

  case 93: /* lit: TK_LIT_FLOAT  */
#line 297 "parser.y"
                    {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1871 "parser.tab.c"
    break;

  case 94: /* lit: TK_LIT_FALSE  */
#line 298 "parser.y"
                    {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1877 "parser.tab.c"
    break;

  case 95: /* lit: TK_LIT_TRUE  */
#line 299 "parser.y"
                   {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1883 "parser.tab.c"
    break;

  case 96: /* lit: TK_LIT_CHAR  */
#line 300 "parser.y"
                  {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1889 "parser.tab.c"
    break;

  case 97: /* lit: TK_LIT_STRING  */
#line 301 "parser.y"
                     {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1895 "parser.tab.c"
    break;

  case 98: /* lit_num: TK_LIT_INT  */
#line 305 "parser.y"
               {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1901 "parser.tab.c"
    break;

  case 99: /* lit_num: TK_LIT_FLOAT  */
#line 306 "parser.y"
                   {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1907 "parser.tab.c"
    break;

  case 100: /* bool: TK_LIT_TRUE  */
#line 310 "parser.y"
                {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1913 "parser.tab.c"
    break;

  case 101: /* bool: TK_LIT_FALSE  */
#line 311 "parser.y"
                   {Nodo * data[1] = {(yyvsp[0].nodo)}; (yyval.nodo) = criaNodo(data, 1);}
#line 1919 "parser.tab.c"
    break;


#line 1923 "parser.tab.c"

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

#line 314 "parser.y"


void yyerror(char const *s){
    fprintf(stderr, "Erro Encontrado: %s na linha %d \n", s, get_line_number());
}
    
#endif // PARSER
