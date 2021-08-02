#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void preencheVetor(int *vetor);
void imprimeVetor(int *vetor, int *vetorResultado, int m);

int main(){
    
    int vetor[TAM], vetorResultado[TAM];
    int n;

    preencheVetor(vetor);
    
    printf("\nEntre com um numero definido de repeticoes: ");
    scanf("%d", &n);

    imprimeVetor(vetor, vetorResultado, n);

    return 0;

}

void preencheVetor(int *vetor){

    int i;
	
	for(i=0; i<TAM; i++){
		printf("\n\nEntre com um numero para o vetor: ");
		scanf("%i", &vetor[i]);
	}
}


void imprimeVetor(int *vetor, int *vetorResultado, int m){

    int i, j, k=0, count, aux[TAM];
    
	printf("\nVetor:\n");
	
    for(i = 0; i < TAM; i++){
        aux[i] = vetor[i];
        printf("| %d |", vetor[i]);
    }

    for(i = 0; i < TAM; i++){
        count = 0;
        for(j = k++; j < TAM; j++){
            if(vetor[i] == aux[j]){
                count++;
                aux[j] = -1;
            }
        }
        vetorResultado[i] = count;
    }
    
    
    for(i = 0; i < TAM; i++){
        if(vetorResultado[i] >= m){
            printf("\n\nValor %d: repete %d vezes.\n", vetor[i], vetorResultado[i]);
        }
    }
    
}
