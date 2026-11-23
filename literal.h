#ifndef FFF_LITERAL_H
#define FFF_LITERAL_H

#include "nombresDeTipos.h"

typedef enum valorBooleanoT {
	VERDADERO,
	FALSO
} ValorBooleanoT;

typedef union valorLiteralT{
	ValorBooleanoT valorBooleano;
	char * valorCadena;
	char valorCaracter;
	int valorEntero;
	float valorReal;
} ValorLiteralT;
	
typedef struct literalT {
	NombreDeTipoT tipoDelValor;
	ValorLiteralT valor;
} LiteralT;	

LiteralT nuevoLiteralBooleano(ValorBooleanoT);
LiteralT nuevoLiteralCadena(char *);
LiteralT nuevoLiteralCaracter(char);
LiteralT nuevoLiteralEntero(int);
LiteralT nuevoLiteralReal(float);
void escribeLiteral(LiteralT);

#endif