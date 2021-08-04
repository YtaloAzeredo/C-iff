#include<stdlib.h>
#include<stdio.h>
#include"lista.h"
#include<string.h>
#include<stdbool.h>

typedef struct no{
    char dado[TAM];
    struct no *proximo;
}tipo_no;

tipo_no *incluir(tipo_no *inicio, char nome[TAM]){
    tipo_no *novo = NULL, *atual = inicio, *anterior = NULL;

    novo = (tipo_no*) malloc(sizeof(tipo_no));
    strcpy(novo->dado, nome);

    if(inicio == NULL){
        novo->proximo = NULL;
        inicio = novo;
    }else {
        while((atual != NULL) && (strcmp(atual->dado, nome) < 0)){
            anterior = atual;
            atual = atual->proximo;
        }
        if(anterior == NULL){
            novo->proximo = inicio;
            inicio = novo;
        }else{
            anterior->proximo = novo;
            novo->proximo = atual;
        }
    }

    return inicio;
}

tipo_no *excluir(tipo_no *inicio, char nome[TAM]){
    tipo_no *atual = inicio, *anterior = NULL;

    if(inicio != NULL){
        while((atual != NULL) && (strcmp(atual->dado, nome) != 0)){
            anterior = atual;
            atual = atual->proximo;
        }
        if(anterior == NULL){
            inicio = atual->proximo;
        }else{
            anterior->proximo = atual->proximo;
        }
        free(atual);
    }

    return inicio;
}

int buscar(tipo_no *inicio, char nome[TAM]){
    int posicao = 0, posicaoEncontrada = -1;

    while (inicio != NULL){
        if(strcmp(inicio->dado, nome) == 0){
            posicaoEncontrada = posicao;
        }
        posicao++;
        inicio = inicio->proximo;
    }

    return posicaoEncontrada;
}

tipo_no *limparLista(tipo_no *inicio){
    tipo_no *auxiliar = NULL;
    while (inicio != NULL){
        auxiliar = inicio;
        inicio = inicio->proximo;
        free(auxiliar);
    }

    return inicio;
    
}

void imprimir(tipo_no *inicio){
    if(inicio != NULL){
        while(inicio != NULL){
            printf("%s ", inicio->dado);
            inicio = inicio->proximo;
        }
    }else printf("\nLista Vazia\n");
}