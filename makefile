compilador: parser.tab.c lex.yy.o
	gcc parser.tab.c lex.yy.o -lfl -o compilador

parser.tab.c parser.tab.h: parser.y
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h
	flex scanner.l
	gcc -c lex.yy.c

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl -o scanner

clean:
	rm -f compilador scanner parser.tab.* parser.output lex.yy.c lex.yy.o
