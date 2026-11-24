#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "tipo.h"
#include "nombresDeSimbolos.h"
#include "literal.h"

typedef union tipoSimbolo {
	Variable variable;
	Constante constante;
} TipoSimbolo;

typedef struct celda {
	char * nombre;
	Tipo tipo;
	NombreDeSimbolo simb;
	TipoSimbolo tsimb;
	LiteralT valor;
} Celda;

typedef struct tablaDeSimbolos {
	int numSimbolos;
	Celda tabla[100];
} TablaDeSimbolos;

void nuevaTablaDeSimbolos(TablaDeSimbolos *);
bool insertaVariable(TablaDeSimbolos *, char *, Tipo);
bool insertaConstante(TablaDeSimbolos *, char *, LiteralT);
// void modificaSimbolo(TablaDeSimbolos *, char *, LiteralT);
void imprimeTablaDeSimbolos(TablaDeSimbolos);

#endif
