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

literal_entero_DR [+-]?{cifra_DR}{cifra_DR}*((e|E){cifra_DR}{cifra_DR}*)?
literal_real_DR [+-]?{cifra_DR}{cifra_DR}*(\.{cifra_DR}{cifra_DR}*)?((e|E){cifra_DR}{cifra_DR}*)?|{literal_entero_DR}(r|R)
literal_booleano_DR {verdadero_DR}|{falso_DR}
literal_caracter_DR \".\"
literal_cadena_DR \'([^\'\\]|\\\\.)*\'

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

igualdad_DR =
mayor_estricto_DR >
menor_estricto_DR <
mayor_igual_DR >=
menor_igual_DR <=
distinto_DR <>
suma_DR +
resta_DR -
producto_DR \*
division_DR /

comentario_DR \/\/.*
texto_DR /\*.*\*/
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
e/s_DR [eE]/[sS]
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

lista_d_tipo_DR ({identificador_DR} {creacion_tipo_DR} {d_tipo} {composicion_secuencial_DR})*
lista_d_cte_DR ({identificador_DR} {creacion_tipo_DR} {literal_DR} {composicion_secuencial_DR})*
lista_id_DR ({identificador_DR}{separador_DR}|{identificador_DR})*
lista_d_var_DR ({lista_id_DR} {definicion_tipo_var_DR} {d_tipo} {composicion_secuencial_DR})*

declaracion_tipo_DR {tipo_DR} {lista_d_tipo_DR} {ftipo_DR}{composicion_secuencial_DR}
declaracion_cte_DR {const_DR} {lista_d_cte_DR} {fconst_DR}{composicion_secuencial_DR}
declaracion_var_DR {var_DR} {lista_d_var_DR} {fvar_DR}{composicion_secuencial_DR}

decl_globales_DR ({declaracion_tipo_DR} | {declaracion_const_DR}) | {decl_globales_DR}
cabecera_alg {decl_globales_DR} {decl_a_f_DR} {decl_ent_sal_DR} {comentario_DR}
bloque_alg_DR {bloque_DR} {comentario_DR}
desc_algoritmo_DR {algoritmo_DR} {identificador_DR} {composicion_secuencial_DR} {cabecera_alg_DR} {bloque_alg_DR} {falgoritmo_DR} {punto_DR}

%%

 //PARTE 2: Reglas
{const} {
	printf("(constTK, )\n");
}


%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}