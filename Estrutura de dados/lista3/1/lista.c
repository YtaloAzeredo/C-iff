#include"lista.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
}tipo_no;


// Inicio
tipo_no *inserirNoInicio(tipo_no *inicio, int dado){
    tipo_no *novo = NULL;

    novo = (tipo_no*) malloc(sizeof(tipo_no));
    novo->dado = dado;
    novo->proximo = inicio;
    inicio = novo;

    return inicio;
}

tipo_no *excluirNoInicio(tipo_no *inicio){
    tipo_no *auxiliar;

    auxiliar = inicio;
    inicio = inicio->proximo;
    free(auxiliar);

    return inicio;
}

//Fim
tipo_no *inserirNoFim(tipo_no *inicio, int dado){
    tipo_no *novo, *atual = inicio;

    novo = (tipo_no*) malloc(sizeof(tipo_no));
    novo->dado = dado;
    novo->proximo = NULL;

    if(inicio != NULL){
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }else {
        inicio = novo;
    }

    return inicio;
}

tipo_no *excluirNoFim(tipo_no *inicio){
    tipo_no *anterior, *atual = inicio;

    if(inicio != NULL){
        while(atual->proximo != NULL){
            anterior = atual;
            atual = atual->proximo;
        }
        free(atual);
        if(anterior != NULL){
            anterior->proximo = NULL;
        }else {
            inicio = NULL;
        }
    }

    return inicio;
}


//Outros
tipo_no *excluirLista(tipo_no *inicio){
    tipo_no *auxiliar;

    while(inicio != NULL){
        auxiliar = inicio;
        inicio = inicio->proximo;
        free(auxiliar);
    }
    
    return inicio;
}


void imprimirLista(tipo_no *inicio){
    tipo_no *atual = inicio;

    if(inicio != NULL){
        while(atual != NULL){
            printf("%d ", atual->dado);
            atual = atual->proximo;
        }
    }else printf("\n -- Lista Vazia -- \n");
   
}