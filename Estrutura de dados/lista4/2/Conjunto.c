#include "Conjunto.h"
//Cria um conjunto vazio alocando 100 espaços e preenchendo com 0 em cada um deles


Conjunto *CriaConjunto(Conjunto *x){
  x = (Conjunto*) malloc(sizeof(Conjunto));
  x->vetor = (int*)malloc(sizeof(int)*TAM);
  
  for(int i =0; i<TAM;i++){
    x->vetor[i] = 0;
  }

  return x;
}

Conjunto *PreencheVetor(Conjunto *v1){
  for(int i=0;i<100;i++){
    v1->vetor[i] = i;
  }
  return v1;
}

Conjunto *InserirElemento(int valor, int posicao, Conjunto *v){
  v->vetor[posicao-1] = valor; 
  v->tamanho = v->tamanho + 1;
  return v;
}

Conjunto *ExcluirElemento(int posicao, Conjunto *v){
  v->vetor[posicao] = 0;
  v->tamanho = v->tamanho -1;
  return v;
}

  Conjunto *Interseccao(Conjunto *v1, Conjunto *v2, Conjunto *v3){

    int i, j, quantidade = 0;
    int posicao =0;
    for (i = 0;i<TAM;i++){
      for(j = 0; j<TAM; j++){
        if ((v1->vetor[i] == v2->vetor[j])&&(v1->vetor[i]!=0)){
          quantidade = quantidade +1;
        }
      }
    }
    v3 = (Conjunto*) malloc(sizeof(Conjunto));
    v3->vetor = (int*)malloc(sizeof(int)*quantidade);
    printf("\n QUANTIDADE %d", quantidade);
    //Preenchendo o v3 com os numeros da União
    for (i = 0;i<TAM;i++){
      for(j = 0; j<TAM; j++){
        if ((v1->vetor[i] == v2->vetor[j])&&(v1->vetor[i]!=0)){
          v3->vetor[posicao] = v1->vetor[i];
          posicao = posicao + 1;
        }
      }
    }
  for(int i=0 ;i<quantidade;i++){
        printf("    %d     ", v3->vetor[i]);
  }
  return v3;
  
  }

Conjunto *Uniao(Conjunto *v1, Conjunto *v2, Conjunto *v3){
  for(int i = 0; i<TAM;i++){
    if(v1->vetor[i]!=0){
      v3->vetor[i] = v1->vetor[i];
    }
  }
  for(int i = 0; i<TAM;i++){
    if(v3->vetor[i]!= v2->vetor[i]){
      v3->vetor[i] = v2->vetor[i];
    }
  }
  return v3;
}
