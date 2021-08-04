#include<stdlib.h>
#include <stdio.h>

typedef struct reg_no_arvore
{
    struct reg_no_arvore *ptrEsquerda;
    int chave;
    struct reg_no_arvore *ptrDireita;
}tipo_no_arvore;

typedef struct no
{
    tipo_no_arvore *dado;
    struct no *proximo;
} tipo_no;

typedef struct reg_pilha
{
    tipo_no *inicio;
    int quantidadeElementos;
} tipo_pilha;

tipo_pilha* criarPilhaVazia()
{
    tipo_pilha* pilha = (tipo_pilha*) malloc(sizeof(tipo_pilha));
    pilha->inicio = NULL;
    pilha->quantidadeElementos = 0;
    return pilha;
}

int pilhaVazia(tipo_pilha* pilha)
{
    if (pilha->quantidadeElementos == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void empilhar (tipo_pilha* pilha, tipo_no_arvore* dado)
{
    tipo_no *novo;

    novo = (tipo_no*) malloc(sizeof(tipo_no));
    novo->dado = dado;
    novo->proximo = pilha->inicio;
    pilha->inicio = novo;
    pilha->quantidadeElementos++;
}

tipo_no_arvore* desempilhar (tipo_pilha* pilha)
{
    tipo_no *auxiliar;
    tipo_no_arvore *dado;

    if (pilha->inicio != NULL)
    {
        dado = pilha->inicio->dado;
        auxiliar = pilha->inicio;
        pilha->inicio = pilha->inicio->proximo;
        free(auxiliar);
        pilha->quantidadeElementos--;
        return dado;
    }
    return NULL;
}

void incluir_no_arvore(tipo_no_arvore **sub_raiz, int chave)
{
    if (*sub_raiz == NULL)
    {
        *sub_raiz = malloc(sizeof(tipo_no_arvore));
        (*sub_raiz)->chave = chave;
        (*sub_raiz)->ptrEsquerda = NULL;
        (*sub_raiz)->ptrDireita = NULL;
    }
    else
    {
        if (chave < (*sub_raiz)->chave)
        {
            incluir_no_arvore(&((*sub_raiz)->ptrEsquerda), chave);
        }
        else
        {
            if (chave > (*sub_raiz)->chave)
            {
                incluir_no_arvore(&((*sub_raiz)->ptrDireita), chave);
            }
        }
    }
}

void percurso_em_ordem_recursivo(tipo_no_arvore *sub_raiz)
{
    if (sub_raiz != NULL)
    {
        percurso_em_ordem_recursivo(sub_raiz->ptrEsquerda);
        printf("%d ", sub_raiz->chave);
        percurso_em_ordem_recursivo(sub_raiz->ptrDireita);
    }
}

void copiar_arvore(tipo_no_arvore *sub_raiz, tipo_no_arvore **sub_raiz1){
  
  if(sub_raiz){
    incluir_no_arvore(sub_raiz1, sub_raiz->chave);
    copiar_arvore(sub_raiz->ptrDireita, sub_raiz1);
    copiar_arvore(sub_raiz->ptrEsquerda, sub_raiz1);
  }
}
