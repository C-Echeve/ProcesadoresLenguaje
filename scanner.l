 //Archivo: scanner.l
 //Autores: Carlos Echeverria Laborda y Jialiang Chen || Grupo 2.7
 //Fecha inicio: 21/09/2026
 //Fecha fin: -


 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c que genera flex 

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <string.h> //Para trabajar con cadenas de caracteres
	#include "parser.tab.h"
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

 // PARTE 1.2: Zona de definiciones regulares

letra_DR [A-Z]|[a-z]
cifra_DR [0-9]
letra_o_cifra_DR {letra_DR}|{cifra_DR}
identificador_DR {letra_DR}{letra_o_cifra_DR}*

verdadero_DR (?i:verdadero)
falso_DR (?i:falso)

literal_entero_DR {cifra_DR}{cifra_DR}*([eE]{cifra_DR}{cifra_DR}*)?
literal_real_DR {cifra_DR}{cifra_DR}*(\.{cifra_DR}{cifra_DR}*)?([eE][+-]?{cifra_DR}{cifra_DR}*)?|{literal_entero_DR}[rR]
literal_booleano_DR {verdadero_DR}|{falso_DR}
literal_caracter_DR \"[^\"]\"
literal_cadena_DR \'([^']|\/')*\'

 // Otros posibles tokens
asignacion_DR :=
composicion_secuencial_DR ;
separador_DR ,
subrango_DR \.\.
definicion_tipo_var_DR :
entonces_DR \->
si_no_si_DR \[\]
inicio_array_DR \[
fin_array_DR \]
punto_DR \.

 // Operadores relacionales y aritmeticos
parentesis_apertura_DR \(
parentesis_cierre_DR \)
igual_DR =
mayor_estricto_DR >
menor_estricto_DR <
mayor_igual_DR >=
menor_igual_DR <=
distinto_DR <>
suma_DR \+
resta_DR \-
producto_DR \*
division_DR \/

 // Comentarios
comentario_DR \/\/.*
texto_DR \/\*([^*]|\*+[^*/])*\*+\/
delimitador_DR [ \t\n]
comentario_especial_DR \{([^}]|\/\})*\}

 // Palabras reservadas
accion_DR (?i:accion)
algoritmo_DR (?i:algoritmo)
booleano_DR (?i:booleano)
cadena_DR (?i:cadena)
caracter_DR (?i:caracter)
const_DR (?i:const)
continuar_DR (?i:continuar)
de_DR (?i:de)
dev_DR (?i:dev)
div_DR (?i:div)
ent_DR (?i:ent)
entero_DR (?i:entero)
e_s_DR (?i:e\/s)
faccion_DR (?i:faccion)
falgoritmo_DR (?i:falgoritmo)
fconst_DR (?i:fconst)
ffuncion_DR (?i:ffuncion)
fmientras_DR (?i:fmientras)
fpara_DR (?i:fpara)
fsi_DR (?i:fsi)
ftipo_DR (?i:ftipo)
ftupla_DR (?i:ftupla)
funcion_DR (?i:funcion)
fvar_DR (?i:fvar)
hacer_DR (?i:hacer)
hasta_DR (?i:hasta)
mientras_DR (?i:mientras)
mod_DR (?i:mod)
no_DR (?i:no)
o_DR (?i:o)
para_DR (?i:para)
real_DR (?i:real)
ref_DR (?i:ref)
sal_DR (?i:sal)
si_DR (?i:si)
tabla_DR (?i:tabla)
tipo_DR (?i:tipo)
tupla_DR (?i:tupla)
var_DR (?i:var)
y_DR (?i:y)


%%

 //PARTE 2: Reglas

{comentario_DR} {
	/* Ignorar comentarios de linea */
	// printf("(comentario_TK, )\n");
	return comentario_TK;
}
{texto_DR} {
	/* Ignorar comentarios multilinea */
	// printf("(texto_TK, )\n");
}
{comentario_especial_DR} {
	/* Ignorar comentarios especiales {} */
	// printf("(comentario_especial_TK, )\n");
}
{delimitador_DR} {
	/* Ignorar espacios y saltos de linea */
	// printf("(delimitador_TK, )\n");
}

{accion_DR} {
	// printf("(accion_TK, )\n");
	return accion_TK;
}
{algoritmo_DR} {
	// printf("(algoritmo_TK, )\n");
	return algoritmo_TK;
}
{booleano_DR} {
	// printf("(booleano_TK, )\n");
	return booleano_TK;
}
{cadena_DR} {
	// printf("(cadena_TK, )\n");
	return cadena_TK;
}
{caracter_DR} {
	// printf("(caracter_TK, )\n");
	return caracter_TK;
}
{const_DR} {
	// printf("(const_TK, )\n");
	return const_TK;
}
{continuar_DR} {
	// printf("(continuar_TK, )\n");
	return continuar_TK;
}
{de_DR} {
	// printf("(de_TK, )\n");
	return de_TK;
}
{dev_DR} {
	// printf("(dev_TK, )\n");
	return dev_TK;
}
{div_DR} {
	// printf("(div_TK, )\n");
	return div_TK;
}
{ent_DR} {
	// printf("(ent_TK, )\n");
	return ent_TK;
}
{entero_DR} {
	// printf("(entero_TK, )\n");
	return entero_TK;
}
{e_s_DR} {
	// printf("(e_s_TK, )\n");
	return e_s_TK;
}
{faccion_DR} {
	// printf("(faccion_TK, )\n");
	return faccion_TK;
}
{falgoritmo_DR} {
	// printf("(falgoritmo_TK)\n");
	return falgoritmo_TK;
}
{fconst_DR} {
	// printf("(fconst_TK, )\n");
	return fconst_TK;
}
{ffuncion_DR} {
	// printf("(ffuncion_TK, )\n");
	return ffuncion_TK;
}
{fmientras_DR} {
	// printf("(fmientras_TK, )\n");
	return fmientras_TK;
}
{fpara_DR} {
	// printf("(fpara_TK, )\n");
	return fpara_TK;
}
{fsi_DR} {
	// printf("(fsi_TK, )\n");
	return fsi_TK;
}
{ftipo_DR} {
	// printf("(ftipo_TK, )\n");
	return ftipo_TK;
}
{ftupla_DR} {
	// printf("(ftupla_TK, )\n");
	return ftupla_TK;
}
{funcion_DR} {
	// printf("(funcion_TK, )\n");
	return funcion_TK;
}
{fvar_DR} {
	// printf("(fvar_TK, )\n");
	return fvar_TK;
}
{hacer_DR} {
	// printf("(hacer_TK, )\n");
	return hacer_TK;
}
{hasta_DR} {
	// printf("(hasta_TK, )\n");
	return hasta_TK;
}
{mientras_DR} {
	// printf("(mientras_TK, )\n");
	return mientras_TK;
}
{mod_DR} {
	// printf("(mod_TK, )\n");
	return mod_TK;
}
{no_DR} {
	// printf("(no_TK, )\n");
	return no_TK;
}
{o_DR} {
	// printf("(o_TK, )\n");
	return o_TK;
}
{para_DR} {
	// printf("(para_TK, )\n");
	return para_TK;
}
{real_DR} {
	// printf("(real_TK, )\n");
	return real_TK;
}
{ref_DR} {
	// printf("(ref_TK, )\n");
	return ref_TK;
}
{sal_DR} {
	// printf("(sal_TK, )\n");
	return sal_TK;
}
{si_DR} {
	// printf("(si_TK, )\n");
	return si_TK;
}
{tabla_DR} {
	// printf("(tabla_TK, )\n");
	return tabla_TK;
}
{tipo_DR} {
	// printf("(tipo_TK, )\n");
	return tipo_TK;
}
{tupla_DR} {
	// printf("(tupla_TK, )\n");
	return tupla_TK;
}
{var_DR} {
	// printf("(var_TK, )\n");
	return var_TK;
}
{y_DR} {
	// printf("(y_TK, )\n");
	return y_TK;
}

{literal_booleano_DR} {
	// printf("(literal_booleano_TK, %s)\n",yytext);
	return literal_booleano_TK;
}
{literal_entero_DR} {
	// printf("(literal_entero_TK, %ld)\n", (long) strtod(yytext, NULL));
	return literal_entero_TK;
}
{literal_real_DR} {
	char * cadena;
	size_t longitud = strlen(yytext);
	if (yytext[longitud - 1] == 'r' || yytext[longitud - 1] == 'R') {
        cadena = strndup(yytext, longitud - 1);
	} else {
        cadena = strdup(yytext);
	}
	if (cadena == NULL) {
		errorEnScanner("No hay memoria para strndup() al leer %s\n", yytext);
	} else {
		// printf("(literal_real_TK, %f)\n", atof(cadena));
		free(cadena); //Para no sobrecargar la memoria
	}
	return literal_real_TK;
}
{literal_caracter_DR} {
	/* Por el momento literal_caracter_DR solo admite 1 unico caracter
	   para que acepte "/"" y el caracter sea " habria que cambiar la
	   definicion a \"([^\"]|\/")\"
	if ((yytext[1] == '/' ) && (strlen(yytext) > 3)) {
		// printf("(literal_caracter_TK, %c)\n", yytext[2]);
	} else {
		// printf("(literal_caracter_TK, %c)\n", yytext[1]);
	}
	*/
	// printf("(literal_caracter_TK, %c)\n", yytext[1]);
	return literal_caracter_TK;
}
{literal_cadena_DR} {
	// printf("(literal_cadena_TK, %s)\n", yytext);
	return literal_cadena_TK;
}

{identificador_DR} {
	// printf("(identificador_TK, %s)\n", yytext);
	return identificador_TK;
}

{asignacion_DR} {
	// printf("(asignacion_TK, %s)\n", yytext);
	return asignacion_TK;
}
{subrango_DR} {
	// printf("(subrango_TK, %s)\n", yytext);
	return subrango_TK;
}
{entonces_DR} {
	// printf("(entonces_TK, %s)\n", yytext);
	return entonces_TK;
}
{si_no_si_DR} {
	// printf("(si_no_si_TK, %s)\n", yytext);
	return si_no_si_TK;
}
{mayor_igual_DR} {
	// printf("(mayor_igual_TK, %s)\n", yytext);
	return mayor_igual_TK;
}
{menor_igual_DR} {
	// printf("(menor_igual_TK, %s)\n", yytext);
	return menor_igual_TK;
}
{distinto_DR} {
	// printf("(distinto_TK, %s)\n", yytext);
	return distinto_TK;
}

{composicion_secuencial_DR} {
	// printf("(composicion_secuencial_TK, %c)\n", yytext[0]);
	return composicion_secuencial_TK;
}
{separador_DR} {
	// printf("(separador_TK, %c)\n", yytext[0]);
	return separador_TK;
}
{definicion_tipo_var_DR} {
	// printf("(definicion_tipo_var_TK, %c)\n", yytext[0]);
	return definicion_tipo_var_TK;
}
{inicio_array_DR} {
	// printf("(inicio_array_TK, %c)\n", yytext[0]);
	return inicio_array_TK;
}
{fin_array_DR} {
	// printf("(fin_array_TK, %c)\n", yytext[0]);
	return fin_array_TK;
}

{punto_DR} {
	// printf("(punto_TK, %c)\n", yytext[0]);
	return punto_TK;
}
{parentesis_apertura_DR} {
	// printf("(parentesis_apertura_TK, %c)\n", yytext[0]);
	return parentesis_apertura_TK;
}
{parentesis_cierre_DR} {
	// printf("(parentesis_cierre_TK, %c)\n", yytext[0]);
	return parentesis_cierre_TK;
}
{igual_DR} {
	// printf("(igual_TK, %c)\n", yytext[0]);
	return igual_TK;
}
{mayor_estricto_DR} {
	// printf("(mayor_estricto_TK, %c)\n", yytext[0]);
	return mayor_estricto_TK;
}
{menor_estricto_DR} {
	// printf("(menor_estricto_TK, %c)\n", yytext[0]);
	return menor_estricto_TK;
}
{suma_DR} {
	// printf("(suma_TK, %c)\n", yytext[0]);
	return suma_TK;
}
{resta_DR} {
	// printf("(resta_TK, %c)\n", yytext[0]);
	return resta_TK;
}
{producto_DR} {
	// printf("(producto_TK, %c)\n", yytext[0]);
	return producto_TK;
}
{division_DR} {
	// printf("(division_TK, %c)\n", yytext[0]);
	return division_TK;
}

.	{ //Permite que el resto de caracteres no hagan echo
}


%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}
