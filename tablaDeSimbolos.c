#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"


void nuevaTablaDeSimbolos(TablaDeSimbolos * ptv) {
    ptv->numSimbolos = 0;
}

bool insertaSimbolo(TablaDeSimbolos * ptv, char * pnombre, LiteralT v){
    Celda c;
    int i = 0;
    while (i < ptv->numSimbolos && strcmp(pnombre, ptv->tabla[i]->nombre))
        i += 1;
    if (i < ptv->numSimbolos) {
        printf("Ya existe una simbolo llamada %s\n", pnombre);
    }
    else {
        size_t capacidad = sizeof(ptv->tabla) / sizeof(ptv->tabla[0]);
        if (i >= capacidad) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        } 
        c->nombre = pnombre;
        c->tipo = ptipo;
        c->cont = pcont;
        ptv->tabla[i] = c;
        ptv->numSimbolos += 1;
    }
}

void modificaSimbolo(TablaDeSimbolos * ptv, char * pnombre, LiteralT v){
    Celda c;
    int i = 0;
    while (i < ptv->numSimbolos && strcmp(pnombre, ptv->tabla[i]->nombre))
        i += 1;
    if (i < ptv->numSimbolos){
        c->valor = v;
    }    
    else {
        printf("No se ha declarado ninguna simbolo llamada %s\n", pnombre);
    }
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tv){
    if (tv->numSimbolos == 0) { 
        printf("La tabla de simbolos está vacía\n");
    }
    else {
        printf("El contenido de la tabla de simbolos es.\n");
        printf("Nombre\t\tTipo\t\tValor\n");
        int i = 0;
        while (i < tv->numSimbolos){
            printf("%s\t\t", tv->tabla[i]->nombre);
            escribeLiteral(aux->valor);
            aux = aux ->sig;
        }
    }
}
