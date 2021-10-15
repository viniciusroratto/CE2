/* GRUPO F
Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr
*/

#ifndef AST
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

extern void *arvore;


union LexVal {
	int linha;
	int tipo;
 	union Valor *val;
} LexVal;

union Valor {
	int i;
	float f;
	char c;
	char* s;
	bool b;
} Valor;


typedef struct Nodo {

 	struct Nodo * children;
 	struct Nodo * sibling;
 	
} Nodo; 

Nodo * criaIrmao(Nodo * primeiro, int irmaos,  Nodo * data[], int n){
	primeiro = data[n]; n++;
	if (n <= irmaos){
		primeiro->sibling = criaIrmao (primeiro->sibling, irmaos, data, n);
	}
	return primeiro;
}

Nodo * criaNodo (Nodo * data[], int filhos){
    int n = 0;
	Nodo * novo = (Nodo*) calloc(1, sizeof(Nodo));
	if (filhos > 0){
		novo->children = data[n]; n++;
		if (filhos > 1){
				novo->children->sibling = criaIrmao (novo->children->sibling, filhos, data, n);
		}
	}
	return novo;
}


void exporta (void *arvore);
void libera (void *arvore);


void imprime (void *arvore){
	printf("Test");
	//if (arvore != NULL){
	//	imprime (arvore->children);
//printf("%p [label=\"Linha\"] \n"); //imprime o endereço de memoria; 
	//	imprime (arvore->sibling);
//printf("%p [label=\"Tipo\"] \n");
	//}
}


void exporta (void *arvore){
	printf("Test");
	/*FILE *file = fopen("saida", "w");
	if (newthree != NULL){
		//fprintf (file,"%p [label=\"Tipo\"] \n");
		exporta (newthree->children);
		//fprintf (file,"%p [label=\"Linha\"] \n"); //imprime o endereço de memoria;
		exporta (newthree->sibling); 
		}
	fclose (file); */
}


void libera (void *arvore)
{
	printf("Test");
	/*
	if (arvore != NULL)
	{	free(newthree);
		libera(newthree->children);
		libera(newthree->sibling);
	} */

}

#endif // AST

