#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

void preencheVetor(float *vetor);
void imprimeVetor(float *vetor);

int main(){
    
    float vetor[TAM];

    preencheVetor(vetor);

    imprimeVetor(vetor);

    return 0;

}

void preencheVetor(float *vetor){
	int i;
	for(i=0; i<TAM; i++){
    printf("\nEntre com um valor: ");
    scanf("%f", &vetor[i]);
	}
}


void imprimeVetor(float *vetor){

    int i, x, y;
    float maior=vetor[0], menor=vetor[0];
	printf("\nVetor:\n");
    for(i = 0; i < TAM; i++){
    	printf("%f ", vetor[i] ); 
    	if(vetor[i] > maior){
    		maior = vetor[i];
    		x = i;
		}
		if(vetor[i] < menor){
    		menor = vetor[i];
    		y = i;
		}
    }
	printf("\n\nMaior numero %f, posicao %d", maior, x);
	printf("\n\nMenor numero %f, posicao %d", menor, y);
}
