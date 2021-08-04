#include<stdlib.h>
#include<stdio.h>

#define ROW 5
#define COL 5

void preencheMatriz(int mz[ROW][COL]){
    int i,j;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
        	printf("Entre com um valor para a linha %d, coluna %d: ",i+1,j+1);
            scanf("%d", &mz[i][j]);
        }
    }
    
}

int busca(int mz[ROW][COL], int *cont){
    int i,j, v = 0;

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            if(mz[i][j] == cont)
                v = 1;
        }
    } 

    return v;
}

int main(){
	int i,j, row, col, cont, check;
    int matriz[ROW][COL];

    printf("Preencha a matriz: %dx%d:\n", ROW, COL);
    preencheMatriz(matriz);
    
	printf("\nEntre com um valor para verificar se esta contido na matriz:");
	scanf("%d", &cont);
	
	check = busca(matriz, cont);
	
    printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 
    
	if (check != 1){
		printf("\nNumero inserido NAO se encontra na matriz.");
	}
	else{
		printf("\nNumero inserido esta presente na matriz.");
	}

    return 0;
}
