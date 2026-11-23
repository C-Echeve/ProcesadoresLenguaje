#include "literal.h" 
#include "nombresDeTipos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

LiteralT nuevoLiteralBooleano(ValorBooleanoT valor){
    LiteralT l;
    l.tipoDelValor = BOOLEANO;
    l.valor.valorBooleano = valor;
    return l;
}

LiteralT nuevoLiteralCadena(char * valor){
    LiteralT l;
    l.tipoDelValor = CADENA;
    if ((l.valor.valorCadena = strdup(valor)) == NULL){
        printf("\t\t Literal.c: No hasy memoria para crear la constante %s\n", valor);
        exit(1);
    }
    return l;
}

LiteralT nuevoLiteralCaracter(char valor){
    LiteralT l;
    l.tipoDelValor = CARACTER;
    l.valor.valorCaracter = valor;
    return l;
}

LiteralT nuevoLiteralEntero(int valor){
    LiteralT l;
    l.tipoDelValor = ENTERO;
    l.valor.valorEntero = valor;
    return l;
}

LiteralT nuevoLiteralReal(float valor){
    LiteralT l;
    l.tipoDelValor = REAL;
    l.valor.valorReal = valor;
    return l;
}

void escribeLiteral(LiteralT l){
    switch (l.tipoDelValor) {
        case BOOLEANO: 
            printf("Booleano\t");
            if (l.valor.valorBooleano == VERDADERO)
                printf("Verdadero\n");
            else
                printf("Falso\n");
            break;
        case CADENA: 
            printf("Cadena\t\t%s\n",l.valor.valorCadena);
            break;
        case CARACTER: 
            printf("Caracter\t%c\n",l.valor.valorCaracter);
            break; 
        case ENTERO: 
            printf("Entero\t\t%d\n",l.valor.valorEntero);
            break;
        case REAL: 
            printf("Real\t\t%lf\n",l.valor.valorReal);
            break;
    }
}