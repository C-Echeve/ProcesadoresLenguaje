#include "tablaDeCuadruplas.h"

void nuevaTablaDeCuadruplas(TablaDeCuadruplas *tabla) {
    tabla->numCuadruplas = 0;
}

int gen(TablaDeCuadruplas *tabla, char *operador,
        int operando1, int operando2, int resultado) {
    int indice = tabla->numCuadruplas;
    if (indice >= MAX_CUADRUPLAS) {
        return -1;
    }

    tabla->tabla[indice] = (Cuadrupla){operador, operando1, operando2, resultado};
    tabla->numCuadruplas++;
    return indice;
}
