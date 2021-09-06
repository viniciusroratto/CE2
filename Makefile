  # GRUPO F
  # Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (00160094)
  # disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr


etapa2: lex.yy.o parser.tab.o main.o 
	gcc lex.yy.o parser.tab.o main.o -o etapa2 -lfl


parser.tab.o:
	bison -d parser.y --report=all
	gcc -c parser.tab.c

lex.yy.o:
	flex scanner.l
	gcc -c lex.yy.c
	
main.o:
	gcc -c main.c

report:
	bison -d parser.y --report=all -v
	
clean:
	rm etapa1 -f lex.yy.c lex.yy.o main.o
	
run: etapa2
	 ./etapa2
	 
zip:
	tar -cvzf etapa1.tgz scanner.l main.c tokens.h Makefile testes.txt


