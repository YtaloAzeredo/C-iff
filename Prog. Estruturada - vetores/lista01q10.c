#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void preencheVetor(int *vetor);
void imprimeVetor(int *vetor);
int perfeito(int n);
int main(){
    
    int vetor[TAM];

    preencheVetor(vetor);

    imprimeVetor(vetor);

    return 0;

}

void preencheVetor(int *vetor){

    int i;
	srand(time(NULL));
	for(i=0; i<TAM; i++){
		vetor[i] = rand()%500+1;
	}
}


void imprimeVetor(int *vetor){

	int i, qtdePerfeito=0;
	printf("\n\nVetor:\n");
	for(i=0; i<TAM; i++){
		printf("| %d |", vetor[i]);
	}
	for(i=0; i<TAM; i++){
		if(perfeito(vetor[i])){
			qtdePerfeito++;
		}
	}
	
    printf("\n\nQuantidade de numeros perfeitos: %d", qtdePerfeito);
}

int perfeito(int n){
	int i, soma=0;
	
	for(i = 1; i < n; i++){
		if((n % i) == 0){
			soma += i;
		}
	}
	if(soma == n){
		printf("\n\nNumero Perfeito: %d", n);		
		return 1;
	}
	else{
		return 0;
	}
} 

