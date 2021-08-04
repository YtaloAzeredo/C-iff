#include<stdlib.h>
#include<stdio.h>

#define ROW 5
#define COL 3


void preencheMatriz(float mz[ROW][COL], float nz[ROW][COL]){
    int i,j;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
        	printf("Entre com um valor para as duas linhas %d, com as colunas %d: ",i+1,j+1);
            scanf("%f", &mz[i][j]);
            nz[i][j] = mz[i][j];
        }
    }
    
}

void soma(float mz[ROW][COL], float nz[ROW][COL]){
    int i,j;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            mz[i][j] = mz[i][j] + nz[i][j];
        }
    }
}

void imprime(float mz[ROW][COL]){
	int i, j;
	printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%.2f ", mz[i][j]);
        }
        printf("\n");
    } 
}

int main(){
    float matriz[ROW][COL];
    float nariz[ROW][COL];

    printf("Preencha as matrizes: %dx%d:\n", ROW, COL);
    preencheMatriz(matriz, nariz);
    	
	soma(matriz, nariz);
	
    imprime(matriz);

    return 0;
}
