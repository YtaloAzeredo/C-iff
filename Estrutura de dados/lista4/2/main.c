#include <stdio.h>
#include <stdlib.h>
#include "Conjunto.h"
#define TAM 100

int main(void) {
  int escolha = NULL, valor, posicao;
  Conjunto *v1, *v2, *v3;

  v1 = CriaConjunto(v1);
  v1 = PreencheVetor(v1);

  while(escolha != 0){
  	printf("\n1- Criar conjunto vazio\n 2- Inserir um elemento no conjunto\n3- Excluir um elemento no conjunto\n4- Uniao dos conjuntos\n5-Intersecao dos conjuntos\n0 - Finalizar.\n");	
    scanf("%d", &escolha);
    switch(escolha){
      case 1:
      v2 = CriaConjunto(v2);
      break;
      case 2:
      printf("\n Digite o valor do elemento que deseja inserir e a posicao(0-99)\n");
      scanf("%d", &valor);
      scanf("%d", &posicao);
      v2 = InserirElemento(valor, posicao, v2);
      break;
      case 3:
      printf("\n Digite a posicao(0-99) que deseja excluir o elemento");
      v2 = ExcluirElemento(posicao, v2);
      break;
      case 4:
      v3 = Uniao(v1, v2, v3);
      break;
      case 5:
      printf("\n A Intersecao entre os 2 vetores: \n");
      v3 = Interseccao(v1, v2, v3);
      break;
      case 6:
      break;
      system("cls");
    
      break;

    }
  }

  
}

