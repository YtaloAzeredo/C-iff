#include <stdio.h>
#include <stdlib.h>

int **Ordenar (int n, int *vetorInteiro){
  int **vetorX, i, j;
  int *aux;

  vetorX = (int **)(malloc(n * sizeof(int)));
  
  for(i = 0; i<n ; i++){
      vetorX[i] = &vetorInteiro[i]; 
    }

  for(j = 0; j<n;j++){
      for(i=0;i<n-1;i++){
        if(*vetorX[i]>*vetorX[i+1]){
          aux = vetorX[i];
          vetorX[i] = vetorX[i+1];
          vetorX[i+1] = aux;
        }
      }
  }
  
return vetorX;
}

int main(void) {
  int *vetorInt, n, i;
  int **vetorOrdenado;

  printf("\nDigite o tamanho do vetor de inteiros: ");
  scanf("%d", &n);
  
  vetorInt = (int *)(malloc(n * sizeof(int)));
  
  for(i=0; i<n; i++){
    printf("\nEntre com valores para preencher o vetor: ");
    scanf("%d", &vetorInt[i]);
  }
  vetorOrdenado = Ordenar(n, vetorInt);

    printf("\nVetor em ordem crescente, com enderecos: ");
  for(i = 0; i<n; i++){
    printf("\n %p, %d", vetorOrdenado[i], *vetorOrdenado[i]);
  }
  
  return 0;
}
