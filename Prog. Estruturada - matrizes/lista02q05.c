#include<stdlib.h>
#include<stdio.h>

#define ROW 5
#define COL 15


void preencheMatriz(int mz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%29+1;
		}
	}
    
}

void calculo(int mz[ROW][COL], int n){
    int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			mz[i][j] = mz[i][j]*n;
		}
	}
}

void imprime(int mz[ROW][COL]){
	int i, j;
	printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%d ", mz[i][j]);
        }
        printf("\n");
    } 
}

int main(){
    int matriz[ROW][COL];
    int num;
    
	printf("Entre com um numero: \n");
	scanf ("%d", &num);
	
    preencheMatriz(matriz);
    	
	calculo(matriz, num);
	
    imprime(matriz);

    return 0;
}
