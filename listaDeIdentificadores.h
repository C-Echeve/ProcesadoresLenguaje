#ifndef FFF_LISTADEIDENTIFICADORES_H
#define FFF_LISTADEIDENTIFICADORES_H

#define MAX_IDS 100

typedef struct {
    char * ids[MAX_IDS];
    int num_ids;
} ListaIdentificadores;

#endif