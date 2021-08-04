#include<stdlib.h>
#include<stdio.h>

#define ROW 15
#define COL 15


void preencheMatriz(int mz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%19+1;
		}
	}
	
    
}

int verifica(int mz[ROW][COL]){
    int i,j;
    
    if (mz[0][0] != 1){
    	return 0;
	}
    
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			if( i == j && mz[i][j] != 1){
                return 0;
            }
            if(i != j && mz[i][j] != 0){
                return 0;
            }
		}
	}
	
	return 1;
}

/*void imprime(int mz[COL][ROW]){

}*/


int main(){
    int matriz[ROW][COL];
    int check;
    
    preencheMatriz(matriz);
    	
	check = verifica(matriz);
	
	if(check){
		printf("\nEh identidade");
	}
	else{
		printf("\nNAO eh identidade");
	}
	
	int i, j;
	printf("\nMatriz transposta: \n");
    for(i=0;i<COL;i++){
    	printf("Linha %d  ", i+1);
        for(j=0;j<ROW;j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    } 
	//imprime(matriz);
    
    return 0;
}
