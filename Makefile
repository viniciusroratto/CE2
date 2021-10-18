  # GRUPO F
  # Nomes - Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (00160094)
  # disciplina - INF01147 - Compiladores - Prof. Lucas Schnorr


etapa3: ast parser scanner  main
	gcc lex.yy.o parser.tab.o main.o -o etapa3 -lfl


parser:
	bison -d parser.y 
	gcc -c parser.tab.c

scanner:
	flex scanner.l
	gcc -c lex.yy.c
	
ast:
	gcc -c AST.h
	
main:
	gcc -c main.c

report:
	gcc -d parser.y --report=all -Wcounterexamples 
	
test:
	gcc -c -g AST.h -Wall
	bison -d parser.y 
	gcc -c -g parser.tab.c -Wall
	flex scanner.l
	gcc -c -g lex.yy.c -Wall
	gcc -c -g main.c -Wall
	gcc lex.yy.o parser.tab.o main.o -o etapa3 -lfl -v
	gdb ./etapa3
	
	
clean:
	rm etapa3 -f lex.yy.c lex.yy.o main.o parser.tab.c parser.tab.o ast.o
	
run: etapa3
	 ./etapa3
	 
zip:
	tar -cvzf etapa3.tgz scanner.l main.c parser.y Makefile AST.h


