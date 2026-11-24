#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "listaDeIdentificadores.h"

void insertarLista(ListaIdentificadores* lista, char* identificador) {
    if (lista == NULL || identificador == NULL) {
        return;
    }
    size_t capacidad = sizeof(lista->ids) / sizeof(lista->ids[0]);
    if (lista->numIds >= capacidad) {
        printf("No hay memoria para un identificador de la lista de identificadores");
    }
    else {
        lista->ids[lista->numIds] = strdup(identificador);
        lista->numIds += 1;
    }
}