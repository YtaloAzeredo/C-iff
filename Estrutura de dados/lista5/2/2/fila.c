#include"fila.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
}tipo_no;

typedef struct reg_fila{
    tipo_no *inicio;
    tipo_no *fim;
    int quantidadeElementos;
}tipo_fila;


tipo_fila *criarFilaVazia(){
    tipo_fila* fila = (tipo_fila*) malloc(sizeof(tipo_fila));
    fila->inicio = NULL;
    fila->quantidadeElementos = 0;
    return fila;
}

int filaVazia(tipo_fila *fila){
    if(fila->quantidadeElementos == 0) return 0;
    else return 1;
}

int quantidadeElementosFila(tipo_fila *fila){
    return fila->quantidadeElementos;
}

tipo_fila *excluirFila(tipo_fila *fila){
    tipo_no *auxiliar;

    while(!filaVazia(fila)){
        auxiliar = fila->inicio;
        fila->inicio = fila->inicio->proximo;
        free(auxiliar);
    }
    free(fila);
    return NULL;
}

int* obterElementos(tipo_fila *fila){
    tipo_no *atual = fila->inicio;
    int *elementosImpressos, posicao;

    elementosImpressos = (int*) malloc(fila->quantidadeElementos * sizeof(int));

    posicao = 0;
    while(atual != NULL){
        elementosImpressos[posicao] = atual->dado;
        atual = atual->proximo;
        posicao++;
    }

    return elementosImpressos;
}



int inserirNoFim(tipo_fila *fila, int dado){
    tipo_no *novo = NULL, *atual = fila->inicio;

    novo = (tipo_no*) malloc(sizeof(int));
    novo->dado = dado;
    novo->proximo = NULL;

    //verifica se nao houve nenhum problema ao alocar a memoria
    if(novo != NULL){
        if(fila->inicio != NULL){
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = novo;
        fila->fim = novo;
        }
        else {
            fila->inicio = novo;
        }
        fila->quantidadeElementos++;
        return 1;
    }else return 0;
    
}

void excluirNoInicio(tipo_fila *fila){
    tipo_no *auxiliar;

    auxiliar = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    free(auxiliar);
    fila->quantidadeElementos--;
}





