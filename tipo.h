#ifndef TIPO_H
#define TIPO_H

#include "nombresDeTipos.h"

typedef enum {
    TIPO_SIMPLE,
    TIPO_SUBRANGO,
    TIPO_REFERENCIA,
    TIPO_TABLA,
    TIPO_TUPLA
} ClaseTipo;

typedef struct tipo {
    ClaseTipo clase;
    NombreDeTipoT nombre;
    char * nombreTipo;
    int limiteInferior;
    int limiteSuperior;
    struct tipo *tipoBase;
} Tipo;

#endif