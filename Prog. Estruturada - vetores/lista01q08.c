#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void preencheVetor(int *vetor);
void imprimeVetor(int *vetor);

int main(){
    
    int vetor[TAM];

    preencheVetor(vetor);

    imprimeVetor(vetor);

    return 0;

}

void preencheVetor(int *vetor){

    int i;
	
	for(i=0; i<TAM; i++){
		printf("\n\nEntre com um numero para o vetor: ");
		scanf("%i", &vetor[i]);
	}
}


void imprimeVetor(int *vetor){

	int maior=0, segmaior=0, i;
    
	printf("\nVetor:\n");
	
    for(i = 0; i < TAM; i++){
        printf("| %d |", vetor[i]);
        
        if(vetor[i] > maior){
        	maior = vetor[i];
		}
    }
    for(i = 0; i < TAM; i++){
    	if(vetor[i] != maior){
			if(vetor[i] > segmaior){
				segmaior = vetor[i];
			}
		}
    }
	printf("\n\n\nO segundo maior eh: %i\n", segmaior);
	
}
