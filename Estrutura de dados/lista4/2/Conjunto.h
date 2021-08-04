#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct Conjunto{
  int *vetor;
  int tamanho;
} Conjunto;

Conjunto *CriaConjunto(Conjunto *v1);
Conjunto *PreencheVetor(Conjunto *v1);
Conjunto *InserirElemento(int valor, int posicao, Conjunto *v);
Conjunto *ExcluirElemento(int posicao, Conjunto *v);
Conjunto *Interseccao(Conjunto *v1, Conjunto *v2, Conjunto *v3);
Conjunto *Uniao(Conjunto *v1, Conjunto *v2, Conjunto *v3);