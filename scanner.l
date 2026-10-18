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
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

 // PARTE 1.2: Zona de definiciones regulares

letra_DR [A-Z]|[a-z]
cifra_DR [0-9]
letra_o_cifra_DR {letra_DR}|{cifra_DR}
identificador_DR {letra_DR}{letra_o_cifra_DR}*

verdadero_DR (?i:verdadero)
falso_DR (?i:falso)

literal_entero_DR [+-]?{cifra_DR}{cifra_DR}*([eE]{cifra_DR}{cifra_DR}*)?
literal_real_DR [+-]?{cifra_DR}{cifra_DR}*(\.{cifra_DR}{cifra_DR}*)?([eE][+-]?{cifra_DR}{cifra_DR}*)?|{literal_entero_DR}[rR]
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
creacion_tipo_DR =
inicio_array_DR \[
fin_array_DR \]
punto_DR \.

 // Operadores relacionales y aritmeticos
parentesis_apertura_DR \(
parentesis_cierre_DR \)
igualdad_DR =
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
	printf("(comentario_TK, )\n");
}
{texto_DR} {
	/* Ignorar comentarios multilinea */
	printf("(texto_TK, )\n");
}
{comentario_especial_DR} {
	/* Ignorar comentarios especiales {} */
	printf("(comentario_especial_TK, )\n");
}
{delimitador_DR} {
	/* Ignorar espacios y saltos de linea */
	// printf("(delimitador_TK, )\n");
}

{accion_DR} {
	printf("(accion_TK, )\n");
}
{algoritmo_DR} {
	printf("(algoritmo_TK, )\n");
}
{booleano_DR} {
	printf("(booleano_TK, )\n");
}
{cadena_DR} {
	printf("(cadena_TK, )\n");
}
{caracter_DR} {
	printf("(caracter_TK, )\n");
}
{const_DR} {
	printf("(const_TK, )\n");
}
{continuar_DR} {
	printf("(continuar_TK, )\n");
}
{de_DR} {
	printf("(de_TK, )\n");
}
{dev_DR} {
	printf("(dev_TK, )\n");
}
{div_DR} {
	printf("(div_TK, )\n");
}
{ent_DR} {
	printf("(ent_TK, )\n");
}
{entero_DR} {
	printf("(entero_TK, )\n");
}
{e_s_DR} {
	printf("(e_s_TK, )\n");
}
{faccion_DR} {
	printf("(faccion_TK, )\n");
}
{falgoritmo_DR} {
	printf("(falgoritmo_TK)\n");
}
{fconst_DR} {
	printf("(fconst_TK, )\n");
}
{ffuncion_DR} {
	printf("(ffuncion_TK, )\n");
}
{fmientras_DR} {
	printf("(fmientras_TK, )\n");
}
{fpara_DR} {
	printf("(fpara_TK, )\n");
}
{fsi_DR} {
	printf("(fsi_TK, )\n");
}
{ftipo_DR} {
	printf("(ftipo_TK, )\n");
}
{ftupla_DR} {
	printf("(ftupla_TK, )\n");
}
{funcion_DR} {
	printf("(funcion_TK, )\n");
}
{fvar_DR} {
	printf("(fvar_TK, )\n");
}
{hacer_DR} {
	printf("(hacer_TK, )\n");
}
{hasta_DR} {
	printf("(hasta_TK, )\n");
}
{mientras_DR} {
	printf("(mientras_TK, )\n");
}
{mod_DR} {
	printf("(mod_TK, )\n");
}
{no_DR} {
	printf("(no_TK, )\n");
}
{o_DR} {
	printf("(o_TK, )\n");
}
{para_DR} {
	printf("(para_TK, )\n");
}
{real_DR} {
	printf("(real_TK, )\n");
}
{ref_DR} {
	printf("(ref_TK, )\n");
}
{sal_DR} {
	printf("(sal_TK, )\n");
}
{si_DR} {
	printf("(si_TK, )\n");
}
{tabla_DR} {
	printf("(tabla_TK, )\n");
}
{tipo_DR} {
	printf("(tipo_TK, )\n");
}
{tupla_DR} {
	printf("(tupla_TK, )\n");
}
{var_DR} {
	printf("(var_TK, )\n");
}
{y_DR} {
	printf("(y_TK, )\n");
}

{literal_booleano_DR} {
	printf("(literal_booleano_TK, %s)\n",yytext);
}
{literal_entero_DR} {
	printf("(literal_entero_TK, %ld)\n", (long) strtod(yytext, NULL));
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
		printf("(literal_real_TK, %f)\n", atof(cadena));
		free(cadena); //Para no sobrecargar la memoria
	}
}
{literal_caracter_DR} {
	/* Por el momento literal_caracter_DR solo admite 1 unico caracter
	   para que acepte "/"" y el caracter sea " habria que cambiar la
	   definicion a \"([^\"]|\/")\"
	if ((yytext[1] == '/' ) && (strlen(yytext) > 3)) {
		printf("(literal_caracter_TK, %c)\n", yytext[2]);
	} else {
		printf("(literal_caracter_TK, %c)\n", yytext[1]);
	}
	*/
	printf("(literal_caracter_TK, %c)\n", yytext[1]);
}
{literal_cadena_DR} {
	printf("(literal_cadena_TK, %s)\n", yytext);
}

{identificador_DR} {
	printf("(identificador_TK, %s)\n", yytext);
}

{asignacion_DR} {
	printf("(asignacion_TK, %s)\n", yytext);
}
{subrango_DR} {
	printf("(subrango_TK, %s)\n", yytext);
}
{entonces_DR} {
	printf("(entonces_TK, %s)\n", yytext);
}
{si_no_si_DR} {
	printf("(si_no_si_TK, %s)\n", yytext);
}
{mayor_igual_DR} {
	printf("(mayor_igual_TK, %s)\n", yytext);
}
{menor_igual_DR} {
	printf("(menor_igual_TK, %s)\n", yytext);
}
{distinto_DR} {
	printf("(distinto_TK, %s)\n", yytext);
}

{composicion_secuencial_DR} {
	printf("(composicion_secuencial_TK, %c)\n", yytext[0]);
}
{separador_DR} {
	printf("(separador_TK, %c)\n", yytext[0]);
}
{definicion_tipo_var_DR} {
	printf("(definicion_tipo_var_TK, %c)\n", yytext[0]);
}
{creacion_tipo_DR} {
	printf("(creacion_tipo_TK, %c)\n", yytext[0]);
}
{inicio_array_DR} {
	printf("(inicio_array_TK, %c)\n", yytext[0]);
}
{fin_array_DR} {
	printf("(fin_array_TK, %c)\n", yytext[0]);
}
{punto_DR} {
	printf("(punto_TK, %c)\n", yytext[0]);
}
{parentesis_apertura_DR} {
	printf("(parentesis_apertura_TK, %c)\n", yytext[0]);
}
{parentesis_cierre_DR} {
	printf("(parentesis_cierre_TK, %c)\n", yytext[0]);
}
{igualdad_DR} {
	printf("(igualdad_TK, %c)\n", yytext[0]);
}
{mayor_estricto_DR} {
	printf("(mayor_estricto_TK, %c)\n", yytext[0]);
}
{menor_estricto_DR} {
	printf("(menor_estricto_TK, %c)\n", yytext[0]);
}
{suma_DR} {
	printf("(suma_TK, %c)\n", yytext[0]);
}
{resta_DR} {
	printf("(resta_TK, %c)\n", yytext[0]);
}
{producto_DR} {
	printf("(producto_TK, %c)\n", yytext[0]);
}
{division_DR} {
	printf("(division_TK, %c)\n", yytext[0]);
}

.	{ //Permite que el resto de caracteres no hagan echo
}


%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}