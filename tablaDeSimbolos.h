#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "nombresDeTipos.h"
#include "nombresDeContenedores.h"

typedef struct celda {
	char * nombre;
	NombreDeCont cont; 
	NombreDeTipoT tipo;
} Celda;

typedef struct tablaDeSimbolos {
	int numSimbolos;
	Celda tabla[100];
} TablaDeSimbolos;

void nuevaTablaDeVariables(TablaDeSimbolos *);
bool insertaVariable(TablaDeSimbolos *, char *, LiteralT);
void modificaVariable(TablaDeSimbolos *, char *, LiteralT);
void imprimeTablaDeVariables(TablaDeSimbolos);

#endif
