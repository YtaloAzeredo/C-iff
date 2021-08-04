#include"lista.h"
#include<stdio.h>
#include<stdlib.h>

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



int inserirNoFim(tipo_lista *lista, int dado){
    tipo_no *novo = NULL, *atual = lista->inicio;

    novo = (tipo_no*) malloc(sizeof(int));
    novo->dado = dado;
    novo->proximo = NULL;

    //verifica se nao houve nenhum problema ao alocar a memoria
    if(novo != NULL){
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
        return 1;
    }else return 0;
    
}

void excluirNoInicio(tipo_lista *lista){
    tipo_no *auxiliar;

    auxiliar = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    free(auxiliar);
    lista->quantidadeElementos--;
}

int pilhasIguais(tipo_lista *lista1, tipo_lista *lista2){
    int *dadosLista1, tamLista1, *dadosLista2, tamLista2, i, valorIgual = 0;
    tamLista1 = quantidadeElementosLista(lista1);
    tamLista2 = quantidadeElementosLista(lista2);

    if(tamLista1 == tamLista2){
        dadosLista1 = obterElementos(lista1);
        dadosLista2 = obterElementos(lista2);

        for(i = 0; i < tamLista1; i++){
            if(dadosLista1[i] == dadosLista2[i]){
                valorIgual++;
            }
        }
        if(valorIgual == tamLista1) return 1;
        else return 0;

    }else return 0;
    
}





