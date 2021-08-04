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
    tipo_no *fim;
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



//Fim
void inserirNoFim(tipo_lista *lista, int dado){
    tipo_no *novo, *atual = lista->inicio;

    novo = (tipo_no*) malloc(sizeof(int));
    novo->dado = dado;
    novo->proximo = NULL;

    if(lista->inicio != NULL){
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = novo;
        lista->fim = novo;
    }else {
        lista->inicio = novo;
    }
    lista->quantidadeElementos++;
}

void excluirNoFim(tipo_lista *lista){
    tipo_no *anterior, *atual = lista->inicio;

    if(lista->inicio != NULL){
        while(atual->proximo != NULL){
            anterior = atual;
            atual = atual->proximo;
        }
        free(atual);
        if(anterior != NULL){
            anterior->proximo = NULL;
        }else {
            lista->inicio = NULL;
        }
        lista->quantidadeElementos--;
    }
}

tipo_lista *apagarElementosIguais(tipo_lista *lista, int dado){

    tipo_no * anterior = NULL , * atual = lista->inicio,*auxiliar ;
      
    if( lista->inicio != NULL )          
      {
   
	   while( atual != NULL )
            {      
               if(atual->dado!=dado){ 
	              anterior = atual ;              
	              atual = atual-> proximo ;
               }
                else{
                        if (anterior == NULL)
                        {
                             lista->inicio= atual->proximo;
                        }
                        else
                            {
                                anterior->proximo = atual->proximo ;
                            }
                        auxiliar = atual ;
                        atual=atual->proximo;
                        free ( auxiliar );
                        lista->quantidadeElementos--;
                }
                   
         }
     }
}



