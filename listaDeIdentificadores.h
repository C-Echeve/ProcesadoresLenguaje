#ifndef LISTADEIDENTIFICADORES_H
#define LISTADEIDENTIFICADORES_H

#define MAX_IDS 100

typedef struct {
    char * ids[MAX_IDS];
    int numIds;
} ListaIdentificadores;

void insertarLista(ListaIdentificadores*, char*);

#endif