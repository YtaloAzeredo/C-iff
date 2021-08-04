#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no{
  int dado;
  struct no *proximo;
}tipo_no;

tipo_no *inicio = NULL, *novo = NULL, *atual = NULL, *auxiliar = NULL;

int IncluirElementos(int dado){
  dado = rand() % 100 + 1;
  novo = (tipo_no*) malloc(sizeof(tipo_no));
  novo->dado = dado;
  novo->proximo = inicio;
  inicio = novo;

  return 1;
}

void ExcluirElementos(){
  if (inicio != NULL){
    auxiliar = inicio;
    inicio = inicio->proximo;
    free(auxiliar);
    printf("\n Elemento excluido com sucesso, escolha outra opcao ou 4 para fechar \n");
  }else
    printf("\n A lista ja esta vazia \n");
}

void ImprimirElementos(){
  if (inicio == NULL){
    printf("\n --------- Lista Vazia ----------- \n");
  }
  else{
    printf("\n --------- Inicio da Lista ----------- \n");
    atual = inicio;
    while(atual != NULL){
      printf("\n %d", atual->dado);
      atual = atual->proximo;
    }
    printf("\n --------- Fim da Lista ----------- \n");
  }
}

void FechaLista(){
  while(inicio != NULL){
    auxiliar = inicio;
    inicio = inicio->proximo;
    free(auxiliar);
  }
  
}


int main(void) {

  srand(time(NULL));
  int escolha = 0, dado, verificador = 0;

  while(escolha != 4){
    printf("\n Escolha uma opcao: \n 1- Incluir elementos no inicio da lista (elementos gerados aleatoriamente) \n 2- Excluir elemento do inicio da lista \n 3- Imprimir os elementos da lista \n 4- Sair do programa.  \n 5- Limpar a tela\n\n");
    scanf("%d", &escolha);

    switch(escolha){
      case 1:
        
        verificador = IncluirElementos(dado);
        if (verificador == 1){
          printf("\nElemento cadastrado com sucesso, escolha outra opcao ou digite 4 para fechar \n");
          verificador = 0;
        }

      break;

      case 2:
        ExcluirElementos();
      break;

      case 3:
        ImprimirElementos();

      break;
      case 4:
      break;

      case 5:
        system("cls");
        
      break;
      default:
      printf("\nComando invalido, certifique-se de que digitou o numero certo\n");
      break;
    }

  }
  FechaLista();
}
