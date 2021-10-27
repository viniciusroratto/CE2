/* GRUPO Y
Nomes: Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr
*/

#ifndef AST
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


extern void *arvore;

typedef struct Nodo {

 	struct Nodo * children;
 	struct Nodo * sibling;
 	
} Nodo; 

Nodo * criaIrmao(Nodo * primeiro, int irmaos,  Nodo * data[], int n);
Nodo * criaNodo (Nodo * data[], int filhos);
void imprime (void *arvore);
void exporta (void *arvore);
void libera (void *arvore);

#endif // AST

