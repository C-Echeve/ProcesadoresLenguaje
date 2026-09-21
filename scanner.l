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

letra [A-Z]|[a-z]
cifra [0-9]
letra_o_cifra {letra}|{cifra}
identificador {letra}{letra_o_cifra}*

verdadero (?i:verdadero)
falso (?i:falso)

literal_entero [+-]?{cifra}{cifra}*((e|E){cifra}{cifra}*)?
literal_real [+-]?{cifra}{cifra}*(.{cifra}{cifra}*)?((e|E){cifra}{cifra}*)?|{literal_entero}(r|R)
literal_booleano verdadero|falso
literal_caracter \".\"
literal_cadena \'.*\'


%%

 //PARTE 2: Reglas


%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}