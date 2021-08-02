#include<stdlib.h>
#include<stdio.h>

#define ROW 5
#define COL 4

void preencheMatriz(float mz[ROW][COL]){
    int i,j;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
        	printf("Entre com um valor para a linha %d, coluna %d: ",i+1,j+1);
            scanf("%f", &mz[i][j]);
        }
    }
}

void imprimeMatriz(float mz[ROW][COL]){
    int i,j, row, col;
    float maior = mz[0][0];

    printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%.2f ", mz[i][j]);
        }
        printf("\n");
    } 
    
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(mz[i][j] > maior){
                maior = mz[i][j];
                row = i+1;
                col = j+1;
            } 
        }
    }

    printf("\nO maior valor da matriz eh: %.2f encontrado na linha %d coluna %d", maior, row, col);
    
    
}

int main(){
    float matriz[ROW][COL];

    printf("Preencha a matriz: %dx%d:\n", ROW, COL);
    preencheMatriz(matriz);

    imprimeMatriz(matriz);

    return 0;
}
