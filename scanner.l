 //Archivo: scanner.l
 //Autores: Carlos Echeverria Laborda y Jialiang Chen || Grupo 2.7
 //Fecha inicio: 21/09/2026
 //Fecha fin: -

 //Para poder probar el ejemplo debe:
 //1-Usar flex ejecutando flex scannerBeta.l
 //2-Compilar el fichero generado por flex con la opcion -lfl (-ll en OSx)
 //3-Ejecutar el fichero resultante
 //4-Introducir lo que quiera que lea el scanner mediante el teclado

 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c que genera flex 

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	
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
literal_real_DR [+-]?{cifra_DR}{cifra_DR}*(\.{cifra_DR}{cifra_DR}*)?([eE]{cifra_DR}{cifra_DR}*)?|{literal_entero_DR}[rR]
literal_booleano_DR {verdadero_DR}|{falso_DR}
literal_caracter_DR \"[^\"]\"
literal_cadena_DR \'([^\'/]|\/\')*\'

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
accion_DR [aA][cC][Cc][iI][oO][nN]
algoritmo_DR [aA][lL][gG][oO][rR][iI][tT][mM][oO]
booleano_DR [bB][oO][oO][lL][eE][aA][nN][oO]
cadena_DR [cC][aA][dD][eE][nN][aA]
caracter_DR [cC][aA][rR][aA][cC][tT][eE][rR]
const_DR [cC][oO][nN][sS][tT]
continuar_DR [cC][oO][nN][tT][iI][nN][uU][aA][rR]
de_DR [dD][eE]
dev_DR [dD][eE][vV]
div_DR [dD][iI][vV]
ent_DR [eE][nN][tT]
entero_DR [eE][nN][tT][eE][rR][oO]
e_s_DR [eE]\/[sS]
faccion_DR [fF][aA][cC][Cc][iI][oO][nN]
falgoritmo_DR [fF][aA][lL][gG][oO][rR][iI][tT][mM][oO]
fconst_DR [fF][cC][oO][nN][sS][tT]
ffuncion_DR [fF][fF][uU][nN][cC][iI][oO][nN]
fmientras_DR [fF][mM][iI][eE][nN][tT][rR][aA][sS]
fpara_DR [fF][pP][aA][rR][aA]
fsi_DR [fF][sS][iI]
ftipo_DR [fF][tT][iI][pP][oO]
ftupla_DR [fF][tT][uU][pP][lL][aA]
funcion_DR [fF][uU][nN][cC][iI][oO][nN]
fvar_DR [fF][vV][aA][rR]
hacer_DR [hH][aA][cC][eE][rR]
hasta_DR [hH][aA][sS][tT][aA]
mientras_DR [mM][iI][eE][nN][tT][rR][aA][sS]
mod_DR [mM][oO][dD]
no_DR [nN][oO]
o_DR [oO]
para_DR [pP][aA][rR][aA]
real_DR [rR][eE][aA][lL]
ref_DR [rR][eE][fF]
sal_DR [sS][aA][lL]
si_DR [sS][iI]
tabla_DR [tT][aA][bB][lL][aA]
tipo_DR [tT][iI][pP][oO]
tupla_DR [tT][uU][pP][lL][aA]
var_DR [vV][aA][rR]
y_DR [yY]


%%

 //PARTE 2: Reglas

{comentario_DR} {
	/* Ignorar comentarios de línea */
	printf("(comentario_TK, )\n");
}
{texto_DR} {
	/* Ignorar comentarios multilínea */
	printf("(texto_TK, )\n");
}
{comentario_especial_DR} {
	/* Ignorar comentarios especiales {} */
	printf("(comentario_especial_TK, )\n");
}
{delimitador_DR} {
	/* Ignorar espacios y saltos de línea */
	printf("(delimitador_TK, )\n");
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
	printf("(e_s_TK, )");
}
{faccion_DR} {
	printf("(faccion_TK, )");
}
{falgoritmo_DR} {
	printf("(falgoritmo_TK)");
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
{literal_real_DR} {
	char * cadena;
	if ((cadena = strndup(yytext, strlen(yytext)-1)) == NULL) 
		errorEnScanner("No hay memoria para strndup() al leer %s\n", yytext);
	else {
		printf("(literal_real_TK, %f)\n", atof(cadena));
		free(cadena); //Para no sobrecargar la memoria
	}
}
{literal_entero_DR} {
	printf("(literal_entero_TK, %d)\n", atoi(yytext));
}
(literal_caracter_DR) {
	printf("(literal_caracter_TK, %c)\n", yytext[1]);
}
(literal_cadena_DR) {
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
{mayor_estricto_DR} {
	printf("(mayor_estricto_TK, %c\n)", yytext[0]);
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