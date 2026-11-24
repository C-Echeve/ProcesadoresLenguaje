#ifndef TABLA_DE_CUADRUPLAS_H
#define TABLA_DE_CUADRUPLAS_H

#define MAX_CUADRUPLAS 100
#define SIN_OPERANDO (-1)

#define OP_COPIA ":="
#define OP_SUMA_ENTERA "+int"
#define OP_SUMA_REAL "+real"
#define OP_PRODUCTO_ENTERO "*int"
#define OP_PRODUCTO_REAL "*real"
#define OP_NEGACION_ENTERA "-int"
#define OP_NEGACION_REAL "-real"
#define OP_ENTERO_A_REAL "inttoreal"

typedef struct {
    char *operador;
    int operando1;
    int operando2;
    int resultado;
} Cuadrupla;


typedef struct {
    int numCuadruplas;
    Cuadrupla tabla[MAX_CUADRUPLAS];
} TablaDeCuadruplas;

void nuevaTablaDeCuadruplas(TablaDeCuadruplas *tabla);


int gen(TablaDeCuadruplas *tabla, char *operador,
        int operando1, int operando2, int resultado);

#endif
