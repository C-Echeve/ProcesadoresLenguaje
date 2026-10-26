# ProcesadoresLenguaje
Práctica de la asignatura de Procesadores de Lenguaje perteneciente al 7º semestre de la carrera de Ingeniería Informática de la UPNA. Se trata de construir parte de un compilador compuesto por un scanner (con flex 2.6.4) y un parser (con bison) para un lenguaje.

## Integrantes:
    Jialiang Chen
    Carlos Echeverría Laborda

## Información sobre el scanner:
    Para compilar lo necesario: make o make all
    Para ejecutar sin fichero y escribir el programa a escanear en la terminal:
        ./a.out
    Para ejecutar con fichero y escanear a partir del contenido del mismo:
        cat programaX.alg | ./a.out
        ./a.out < programaX.alg
    Para limpiar los archivos generados por la compilación: make clean
