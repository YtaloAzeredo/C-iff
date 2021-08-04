#include <stdio.h>
#include <stdlib.h>

int *Somatorio (int n, int *v){
  int *w, i;

  w = (int *)(malloc(n * sizeof(int)));

  for(i = 0; i<n; i++){
    w[0] = v[0];
    w[i] = v[i] + w[i-1];
  }
  return w;
}

int main(void) {
  int *vetorV, n, i;
  int *w;

  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &n);

  vetorV = (int *)(malloc(n * sizeof(int)));

  for(i=0; i<n; i++){
    printf("\n\nEntre com inteiros para o vetor: ");
    scanf("%d", &vetorV[i]);
  }

  w = Somatorio(n, vetorV);
  
  for(i=0; i<n;i++){
  	printf("\n %d", w[i]);
  }
  return 0;
}
