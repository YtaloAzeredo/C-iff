#include<stdlib.h>
#include<stdio.h>

#define ROW 10
#define COL 10


void preencheMatriz(int mz[ROW][COL], int nz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%10+1;
			 nz[i][j]=rand()%10+1;
		}
	}
	
    
}

void multiplica (int mz[ROW][COL], int nz[ROW][COL]){
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			mz[i][j] = mz[i][j]*nz[i][j];
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
    int nariz[ROW][COL];
    int check;
    
    preencheMatriz(matriz, nariz);
    	
    multiplica(matriz, nariz);
    
	check = verifica(matriz);
	
	if(check){
		printf("\nB eh inversa de A");
	}
	else{
		printf("\nB NAO eh inversa de A");
	}
	
	int i, j;
	printf("\nMatriz AxB: \n");
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
