#include<stdlib.h>
#include <stdio.h>

typedef struct reg_no_arvore
{
    struct reg_no_arvore *ptrEsquerda;
    int info;
    struct reg_no_arvore *ptrDireita;
}tipo_no_arvore;


tipo_no_arvore* cria_arvore(){
  tipo_no_arvore *raiz = (tipo_no_arvore*) malloc(sizeof(tipo_no_arvore));
  if(raiz != NULL){
    *raiz = NULL;
  }

  return raiz;
}





void percurso_em_ordem_recursivo(tipo_no_arvore *sub_raiz)
{
    if (sub_raiz != NULL)
    {
        percurso_em_ordem_recursivo(sub_raiz->ptrEsquerda);
        printf("%d ", sub_raiz->info);
        percurso_em_ordem_recursivo(sub_raiz->ptrDireita);
    }
}

void percurso_em_ordem_iterativo(tipo_no_arvore *sub_raiz, tipo_pilha* pilha)
{
    printf("\n\n");
    while ((sub_raiz != NULL) || (!pilhaVazia(pilha)))
    {
        if (sub_raiz != NULL)
        {
            empilhar(pilha, sub_raiz);
            sub_raiz = sub_raiz->ptrEsquerda;
        }
        else
        {
            sub_raiz = desempilhar(pilha);
            printf("%d ", sub_raiz->info);
            sub_raiz = sub_raiz->ptrDireita;
        }
    }
}

int quantidadeElementosPilha(tipo_pilha* pilha)
{
    return pilha->quantidadeElementos;
}

tipo_pilha* apagarPilha(tipo_pilha* pilha)
{
    tipo_no *auxiliar;

    while (!pilhaVazia(pilha))
    {
        auxiliar = pilha->inicio;
        pilha->inicio = pilha->inicio->proximo;
        free(auxiliar);
        pilha->quantidadeElementos--;
    }
    free(pilha);
    return NULL;
}



int menor(tipo_no_arvore *sub_raiz){

  if((sub_raiz->ptrEsquerda) && (sub_raiz->ptrEsquerda->info < sub_raiz->info)){
    return menor(sub_raiz->ptrEsquerda);
  }
  else
    return sub_raiz->info;


}

int soma (tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    //cada chamada na função é para um lado e assim chama de novo e vai direita esquerda até acabar.
    return sub_raiz->info + soma(sub_raiz->ptrEsquerda) + soma(sub_raiz->ptrDireita);
  }
  else
    return 0;
}

int numero_nos(tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    return 1 + numero_nos(sub_raiz->ptrEsquerda) + numero_nos(sub_raiz->ptrDireita);
  }
  else
    return 0;
}

int media(tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    return soma(sub_raiz)/numero_nos(sub_raiz);
  }
  else
    return 0;
}

int qtdFolha(tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    if((!sub_raiz->ptrEsquerda) && (!sub_raiz->ptrDireita)){
      return 1 + qtdFolha(sub_raiz->ptrEsquerda) + qtdFolha(sub_raiz->ptrDireita);
    }
    else
      return 0 + qtdFolha(sub_raiz->ptrEsquerda) + qtdFolha(sub_raiz->ptrDireita);
  }
  else
    return 0;
}

int qtdNull(tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    return 0 + qtdNull(sub_raiz->ptrEsquerda) + qtdNull(sub_raiz->ptrDireita);
  }
  else
    return 1;
}
//Soma o no atual com o maior da esquerda ou direita
//Vai descendo na arvore e retornando 1 toda vez que for "subindo" de volta
int alturaArvore(tipo_no_arvore *sub_raiz){
  if(sub_raiz){

    if(alturaArvore(sub_raiz->ptrEsquerda) > alturaArvore(sub_raiz->ptrDireita)){

      return 1 + alturaArvore(sub_raiz->ptrEsquerda);
    }
    else
      return 1 + alturaArvore(sub_raiz->ptrDireita);
  }
  else
    return 0;
}

int multiploTres(tipo_no_arvore *sub_raiz){
  if(sub_raiz){
    if(sub_raiz->info % 3 == 0){
      return 1 + multiploTres(sub_raiz->ptrEsquerda) + multiploTres(sub_raiz->ptrDireita);
    }
    else
    return 0 + multiploTres(sub_raiz->ptrEsquerda) + multiploTres(sub_raiz->ptrDireita);
  }
  else
    return 0;
}



int numComparacoes(tipo_no_arvore *sub_raiz, int dado){

  if(sub_raiz){
    if(sub_raiz->info > dado){
      return 1 + numComparacoes(sub_raiz->ptrEsquerda, dado);
    }
    else{
      return 1 + numComparacoes(sub_raiz->ptrDireita, dado);
    }
  }
  else
    return 0;
}

int numero_comparacoes(tipo_no_arvore *sub_raiz, int info)
{
    if (sub_raiz == NULL)
    {
        return 0;
    }
    else
    {
        if (info == sub_raiz->info)
        {
            return + 1;
        }
        else
        {
            if (info < sub_raiz->info)
            {
                return 1 + numero_comparacoes(sub_raiz->ptrEsquerda, info);
            }
            else
            {
                if (info > sub_raiz->info)
                {
                    return 1 + numero_comparacoes(sub_raiz->ptrDireita, info);
                }
            }
        }
    }
    return 0;
}
