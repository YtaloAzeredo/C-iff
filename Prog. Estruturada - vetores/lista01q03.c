#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 40

void preencheVetor(int *vetor);
void imprimeQuantidade(int *vetor);

int main(){
    
    int vetor[TAM];

    preencheVetor(vetor);

    imprimeQuantidade(vetor);

    return 0;
}

void preencheVetor(int *vetor){

    int i;

	srand(time(NULL));
	
	printf("Vetor:\n");
    for(i = 0; i < TAM; i++){
    	vetor[i] = rand()%100+1;
    	printf("%d ", vetor[i]);
	}

}

void imprimeQuantidade(int *vetor){

    int i, j, cont, num;
	printf("\n\nEntre com um valor: ");
	scanf("%d", &num);
	cont = 0;
    for(i = 0; i < TAM; i++){

        if(vetor[i] == num){
            cont += 1;
			printf("\n\nNumero encontrado na posicao: %d", i+1);
        }
    }
    if(cont>=1){
    	printf("\n\nQuantidade do numero %d no vetor: %d\n", num, cont);
	}
	else{
		printf("\n\nNumero nao pertence ao vetor.");
	}
	
	printf("\n\n");
}
