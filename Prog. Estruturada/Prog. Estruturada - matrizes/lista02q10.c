#include<stdlib.h>
#include<stdio.h>

#define ROW 8
#define COL 8


void preencheMatriz(int mz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%14+1;
		}
	}
}


int verifica(int mz[ROW][COL]){
    int i,j, check = 1;

  	for (i=0; (i<ROW)&&(check==1); i++) {
    	for (j=(i+1); (j<COL)&&(check==1); j++) {
      	if (mz[i][j] != 0){
         	check = 0;
        }
    	}
  	}
	
	return check;
}

/*void imprime(int mz[COL][ROW]){

}*/


int main(){
    int matriz[ROW][COL];
    int check;
    
    preencheMatriz(matriz);
    
	check = verifica(matriz);
	
	if(check){
		printf("\nMATRIZ TRIANGULAR INFERIOR");
	}
	else{
		printf("\nMATRIZ NAO EH TRIANGULAR INFERIOR");
	}
	
	int i, j;
	printf("\nMatriz: \n");
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
