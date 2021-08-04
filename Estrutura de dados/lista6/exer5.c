#include<stdlib.h>
#include<stdio.h>

int buscaBinaria(int *vetor, int valor, int inicio, int fim){
    int meio;
    if(inicio <= fim){
        meio = (inicio + fim) /2;
        if(valor == vetor[meio]){
            return meio;
        }else {
            if(valor < vetor[meio]){
                return buscaBinaria(vetor, valor, inicio, meio - 1);
            }else {
                return buscaBinaria(vetor, valor, meio + 1, fim);
            }
        }
    }

    return -1;
}

int main(){
    int n, vetor[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    printf("isira o valor a ser buscado\n");
    scanf("%d", &n);

    printf("%d", buscaBinaria(vetor, n, 0, 19));

    return 0;
}