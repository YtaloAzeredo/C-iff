#include<stdlib.h>

typedef struct no
{
    int dado;
    struct no *proximo;
} tipo_no;

typedef struct reg_lista
{
    tipo_no *inicio;
    int quantidadeElementos;
} tipo_lista;

tipo_lista* criarListaVazia()
{
    tipo_lista* lista = (tipo_lista*) malloc(sizeof(tipo_lista));
    lista->inicio = NULL;
    lista->quantidadeElementos = 0;
    return lista;
}

int listaVazia(tipo_lista* lista)
{
    if (lista->quantidadeElementos == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int quantidadeElementosLista(tipo_lista* lista)
{
    return lista->quantidadeElementos;
}

tipo_lista* excluirLista(tipo_lista* lista)
{
    tipo_no *auxiliar;

    while (!listaVazia(lista))
    {
        auxiliar = lista->inicio;
        lista->inicio = lista->inicio->proximo;
        free(auxiliar);
    }
    free(lista);
    return NULL;
}

void inserirElementoOrdenado(tipo_lista* lista, int dado)
{
    tipo_no *novo, *atual = lista->inicio, *anterior = NULL;

    novo = (tipo_no*) malloc(sizeof(tipo_no));
    novo->dado = dado;

    if (lista->inicio == NULL)
    {
        novo->proximo = NULL;
        lista->inicio = novo;
    }
    else
    {
        while ((atual != NULL) && (atual->dado < dado))
        {
            anterior = atual;
            atual = atual->proximo;
        }
        if (anterior == NULL)
        {
            novo->proximo = lista->inicio;
            lista->inicio = novo;
        }
        else
        {
            anterior->proximo = novo;
            novo->proximo = atual;
        }
    }
    lista->quantidadeElementos++;
}

int* obterElementos(tipo_lista* lista)
{
    tipo_no *atual = lista->inicio;
    int *elementosImpressos, posicao;

    elementosImpressos = (int*) malloc(lista->quantidadeElementos * sizeof(int));

    posicao = 0;
    while (atual != NULL)
    {
        elementosImpressos[posicao] = atual->dado;
        atual = atual->proximo;
        posicao++;
    }
    return elementosImpressos;
}

int excluirElementoOrdenado(tipo_lista* lista, int dado)
{
    tipo_no *anterior = NULL, *atual = lista->inicio;

    while ((atual != NULL) && (atual->dado != dado))
    {
        anterior = atual;
        atual = atual->proximo;
    }
    if (atual->dado == dado)
    {
        if (anterior == NULL)
        {
            lista->inicio = atual->proximo;
        }
        else
        {
            anterior->proximo = atual->proximo;
        }
        free(atual);
        lista->quantidadeElementos--;
        return 1;
    }
    else
    {
        return 0;
    }
}
int verificarProfundidade(tipo_lista *lista, int dado){
    
    int *vetor, i;

    vetor=obterElementos(lista);

    for(i=0;i<lista->quantidadeElementos;i++){
        if(vetor[i]==dado)
           return i+1;
     }
     return 0;
}
float calcularMedia(tipo_lista *lista){

      int *vetor, i;
      float media,soma=0;

      vetor=obterElementos(lista);

      for(i=0;i<lista->quantidadeElementos;i++)
          soma+=vetor[i];

      media=soma/lista->quantidadeElementos;
      
      return media;
}

int compararListas(tipo_lista *lista1, tipo_lista *lista2){

    tipo_no *atualLista1 = lista1->inicio, *atualLista2 = lista2->inicio;


    while ((atualLista1 != NULL) && (atualLista2 !=NULL))  //loop para quando uma das listas chegarem em null ou as duas chegarem em null
        {
           if(lista1->inicio->dado!=lista2->inicio->dado){          //se o elememento da lista 1 for diferente do elemento da lista 2, retorna 0
               return 0;
            } 
               atualLista1 = atualLista1->proximo;                 //se o elemento for igual o loop continua
               atualLista2 = atualLista2->proximo;
        }
       
      if((atualLista1 == NULL) && (atualLista2 ==NULL))         //só retorna 1 se as duas listas chegarem em null
          return 1;


   return 0;
}