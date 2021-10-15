  # GRUPO F
  # Nomes - Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (00160094)
  # disciplina - INF01147 - Compiladores - Prof. Lucas Schnorr


etapa3: parser scanner AST.o main.o 
	gcc lex.yy.o parser.tab.o main.o -o etapa2 -lfl


parser:
	bison -d parser.y 
	gcc -c parser.tab.c

scanner:
	flex scanner.l
	gcc -c lex.yy.c
	
AST.o:
	gcc -c ast.h
	
main.o:
	gcc -c main.c

report:
	gcc -d parser.y --report=all -Wcounterexamples 
	
clean:
	rm etapa3 -f lex.yy.c lex.yy.o main.o parser.tab.c parser.tab.o
	
run: etapa3
	 ./etapa3
	 
zip:
	tar -cvzf etapa3.tgz scanner.l main.c parser.y Makefile AST.h


