#include<stdlib.h>
#include<stdio.h>

#define ROW 7
#define COL 9

void preencheMatriz(float mz[ROW][COL]){
    int i,j;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
        	printf("Entre com um valor para a linha %d, coluna %d: ",i+1,j+1);
            scanf("%f", &mz[i][j]);
        }
    }
}

int calculoMatriz(float mz[ROW][COL]){
    int i,j, cont = 0;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(mz[i][j] > 20 && mz[i][j] <= 50)
                cont++;
        }
    } 

    return cont;
}

int main(){
	int i,j, row, col, cont;
    float matriz[ROW][COL];

    printf("Preencha a matriz: %dx%d:\n", ROW, COL);
    preencheMatriz(matriz);

	cont = calculoMatriz(matriz);
	
    printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    } 
    
	printf("\nA quantidade de elementos '> 20 && <= 50' eh: %d", cont);

    return 0;
}
