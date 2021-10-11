/* GRUPO F
Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr
*/


#include <stdio.h>
#include <stdbool.h>

extern void *arvore;


union Valor {
	int i;
	float f;
	char c;
	char* s;
	bool b;
} Valor;

typedef struct LexVal {
	int linha;
	int tipo;
 	union Valor val;
} LexVal;

/* O grupo entende que a solucao para arvore longe do modelo ideal para resolver este problema, o grupo pensou em uma arvore binaria com nodos filhos e nodos irmaos, 
que conseguiria representar uma arvore N, no entanto esbarramos em desafios de implementacao
como ter que enviar sempre quantidades diferentes de valores. Isso poderia ser resolvido com estruturas de dados de alto nivel em C++ como listas e vetores, no entanto nao conseguimos resolver a tempo.
*/
typedef struct Nodo {

	struct LexVal *val;
 	
 	struct Nodo *f1;
 	struct Nodo *f2;
 	struct Nodo *f3;
 	struct Nodo *f4;
 	struct Nodo *f5;
 	
} Nodo; 

Nodo * criaNodo (LexVal *val, Nodo * n1, Nodo * n2, Nodo * n3, Nodo * n4, Nodo * n5){

	Nodo* novo = (Nodo*) calloc(1, sizeof(Nodo));
	
	novo->val = val;
	novo->f1 = n1;
	novo->f2 = n2;
	novo->f3 = n3;
	novo->f4 = n4;
	novo->f5 = n5;

	return novo;
}

void imprime (Nodo *newthree){
	if (newthree != NULL){
		//printf("%p [label=\"Linha\"] \n"); //imprime o endereço de memoria; 
		//printf("%p [label=\"Tipo\"] \n");
		imprime (newthree->f1);
		imprime (newthree->f2);
		imprime (newthree->f3);
		imprime (newthree->f4);
		imprime (newthree->f5); }
}

void exporta (Nodo *newthree){
	FILE *file = fopen("saida", "w");
	if (newthree != NULL){
		//fprintf (file,"%p [label=\"Linha\"] \n"); //imprime o endereço de memoria;
		//fprintf (file,"%p [label=\"Tipo\"] \n");
		exporta (newthree->f1);
		exporta (newthree->f2); 
		exporta (newthree->f3);
		exporta (newthree->f4);
		exporta (newthree->f5);
		
		}
	fclose (file);
}


void libera (Nodo * newthree)
{
	
	if (arvore != NULL)
	{	free(newthree);
		libera(newthree->f1);
		libera(newthree->f2);
		libera(newthree->f3);
		libera(newthree->f4);
		libera(newthree->f5);	
	} 

}
