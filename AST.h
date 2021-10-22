/* GRUPO F
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

Nodo * criaIrmao(Nodo * primeiro, int irmaos,  Nodo * data[], int n){
	primeiro = data[n]; n++;
	printf("IRMAO AST\n");
	if (n >= irmaos){
		primeiro->sibling = (Nodo*) calloc(1, sizeof(Nodo));
		primeiro->sibling = criaIrmao (primeiro->sibling, irmaos, data, n);
		return primeiro;
	}
	else{
		return NULL;
	}
	;
}

Nodo * criaNodo (Nodo * data[], int filhos){
    int n = 0;
	Nodo * novo = (Nodo*) calloc(1, sizeof(Nodo));
	printf("AST\n");
	if (filhos > 0){
		printf("FILHO\n");
		novo->children = (Nodo*) calloc(1, sizeof(Nodo));
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
	printf("Printing\n");
	Nodo * arv = arvore;
	if (arvore != NULL){
		imprime (arv->children);
		printf("%p [label=\"%s\"] \n", arv, arv); //imprime o endereço de memoria; 
		imprime (arv->sibling);
		printf("%p [label=\"Tipo\"] \n");
	}
}


void exporta (void *arvore){
	printf("Exporting\n");
	Nodo * newthree = arvore;
	FILE *file = fopen("saida.txt", "wa");
	if (newthree != NULL){
		fprintf (file,"%p [label=\"%s\"] \n", newthree, newthree);
		exporta (newthree->children);
		printf (file,"%p [label=\"%s\"] \n", newthree, newthree); //imprime o endereço de memoria;
		exporta (newthree->sibling); 
		}
	fclose (file); 
}


void libera (void *arvore)
{
	Nodo * arv = arvore; 
	if (arv != NULL)
	{	
		libera(arv->children);
		free(arv);
		libera(arv->sibling);
		free(arv);
	} 

}

#endif // AST

