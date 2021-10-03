/* GRUPO F
Nomes: Tatiana Pacheco de Almeida (252561) - Vinícius Roratto Carvalho (160094)
Disciplina: INF01147 - Compiladores - Prof. Lucas Schnorr
*/


#include <stdio.h>

union Valor {
	int i;
	float f;
	char c;
	char* s;
	bool b;
} Valor;

struct LexVal {
	int linha;
	int tipo;
 	union Valor val;
} LexVal;

/* O grupo entende que a solucao para arvore longe do modelo ideal para resolver este problema, o grupo pensou em uma arvore binaria com nodos filhos e nodos irmaos, 
que conseguiria representar uma arvore N, no entanto esbarramos em desafios de implementacao
como ter que enviar sempre quantidades diferentes de valores.
Isso poderia ser resolvido com estruturas de dados de alto nivel em C++ como listas e vetores, no entanto nao conseguimos resolver a tempo.
*/
struct Nodo {

	struct LexVal *val;
 	
 	struct Nodo *f1
 	struct Nodo *f2
 	struct Nodo *f3
 	struct Nodo *f4
 	struct Nodo *f5
 	
} Nodo; 

Nodo * criaNodo (LexVal *val, Nodo * n1, Nodo * n2, Nodo * n3, Nodo * n4, Nodo * n5){

	Nodo* novo = (Nodo*) calloc(1, sizeof(nodo));
	struct LexVal *val = *val;
	
	novo->f1 = n1;
	novo->f2 = n2;
	novo->f3 = n3;
	novo->f4 = n4;
	novo->f5 = n5;

	return novo;
}

void imprime (void *arvore){
	if (arvore != NULL){
		printf("%p [label=\"Linha\"] \n"); //imprime o endereço de memoria; 
		printf("%p [label=\"Tipo\"] \n");
		imprime (arvore->f1);
		imprime (arvore->f2);
		imprime (arvore->f3);
		imprime (arvore->f4);
		imprime (arvore->f5); }
}

void exporta (void *arvore){
	FILE *file = fopen("saida", "w");
	if (arvore != NULL){
		fprintf (file,"%p [label=\"Linha\"] \n"); //imprime o endereço de memoria;
		fprintf (file,"%p [label=\"Tipo\"] \n");
		exporta (arvore->f1);
		exporta (arvore->f2); 
		exporta (arvore->f3);
		exporta (arvore->f4);
		exporta (arvore->f5);
		
		}
	fclose (file);
}


void libera (void *arvore)
{
	
	if (arvore != NULL)
	{	free(arvore)
		libera(arvore->f1);
		libera(arvore->f2);
		libera(arvore->f3);
		libera(arvore->f4);
		libera(arvore->f5);	
	} 

}
