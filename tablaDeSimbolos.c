#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"


void nuevaTablaDeSimbolos(TablaDeSimbolos * pts) {
    pts->numSimbolos = 0;
}

bool insertaVariable(TablaDeSimbolos * pts, char * pidentificador, Tipo tipo) {
    Celda c;
    int i = 0;
    while (i < pts->numSimbolos && strcmp(pidentificador, pts->tabla[i]->nombre)) {
        i += 1;
    }
    if (i < pts->numSimbolos) {
        printf("Ya existe una variable llamada %s\n", pidentificador);
    }
    else {
        size_t capacidad = sizeof(pts->tabla) / sizeof(pts->tabla[0]);
        if (i >= capacidad) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        } 
        c->nombre = pidentificador;
        c->tipo = tipo;
        c->simb = VARIABLE;
        // c->tsimb = variable;

        pts->tabla[i] = c;
        pts->numSimbolos += 1;
    }
}

bool insertaConstante(TablaDeSimbolos * pts, char * pnombre, LiteralT literal) {
    Celda c;
    int i = 0;
    while (i < pts->numSimbolos && strcmp(pnombre, pts->tabla[i]->nombre)) {
        i += 1;
    }
    if (i < pts->numSimbolos) {
        printf("Ya existe una constante llamada %s\n", pnombre);
    }
    else {
        size_t capacidad = sizeof(pts->tabla) / sizeof(pts->tabla[0]);
        if (i >= capacidad) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        } 
        c->nombre = pnombre;
        c->valor = literal;
        c->simb = CONSTANTE;
        // c->tsimb = constante;

        pts->tabla[i] = c;
        pts->numSimbolos += 1;
    }
}

/*
void modificaSimbolo(TablaDeSimbolos * pts, char * pnombre, LiteralT v){
    Celda c;
    int i = 0;
    while (i < pts->numSimbolos && strcmp(pnombre, pts->tabla[i]->nombre))
        i += 1;
    if (i < pts->numSimbolos){
        c->valor = v;
    }    
    else {
        printf("No se ha declarado ninguna simbolo llamada %s\n", pnombre);
    }
}
*/

void imprimeTablaDeSimbolos(TablaDeSimbolos ts){
    if (ts->numSimbolos == 0) { 
        printf("La tabla de simbolos está vacía\n");
    }
    else {
        printf("El contenido de la tabla de simbolos es.\n");
        printf("Nombre\t\tTipoSimbolo\t\tTipo\t\tValor\n");
        int i = 0;
        while (i < ts->numSimbolos){
            int enumNombreSimbolo = ts->tabla[i]->simb;
            char* nombreSimbolo = stringNombreSimbolo[enumNombreSimbolo];

            char* nombreTipo;
            int enumNombreTipo;
            if (enumNombreSimbolo == CONSTANTE) {
                enumNombreTipo = ts->tabla[i]->valor->tipoDelValor;
                nombreTipo = stringNombreTipo[enumNombreTipo];
            }
            else {
                if (ts->tabla[i]->tipo->clase == TIPO_SIMPLE) {
                    enumNombreTipo = ts->tabla[i]->tipo->nombre;
                    nombreTipo = stringNombreTipo[enumNombreTipo];
                } else {
                    nombreTipo = strdup(ts->tabla[i]->tipo->nombreTipo);
                } 
            }

            printf("%s\t\t%s\t\t%s\t\t", ts->tabla[i]->nombre, nombreSimbolo, nombreTipo);

            if (enumNombreSimbolo == CONSTANTE) {
                escribeLiteral(ts->tabla[i]->valor);
            }
            else {
                printf("-----");
            }
        }
    }
}
