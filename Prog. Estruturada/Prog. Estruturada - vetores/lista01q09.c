#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 50

void preencheVetor(int *vetor);
void imprimeVetor(int *vetor);
int primo(int n);
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
		vetor[i] = rand()%200+1;
	}
}


void imprimeVetor(int *vetor){

	int i, qtdeComposto=0;
	printf("\n\nVetor:\n");
	for(i=0; i<TAM; i++){
		printf("| %d |", vetor[i]);
	}
	for(i=0; i<TAM; i++){
		if(primo(vetor[i])){
			qtdeComposto--;
		}
	}
	
    printf("\n\nQuantidade de numeros compostos: %d", qtdeComposto+TAM);
}

int primo(int n){
	int i, cont=0;
	
	for(i = 1; i <= n; i++){
		if((n % i) == 0){
			cont++;
		}
	}
	
	if(cont == 2){
		return 1;
	}
	else{
		return 0;
	}
} 


