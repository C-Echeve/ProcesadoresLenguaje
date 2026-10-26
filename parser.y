 //Archivo: parser.y
 //Autores: Carlos Echeverria Laborda y Jialiang Chen || Grupo 2.7
 //Fecha inicio: 19/10/2026
 //Fecha fin: -


 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c 

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <string.h> //Para trabajar con cadenas de caracteres
	
	// #include "nombresDeTipos.h"
	// #include "literal.h"
	// #include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	// TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}


 //PARTE 2.1: Declaracion de los tokens del lenguaje y declaracion de los tipos del
 // union en los que flex nos enviara el valor asociado a los tokens multivaluados


%token accion_TK
%token algoritmo_TK
%token booleano_TK
%token cadena_TK
%token caracter_TK
%token const_TK
%token continuar_TK
%token de_TK
%token dev_TK
%token div_TK
%token ent_TK
%token entero_TK
%token e_s_TK
%token faccion_TK
%token falgoritmo_TK
%token fconst_TK%token
%token ffuncion_TK
%token fmientras_TK
%token fpara_TK
%token fsi_TK
%token ftipo_TK
%token ftupla_TK
%token funcion_TK
%token fvar_TK
%token hacer_TK
%token hasta_TK
%token mientras_TK
%token mod_TK
%token no_TK
%token o_TK
%token para_TK
%token real_TK
%token ref_TK
%token sal_TK
%token si_TK
%token tabla_TK
%token tipo_TK
%token tupla_TK
%token var_TK
%token y_TK

%token literal_booleano_TK
%token literal_entero_TK
%token literal_real_TK
%token literal_caracter_TK
%token literal_cadena_TK

%token identificador_TK

%token asignacion_TK
%token subrango_TK
%token entonces_TK
%token si_no_si_TK
%token mayor_igual_TK
%token menor_igual_TK
%token distinto_TK

%token composicion_secuencial_TK
%token separador_TK
%token definicion_tipo_var_TK
%token creacion_tipo_TK
%token inicio_array_TK
%token fin_array_TK
%token punto_TK
%token parentesis_apertura_TK
%token parentesis_cierre_TK
%token igualdad_TK
%token mayor_estricto_TK
%token menor_estricto_TK
%token suma_TK
%token resta_TK
%token producto_TK
%token division_TK


 //	%token <literal> literal_TK
 //	%token fconst_TK
 //	%token igual_TK
 //	%token <cadena> nombreCteTK
 //	%token puntoYComa_TK
	


 //PARTE 2.2: Definiciones (algunas innecearias) de prioridades

%nonassoc constTK //hago no asociativo y de baja prioridad a constTK
%right fconstTK //hago fcosntTK es mas prioritario que constTK y asociativo a derecha
%left puntoYComaTK //Hago muy prioritario y asociativo a izquierdas al ;

 //PARTE 2.3: Creamos el union necesario para valores de flex y traducciones de bison

%union{
	char* cadena;
	LiteralT literal;
	int entero;
}

 //PARTE 2.4: Asignacion de traducciones a las variables

%type <entero> listaDeclConstantesV  //para contar las que se definen

%%

declaracionConstantesV: constTK listaDeclConstantesV fconstTK{
			printf("COMPILADOR: Se ha creado la tabla de constantes con %d constantes\n", $2);
			}
	;
listaDeclConstantesV :  declaracionDeConstanteV {
			$$= 1;
		}
	| listaDeclConstantesV puntoYComaTK listaDeclConstantesV {
			$$= $1 + $3;
		}
	;
declaracionDeConstanteV : nombreCteTK igualTK literalTK {
			insertaConstante(&tc, $1, $3);
		}
	;

desc_algoritmo : algoritmo_TK

%%


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
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}