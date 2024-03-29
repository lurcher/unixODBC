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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yyparse.y"

/** source of nntp odbc sql parser -- yyparse.y

    Copyright (C) 1995, 1996 by Ke Jin <kejin@visigenic.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
**/

static	char	sccsid[]
	= "@(#)SQL parser for NNSQL(NetNews SQL), Copyright(c) 1995, 1996 by Ke Jin";

#include <stdint.h>
#include <stdlib.h>

#include	<config.h>
#include    <nnconfig.h>

#include	<nncol.h>
#include	<yyenv.h>
#include	<yystmt.h>
#include	<yylex.h>
#include	<yyerr.h>
#include	<nndate.h>

# ifdef YYLSP_NEEDED
#  undef YYLSP_NEEDED
# endif

#if defined(YYBISON) || defined(__YY_BISON__)
# define yylex(pyylval) 	nnsql_yylex(pyylval, pyyenv)
#else
# define yylex()		nnsql_yylex(&yylval, pyyenv)
#endif
union YYSTYPE;


#define yyparse(x)		nnsql_yyparse	(yyenv_t* pyyenv)
#define yyerror(msg)		nnsql_yyerror (pyyenv, msg)
#define SETYYERROR(env, code)	{ env->pstmt->errcode = code; \
				  env->pstmt->errpos = env->errpos;}

typedef struct
{
	char*	schema_tab_name;
	char*	column_name;
} column_name_t;

static void	unpack_col_name(char* schema_tab_column_name, column_name_t* ptr);
static void*	add_node(yystmt_t* pstmt, node_t* node);
static void	srchtree_reloc(node_t* srchtree, int num);
static int	add_attr(yystmt_t* pstmt, int idx, int wstat);
static void*	add_all_attr(yystmt_t* pstmt);
static void*	add_news_attr(yystmt_t* pstmt);
static void*	add_xnews_attr(yystmt_t* pstmt);
static void*	add_column(yystmt_t* pstmt, yycol_t* pcol);
static void	nnsql_yyerror(yyenv_t* pyyenv, char* msg);
static int	table_check(yystmt_t* pstmt);
static int	column_name(yystmt_t* pstmt, char* name);
static void*	attr_name(yystmt_t* pstmt, char* name);
static int	add_ins_head(yystmt_t* pstmt, char* head, int idx);
static int	add_ins_value(yystmt_t* pstmt, node_t node, int idx);
static char*	get_unpacked_attrname(yystmt_t* pstmt, char* name);

#define 	ERROR_PTR		((void*)(-1L))
#define 	EMPTY_PTR		ERROR_PTR


#line 146 "yyparse.c"

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
    kwd_select = 258,
    kwd_all = 259,
    kwd_news = 260,
    kwd_xnews = 261,
    kwd_distinct = 262,
    kwd_count = 263,
    kwd_from = 264,
    kwd_where = 265,
    kwd_in = 266,
    kwd_between = 267,
    kwd_like = 268,
    kwd_escape = 269,
    kwd_group = 270,
    kwd_by = 271,
    kwd_having = 272,
    kwd_order = 273,
    kwd_for = 274,
    kwd_insert = 275,
    kwd_into = 276,
    kwd_values = 277,
    kwd_delete = 278,
    kwd_update = 279,
    kwd_create = 280,
    kwd_alter = 281,
    kwd_drop = 282,
    kwd_table = 283,
    kwd_column = 284,
    kwd_view = 285,
    kwd_index = 286,
    kwd_of = 287,
    kwd_current = 288,
    kwd_grant = 289,
    kwd_revoke = 290,
    kwd_is = 291,
    kwd_null = 292,
    kwd_call = 293,
    kwd_uncase = 294,
    kwd_case = 295,
    kwd_fn = 296,
    kwd_d = 297,
    QSTRING = 298,
    NUM = 299,
    NAME = 300,
    PARAM = 301,
    kwd_or = 302,
    kwd_and = 303,
    kwd_not = 304,
    CMPOP = 305
  };
#endif
/* Tokens.  */
#define kwd_select 258
#define kwd_all 259
#define kwd_news 260
#define kwd_xnews 261
#define kwd_distinct 262
#define kwd_count 263
#define kwd_from 264
#define kwd_where 265
#define kwd_in 266
#define kwd_between 267
#define kwd_like 268
#define kwd_escape 269
#define kwd_group 270
#define kwd_by 271
#define kwd_having 272
#define kwd_order 273
#define kwd_for 274
#define kwd_insert 275
#define kwd_into 276
#define kwd_values 277
#define kwd_delete 278
#define kwd_update 279
#define kwd_create 280
#define kwd_alter 281
#define kwd_drop 282
#define kwd_table 283
#define kwd_column 284
#define kwd_view 285
#define kwd_index 286
#define kwd_of 287
#define kwd_current 288
#define kwd_grant 289
#define kwd_revoke 290
#define kwd_is 291
#define kwd_null 292
#define kwd_call 293
#define kwd_uncase 294
#define kwd_case 295
#define kwd_fn 296
#define kwd_d 297
#define QSTRING 298
#define NUM 299
#define NAME 300
#define PARAM 301
#define kwd_or 302
#define kwd_and 303
#define kwd_not 304
#define CMPOP 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 80 "yyparse.y"

	char*	qstring;
	char*	name;
	long	number;

	int	ipar;		/* parameter index */
	int	cmpop;		/* for comparsion operators */
	char	esc;
	int	flag;		/* for not_opt and case_opt */
	int	idx;

	void*	offset; 	/* actually, it is used as a 'int' offset */

	node_t node;		/* a node haven't add to tree */

#line 311 "yyparse.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);





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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

#define YYUNDEFTOK  2
#define YYMAXUTOK   305


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    52,     2,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,    58,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   168,   168,   172,   173,   183,   187,   191,   192,   200,
     204,   205,   213,   214,   215,   223,   224,   225,   226,   227,
     231,   232,   233,   237,   238,   239,   243,   244,   248,   259,
     261,   263,   265,   276,   287,   300,   305,   306,   307,   308,
     309,   310,   314,   315,   328,   330,   332,   334,   343,   346,
     360,   361,   373,   386,   398,   423,   453,   482,   507,   523,
     524,   526,   528,   533,   535,   537,   542,   547,   561,   571,
     584,   595,   606,   622,   623,   624,   628,   642,   657,   658,
     662,   663,   671,   672,   680,   681,   689,   739,   744,   752,
     754,   756,   761,   766,   774,   778,   783,   791,   803,   811,
     812,   813,   814,   815,   816,   818,   819
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "kwd_select", "kwd_all", "kwd_news",
  "kwd_xnews", "kwd_distinct", "kwd_count", "kwd_from", "kwd_where",
  "kwd_in", "kwd_between", "kwd_like", "kwd_escape", "kwd_group", "kwd_by",
  "kwd_having", "kwd_order", "kwd_for", "kwd_insert", "kwd_into",
  "kwd_values", "kwd_delete", "kwd_update", "kwd_create", "kwd_alter",
  "kwd_drop", "kwd_table", "kwd_column", "kwd_view", "kwd_index", "kwd_of",
  "kwd_current", "kwd_grant", "kwd_revoke", "kwd_is", "kwd_null",
  "kwd_call", "kwd_uncase", "kwd_case", "kwd_fn", "kwd_d", "QSTRING",
  "NUM", "NAME", "PARAM", "kwd_or", "kwd_and", "kwd_not", "CMPOP", "';'",
  "'*'", "'('", "')'", "'{'", "'}'", "','", "'='", "$accept", "sql_stmt",
  "stmt_body", "select_clauses", "for_stmt", "distinct_opt", "select_list",
  "news_hotlist", "news_xhotlist", "col_name_list", "col_name",
  "count_sub_opt", "tab_list", "tab_name", "where_clause",
  "search_condition", "case_opt", "attr_name", "value_list", "value",
  "escape_desc", "pattern", "not_opt", "group_clause", "having_clause",
  "order_clause", "insert_stmt", "ins_head_list", "ins_head",
  "ins_value_list", "ins_value", "srch_delete_stmt", "posi_delete_stmt",
  "other_stmt", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    59,    42,    40,    41,   123,   125,    44,    61
};
# endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    86,   -12,     5,  -156,  -156,  -156,  -156,  -156,  -156,
       8,    19,    -6,  -156,  -156,  -156,  -156,  -156,  -156,    34,
      21,    21,  -156,   -28,  -156,  -156,    -3,     2,    17,    47,
    -156,  -156,  -156,  -156,  -156,    27,    48,  -156,  -156,    58,
    -156,    51,  -156,  -156,    50,    69,   113,    87,    70,    73,
     -32,  -156,    83,    12,    85,    21,    29,    88,   101,   -22,
      52,  -156,  -156,  -156,  -156,    78,    79,    80,    81,  -156,
      82,    77,    84,    89,    90,    -5,  -156,    76,  -156,    91,
      94,    95,  -156,    97,    38,  -156,    96,   107,  -156,    53,
      53,    99,    72,    15,  -156,  -156,  -156,  -156,  -156,    98,
     100,   108,  -156,    53,    21,  -156,   126,   114,  -156,   110,
     112,   115,   128,   -22,   116,   111,  -156,    40,   129,    53,
      53,   117,  -156,    66,     4,   104,   105,   103,  -156,   146,
     147,   109,   118,   120,   121,  -156,   122,  -156,  -156,   124,
     119,  -156,   131,  -156,  -156,  -156,  -156,   123,  -156,   130,
     125,    66,  -156,  -156,   156,  -156,  -156,   127,    29,    53,
     153,   132,  -156,   136,    16,  -156,   137,  -156,   138,  -156,
      66,   134,    68,  -156,    58,    72,   159,   165,  -156,   133,
    -156,  -156,  -156,    42,  -156,   135,   139,    59,  -156,    66,
    -156,  -156,    -8,    29,   161,  -156,   140,  -156,    16,   141,
    -156,  -156,    66,  -156,   143,   176,  -156,    58,   160,  -156,
    -156,  -156,  -156,  -156,   148,    29,   142,    58,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    12,     0,     0,   102,    99,   100,   101,   105,   106,
       0,     0,     0,     5,     6,     7,     8,    13,    14,    15,
       0,     0,   103,     0,     1,     2,    20,    23,    36,     0,
      32,    33,    29,    35,    16,     0,     0,    17,    18,    19,
      26,     0,    44,    47,     0,     0,    48,     0,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,   104,    21,    24,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    48,    42,     0,    27,     0,
       0,     0,    89,     0,     0,    87,     0,     0,    63,     0,
       0,     0,    49,    78,    40,    41,    39,    38,    30,     0,
       0,     0,    34,     0,     0,     4,    80,     0,    45,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,    78,    79,     0,    59,     0,     0,     0,    43,     0,
      82,     0,     0,     0,     0,    88,     0,    98,    50,     0,
      52,    53,     0,    68,    70,    71,    69,     0,    58,     0,
       0,     0,    61,    60,     0,    22,    25,     0,     0,     0,
      84,     0,    90,     0,     0,    64,     0,    57,     0,    62,
       0,     0,     0,    31,    81,    83,     0,    10,    46,     0,
      94,    95,    96,     0,    92,     0,     0,     0,    66,     0,
      77,    76,    73,     0,     0,     9,     0,    86,     0,     0,
      72,    54,     0,    55,     0,     0,    56,    85,     0,    91,
      93,    65,    67,    74,     0,     0,     0,    11,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -155,
     144,  -156,  -156,   -21,   145,   -88,  -156,  -156,  -156,  -141,
    -156,  -156,    92,  -156,  -156,  -156,  -156,  -156,    93,  -156,
      -4,  -156,  -156,  -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,   105,   195,    19,    36,    37,    38,    39,
      40,    51,    75,    45,    61,    92,   154,    93,   187,   148,
     206,   192,   124,   130,   160,   177,    13,    84,    85,   183,
     184,    14,    15,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,   116,   117,   174,     1,   103,   204,    81,   149,    20,
     171,    65,    66,    67,    21,   150,   151,    71,    72,    24,
      68,     2,    69,    82,     3,     4,     5,     6,     7,   188,
      47,   140,   141,    83,    76,     8,     9,    28,   207,    26,
      27,    73,    28,   152,   153,    25,    22,   205,   203,    41,
      48,   121,   104,   180,    23,    49,    10,    55,    29,   181,
     217,   212,   182,    29,   122,   123,    42,    43,    53,    54,
      50,   175,    30,    31,    32,    33,    44,    30,    31,    32,
      33,    86,    86,   128,    77,    87,    34,   119,   120,    35,
      17,    58,   112,    18,   138,   113,   197,    88,    88,   198,
      52,    89,    89,   143,    57,    90,    90,    91,    91,   144,
     145,   190,   146,   201,   191,    56,   202,   107,    54,   119,
     120,   147,    59,    60,    63,    62,    70,    64,    74,    80,
      99,    79,    94,    95,    96,    97,    98,   100,   111,   115,
     118,   129,   101,    73,   133,   108,   102,   109,   110,   114,
     134,   127,   125,   131,   126,   132,   137,   157,   139,   136,
     155,   156,   158,   161,   159,   168,   122,   120,   167,   172,
     169,   176,   162,   163,   164,   193,   165,   166,   170,   179,
     185,   186,   189,   173,   194,   208,   213,   196,   178,   199,
     214,   216,   215,     0,   210,   200,   209,   211,   218,     0,
      78,     0,     0,     0,     0,     0,   135,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,     0,     0,
     106
};

static const yytype_int16 yycheck[] =
{
      21,    89,    90,   158,     3,    10,    14,    29,     4,    21,
     151,    43,    44,    45,     9,    11,    12,     5,     6,     0,
      52,    20,    54,    45,    23,    24,    25,    26,    27,   170,
      58,   119,   120,    55,    55,    34,    35,     8,   193,     5,
       6,    29,     8,    39,    40,    51,    38,    55,   189,    28,
      53,    36,    57,    37,    46,    53,    55,     9,    29,    43,
     215,   202,    46,    29,    49,    50,    45,    46,    41,    42,
      53,   159,    43,    44,    45,    46,    55,    43,    44,    45,
      46,    29,    29,   104,    55,    33,    52,    47,    48,    55,
       4,    41,    54,     7,    54,    57,    54,    45,    45,    57,
      53,    49,    49,    37,    53,    53,    53,    55,    55,    43,
      44,    43,    46,    54,    46,    57,    57,    41,    42,    47,
      48,    55,    53,    10,    54,    38,    43,    54,    43,    28,
      53,    43,    54,    54,    54,    54,    54,    53,    41,    32,
      41,    15,    53,    29,    29,    54,    56,    53,    53,    53,
      22,    43,    54,    43,    54,    43,    45,    54,    29,    43,
      56,    56,    16,    54,    17,    42,    49,    48,    37,    13,
      40,    18,    54,    53,    53,    16,    54,    53,    53,    43,
      43,    43,    48,    56,    19,    24,    43,    54,    56,    54,
      14,    43,    32,    -1,   198,    56,    56,    56,    56,    -1,
      56,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    20,    23,    24,    25,    26,    27,    34,    35,
      55,    60,    61,    85,    90,    91,    92,     4,     7,    64,
      21,     9,    38,    46,     0,    51,     5,     6,     8,    29,
      43,    44,    45,    46,    52,    55,    65,    66,    67,    68,
      69,    28,    45,    46,    55,    72,    72,    58,    53,    53,
      53,    70,    53,    41,    42,     9,    57,    53,    41,    53,
      10,    73,    38,    54,    54,    43,    44,    45,    52,    54,
      43,     5,     6,    29,    43,    71,    72,    55,    69,    43,
      28,    29,    45,    55,    86,    87,    29,    33,    45,    49,
      53,    55,    74,    76,    54,    54,    54,    54,    54,    53,
      53,    53,    56,    10,    57,    62,    73,    41,    54,    53,
      53,    41,    54,    57,    53,    32,    74,    74,    41,    47,
      48,    36,    49,    50,    81,    54,    54,    43,    72,    15,
      82,    43,    43,    29,    22,    87,    43,    45,    54,    29,
      74,    74,    81,    37,    43,    44,    46,    55,    78,     4,
      11,    12,    39,    40,    75,    56,    56,    54,    16,    17,
      83,    54,    54,    53,    53,    54,    53,    37,    42,    40,
      53,    78,    13,    56,    68,    74,    18,    84,    56,    43,
      37,    43,    46,    88,    89,    43,    43,    77,    78,    48,
      43,    46,    80,    16,    19,    63,    54,    54,    57,    54,
      56,    54,    57,    78,    14,    55,    79,    68,    24,    56,
      89,    56,    78,    43,    14,    32,    43,    68,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    61,    61,    61,    61,    62,
      63,    63,    64,    64,    64,    65,    65,    65,    65,    65,
      66,    66,    66,    67,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    87,    88,    88,    89,    89,    89,    90,    91,    92,
      92,    92,    92,    92,    92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     6,     1,     1,     1,     1,     5,
       0,     4,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     3,     6,     1,     3,     6,     1,     3,     2,     1,
       4,     7,     1,     1,     4,     1,     0,     2,     3,     3,
       3,     3,     1,     3,     1,     4,     7,     1,     0,     2,
       3,     2,     3,     3,     6,     6,     6,     4,     3,     0,
       1,     1,     2,     1,     4,     7,     1,     3,     1,     1,
       1,     1,     4,     0,     2,     4,     1,     1,     0,     1,
       0,     3,     0,     2,     0,     3,    10,     1,     3,     1,
       4,     7,     1,     3,     1,     1,     1,     4,     7,     1,
       1,     1,     1,     2,     4,     1,     1
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




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval);
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
#line 168 "yyparse.y"
                        { YYACCEPT; }
#line 1645 "yyparse.c"
    break;

  case 4:
#line 174 "yyparse.y"
          {
		if( ! table_check( pyyenv->pstmt ) )
		{
			SETYYERROR(pyyenv, NOT_SUPPORT_MULTITABLE_QUERY);
			YYABORT;
		}

		pyyenv->pstmt->type = en_stmt_select;
	  }
#line 1659 "yyparse.c"
    break;

  case 5:
#line 184 "yyparse.y"
          {
		pyyenv->pstmt->type = en_stmt_insert;
	  }
#line 1667 "yyparse.c"
    break;

  case 6:
#line 188 "yyparse.y"
          {
		pyyenv->pstmt->type = en_stmt_srch_delete;
	  }
#line 1675 "yyparse.c"
    break;

  case 8:
#line 193 "yyparse.y"
          {
		pyyenv->pstmt->type = en_stmt_alloc;
		YYABORT;
	  }
#line 1684 "yyparse.c"
    break;

  case 11:
#line 206 "yyparse.y"
          {
		SETYYERROR(pyyenv, NOT_SUPPORT_UPDATEABLE_CURSOR) ;
		YYABORT;
	  }
#line 1693 "yyparse.c"
    break;

  case 14:
#line 216 "yyparse.y"
          {
		SETYYERROR(pyyenv, NOT_SUPPORT_DISTINCT_SELECT);
		YYABORT;
	  }
#line 1702 "yyparse.c"
    break;

  case 15:
#line 223 "yyparse.y"
                        { if(add_all_attr(pyyenv->pstmt)) YYABORT; }
#line 1708 "yyparse.c"
    break;

  case 16:
#line 224 "yyparse.y"
                        { if(add_all_attr(pyyenv->pstmt)) YYABORT; }
#line 1714 "yyparse.c"
    break;

  case 17:
#line 225 "yyparse.y"
                        { if(add_news_attr(pyyenv->pstmt)) YYABORT; }
#line 1720 "yyparse.c"
    break;

  case 18:
#line 226 "yyparse.y"
                        { if(add_xnews_attr(pyyenv->pstmt)) YYABORT; }
#line 1726 "yyparse.c"
    break;

  case 19:
#line 227 "yyparse.y"
                        { if(add_attr(pyyenv->pstmt, 0, 0))  YYABORT; }
#line 1732 "yyparse.c"
    break;

  case 28:
#line 249 "yyparse.y"
          {
		yycol_t col;

		col.iattr = en_sql_count;
		col.table = 0;

		if( add_column(pyyenv->pstmt, &col) )
			YYABORT;

	  }
#line 1747 "yyparse.c"
    break;

  case 29:
#line 260 "yyparse.y"
          { if( column_name( pyyenv->pstmt, (yyvsp[0].name) ) ) YYABORT; }
#line 1753 "yyparse.c"
    break;

  case 30:
#line 262 "yyparse.y"
          { if( column_name( pyyenv->pstmt, (yyvsp[-1].qstring) ) ) YYABORT; }
#line 1759 "yyparse.c"
    break;

  case 31:
#line 264 "yyparse.y"
          { if( column_name( pyyenv->pstmt, (yyvsp[-2].qstring) ) ) YYABORT; }
#line 1765 "yyparse.c"
    break;

  case 32:
#line 266 "yyparse.y"
          {
		yycol_t col;

		col.iattr = en_sql_qstr;
		col.value.qstr = (yyvsp[0].qstring);
		col.table = 0;

		if( add_column(pyyenv->pstmt, &col) )
			YYABORT;
	  }
#line 1780 "yyparse.c"
    break;

  case 33:
#line 277 "yyparse.y"
          {
		yycol_t col;

		col.iattr = en_sql_num;
		col.value.num = (yyvsp[0].number);
		col.table = 0;

		if( add_column(pyyenv->pstmt, &col) )
			YYABORT;
	  }
#line 1795 "yyparse.c"
    break;

  case 34:
#line 288 "yyparse.y"
          {
		yycol_t col;

		col.iattr = en_sql_date;
		if( nnsql_odbcdatestr2date((yyvsp[-1].qstring), &(col.value.date)) )
			YYABORT;

		col.table = 0;

		if( add_column(pyyenv->pstmt, &col) )
			YYABORT;
	  }
#line 1812 "yyparse.c"
    break;

  case 35:
#line 301 "yyparse.y"
          {	SETYYERROR(pyyenv, VARIABLE_IN_SELECT_LIST); YYABORT; }
#line 1818 "yyparse.c"
    break;

  case 42:
#line 314 "yyparse.y"
                   { pyyenv->pstmt->table = (yyvsp[0].name); }
#line 1824 "yyparse.c"
    break;

  case 43:
#line 316 "yyparse.y"
          {
		if( ! pyyenv->pstmt->table )
			pyyenv->pstmt->table = (yyvsp[0].name);
		else if( !STREQ(pyyenv->pstmt->table, (yyvsp[0].name)) )
		{
			SETYYERROR(pyyenv, NOT_SUPPORT_MULTITABLE_QUERY);
			YYABORT;
		}
	  }
#line 1838 "yyparse.c"
    break;

  case 44:
#line 329 "yyparse.y"
          { (yyval.name) = (yyvsp[0].name); }
#line 1844 "yyparse.c"
    break;

  case 45:
#line 331 "yyparse.y"
          { (yyval.name) = (yyvsp[-1].qstring); }
#line 1850 "yyparse.c"
    break;

  case 46:
#line 333 "yyparse.y"
          { (yyval.name) = (yyvsp[-2].qstring); }
#line 1856 "yyparse.c"
    break;

  case 47:
#line 335 "yyparse.y"
          {
		SETYYERROR(pyyenv, VARIABLE_IN_TABLE_LIST);
		YYABORT;
	  }
#line 1865 "yyparse.c"
    break;

  case 48:
#line 343 "yyparse.y"
          {
		pyyenv->pstmt->srchtree = 0;
	  }
#line 1873 "yyparse.c"
    break;

  case 49:
#line 347 "yyparse.y"
          {
		yystmt_t*	pstmt;
		uintptr_t		offset;

		pstmt = pyyenv->pstmt;
		offset = (uintptr_t)((yyvsp[0].offset));

		pstmt->srchtree = pstmt->node_buf + offset;
		srchtree_reloc (	pstmt->node_buf, pstmt->srchtreenum);
	  }
#line 1888 "yyparse.c"
    break;

  case 50:
#line 360 "yyparse.y"
                                   { (yyval.offset) = (yyvsp[-1].offset); }
#line 1894 "yyparse.c"
    break;

  case 51:
#line 362 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_logop;
		node.value.logop = en_logop_not;
		node.left = EMPTY_PTR;
		node.right= (yyvsp[0].offset);

		if(((yyval.offset) = add_node(pyyenv->pstmt, &node)) == ERROR_PTR )
			YYABORT;
	  }
#line 1910 "yyparse.c"
    break;

  case 52:
#line 374 "yyparse.y"
          {
		node_t	node;
		void*		p;

		node.type = en_nt_logop;
		node.value.logop = en_logop_or;
		node.left = (yyvsp[-2].offset);
		node.right= (yyvsp[0].offset);

		if(((yyval.offset) = add_node(pyyenv->pstmt, &node)) == ERROR_PTR )
			YYABORT;
	  }
#line 1927 "yyparse.c"
    break;

  case 53:
#line 387 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_logop;
		node.value.logop = en_logop_and;
		node.left = (yyvsp[-2].offset);
		node.right= (yyvsp[0].offset);

		if(((yyval.offset) = add_node(pyyenv->pstmt, &node)) == ERROR_PTR )
			YYABORT;
	  }
#line 1943 "yyparse.c"
    break;

  case 54:
#line 399 "yyparse.y"
          {
		node_t	node;
		void*		ptr;

		node.type = en_nt_in;
		node.left = (yyvsp[-5].offset);
		node.right= (yyvsp[-1].offset);

		if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
			YYABORT;

		if( (yyvsp[-4].flag) )
		{
			node.type = en_nt_logop;
			node.value.logop = en_logop_not;
			node.left = EMPTY_PTR;
			node.right = ptr;

			if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
				YYABORT;
		}

		(yyval.offset) = ptr;
	  }
#line 1972 "yyparse.c"
    break;

  case 55:
#line 424 "yyparse.y"
          {
		node_t	node;
		void*		ptr;

		if( ((node.left = add_node(pyyenv->pstmt, &((yyvsp[-2].node)))) == ERROR_PTR)
		 || ((node.right= add_node(pyyenv->pstmt, &((yyvsp[0].node)))) == ERROR_PTR)
		 || ((ptr	= add_node(pyyenv->pstmt, &node)) == ERROR_PTR) )
			YYABORT;

		node.type = en_nt_between;
		node.left = (yyvsp[-5].offset);
		node.right = ptr;

		if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
			YYABORT;

		if( (yyvsp[-4].flag) )
		{
			node.type = en_nt_logop;
			node.value.logop = en_logop_not;
			node.left = EMPTY_PTR;
			node.right= ptr;

			if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
				YYABORT;
		}

		(yyval.offset) = ptr;
	  }
#line 2006 "yyparse.c"
    break;

  case 56:
#line 454 "yyparse.y"
          {
		node_t	node;
		void*		ptr;

		if( (yyvsp[-3].flag) )
			node.type = en_nt_caselike;
		else
			node.type = en_nt_like;
		node.value.esc = (yyvsp[0].esc);
		node.left = (yyvsp[-5].offset);
		node.right= (yyvsp[-1].offset);

		if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
			YYABORT;

		if( (yyvsp[-4].flag) )
		{
			node.type = en_nt_logop;
			node.value.logop = en_logop_not;
			node.left = EMPTY_PTR;
			node.right= ptr;

			if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
				YYABORT;
		}

		(yyval.offset) = ptr;
	  }
#line 2039 "yyparse.c"
    break;

  case 57:
#line 483 "yyparse.y"
          {
		node_t	node;
		void*		ptr;

		node.type = en_nt_isnull;
		node.left = (yyvsp[-3].offset);
		node.right= EMPTY_PTR;

		if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
			YYABORT;

		if( (yyvsp[-1].flag) )
		{
			node.type = en_nt_logop;
			node.value.logop = en_logop_not;
			node.left = EMPTY_PTR;
			node.right= ptr;

			if((ptr = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
				YYABORT;
		}

		(yyval.offset) = ptr;
	  }
#line 2068 "yyparse.c"
    break;

  case 58:
#line 508 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_cmpop;
		node.value.cmpop = (yyvsp[-1].cmpop);
		node.left = (yyvsp[-2].offset);

		if( ((node.right= add_node(pyyenv->pstmt, &((yyvsp[0].node)))) == ERROR_PTR)
		 || (((yyval.offset)	= add_node(pyyenv->pstmt, &node)) == ERROR_PTR) )
			YYABORT;
	  }
#line 2084 "yyparse.c"
    break;

  case 59:
#line 523 "yyparse.y"
          { (yyval.flag) = 0; }
#line 2090 "yyparse.c"
    break;

  case 60:
#line 525 "yyparse.y"
          { (yyval.flag) = 0; }
#line 2096 "yyparse.c"
    break;

  case 61:
#line 527 "yyparse.y"
          { (yyval.flag) = 1; }
#line 2102 "yyparse.c"
    break;

  case 62:
#line 529 "yyparse.y"
          { (yyval.flag) = 1; }
#line 2108 "yyparse.c"
    break;

  case 63:
#line 534 "yyparse.y"
          { (yyval.offset) = attr_name( pyyenv->pstmt, (yyvsp[0].name) ); if( (yyval.offset) == ERROR_PTR ) YYABORT; }
#line 2114 "yyparse.c"
    break;

  case 64:
#line 536 "yyparse.y"
          { (yyval.offset) = attr_name( pyyenv->pstmt, (yyvsp[-1].qstring) ); if( (yyval.offset) == ERROR_PTR ) YYABORT; }
#line 2120 "yyparse.c"
    break;

  case 65:
#line 538 "yyparse.y"
          { (yyval.offset) = attr_name( pyyenv->pstmt, (yyvsp[-2].qstring) ); if( (yyval.offset) == ERROR_PTR ) YYABORT; }
#line 2126 "yyparse.c"
    break;

  case 66:
#line 543 "yyparse.y"
          {
		if( ((yyval.offset) = add_node( pyyenv->pstmt, &((yyvsp[0].node)))) == ERROR_PTR )
			YYABORT;
	  }
#line 2135 "yyparse.c"
    break;

  case 67:
#line 548 "yyparse.y"
          {
		node_t	node;

		node = (yyvsp[0].node);
		node.left = EMPTY_PTR;
		node.right= (yyvsp[-2].offset);

		if( ((yyval.offset) = add_node(pyyenv->pstmt, &node)) == ERROR_PTR )
			YYABORT;
	  }
#line 2150 "yyparse.c"
    break;

  case 68:
#line 562 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_null;
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		(yyval.node) = node;
	  }
#line 2164 "yyparse.c"
    break;

  case 69:
#line 572 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_param,
		node.value.ipar = (yyvsp[0].ipar);
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		pyyenv->pstmt->npar ++;

		(yyval.node) = node;
	  }
#line 2181 "yyparse.c"
    break;

  case 70:
#line 585 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_qstr;
		node.value.qstr = (yyvsp[0].qstring);
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		(yyval.node) = node;
	  }
#line 2196 "yyparse.c"
    break;

  case 71:
#line 596 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_num;
		node.value.num = (yyvsp[0].number);
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		(yyval.node) = node;
	  }
#line 2211 "yyparse.c"
    break;

  case 72:
#line 607 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_date;
		if( nnsql_odbcdatestr2date((yyvsp[-1].qstring), &(node.value.date)) )
			YYABORT;

		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		(yyval.node) = node;
	  }
#line 2228 "yyparse.c"
    break;

  case 73:
#line 622 "yyparse.y"
                                        { (yyval.esc) = 0; }
#line 2234 "yyparse.c"
    break;

  case 74:
#line 623 "yyparse.y"
                                        { (yyval.esc) = (yyvsp[0].qstring)[0]; }
#line 2240 "yyparse.c"
    break;

  case 75:
#line 624 "yyparse.y"
                                        { (yyval.esc) = (yyvsp[-1].qstring)[0]; }
#line 2246 "yyparse.c"
    break;

  case 76:
#line 629 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_param;
		node.value.ipar = (yyvsp[0].ipar);
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		pyyenv->pstmt->npar ++;

		if(((yyval.offset) = add_node(pyyenv->pstmt, &node)) == EMPTY_PTR)
			YYABORT;
	  }
#line 2264 "yyparse.c"
    break;

  case 77:
#line 643 "yyparse.y"
          {
		node_t	node;

		node.type = en_nt_qstr;
		node.value.qstr = (yyvsp[0].qstring);
		node.left = EMPTY_PTR;
		node.right= EMPTY_PTR;

		if(((yyval.offset) = add_node(pyyenv->pstmt, &node)) == ERROR_PTR)
			YYABORT;
	  }
#line 2280 "yyparse.c"
    break;

  case 78:
#line 657 "yyparse.y"
                        { (yyval.flag) = 0; }
#line 2286 "yyparse.c"
    break;

  case 79:
#line 658 "yyparse.y"
                        { (yyval.flag) = 1; }
#line 2292 "yyparse.c"
    break;

  case 81:
#line 664 "yyparse.y"
          {
		SETYYERROR(pyyenv, NOT_SUPPORT_GROUP_CLAUSE);
		YYABORT;
	  }
#line 2301 "yyparse.c"
    break;

  case 83:
#line 673 "yyparse.y"
          {
		SETYYERROR(pyyenv, NOT_SUPPORT_HAVING_CLAUSE);
		YYABORT;
	  }
#line 2310 "yyparse.c"
    break;

  case 85:
#line 682 "yyparse.y"
          {
		SETYYERROR(pyyenv, NOT_SUPPORT_ORDER_CLAUSE);
		YYABORT;
	  }
#line 2319 "yyparse.c"
    break;

  case 86:
#line 690 "yyparse.y"
          {
		int	i;
		char*	head = 0;

		if( (yyvsp[-5].idx) > (yyvsp[-1].idx) )
		{
			SETYYERROR(pyyenv, INSERT_VALUE_LESS);
			YYABORT;
		}

		if( (yyvsp[-5].idx) < (yyvsp[-1].idx) )
		{
			SETYYERROR(pyyenv, INSERT_VALUE_MORE);
			YYABORT;
		}

		for(i=0;;i++)
		{
			head = (pyyenv->pstmt->ins_heads)[i];

			if( ! head )
			{
				SETYYERROR(pyyenv, POST_WITHOUT_BODY);
				YYABORT;
			}

			if( nnsql_getcolidxbyname(head) == en_body )
				break;
		}

		if( add_ins_head(pyyenv->pstmt, 0, (yyvsp[-5].idx)) == -1 )
			YYABORT;

		pyyenv->pstmt->table = (yyvsp[-7].name);
		/* we will not check table(i.e. group)name here.
		 * According to RFC1036, it is totally legal to
		 * post an articl to a group which is not access
		 * able locally.
		 * table name here is actually newsgroups name.
		 * it should look like:
		 *	<group_name>,<group_name>,...
		 * Be aware, there are must no space between the
		 * ',' and the two <group_name>s. Also, group
		 * names are case sensitive.
		 */
	  }
#line 2370 "yyparse.c"
    break;

  case 87:
#line 740 "yyparse.y"
          {
		if( ((yyval.idx) = add_ins_head(pyyenv->pstmt, (yyvsp[0].qstring), 0)) == -1)
			YYABORT;
	  }
#line 2379 "yyparse.c"
    break;

  case 88:
#line 745 "yyparse.y"
          {
		if( ((yyval.idx) = add_ins_head(pyyenv->pstmt, (yyvsp[0].qstring), (yyvsp[-2].idx)))== -1)
			YYABORT;
	  }
#line 2388 "yyparse.c"
    break;

  case 89:
#line 753 "yyparse.y"
          { (yyval.qstring) = get_unpacked_attrname(pyyenv->pstmt, (yyvsp[0].name)); }
#line 2394 "yyparse.c"
    break;

  case 90:
#line 755 "yyparse.y"
          { (yyval.qstring) = get_unpacked_attrname(pyyenv->pstmt, (yyvsp[-1].qstring)); }
#line 2400 "yyparse.c"
    break;

  case 91:
#line 757 "yyparse.y"
          { (yyval.qstring) = (yyvsp[-2].qstring); }
#line 2406 "yyparse.c"
    break;

  case 92:
#line 762 "yyparse.y"
          {
		if( ((yyval.idx) = add_ins_value(pyyenv->pstmt, (yyvsp[0].node), 0))== -1)
			YYABORT;
	  }
#line 2415 "yyparse.c"
    break;

  case 93:
#line 767 "yyparse.y"
          {
		if( ((yyval.idx) = add_ins_value(pyyenv->pstmt, (yyvsp[0].node), (yyvsp[-2].idx)))==-1)
			YYABORT;
	  }
#line 2424 "yyparse.c"
    break;

  case 94:
#line 775 "yyparse.y"
          {
		(yyval.node).type = en_nt_null;
	  }
#line 2432 "yyparse.c"
    break;

  case 95:
#line 779 "yyparse.y"
          {
		(yyval.node).type = en_nt_qstr;
		(yyval.node).value.qstr = (yyvsp[0].qstring);
	  }
#line 2441 "yyparse.c"
    break;

  case 96:
#line 784 "yyparse.y"
          {
		(yyval.node).type = en_nt_param;
		(yyval.node).value.ipar= (yyvsp[0].ipar);
	  }
#line 2450 "yyparse.c"
    break;

  case 97:
#line 792 "yyparse.y"
          {
		pyyenv->pstmt->table = (yyvsp[-1].name);

		if( add_attr( pyyenv->pstmt, en_sender, 1 )
		 || add_attr( pyyenv->pstmt, en_from, 1 )
		 || add_attr( pyyenv->pstmt, en_msgid, 1 ) )
			YYABORT;
	  }
#line 2463 "yyparse.c"
    break;

  case 98:
#line 804 "yyparse.y"
          {
		SETYYERROR( pyyenv, NOT_SUPPORT_POSITION_DELETE );
		YYABORT;
	  }
#line 2472 "yyparse.c"
    break;

  case 99:
#line 811 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_DDL_DCL); }
#line 2478 "yyparse.c"
    break;

  case 100:
#line 812 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_DDL_DCL); }
#line 2484 "yyparse.c"
    break;

  case 101:
#line 813 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_DDL_DCL); }
#line 2490 "yyparse.c"
    break;

  case 102:
#line 814 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_UPDATE); }
#line 2496 "yyparse.c"
    break;

  case 103:
#line 815 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_SPROC); }
#line 2502 "yyparse.c"
    break;

  case 104:
#line 817 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_SPROC); }
#line 2508 "yyparse.c"
    break;

  case 105:
#line 818 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_DDL_DCL); }
#line 2514 "yyparse.c"
    break;

  case 106:
#line 819 "yyparse.y"
                        { SETYYERROR(pyyenv, NOT_SUPPORT_DDL_DCL); }
#line 2520 "yyparse.c"
    break;


#line 2524 "yyparse.c"

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
#line 821 "yyparse.y"


static void	unpack_col_name(char* schema_tab_column_name, column_name_t* ptr)
{
	int	len, i;
	char	c;

	len = STRLEN(schema_tab_column_name);

	for(i=len; i; i--)
	{
		if( schema_tab_column_name[i-1] == '.' )
		{
			schema_tab_column_name[i-1] = 0;
			break;
		}
	}

	ptr->column_name = ( schema_tab_column_name + i );

	if( i )
		ptr->schema_tab_name = schema_tab_column_name;
	else
		ptr->schema_tab_name = schema_tab_column_name + len;
}

static char*	get_unpacked_attrname(yystmt_t* pstmt, char* name)
{
	column_name_t	attrname;

	unpack_col_name( name, &attrname );

	return attrname.column_name;
}

#define FILTER_CHUNK_SIZE	16

static	void*	add_node(yystmt_t* pstmt, node_t* node)
{
	int		i;
	node_t* 	srchtree;

	if (!pstmt->node_buf)
	{
		pstmt->node_buf = (node_t*)MEM_ALLOC(
			sizeof(node_t)*FILTER_CHUNK_SIZE);

		if( ! pstmt->node_buf )
		{
			pstmt->errcode = -1;
			return ERROR_PTR;
		}

		pstmt->srchtreesize = FILTER_CHUNK_SIZE;
		pstmt->srchtreenum  = 0;
	}

	if( pstmt->srchtreenum == pstmt->srchtreesize )
	{
		pstmt->node_buf = (node_t*)MEM_REALLOC(
			pstmt->node_buf,
			sizeof(node_t)*(pstmt->srchtreesize + FILTER_CHUNK_SIZE));

		if( ! pstmt->node_buf )
		{
			pstmt->errcode = -1;
			return ERROR_PTR;
		}

		pstmt->srchtreesize += FILTER_CHUNK_SIZE;
	}

	srchtree = pstmt->node_buf;

	srchtree[pstmt->srchtreenum] = *node;
	pstmt->srchtreenum ++;

	for(i=pstmt->srchtreenum;i<pstmt->srchtreesize;i++)
	{
		srchtree[i].left = EMPTY_PTR;
		srchtree[i].right= EMPTY_PTR;
	}

	return (void*)((uintptr_t)(pstmt->srchtreenum - 1));
}

static	void	srchtree_reloc(node_t* buf, int num)
/* The 'where' srchtree is build on a re-allocateable array with addnode(). The purpose
 * of using an array rather than a link list is to easy the job of freeing it. Thus,
 * the left and right pointer of a node point is an offset to the array address not
 * the virtual address of the subtree. However, an evaluate function would be easy to
 * work by using virtual address of subtree rather than an offset. Because, in the first
 * case, a recrusive evaluate function only need to pass virtual address of (sub)tree
 * without worry about the offset of subtree. The purpose of this function, srchtree_reloc(),
 * is to convert all subnodes' offset into virtual address. It will called only once
 * after the whole tree has been built.
 */
{
	int	i;
	uintptr_t offset;
	node_t* ptr = buf;

	for(i=0; ptr && i<num; ptr++, i++)
	{
		if( ptr->left == EMPTY_PTR )
			ptr->left = 0;
		else
		{
			offset = (uintptr_t)(ptr->left);
			ptr->left = buf + offset;
		}

		if( ptr->right== EMPTY_PTR )
			ptr->right= 0;
		else
		{
			offset = (uintptr_t)(ptr->right);
			ptr->right= buf+ offset;
		}
	}
}

static	int	add_attr(yystmt_t* pstmt, int idx, int wstat)
{
	if( ! pstmt->pattr )
	{
		pstmt->pattr = (yyattr_t*)MEM_ALLOC((en_body+1)*sizeof(yyattr_t));

		if( ! pstmt->pattr )
		{
			pstmt->errcode = -1;
			return -1;
		}

		MEM_SET(pstmt->pattr, 0, (en_body+1)*sizeof(yyattr_t));
	}

	(pstmt->pattr)[0].stat	= 1;
	(pstmt->pattr)[0].wstat = 1;
	(pstmt->pattr)[0].article = 0;
	(pstmt->pattr)[0].nntp_hand = 0;

	(pstmt->pattr)[idx].stat = 1;
	(pstmt->pattr)[idx].wstat |= wstat;

	return 0;
}

static void*	add_all_attr(yystmt_t* pstmt)
{
	int	i;
	yycol_t col;

	for(i=en_article_num + 1; i < en_body + 1; i++)
	{
		col.iattr = i;
		col.table = 0;

		if( add_column(pstmt, &col)
		 || add_attr  (pstmt, i, 0) )
			return ERROR_PTR;
	}

	return 0;
}

static const int	news_attr[] = {
	en_subject,
	en_date,
	en_from,
	en_organization,
	en_msgid,
	en_body
};

static void*	add_news_attr(yystmt_t* pstmt)
{
	int	i, n;
	yycol_t col;

	n = sizeof(news_attr)/sizeof(news_attr[0]);

	for(i=0; i<n ;i++)
	{
		col.iattr = news_attr[i];
		col.table = 0;

		if( add_column(pstmt, &col)
		 || add_attr  (pstmt, col.iattr, 0) )
			return ERROR_PTR;
	}

	return 0;
}

static const int	xnews_attr[] = {
	en_newsgroups,
	en_subject,
	en_date,
	en_from,
	en_organization,
	en_sender,
	en_msgid,
	en_summary,
	en_keywords,
	en_host,
	en_x_newsreader,
	en_body
};

static void*	add_xnews_attr(yystmt_t*	pstmt)
{
	int	i, n;
	yycol_t col;

	n = sizeof(xnews_attr)/sizeof(xnews_attr[0]);

	for(i=0; i<n ;i++)
	{
		col.iattr = xnews_attr[i];
		col.table = 0;

		if( add_column(pstmt, &col)
		 || add_attr  (pstmt, col.iattr, 0) )
			return ERROR_PTR;
	}

	return 0;
}

static void* add_column(yystmt_t* pstmt, yycol_t* column)
{
	yycol_t*	pcol;

	if( ! pstmt->pcol )
	{
		pstmt->pcol = (yycol_t*)MEM_ALLOC((MAX_COLUMN_NUMBER + 1)*sizeof(yycol_t));

		if( ! pstmt->pcol )
		{
			pstmt->errcode = -1;
			return ERROR_PTR;
		}

		MEM_SET( pstmt->pcol, 0, (MAX_COLUMN_NUMBER + 1)*sizeof(yycol_t));
	}

	if( ! pstmt->ncol )
	{
		pstmt->ncol = 1;
		pstmt->pcol->iattr = en_article_num;
		pstmt->pcol->table = 0;
	}

	if( pstmt->ncol > MAX_COLUMN_NUMBER + 1)
	{
		pstmt->errcode = TOO_MANY_COLUMNS;
		return ERROR_PTR;
	}

	pcol = pstmt->pcol + pstmt->ncol;
	pstmt->ncol++;

	*pcol = *column;

	return 0;
}

static void nnsql_yyerror(yyenv_t* pyyenv, char* msg)
{
	yystmt_t*	pstmt = pyyenv->pstmt;

	pstmt->errcode = PARSER_ERROR;
	pstmt->errpos  = pyyenv->errpos;

	sprintf(pstmt->msgbuf, NNSQL_ERRHEAD "%s", msg);
}

static	int	table_check(yystmt_t* pstmt)
{
	int	i;
	char	*table, *table1;

	table = pstmt->table;

	if( ! (table && *table) )
		return 0;

	for(i=1;pstmt->pcol && i<pstmt->ncol;i++)
	{
		table1 = (pstmt->pcol)[i].table;

		if( table1 && *table1 && !STREQ( table, table1 ) )
			return 0;
	}

	return 1;
}

static void*	attr_name(yystmt_t* pstmt, char* name)
{
	node_t	node;
	column_name_t	attrname;
	int		attridx;
	void*		offset;

	unpack_col_name( name, &attrname );

	attridx = nnsql_getcolidxbyname( attrname.column_name );
	if( attridx == -1 )
	{
		pstmt->errcode = INVALID_COLUMN_NAME;
		return ERROR_PTR;
	}

	if( attridx == en_body )
	{
		pstmt->errcode = UNSEARCHABLE_ATTR;
		return ERROR_PTR;
	}

	node.type = en_nt_attr;
	node.value.iattr =  attridx;
	node.left = EMPTY_PTR;
	node.right= EMPTY_PTR;

	if( (offset = add_node(pstmt, &node)) == ERROR_PTR )
		return ERROR_PTR;

	if( add_attr(pstmt, attridx, 1) )
		return ERROR_PTR;

	return offset;
}

static int	column_name(yystmt_t* pstmt, char* name)
{
	column_name_t	colname;
	int		colidx;
	yycol_t 	col;

	unpack_col_name( name, &colname );

	colidx = nnsql_getcolidxbyname( colname.column_name );
	if( colidx == -1 )
	{
		pstmt->errcode = INVALID_COLUMN_NAME;
		return -1;
	}

	col.iattr = colidx;
	col.table = colname.schema_tab_name;

	if( add_column(pstmt, &col)
	 || add_attr(pstmt, colidx, 0) )
		return -1;

	return 0;
}

static int	add_ins_head( yystmt_t* pstmt, char* head, int idx)
{
	if( !idx )
	{
		MEM_FREE(pstmt->ins_heads);
		pstmt->ins_heads = (char**)MEM_ALLOC( FILTER_CHUNK_SIZE * sizeof(char*));
	}
	else if( ! idx%FILTER_CHUNK_SIZE )
	{
		pstmt->ins_heads = (char**)MEM_REALLOC( pstmt->ins_heads,
			(idx+FILTER_CHUNK_SIZE)*sizeof(char*));
	}

	if( ! pstmt->ins_heads )
		return -1;

	(pstmt->ins_heads)[idx] = head;

	return idx + 1;
}

static int	add_ins_value( yystmt_t* pstmt, node_t node, int idx)
{
	if( !idx )
	{
		MEM_FREE(pstmt->ins_values);
		pstmt->ins_values = (node_t*)MEM_ALLOC( FILTER_CHUNK_SIZE * sizeof(node_t));
	}
	else if( ! idx%FILTER_CHUNK_SIZE )
	{
		pstmt->ins_values = (node_t*)MEM_REALLOC( pstmt->ins_values,
			(idx+FILTER_CHUNK_SIZE)*sizeof(node_t));
	}

	if( ! pstmt->ins_values )
		return -1;

	(pstmt->ins_values)[idx] = node;

	return idx + 1;
}
