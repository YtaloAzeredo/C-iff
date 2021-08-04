#include<stdlib.h>
#include<stdio.h>

int soma(int v[], int tam){
    if(tam == 0){
        return 0;
    }else{
         return v[tam - 1] + soma(v, tam - 1);
    }
   
}

int main(){
    int vetor[5] = {1,2,3,4,5};

    printf("%d", soma(vetor, 5));

    return 0;
}