  # GRUPO F
  # Nomes - Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (00160094)
  # disciplina - INF01147 - Compiladores - Prof. Lucas Schnorr


etapa2: parser.tab.o lex.yy.o main.o 
	gcc lex.yy.o parser.tab.o main.o -o etapa2 -lfl


parser.tab.o:
	bison -d parser.y -Wall
	gcc -c parser.tab.c

lex.yy.o:
	flex scanner.l
	gcc -c lex.yy.c
	
main.o:
	gcc -c main.c

report:
	bison -d parser.y --report=all -Wcounterexamples
	
clean:
	rm etapa2 -f lex.yy.c lex.yy.o main.o parser.tab.c parser.tab.o
	
run: etapa2
	 ./etapa2
	 
zip:
	tar -cvzf etapa2.tgz scanner.l main.c parser.y Makefile


