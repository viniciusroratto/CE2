/* GRUPO Y
Nomes: Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr
*/

#ifndef AST
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "AST.h"


Nodo * criaIrmao(Nodo * primeiro, int irmaos,  Nodo * data[], int n){
	
	primeiro = data[n]; n++;

	if (n != irmaos){
		primeiro->sibling = (Nodo*) calloc(1, sizeof(Nodo));
		primeiro->sibling = NULL;
		primeiro->children = NULL;
		primeiro->sibling = criaIrmao (primeiro->sibling, irmaos, data, n);
		return primeiro;
	}
	else{
		return primeiro;
	}
	;
}

Nodo * criaNodo (Nodo * data[], int filhos){
    	int n = 0;
	Nodo* novo = (Nodo*) calloc(1, sizeof(Nodo));
	novo->children = NULL;
	novo->sibling = NULL;
	//printf("AST\n");
	if (filhos > 0){
		//printf("FILHO\n");
		
		novo->children = data[n]; n++;
		novo->children->children = NULL;
		novo->children->sibling = NULL;
		if (filhos > 1){
			novo->children->sibling = criaIrmao (novo->children->sibling, filhos, data, n);
		}
	}
	return novo;
}


void exporta (void *arvore);
void libera (void *arvore);


void imprime (void *arvore){

	Nodo * arv = arvore;
	if (arv != NULL){
		//printf("PRINT\n");
		imprime (arv->children);
		printf("%p [label=\"%p\"] \n", arv, arv); //imprime o endereço de memoria; 
		imprime (arv->sibling);
	}
}


void exporta (void *arvore){
	//printf("Exporting\n");
	struct Nodo * newthree = arvore;
	FILE *file = fopen("saida.txt", "wa");
	//printf("Nodo %p | filho: ",newthree, newthree->children);
	
	if (newthree != 0x0){
		//fprintf (file,"%p [label=\"%s\"] \n", newthree, newthree);
		exporta (newthree->children);
		printf (file,"%p [label=\"%s\"] \n", newthree, newthree);
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
		libera(arv->sibling);
		free(arv);
	} 

}

#endif // AST

