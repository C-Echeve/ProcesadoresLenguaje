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

 // 2.1.1 Palabras reservadas
%token accion_TK
%token algoritmo_TK
%token booleano_TK
%token cadena_TK
%token caracter_TK
%token const_TK
%token continuar_TK
%token de_TK
%token dev_TK
%token ent_TK
%token entero_TK
%token e_s_TK
%token faccion_TK
%token falgoritmo_TK
%token fconst_TK
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
%token para_TK
%token real_TK
%token ref_TK
%token sal_TK
%token si_TK
%token tabla_TK
%token tipo_TK
%token tupla_TK
%token var_TK

 // 2.1.2 Literales
%token literal_booleano_TK
%token literal_entero_TK
%token literal_real_TK
%token literal_caracter_TK
%token literal_cadena_TK

 // 2.1.3 Identificador
%token identificador_TK

 // 2.1.4 Operadores aritméticos
%token suma_TK
%token resta_TK
%token producto_TK
%token division_TK
%token mod_TK
%token div_TK

 // 2.1.5 Operadores lógicos y relacionales
%token no_TK
%token o_TK
%token y_TK
%token igualdad_TK
%token distinto_TK
%token mayor_estricto_TK
%token menor_estricto_TK
%token mayor_igual_TK
%token menor_igual_TK

 // 2.1.6 Operadores de asignación y definición
%token asignacion_TK
%token creacion_tipo_TK
%token definicion_tipo_var_TK
%token subrango_TK

 // 2.1.7 Símbolos delimitadores y separadores
%token composicion_secuencial_TK
%token separador_TK
%token punto_TK
%token parentesis_apertura_TK
%token parentesis_cierre_TK
%token inicio_array_TK
%token fin_array_TK
%token entrada_array_TK
%token salida_array_TK
%token acceso_tupla_TK

 // 2.1.8 Otros tokens
%token comentario_TK
%token entonces_TK
%token si_no_si_TK


 //PARTE 2.2: Definiciones de prioridades

 // 2.2.1 Operadores lógicos
%left o_TK
%left y_TK
%right no_TK

 // 2.2.2 Operadores relacionales
%left igualdad_TK
%left distinto_TK
%left mayor_estricto_TK
%left menor_estricto_TK
%left mayor_igual_TK
%left menor_igual_TK

 // 2.2.3 Operadores aritméticos
%left suma_TK resta_TK
%left producto_TK division_TK div_TK mod_TK


 //PARTE 2.3: Creamos el union necesario para valores de flex y traducciones de bison



 //PARTE 2.4: Asignacion de traducciones a las variables

 // %type <entero> listaDeclConstantesV  //para contar las que se definen

%%

desc_algoritmo : algoritmo_TK identificador_TK composicion_secuencial_TK cabecera_alg bloque_alg falgoritmo_TK punto_TK {

		}
	;
cabecera_alg : decl_globales decl_a_f decl_ent_sal comentario_TK {

		}
	;
bloque_alg : bloque comentario_TK {

		}
	;
decl_globales : /*empty*/ {}
	| declaracion_tipo decl_globales {

		}
	| declaracion_cte decl_globales {

		}
	;
decl_a_f : /*empty*/ {}
	| accion_d decl_a_f {

		}
	| funcion_d decl_a_f {

		}
	;
bloque : declaraciones instrucciones {

		}
	;
declaraciones : /*empty*/ {}
	| declaracion_tipo declaraciones {

		}
	| declaracion_cte declaraciones {

		}
	| declaracion_var declaraciones {

		}
	;

declaracion_tipo : tipo_TK lista_d_tipo ftipo_TK composicion_secuencial_TK {

		}
	;
declaracion_cte : const_TK lista_d_cte fconst_TK composicion_secuencial_TK {

		}
	;
declaracion_var : var_TK lista_d_var fvar_TK composicion_secuencial_TK {

		}
	;

lista_d_tipo : /*empty*/ {}
	| identificador_TK creacion_tipo_TK d_tipo composicion_secuencial_TK lista_d_tipo{

		}
	;
d_tipo : tupla_TK lista_campos ftupla_TK {

		}
	| tabla_TK inicio_array_TK expresion_t subrango_TK expresion_t fin_array_TK de_TK d_tipo {

		}
	;
d_tipo : identificador_TK {

		}
	| expresion_t subrango_TK expresion_t {

		}
	| ref_TK d_tipo {

		}
	| entero_TK {

		}
	| booleano_TK {

		}
	| caracter_TK {

		}
	| real_TK {

		}
	| cadena_TK {

		}				
	;

expresion_t : expresion {

		}
	| literal_caracter_TK {

		}
	;
lista_campos : /*empty*/ {}
	| identificador_TK definicion_tipo_var_TK d_tipo composicion_secuencial_TK lista_campos {

		}
	;

lista_d_cte : /*empty*/ {

		} 
	| identificador_TK creacion_tipo_TK literal_booleano_TK {

		}
	| identificador_TK creacion_tipo_TK literal_cadena_TK {

		}
	| identificador_TK creacion_tipo_TK literal_caracter_TK {

		}
	| identificador_TK creacion_tipo_TK literal_entero_TK {

		}
	| identificador_TK creacion_tipo_TK literal_real_TK {

		}
	;
lista_d_var : /*empty*/ {

		}
	| lista_id definicion_tipo_var_TK d_tipo composicion_secuencial_TK lista_d_var {

		}
	;
lista_id : identificador_TK separador_TK lista_id {

		}
	| identificador_TK {

		}
	;

decl_ent_sal : decl_ent {

		}
	| decl_ent decl_sal {

		}
	| decl_sal {

		}
	;
decl_ent : ent_TK lista_d_var {

		}
	;
decl_sal : sal_TK lista_d_var {

		}
	;

expresion : expresion suma_TK expresion {

		}
	| expresion resta_TK expresion {

		}
	| expresion producto_TK expresion {

		}
	| expresion division_TK expresion {

		}
	| expresion mod_TK expresion {

		}
	| expresion div_TK expresion {

		}
	| parentesis_apertura_TK expresion parentesis_cierre_TK {

		}
	| operando {

		}
	| literal_entero_TK {

		}
	| literal_real_TK {

		}
	| resta_TK expresion {

		}
	| suma_TK expresion {

		}
 	| expresion y_TK expresion {

		}
	| expresion o_TK expresion {

		}
	| no_TK expresion {

		}
	| literal_booleano_TK { 

		}
	| expresion menor_estricto_TK expresion {

		}
	| expresion mayor_estricto_TK expresion {

		}
	| expresion igualdad_TK expresion {

		}
	| expresion distinto_TK expresion {

		}
	| expresion mayor_igual_TK expresion {

		}
	| expresion menor_igual_TK expresion {

		}
	| funcion_ll {

		}
	;

operando : identificador_TK {

		}
	| operando acceso_tupla_TK operando {

		}
	| operando entrada_array_TK expresion salida_array_TK {

		}
	| operando ref_TK {

		}
	;

instrucciones : instruccion composicion_secuencial_TK instrucciones {

		}
	| instruccion {

		}
	;
instruccion : continuar_TK {

		}
	| asignacion {

		}
	| alternativa {

		}
	| iteracion {

		}
	| accion_ll {

		}
	;
asignacion : operando asignacion_TK expresion {

		}
	;
alternativa : si_TK expresion entonces_TK instrucciones lista_opciones fsi_TK {

		}
	;
lista_opciones : /*empty*/ {

		}
	| si_no_si_TK expresion entonces_TK instrucciones lista_opciones {

		}
	;
iteracion : it_cota_fija {

		}
	| it_cota_exp {

		}
	;
it_cota_exp : mientras_TK expresion hacer_TK instrucciones fmientras_TK {

		}
	;
it_cota_fija : para_TK identificador_TK asignacion_TK expresion hasta_TK expresion hacer_TK instrucciones fpara_TK {

		}
	;

accion_d : accion_TK a_cabecera bloque faccion_TK {

		}
	;
funcion_d : funcion_TK f_cabecera bloque dev_TK expresion ffuncion_TK {

		}
	;
a_cabecera : identificador_TK parentesis_apertura_TK d_par_form parentesis_cierre_TK composicion_secuencial_TK {

		}
	;
f_cabecera : identificador_TK parentesis_apertura_TK lista_d_var parentesis_cierre_TK dev_TK d_tipo composicion_secuencial_TK {

		}
	;
d_par_form : /*empty*/ {

		} 
	| d_p_form composicion_secuencial_TK d_par_form {

		}
	;
d_p_form : ent_TK lista_id definicion_tipo_var_TK d_tipo {

		}
	| sal_TK lista_id definicion_tipo_var_TK d_tipo {

		}
	| e_s_TK lista_id definicion_tipo_var_TK d_tipo {

		}
	;

accion_ll : identificador_TK parentesis_apertura_TK l_ll parentesis_cierre_TK {

		}
	;
funcion_ll : identificador_TK parentesis_apertura_TK l_ll parentesis_cierre_TK {

		}
	;
l_ll : expresion separador_TK l_ll {

		}
	| expresion {

		}
	;
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
	yyparse();
}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}