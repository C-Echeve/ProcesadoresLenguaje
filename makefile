compilador: parser.tab.o lex.yy.o listaDeIdentificadores.o literal.o tablaDeSimbolos.o tablaDeCuadruplas.o
	gcc parser.tab.o lex.yy.o listaDeIdentificadores.o literal.o tablaDeSimbolos.o tablaDeCuadruplas.o -lfl -o compilador

all: compilador

parser.tab.c parser.tab.h: parser.y
	bison -d -v -t parser.y

parser.tab.o: parser.tab.c parser.tab.h listaDeIdentificadores.h literal.h tablaDeSimbolos.h tipo.h nombresDeTipos.h nombresDeSimbolos.h
	gcc -c parser.tab.c

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tipo.h listaDeIdentificadores.h
	flex scanner.l
	gcc -c lex.yy.c

listaDeIdentificadores.o: listaDeIdentificadores.c listaDeIdentificadores.h
	gcc -c listaDeIdentificadores.c

literal.o: literal.c literal.h nombresDeTipos.h
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c tablaDeSimbolos.h literal.h tipo.h nombresDeTipos.h nombresDeSimbolos.h
	gcc -c tablaDeSimbolos.c

tablaDeCuadruplas.o: tablaDeCuadruplas.c tablaDeCuadruplas.h
	gcc -c tablaDeCuadruplas.c

scanner: lex.yy.o

clean:
	rm -f compilador parser.tab.c parser.tab.h parser.output lex.yy.c parser.tab.o lex.yy.o listaDeIdentificadores.o literal.o tablaDeSimbolos.o tablaDeCuadruplas.o
