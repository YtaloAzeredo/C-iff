#include<stdlib.h>
#include<stdio.h>

#define ROW 4
#define COL 9


void preencheMatriz(int mz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%25+1;
		}
	}
	
    printf("\nMatriz normal: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%d ", mz[i][j]);
        }
        printf("\n");
    } 
}

void transposta(int mz[ROW][COL], int nz[COL][ROW]){
    int i,j;
    
	for(j=0; j<COL;j++){
		for(i=0;i<ROW;i++){
			nz[j][i] = mz[i][j];
		}
	}
	
}

void imprime(int nz[COL][ROW]){
	int i, j;
	printf("\nMatriz transposta: \n");
    for(i=0;i<COL;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<ROW;j++){
            printf("%d ", nz[i][j]);
        }
        printf("\n");
    } 
}


int main(){
    int matriz[ROW][COL];
    int nariz[COL][ROW];
    
    preencheMatriz(matriz);
    	
	transposta(matriz, nariz);
	
	imprime(nariz);
    
    return 0;
}
