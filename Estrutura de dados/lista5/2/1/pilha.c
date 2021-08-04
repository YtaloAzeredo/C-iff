#include"pilha.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
}tipo_no;

typedef struct reg_pilha{
    tipo_no *topo;
    int quantidadeElementos;
}tipo_pilha;


tipo_pilha *criarPilhaVazia(){
    tipo_pilha* pilha = (tipo_pilha*) malloc(sizeof(tipo_pilha));
    pilha->topo = NULL;
    pilha->quantidadeElementos = 0;
    return pilha;
}

int pilhaVazia(tipo_pilha *pilha){
    if(pilha->quantidadeElementos == 0) return 0;
    else return 1;
}

int quantidadeElementosPilha(tipo_pilha *pilha){
    return pilha->quantidadeElementos;
}

tipo_pilha *excluirPilha(tipo_pilha *pilha){
    tipo_no *auxiliar;

    while(!pilhaVazia(pilha)){
        auxiliar = pilha->topo;
        pilha->topo = pilha->topo->proximo;
        free(auxiliar);
    }
    free(pilha);
    return NULL;
}

int* obterElementos(tipo_pilha *pilha){
    tipo_no *atual = pilha->topo;
    int *elementosImpressos, posicao;

    elementosImpressos = (int*) malloc(pilha->quantidadeElementos * sizeof(int)); //criando vetor

    posicao = 0;
    while(atual != NULL){
        elementosImpressos[posicao] = atual->dado;
        atual = atual->proximo;
        posicao++;
    }

    return elementosImpressos;
}


int inserirNoTopo(tipo_pilha *pilha, int dado){
    tipo_no *novo = NULL;

    novo = (tipo_no*) malloc(sizeof(int));
    novo->dado = dado;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
    pilha->quantidadeElementos++;

}

void excluirNoTopo(tipo_pilha *pilha){
    tipo_no *auxiliar;


    auxiliar = pilha->topo;
    pilha->topo = pilha->topo->proximo;
    free(auxiliar);
    pilha->quantidadeElementos--;


}

