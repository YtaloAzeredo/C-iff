#include"lista.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct no{
    int dado;
    struct no *proximo;
}tipo_no;

typedef struct reg_lista{
    tipo_no *inicio;
    int quantidadeElementos;
}tipo_lista;


tipo_lista *criarListaVazia(){
    tipo_lista* lista = (tipo_lista*) malloc(sizeof(tipo_lista));
    lista->inicio = NULL;
    lista->quantidadeElementos = 0;
    return lista;
}

int listaVazia(tipo_lista *lista){
    if(lista->quantidadeElementos == 0) return 0;
    else return 1;
}

int quantidadeElementosLista(tipo_lista *lista){
    return lista->quantidadeElementos;
}


void inserirNoInicio(tipo_lista *lista, int dado){
    tipo_no *novo = NULL;

    
    novo = (tipo_no*) malloc(sizeof(int));
    novo->dado = dado;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->quantidadeElementos++;

}

void excluirNoInicio(tipo_lista *lista){
    tipo_no *auxiliar;

    auxiliar = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    free(auxiliar);
    lista->quantidadeElementos--;
}

tipo_lista *excluirLista(tipo_lista *lista){
    tipo_no *auxiliar;

    while(!listaVazia(lista)){
        auxiliar = lista->inicio;
        lista->inicio = lista->inicio->proximo;
        free(auxiliar);
    }
    free(lista);
    return NULL;
}

int* obterElementos(tipo_lista *lista){
    tipo_no *atual = lista->inicio;
    int *elementosImpressos, posicao;

    elementosImpressos = (int*) malloc(lista->quantidadeElementos * sizeof(int));

    posicao = 0;
    while(atual != NULL){
        elementosImpressos[posicao] = atual->dado;
        atual = atual->proximo;
        posicao++;
    }

    return elementosImpressos;
}


tipo_lista *concatenarLista(tipo_lista *lista1, tipo_lista *lista2){
    tipo_no *atual = lista1->inicio;

    if( atual != NULL )           //se a lista nao estiver vazia
	  {
		  while (atual->proximo != NULL ) 
		  {
		 	  atual = atual-> proximo ;     //percorre ate chegar no ultimo elemento
		  }
		  atual-> proximo = lista2->inicio;           //insere o endereco da lista 2 no ultimo no
	 }
	 else{
	 	lista1->inicio = lista2->inicio ;                    
	 }   
   //lista2 = ApagarLista(lista2);
   lista1->quantidadeElementos+=lista2->quantidadeElementos;
}



