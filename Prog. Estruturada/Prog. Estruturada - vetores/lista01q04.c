#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

void preencheVetor(int *vetor);
void imprimeVetor(int *vetor);

int main(){
    
    int vetor[TAM];

    preencheVetor(vetor);

    imprimeVetor(vetor);

    return 0;

}

void preencheVetor(int *vetor){

    int i=0, j, v;
	
	srand(time(NULL));
	
	do{
		vetor[i] = rand()%100+1;
		v=0;
			for(j=0; j<i; j++){
				if(vetor[i] == vetor[j]){
					v=1;
				}
			}
			
		if(v == 0){
			i++;
		}
		
	}while(i<TAM);
	
}


void imprimeVetor(int *vetor){

    int i;
	printf("\nVetor:\n");
    for(i = 0; i < TAM; i++){
		printf("%i ", vetor[i] );
    }
	
}
