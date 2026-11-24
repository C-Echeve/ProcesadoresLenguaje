/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "parser.y"

	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <string.h> //Para trabajar con cadenas de caracteres
	
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeSimbolos.h"

	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeSimbolos ts; // Se guardan las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 88 "parser.tab.c"

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
  YYSYMBOL_accion_TK = 3,                  /* accion_TK  */
  YYSYMBOL_algoritmo_TK = 4,               /* algoritmo_TK  */
  YYSYMBOL_booleano_TK = 5,                /* booleano_TK  */
  YYSYMBOL_cadena_TK = 6,                  /* cadena_TK  */
  YYSYMBOL_caracter_TK = 7,                /* caracter_TK  */
  YYSYMBOL_const_TK = 8,                   /* const_TK  */
  YYSYMBOL_continuar_TK = 9,               /* continuar_TK  */
  YYSYMBOL_de_TK = 10,                     /* de_TK  */
  YYSYMBOL_dev_TK = 11,                    /* dev_TK  */
  YYSYMBOL_ent_TK = 12,                    /* ent_TK  */
  YYSYMBOL_entero_TK = 13,                 /* entero_TK  */
  YYSYMBOL_e_s_TK = 14,                    /* e_s_TK  */
  YYSYMBOL_faccion_TK = 15,                /* faccion_TK  */
  YYSYMBOL_falgoritmo_TK = 16,             /* falgoritmo_TK  */
  YYSYMBOL_fconst_TK = 17,                 /* fconst_TK  */
  YYSYMBOL_ffuncion_TK = 18,               /* ffuncion_TK  */
  YYSYMBOL_fmientras_TK = 19,              /* fmientras_TK  */
  YYSYMBOL_fpara_TK = 20,                  /* fpara_TK  */
  YYSYMBOL_fsi_TK = 21,                    /* fsi_TK  */
  YYSYMBOL_ftipo_TK = 22,                  /* ftipo_TK  */
  YYSYMBOL_ftupla_TK = 23,                 /* ftupla_TK  */
  YYSYMBOL_funcion_TK = 24,                /* funcion_TK  */
  YYSYMBOL_fvar_TK = 25,                   /* fvar_TK  */
  YYSYMBOL_hacer_TK = 26,                  /* hacer_TK  */
  YYSYMBOL_hasta_TK = 27,                  /* hasta_TK  */
  YYSYMBOL_mientras_TK = 28,               /* mientras_TK  */
  YYSYMBOL_para_TK = 29,                   /* para_TK  */
  YYSYMBOL_real_TK = 30,                   /* real_TK  */
  YYSYMBOL_ref_TK = 31,                    /* ref_TK  */
  YYSYMBOL_sal_TK = 32,                    /* sal_TK  */
  YYSYMBOL_si_TK = 33,                     /* si_TK  */
  YYSYMBOL_tabla_TK = 34,                  /* tabla_TK  */
  YYSYMBOL_tipo_TK = 35,                   /* tipo_TK  */
  YYSYMBOL_tupla_TK = 36,                  /* tupla_TK  */
  YYSYMBOL_var_TK = 37,                    /* var_TK  */
  YYSYMBOL_literal_booleano_TK = 38,       /* literal_booleano_TK  */
  YYSYMBOL_literal_entero_TK = 39,         /* literal_entero_TK  */
  YYSYMBOL_literal_real_TK = 40,           /* literal_real_TK  */
  YYSYMBOL_literal_caracter_TK = 41,       /* literal_caracter_TK  */
  YYSYMBOL_literal_cadena_TK = 42,         /* literal_cadena_TK  */
  YYSYMBOL_identificador_TK = 43,          /* identificador_TK  */
  YYSYMBOL_suma_TK = 44,                   /* suma_TK  */
  YYSYMBOL_resta_TK = 45,                  /* resta_TK  */
  YYSYMBOL_producto_TK = 46,               /* producto_TK  */
  YYSYMBOL_division_TK = 47,               /* division_TK  */
  YYSYMBOL_mod_TK = 48,                    /* mod_TK  */
  YYSYMBOL_div_TK = 49,                    /* div_TK  */
  YYSYMBOL_no_TK = 50,                     /* no_TK  */
  YYSYMBOL_o_TK = 51,                      /* o_TK  */
  YYSYMBOL_y_TK = 52,                      /* y_TK  */
  YYSYMBOL_igual_TK = 53,                  /* igual_TK  */
  YYSYMBOL_distinto_TK = 54,               /* distinto_TK  */
  YYSYMBOL_mayor_estricto_TK = 55,         /* mayor_estricto_TK  */
  YYSYMBOL_menor_estricto_TK = 56,         /* menor_estricto_TK  */
  YYSYMBOL_mayor_igual_TK = 57,            /* mayor_igual_TK  */
  YYSYMBOL_menor_igual_TK = 58,            /* menor_igual_TK  */
  YYSYMBOL_asignacion_TK = 59,             /* asignacion_TK  */
  YYSYMBOL_definicion_tipo_var_TK = 60,    /* definicion_tipo_var_TK  */
  YYSYMBOL_subrango_TK = 61,               /* subrango_TK  */
  YYSYMBOL_composicion_secuencial_TK = 62, /* composicion_secuencial_TK  */
  YYSYMBOL_separador_TK = 63,              /* separador_TK  */
  YYSYMBOL_punto_TK = 64,                  /* punto_TK  */
  YYSYMBOL_parentesis_apertura_TK = 65,    /* parentesis_apertura_TK  */
  YYSYMBOL_parentesis_cierre_TK = 66,      /* parentesis_cierre_TK  */
  YYSYMBOL_inicio_array_TK = 67,           /* inicio_array_TK  */
  YYSYMBOL_fin_array_TK = 68,              /* fin_array_TK  */
  YYSYMBOL_comentario_TK = 69,             /* comentario_TK  */
  YYSYMBOL_entonces_TK = 70,               /* entonces_TK  */
  YYSYMBOL_si_no_si_TK = 71,               /* si_no_si_TK  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 73,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 74,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 75,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 76,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 77,                  /* decl_a_f  */
  YYSYMBOL_bloque = 78,                    /* bloque  */
  YYSYMBOL_declaraciones = 79,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 80,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_cte = 81,           /* declaracion_cte  */
  YYSYMBOL_declaracion_var = 82,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 83,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 84,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 85,               /* expresion_t  */
  YYSYMBOL_lista_campos = 86,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 87,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 88,               /* lista_d_var  */
  YYSYMBOL_lista_id = 89,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 90,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 91,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 92,                  /* decl_sal  */
  YYSYMBOL_expresion = 93,                 /* expresion  */
  YYSYMBOL_operando = 94,                  /* operando  */
  YYSYMBOL_instrucciones = 95,             /* instrucciones  */
  YYSYMBOL_instruccion = 96,               /* instruccion  */
  YYSYMBOL_asignacion = 97,                /* asignacion  */
  YYSYMBOL_alternativa = 98,               /* alternativa  */
  YYSYMBOL_lista_opciones = 99,            /* lista_opciones  */
  YYSYMBOL_iteracion = 100,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 101,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 102,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 103,                 /* accion_d  */
  YYSYMBOL_funcion_d = 104,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 105,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 106,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 107,               /* d_par_form  */
  YYSYMBOL_d_p_form = 108,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 109,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 110,               /* funcion_ll  */
  YYSYMBOL_l_ll = 111                      /* l_ll  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   154,   154,   158,   162,   166,   167,   170,   174,   175,
     178,   182,   186,   187,   190,   193,   198,   202,   206,   211,
     212,   216,   219,   223,   226,   229,   232,   235,   238,   241,
     244,   249,   252,   256,   257,   262,   265,   268,   271,   274,
     277,   281,   284,   288,   291,   297,   300,   303,   307,   311,
     316,   319,   322,   325,   328,   331,   334,   337,   340,   343,
     346,   349,   352,   355,   358,   361,   364,   367,   370,   373,
     376,   379,   382,   387,   390,   393,   396,   401,   404,   408,
     411,   414,   417,   420,   424,   428,   432,   435,   439,   442,
     446,   450,   455,   459,   463,   467,   471,   474,   478,   481,
     484,   489,   493,   497,   500
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
  "\"end of file\"", "error", "\"invalid token\"", "accion_TK",
  "algoritmo_TK", "booleano_TK", "cadena_TK", "caracter_TK", "const_TK",
  "continuar_TK", "de_TK", "dev_TK", "ent_TK", "entero_TK", "e_s_TK",
  "faccion_TK", "falgoritmo_TK", "fconst_TK", "ffuncion_TK",
  "fmientras_TK", "fpara_TK", "fsi_TK", "ftipo_TK", "ftupla_TK",
  "funcion_TK", "fvar_TK", "hacer_TK", "hasta_TK", "mientras_TK",
  "para_TK", "real_TK", "ref_TK", "sal_TK", "si_TK", "tabla_TK", "tipo_TK",
  "tupla_TK", "var_TK", "literal_booleano_TK", "literal_entero_TK",
  "literal_real_TK", "literal_caracter_TK", "literal_cadena_TK",
  "identificador_TK", "suma_TK", "resta_TK", "producto_TK", "division_TK",
  "mod_TK", "div_TK", "no_TK", "o_TK", "y_TK", "igual_TK", "distinto_TK",
  "mayor_estricto_TK", "menor_estricto_TK", "mayor_igual_TK",
  "menor_igual_TK", "asignacion_TK", "definicion_tipo_var_TK",
  "subrango_TK", "composicion_secuencial_TK", "separador_TK", "punto_TK",
  "parentesis_apertura_TK", "parentesis_cierre_TK", "inicio_array_TK",
  "fin_array_TK", "comentario_TK", "entonces_TK", "si_no_si_TK", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_cte", "declaracion_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var", "lista_id",
  "decl_ent_sal", "decl_ent", "decl_sal", "expresion", "operando",
  "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_exp", "it_cota_fija", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,   -29,    30,   -25,  -119,     4,    26,    63,    19,    10,
       4,     4,    54,    47,    55,    92,    75,    37,    50,     0,
      19,    19,    19,    80,    81,    13,    10,    10,  -119,  -119,
     116,    64,   134,    66,    83,   127,    78,    99,  -119,  -119,
     150,   128,   150,   111,   -23,  -119,   118,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,   117,    19,   120,    19,
      75,    75,   112,   154,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   134,   124,
     144,  -119,  -119,  -119,  -119,   -42,   150,   150,   150,   150,
     130,   135,   328,   -12,  -119,  -119,    75,   136,   134,  -119,
     132,   180,   142,   234,   150,  -119,   150,   159,   150,     0,
       3,   188,    75,   193,  -119,  -119,  -119,  -119,  -119,    72,
     145,   216,   150,   113,   113,   358,   292,    63,    72,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,  -119,  -119,   178,     0,   150,     0,   308,
     175,   328,  -119,   -12,   274,  -119,    75,    75,    75,   176,
     181,  -119,   179,   150,   183,   134,  -119,   203,  -119,  -119,
    -119,   113,   113,  -119,  -119,  -119,  -119,   343,   358,   373,
      87,   388,   394,    31,    14,    75,   228,   219,   213,   150,
    -119,  -119,   194,   233,   235,   232,     3,   285,   165,    72,
     251,  -119,  -119,  -119,   150,   150,   276,  -119,   134,   134,
     134,  -119,  -119,   134,  -119,   246,   144,   204,   254,  -119,
    -119,  -119,  -119,   253,   306,  -119,     0,     0,  -119,   134,
     297,   213,  -119,  -119,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     5,    35,    19,    12,     8,
       5,     5,     0,     0,     0,     0,    41,     0,     0,     0,
      12,    12,    12,     0,     0,     0,     8,     8,     6,     7,
       0,     0,     0,     0,    44,     0,     0,     0,     4,    79,
       0,     0,     0,    73,     0,    11,    78,    80,    81,    82,
      89,    88,    83,    13,    14,    15,     0,    12,     0,    12,
      41,    41,     0,    45,    47,     9,    10,    36,    39,    40,
      38,    37,    17,    27,    30,    28,    26,    29,     0,     0,
      33,    65,    58,    59,    32,    73,     0,     0,     0,     0,
       0,     0,    31,    57,    72,    16,     0,     0,     0,     2,
      73,     0,     0,     0,     0,    76,     0,     0,     0,     0,
      96,     0,    41,     0,    48,    49,     3,    46,    25,     0,
       0,     0,     0,    61,    60,    64,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    18,     0,     0,     0,     0,   104,
       0,    84,    73,    74,     0,    77,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,    21,     0,    56,    20,
      24,    50,    51,    52,    53,    54,    55,    63,    62,    68,
      69,    67,    66,    70,    71,    41,     0,     0,    86,     0,
     101,    75,     0,     0,     0,     0,    96,     0,     0,     0,
       0,   102,    42,    90,     0,     0,     0,   103,     0,     0,
       0,    94,    97,     0,    93,     0,    33,     0,     0,    85,
      98,   100,    99,     0,     0,    34,     0,     0,    95,     0,
       0,    86,    22,    91,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,    36,    56,     8,    65,    11,    21,
    -119,   206,   -60,  -118,   119,  -119,   -55,   -85,  -119,  -119,
     271,   -38,   -19,  -106,  -119,  -119,  -119,   137,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,   155,  -119,  -119,  -119,  -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    90,    91,   121,    13,    35,    36,    62,    63,
      64,    92,    93,    45,    46,    47,    48,   206,    49,    50,
      51,    26,    27,    57,    59,   159,   160,    52,    94,   150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   164,   101,   155,   103,   114,   115,   167,   105,    39,
     170,   143,     6,    23,     3,   156,    10,   157,   118,   105,
     -23,    10,    10,   122,     1,    60,    11,     6,    40,    41,
       4,    11,    11,    42,    24,   158,   106,     5,   145,     7,
     186,   107,   188,    43,   108,    61,    28,    29,   123,   124,
     125,   126,   107,    37,     7,   108,    16,   162,   129,   130,
     131,   132,   133,   134,    31,   111,   149,   113,   151,    12,
     154,   192,   193,   194,   207,   129,   130,   131,   132,   133,
     134,   215,    65,    66,   149,    53,    54,    55,   153,   142,
      44,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   200,    14,    30,    32,   187,
      81,    82,    83,    84,    33,   100,    86,    87,    34,    38,
     230,   231,    88,    56,    58,   198,    72,    44,    95,    44,
     202,   129,   130,   131,   132,   133,   134,    89,    98,    73,
      74,    75,   139,   140,   141,   142,    96,    76,   220,   221,
     222,   149,    97,   223,    67,    68,    69,    70,    71,   131,
     132,   133,   134,    99,    77,    78,   217,   218,    79,   232,
      80,   102,    81,    82,    83,    84,   104,    85,    86,    87,
     109,   116,   110,   214,    88,   112,    61,   120,    81,    82,
      83,   119,   127,   100,    86,    87,   128,   122,   144,    89,
      88,   147,   152,   161,   163,   165,   146,    44,    44,   129,
     130,   131,   132,   133,   134,    89,   135,   136,   137,   138,
     139,   140,   141,   142,   129,   130,   131,   132,   133,   134,
     226,   135,   136,   137,   138,   139,   140,   141,   142,   166,
     185,   190,   195,   196,   199,   197,   204,   203,   129,   130,
     131,   132,   133,   134,   208,   135,   136,   137,   138,   139,
     140,   141,   142,   129,   130,   131,   132,   133,   134,   201,
     135,   136,   137,   138,   139,   140,   141,   142,   129,   130,
     131,   132,   133,   134,   205,   135,   136,   137,   138,   139,
     140,   141,   142,   209,   211,   210,   213,   219,   129,   130,
     131,   132,   133,   134,   148,   135,   136,   137,   138,   139,
     140,   141,   142,   216,   224,   228,   229,   233,   129,   130,
     131,   132,   133,   134,   227,   135,   136,   137,   138,   139,
     140,   141,   142,   169,   117,   225,   129,   130,   131,   132,
     133,   134,   191,   135,   136,   137,   138,   139,   140,   141,
     142,   212,   129,   130,   131,   132,   133,   134,   168,   135,
     136,   137,   138,   139,   140,   141,   142,     0,   234,     0,
       0,   189,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   129,   130,   131,
     132,   133,   134,     0,     0,   136,   137,   138,   139,   140,
     141,   142,   129,   130,   131,   132,   133,   134,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   129,   130,   131,
     132,   133,   134,     0,     0,     0,     0,   138,   139,   140,
     141,   142,   129,   130,   131,   132,   133,   134,   129,   130,
     131,   132,   133,   134,   140,   141,   142,     0,     0,     0,
       0,   141,   142
};

static const yytype_int16 yycheck[] =
{
      19,   119,    40,   109,    42,    60,    61,   122,    31,     9,
     128,    96,     8,     3,    43,    12,     5,    14,    78,    31,
      62,    10,    11,    65,     4,    12,     5,     8,    28,    29,
       0,    10,    11,    33,    24,    32,    59,    62,    98,    35,
     146,    64,   148,    43,    67,    32,    10,    11,    86,    87,
      88,    89,    64,    16,    35,    67,    37,   112,    44,    45,
      46,    47,    48,    49,    17,    57,   104,    59,   106,    43,
     108,   156,   157,   158,   189,    44,    45,    46,    47,    48,
      49,   199,    26,    27,   122,    20,    21,    22,   107,    58,
     109,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   165,    43,    53,    53,   147,
      38,    39,    40,    41,    22,    43,    44,    45,    43,    69,
     226,   227,    50,    43,    43,   163,    62,   146,    62,   148,
     185,    44,    45,    46,    47,    48,    49,    65,    60,     5,
       6,     7,    55,    56,    57,    58,    63,    13,   208,   209,
     210,   189,    25,   213,    38,    39,    40,    41,    42,    46,
      47,    48,    49,    64,    30,    31,   204,   205,    34,   229,
      36,    43,    38,    39,    40,    41,    65,    43,    44,    45,
      62,    69,    65,    18,    50,    65,    32,    43,    38,    39,
      40,    67,    62,    43,    44,    45,    61,    65,    62,    65,
      50,    59,    43,    15,    11,    60,    26,   226,   227,    44,
      45,    46,    47,    48,    49,    65,    51,    52,    53,    54,
      55,    56,    57,    58,    44,    45,    46,    47,    48,    49,
      26,    51,    52,    53,    54,    55,    56,    57,    58,    23,
      62,    66,    66,    62,    61,    66,    27,    19,    44,    45,
      46,    47,    48,    49,    60,    51,    52,    53,    54,    55,
      56,    57,    58,    44,    45,    46,    47,    48,    49,    66,
      51,    52,    53,    54,    55,    56,    57,    58,    44,    45,
      46,    47,    48,    49,    71,    51,    52,    53,    54,    55,
      56,    57,    58,    60,    62,    60,    11,    21,    44,    45,
      46,    47,    48,    49,    70,    51,    52,    53,    54,    55,
      56,    57,    58,    62,    68,    62,    10,    20,    44,    45,
      46,    47,    48,    49,    70,    51,    52,    53,    54,    55,
      56,    57,    58,   127,    63,   216,    44,    45,    46,    47,
      48,    49,    68,    51,    52,    53,    54,    55,    56,    57,
      58,   196,    44,    45,    46,    47,    48,    49,    66,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,   231,    -1,
      -1,    63,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    44,    45,    46,    47,    48,    49,    44,    45,
      46,    47,    48,    49,    56,    57,    58,    -1,    -1,    -1,
      -1,    57,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    73,    43,     0,    62,     8,    35,    74,    76,
      80,    81,    43,    87,    43,    83,    37,    75,    78,    79,
      80,    81,    82,     3,    24,    77,   103,   104,    76,    76,
      53,    17,    53,    22,    43,    88,    89,    16,    69,     9,
      28,    29,    33,    43,    94,    95,    96,    97,    98,   100,
     101,   102,   109,    79,    79,    79,    43,   105,    43,   106,
      12,    32,    90,    91,    92,    77,    77,    38,    39,    40,
      41,    42,    62,     5,     6,     7,    13,    30,    31,    34,
      36,    38,    39,    40,    41,    43,    44,    45,    50,    65,
      84,    85,    93,    94,   110,    62,    63,    25,    60,    64,
      43,    93,    43,    93,    65,    31,    59,    64,    67,    62,
      65,    78,    65,    78,    88,    88,    69,    92,    84,    67,
      43,    86,    65,    93,    93,    93,    93,    62,    61,    44,
      45,    46,    47,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    89,    62,    84,    26,    59,    70,    93,
     111,    93,    43,    94,    93,    95,    12,    14,    32,   107,
     108,    15,    88,    11,    85,    60,    23,   111,    66,    83,
      85,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    62,    95,    93,    95,    63,
      66,    68,    89,    89,    89,    66,    62,    66,    93,    61,
      84,    66,    88,    19,    27,    71,    99,   111,    60,    60,
      60,    62,   107,    11,    18,    85,    62,    93,    93,    21,
      84,    84,    84,    84,    68,    86,    26,    70,    62,    10,
      95,    95,    84,    20,    99
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    75,    76,    76,    76,    77,    77,
      77,    78,    79,    79,    79,    79,    80,    81,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    91,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    97,    98,    99,    99,   100,   100,
     101,   102,   103,   104,   105,   106,   107,   107,   108,   108,
     108,   109,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     0,     2,     2,     0,     2,
       2,     2,     0,     2,     2,     2,     4,     4,     4,     0,
       5,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     3,     3,     3,     3,
       3,     0,     5,     3,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       2,     2,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     4,     2,     3,     1,     1,
       1,     1,     1,     1,     3,     6,     0,     5,     1,     1,
       5,     9,     4,     6,     5,     7,     0,     3,     4,     4,
       4,     4,     4,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* desc_algoritmo: algoritmo_TK identificador_TK composicion_secuencial_TK cabecera_alg bloque_alg falgoritmo_TK punto_TK  */
#line 154 "parser.y"
                                                                                                                        {

		}
#line 1399 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal comentario_TK  */
#line 158 "parser.y"
                                                                 {

		}
#line 1407 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque comentario_TK  */
#line 162 "parser.y"
                                  {

		}
#line 1415 "parser.tab.c"
    break;

  case 5: /* decl_globales: %empty  */
#line 166 "parser.y"
                          {}
#line 1421 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_tipo decl_globales  */
#line 167 "parser.y"
                                         {

		}
#line 1429 "parser.tab.c"
    break;

  case 7: /* decl_globales: declaracion_cte decl_globales  */
#line 170 "parser.y"
                                        {

		}
#line 1437 "parser.tab.c"
    break;

  case 8: /* decl_a_f: %empty  */
#line 174 "parser.y"
                     {}
#line 1443 "parser.tab.c"
    break;

  case 9: /* decl_a_f: accion_d decl_a_f  */
#line 175 "parser.y"
                            {

		}
#line 1451 "parser.tab.c"
    break;

  case 10: /* decl_a_f: funcion_d decl_a_f  */
#line 178 "parser.y"
                             {

		}
#line 1459 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 182 "parser.y"
                                     {

		}
#line 1467 "parser.tab.c"
    break;

  case 12: /* declaraciones: %empty  */
#line 186 "parser.y"
                          {}
#line 1473 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_tipo declaraciones  */
#line 187 "parser.y"
                                         {

		}
#line 1481 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_cte declaraciones  */
#line 190 "parser.y"
                                        {

		}
#line 1489 "parser.tab.c"
    break;

  case 15: /* declaraciones: declaracion_var declaraciones  */
#line 193 "parser.y"
                                        {

		}
#line 1497 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: tipo_TK lista_d_tipo ftipo_TK composicion_secuencial_TK  */
#line 198 "parser.y"
                                                                           {

		}
#line 1505 "parser.tab.c"
    break;

  case 17: /* declaracion_cte: const_TK lista_d_cte fconst_TK composicion_secuencial_TK  */
#line 202 "parser.y"
                                                                           {

		}
#line 1513 "parser.tab.c"
    break;

  case 18: /* declaracion_var: var_TK lista_d_var fvar_TK composicion_secuencial_TK  */
#line 206 "parser.y"
                                                                       {
			// printf("COMPILADOR: Se ha creado la tabla de variables con %d constantes\n", $2);
		}
#line 1521 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: %empty  */
#line 211 "parser.y"
                         {}
#line 1527 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: identificador_TK igual_TK d_tipo composicion_secuencial_TK lista_d_tipo  */
#line 212 "parser.y"
                                                                                 {

		}
#line 1535 "parser.tab.c"
    break;

  case 21: /* d_tipo: tupla_TK lista_campos ftupla_TK  */
#line 216 "parser.y"
                                         {

		}
#line 1543 "parser.tab.c"
    break;

  case 22: /* d_tipo: tabla_TK inicio_array_TK expresion_t subrango_TK expresion_t fin_array_TK de_TK d_tipo  */
#line 219 "parser.y"
                                                                                                 {

		}
#line 1551 "parser.tab.c"
    break;

  case 23: /* d_tipo: identificador_TK  */
#line 223 "parser.y"
                          {

		}
#line 1559 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t subrango_TK expresion_t  */
#line 226 "parser.y"
                                              {

		}
#line 1567 "parser.tab.c"
    break;

  case 25: /* d_tipo: ref_TK d_tipo  */
#line 229 "parser.y"
                        {

		}
#line 1575 "parser.tab.c"
    break;

  case 26: /* d_tipo: entero_TK  */
#line 232 "parser.y"
                    {
			(yyval.tipo) = ENTERO;
		}
#line 1583 "parser.tab.c"
    break;

  case 27: /* d_tipo: booleano_TK  */
#line 235 "parser.y"
                      {
			(yyval.tipo) = BOOLEANO;
		}
#line 1591 "parser.tab.c"
    break;

  case 28: /* d_tipo: caracter_TK  */
#line 238 "parser.y"
                      {
			(yyval.tipo) = CARACTER;
		}
#line 1599 "parser.tab.c"
    break;

  case 29: /* d_tipo: real_TK  */
#line 241 "parser.y"
                  {
			(yyval.tipo) = REAL;
		}
#line 1607 "parser.tab.c"
    break;

  case 30: /* d_tipo: cadena_TK  */
#line 244 "parser.y"
                    {
			(yyval.tipo) = CADENA;
		}
#line 1615 "parser.tab.c"
    break;

  case 31: /* expresion_t: expresion  */
#line 249 "parser.y"
                        {

		}
#line 1623 "parser.tab.c"
    break;

  case 32: /* expresion_t: literal_caracter_TK  */
#line 252 "parser.y"
                              {

		}
#line 1631 "parser.tab.c"
    break;

  case 33: /* lista_campos: %empty  */
#line 256 "parser.y"
                         {}
#line 1637 "parser.tab.c"
    break;

  case 34: /* lista_campos: identificador_TK definicion_tipo_var_TK d_tipo composicion_secuencial_TK lista_campos  */
#line 257 "parser.y"
                                                                                                {

		}
#line 1645 "parser.tab.c"
    break;

  case 35: /* lista_d_cte: %empty  */
#line 262 "parser.y"
                        {

		}
#line 1653 "parser.tab.c"
    break;

  case 36: /* lista_d_cte: identificador_TK igual_TK literal_booleano_TK  */
#line 265 "parser.y"
                                                        {

		}
#line 1661 "parser.tab.c"
    break;

  case 37: /* lista_d_cte: identificador_TK igual_TK literal_cadena_TK  */
#line 268 "parser.y"
                                                      {

		}
#line 1669 "parser.tab.c"
    break;

  case 38: /* lista_d_cte: identificador_TK igual_TK literal_caracter_TK  */
#line 271 "parser.y"
                                                        {

		}
#line 1677 "parser.tab.c"
    break;

  case 39: /* lista_d_cte: identificador_TK igual_TK literal_entero_TK  */
#line 274 "parser.y"
                                                      {

		}
#line 1685 "parser.tab.c"
    break;

  case 40: /* lista_d_cte: identificador_TK igual_TK literal_real_TK  */
#line 277 "parser.y"
                                                    {

		}
#line 1693 "parser.tab.c"
    break;

  case 41: /* lista_d_var: %empty  */
#line 281 "parser.y"
                        {

		}
#line 1701 "parser.tab.c"
    break;

  case 42: /* lista_d_var: lista_id definicion_tipo_var_TK d_tipo composicion_secuencial_TK lista_d_var  */
#line 284 "parser.y"
                                                                                       {
			// modificaSimbolo(&ts, $1, $3);
		}
#line 1709 "parser.tab.c"
    break;

  case 43: /* lista_id: identificador_TK separador_TK lista_id  */
#line 288 "parser.y"
                                                  {
			// $$ = $1 + $3;
		}
#line 1717 "parser.tab.c"
    break;

  case 44: /* lista_id: identificador_TK  */
#line 291 "parser.y"
                           {
			// $$ = 1;
			// insertaSimbolo(&ts, $1);
		}
#line 1726 "parser.tab.c"
    break;

  case 45: /* decl_ent_sal: decl_ent  */
#line 297 "parser.y"
                        {

		}
#line 1734 "parser.tab.c"
    break;

  case 46: /* decl_ent_sal: decl_ent decl_sal  */
#line 300 "parser.y"
                            {

		}
#line 1742 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_sal  */
#line 303 "parser.y"
                   {

		}
#line 1750 "parser.tab.c"
    break;

  case 48: /* decl_ent: ent_TK lista_d_var  */
#line 307 "parser.y"
                              {
			// inputVariable(&ts, $_);
		}
#line 1758 "parser.tab.c"
    break;

  case 49: /* decl_sal: sal_TK lista_d_var  */
#line 311 "parser.y"
                              {
			// inputVariable(&ts, $_);
		}
#line 1766 "parser.tab.c"
    break;

  case 50: /* expresion: expresion suma_TK expresion  */
#line 316 "parser.y"
                                        {

		}
#line 1774 "parser.tab.c"
    break;

  case 51: /* expresion: expresion resta_TK expresion  */
#line 319 "parser.y"
                                       {

		}
#line 1782 "parser.tab.c"
    break;

  case 52: /* expresion: expresion producto_TK expresion  */
#line 322 "parser.y"
                                          {

		}
#line 1790 "parser.tab.c"
    break;

  case 53: /* expresion: expresion division_TK expresion  */
#line 325 "parser.y"
                                          {

		}
#line 1798 "parser.tab.c"
    break;

  case 54: /* expresion: expresion mod_TK expresion  */
#line 328 "parser.y"
                                     {

		}
#line 1806 "parser.tab.c"
    break;

  case 55: /* expresion: expresion div_TK expresion  */
#line 331 "parser.y"
                                     {

		}
#line 1814 "parser.tab.c"
    break;

  case 56: /* expresion: parentesis_apertura_TK expresion parentesis_cierre_TK  */
#line 334 "parser.y"
                                                                {

		}
#line 1822 "parser.tab.c"
    break;

  case 57: /* expresion: operando  */
#line 337 "parser.y"
                   {

		}
#line 1830 "parser.tab.c"
    break;

  case 58: /* expresion: literal_entero_TK  */
#line 340 "parser.y"
                            {

		}
#line 1838 "parser.tab.c"
    break;

  case 59: /* expresion: literal_real_TK  */
#line 343 "parser.y"
                          {

		}
#line 1846 "parser.tab.c"
    break;

  case 60: /* expresion: resta_TK expresion  */
#line 346 "parser.y"
                             {

		}
#line 1854 "parser.tab.c"
    break;

  case 61: /* expresion: suma_TK expresion  */
#line 349 "parser.y"
                            {

		}
#line 1862 "parser.tab.c"
    break;

  case 62: /* expresion: expresion y_TK expresion  */
#line 352 "parser.y"
                                   {

		}
#line 1870 "parser.tab.c"
    break;

  case 63: /* expresion: expresion o_TK expresion  */
#line 355 "parser.y"
                                   {

		}
#line 1878 "parser.tab.c"
    break;

  case 64: /* expresion: no_TK expresion  */
#line 358 "parser.y"
                          {

		}
#line 1886 "parser.tab.c"
    break;

  case 65: /* expresion: literal_booleano_TK  */
#line 361 "parser.y"
                              { 

		}
#line 1894 "parser.tab.c"
    break;

  case 66: /* expresion: expresion menor_estricto_TK expresion  */
#line 364 "parser.y"
                                                {

		}
#line 1902 "parser.tab.c"
    break;

  case 67: /* expresion: expresion mayor_estricto_TK expresion  */
#line 367 "parser.y"
                                                {

		}
#line 1910 "parser.tab.c"
    break;

  case 68: /* expresion: expresion igual_TK expresion  */
#line 370 "parser.y"
                                       {

		}
#line 1918 "parser.tab.c"
    break;

  case 69: /* expresion: expresion distinto_TK expresion  */
#line 373 "parser.y"
                                          {

		}
#line 1926 "parser.tab.c"
    break;

  case 70: /* expresion: expresion mayor_igual_TK expresion  */
#line 376 "parser.y"
                                             {

		}
#line 1934 "parser.tab.c"
    break;

  case 71: /* expresion: expresion menor_igual_TK expresion  */
#line 379 "parser.y"
                                             {

		}
#line 1942 "parser.tab.c"
    break;

  case 72: /* expresion: funcion_ll  */
#line 382 "parser.y"
                     {

		}
#line 1950 "parser.tab.c"
    break;

  case 73: /* operando: identificador_TK  */
#line 387 "parser.y"
                            {

		}
#line 1958 "parser.tab.c"
    break;

  case 74: /* operando: operando punto_TK operando  */
#line 390 "parser.y"
                                     {

		}
#line 1966 "parser.tab.c"
    break;

  case 75: /* operando: operando inicio_array_TK expresion fin_array_TK  */
#line 393 "parser.y"
                                                          {

		}
#line 1974 "parser.tab.c"
    break;

  case 76: /* operando: operando ref_TK  */
#line 396 "parser.y"
                          {

		}
#line 1982 "parser.tab.c"
    break;

  case 77: /* instrucciones: instruccion composicion_secuencial_TK instrucciones  */
#line 401 "parser.y"
                                                                    {

		}
#line 1990 "parser.tab.c"
    break;

  case 78: /* instrucciones: instruccion  */
#line 404 "parser.y"
                      {

		}
#line 1998 "parser.tab.c"
    break;

  case 79: /* instruccion: continuar_TK  */
#line 408 "parser.y"
                           {

		}
#line 2006 "parser.tab.c"
    break;

  case 80: /* instruccion: asignacion  */
#line 411 "parser.y"
                     {

		}
#line 2014 "parser.tab.c"
    break;

  case 81: /* instruccion: alternativa  */
#line 414 "parser.y"
                      {

		}
#line 2022 "parser.tab.c"
    break;

  case 82: /* instruccion: iteracion  */
#line 417 "parser.y"
                    {

		}
#line 2030 "parser.tab.c"
    break;

  case 83: /* instruccion: accion_ll  */
#line 420 "parser.y"
                    {

		}
#line 2038 "parser.tab.c"
    break;

  case 84: /* asignacion: operando asignacion_TK expresion  */
#line 424 "parser.y"
                                              {

		}
#line 2046 "parser.tab.c"
    break;

  case 85: /* alternativa: si_TK expresion entonces_TK instrucciones lista_opciones fsi_TK  */
#line 428 "parser.y"
                                                                              {

		}
#line 2054 "parser.tab.c"
    break;

  case 86: /* lista_opciones: %empty  */
#line 432 "parser.y"
                           {

		}
#line 2062 "parser.tab.c"
    break;

  case 87: /* lista_opciones: si_no_si_TK expresion entonces_TK instrucciones lista_opciones  */
#line 435 "parser.y"
                                                                         {

		}
#line 2070 "parser.tab.c"
    break;

  case 88: /* iteracion: it_cota_fija  */
#line 439 "parser.y"
                         {

		}
#line 2078 "parser.tab.c"
    break;

  case 89: /* iteracion: it_cota_exp  */
#line 442 "parser.y"
                      {

		}
#line 2086 "parser.tab.c"
    break;

  case 90: /* it_cota_exp: mientras_TK expresion hacer_TK instrucciones fmientras_TK  */
#line 446 "parser.y"
                                                                        {

		}
#line 2094 "parser.tab.c"
    break;

  case 91: /* it_cota_fija: para_TK identificador_TK asignacion_TK expresion hasta_TK expresion hacer_TK instrucciones fpara_TK  */
#line 450 "parser.y"
                                                                                                                   {

		}
#line 2102 "parser.tab.c"
    break;

  case 92: /* accion_d: accion_TK a_cabecera bloque faccion_TK  */
#line 455 "parser.y"
                                                  {

		}
#line 2110 "parser.tab.c"
    break;

  case 93: /* funcion_d: funcion_TK f_cabecera bloque dev_TK expresion ffuncion_TK  */
#line 459 "parser.y"
                                                                      {

		}
#line 2118 "parser.tab.c"
    break;

  case 94: /* a_cabecera: identificador_TK parentesis_apertura_TK d_par_form parentesis_cierre_TK composicion_secuencial_TK  */
#line 463 "parser.y"
                                                                                                               {

		}
#line 2126 "parser.tab.c"
    break;

  case 95: /* f_cabecera: identificador_TK parentesis_apertura_TK lista_d_var parentesis_cierre_TK dev_TK d_tipo composicion_secuencial_TK  */
#line 467 "parser.y"
                                                                                                                              {

		}
#line 2134 "parser.tab.c"
    break;

  case 96: /* d_par_form: %empty  */
#line 471 "parser.y"
                       {

		}
#line 2142 "parser.tab.c"
    break;

  case 97: /* d_par_form: d_p_form composicion_secuencial_TK d_par_form  */
#line 474 "parser.y"
                                                        {

		}
#line 2150 "parser.tab.c"
    break;

  case 98: /* d_p_form: ent_TK lista_id definicion_tipo_var_TK d_tipo  */
#line 478 "parser.y"
                                                         {

		}
#line 2158 "parser.tab.c"
    break;

  case 99: /* d_p_form: sal_TK lista_id definicion_tipo_var_TK d_tipo  */
#line 481 "parser.y"
                                                        {

		}
#line 2166 "parser.tab.c"
    break;

  case 100: /* d_p_form: e_s_TK lista_id definicion_tipo_var_TK d_tipo  */
#line 484 "parser.y"
                                                        {

		}
#line 2174 "parser.tab.c"
    break;

  case 101: /* accion_ll: identificador_TK parentesis_apertura_TK l_ll parentesis_cierre_TK  */
#line 489 "parser.y"
                                                                              {

		}
#line 2182 "parser.tab.c"
    break;

  case 102: /* funcion_ll: identificador_TK parentesis_apertura_TK l_ll parentesis_cierre_TK  */
#line 493 "parser.y"
                                                                               {

		}
#line 2190 "parser.tab.c"
    break;

  case 103: /* l_ll: expresion separador_TK l_ll  */
#line 497 "parser.y"
                                   {

		}
#line 2198 "parser.tab.c"
    break;

  case 104: /* l_ll: expresion  */
#line 500 "parser.y"
                    {

		}
#line 2206 "parser.tab.c"
    break;


#line 2210 "parser.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 504 "parser.y"



 //PARTE 3:  CODIGO ADICIONAL

int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	ts = nuevaTablaDeSimbolos();
	yyparse();
	imprimeTablaDeSimbolos(ts);

}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}
