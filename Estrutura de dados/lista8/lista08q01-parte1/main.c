#include <stdio.h>
#include<stdlib.h>
#include "arvore.h"
int main(void) {
  tipo_no_arvore *arvore = NULL;
  tipo_no_arvore *arvoreCopia = NULL;
  tipo_pilha* pilha;

  int dado;
  pilha = criarPilhaVazia();

  for(int i=0;i<50;i++){
    dado = rand () % 100;
    incluir_no_arvore(&arvore, dado);
  }


  copiar_arvore(arvore, &arvoreCopia);
  percurso_em_ordem_recursivo(arvore);
  printf("\n");
  percurso_em_ordem_recursivo(arvoreCopia);

}
