#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "nombresDeTipos.h"
#include "nombresDeSimbolos.h"

typedef union tipoSimbolo {
	Variable variable;
	Constante constante;
} TipoSimbolo;

typedef struct celda {
	char * nombre;
	NombreDeTipoT tipo;
	NombreDeSimbolo simb;
	TipoSimbolo tsimb;
} Celda;

typedef struct tablaDeSimbolos {
	int numSimbolos;
	Celda tabla[100];
} TablaDeSimbolos;

void nuevaTablaDeSimbolos(TablaDeSimbolos *);
bool insertaVariable(TablaDeSimbolos *, char *);
bool insertaVariable(TablaDeSimbolos *, char *, NombreDeTipoT);
void modificaSimbolo(TablaDeSimbolos *, char *, LiteralT);
void imprimeTablaDeSimbolos(TablaDeSimbolos);

#endif
