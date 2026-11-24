/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    accion_TK = 258,               /* accion_TK  */
    algoritmo_TK = 259,            /* algoritmo_TK  */
    booleano_TK = 260,             /* booleano_TK  */
    cadena_TK = 261,               /* cadena_TK  */
    caracter_TK = 262,             /* caracter_TK  */
    const_TK = 263,                /* const_TK  */
    continuar_TK = 264,            /* continuar_TK  */
    de_TK = 265,                   /* de_TK  */
    dev_TK = 266,                  /* dev_TK  */
    ent_TK = 267,                  /* ent_TK  */
    entero_TK = 268,               /* entero_TK  */
    e_s_TK = 269,                  /* e_s_TK  */
    faccion_TK = 270,              /* faccion_TK  */
    falgoritmo_TK = 271,           /* falgoritmo_TK  */
    fconst_TK = 272,               /* fconst_TK  */
    ffuncion_TK = 273,             /* ffuncion_TK  */
    fmientras_TK = 274,            /* fmientras_TK  */
    fpara_TK = 275,                /* fpara_TK  */
    fsi_TK = 276,                  /* fsi_TK  */
    ftipo_TK = 277,                /* ftipo_TK  */
    ftupla_TK = 278,               /* ftupla_TK  */
    funcion_TK = 279,              /* funcion_TK  */
    fvar_TK = 280,                 /* fvar_TK  */
    hacer_TK = 281,                /* hacer_TK  */
    hasta_TK = 282,                /* hasta_TK  */
    mientras_TK = 283,             /* mientras_TK  */
    para_TK = 284,                 /* para_TK  */
    real_TK = 285,                 /* real_TK  */
    ref_TK = 286,                  /* ref_TK  */
    sal_TK = 287,                  /* sal_TK  */
    si_TK = 288,                   /* si_TK  */
    tabla_TK = 289,                /* tabla_TK  */
    tipo_TK = 290,                 /* tipo_TK  */
    tupla_TK = 291,                /* tupla_TK  */
    var_TK = 292,                  /* var_TK  */
    literal_booleano_TK = 293,     /* literal_booleano_TK  */
    literal_entero_TK = 294,       /* literal_entero_TK  */
    literal_real_TK = 295,         /* literal_real_TK  */
    literal_caracter_TK = 296,     /* literal_caracter_TK  */
    literal_cadena_TK = 297,       /* literal_cadena_TK  */
    identificador_TK = 298,        /* identificador_TK  */
    suma_TK = 299,                 /* suma_TK  */
    resta_TK = 300,                /* resta_TK  */
    producto_TK = 301,             /* producto_TK  */
    division_TK = 302,             /* division_TK  */
    mod_TK = 303,                  /* mod_TK  */
    div_TK = 304,                  /* div_TK  */
    no_TK = 305,                   /* no_TK  */
    o_TK = 306,                    /* o_TK  */
    y_TK = 307,                    /* y_TK  */
    igual_TK = 308,                /* igual_TK  */
    distinto_TK = 309,             /* distinto_TK  */
    mayor_estricto_TK = 310,       /* mayor_estricto_TK  */
    menor_estricto_TK = 311,       /* menor_estricto_TK  */
    mayor_igual_TK = 312,          /* mayor_igual_TK  */
    menor_igual_TK = 313,          /* menor_igual_TK  */
    asignacion_TK = 314,           /* asignacion_TK  */
    definicion_tipo_var_TK = 315,  /* definicion_tipo_var_TK  */
    subrango_TK = 316,             /* subrango_TK  */
    composicion_secuencial_TK = 317, /* composicion_secuencial_TK  */
    separador_TK = 318,            /* separador_TK  */
    punto_TK = 319,                /* punto_TK  */
    parentesis_apertura_TK = 320,  /* parentesis_apertura_TK  */
    parentesis_cierre_TK = 321,    /* parentesis_cierre_TK  */
    inicio_array_TK = 322,         /* inicio_array_TK  */
    fin_array_TK = 323,            /* fin_array_TK  */
    comentario_TK = 324,           /* comentario_TK  */
    entonces_TK = 325,             /* entonces_TK  */
    si_no_si_TK = 326              /* si_no_si_TK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 139 "parser.y"

	char* cadena;
	NombreDeTipoT tipo;
	LiteralT literal;
	int entero;
	TradExpArit expA;

#line 143 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
