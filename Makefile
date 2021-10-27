  # GRUPO F
  # Nomes: Vinícius Roratto Carvalho (00160094)
  # disciplina - INF01147 - Compiladores - Prof. Lucas Schnorr


etapa4: ast parser scanner  main
	gcc AST.o lex.yy.o parser.tab.o main.o -o etapa4 -lfl

mac: ast parser scanner main
	gcc AST.o lex.yy.o parser.tab.o main.o -o etapa4 -ll
	./etapa3


parser:
	bison -d parser.y 
	gcc -c parser.tab.c

scanner:
	flex scanner.l
	gcc -c lex.yy.c
	
ast:
	gcc -c AST.c
	
main:
	gcc -c main.c

report:
	gcc -d parser.y --report=all -Wcounterexamples 
	
test:
	clear
	make clean
	gcc -c -g AST.c -Wall
	bison -d parser.y 
	gcc -c -g parser.tab.c -Wall
	flex scanner.l
	gcc -c -g lex.yy.c -Wall
	gcc -c -g main.c -Wall
	gcc AST.o lex.yy.o parser.tab.o main.o -o etapa4 -lfl -v
	gdb ./etapa4
	
	
clean:
	rm etapa4 -f lex.yy.c lex.yy.o main.o parser.tab.c parser.tab.o AST.o
	
run: etapa4
	 ./etapa4
	 
zip:
	tar -cvzf etapa4.tgz scanner.l main.c parser.y Makefile AST.c AST.h hash.c


