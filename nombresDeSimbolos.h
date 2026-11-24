#ifndef NOMBRESDESIMBOLOS_H
#define NOMBRESDESIMBOLOS_H

#include "literal.h"

typedef enum nombreDeSimbolo {
	CONSTANTE,
    VARIABLE
} NombreDeSimbolo;

typedef struct variable {
    // Ambito
} Variable;

typedef LiteralT Constante;

const char* stringNombreSimbolo[] = {"CONSTANTE", "VARIABLE"};

#endif