#include<stdlib.h>
#include<stdio.h>

#define ROW 10
#define COL 10


void preencheMatriz(int mz[ROW][COL]){
    srand(time(NULL));
	int i,j;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			 mz[i][j]=rand()%50+1;
		}
	}
    
}

int verifica(int mz[ROW][COL]){
    int i,j, aux=0;
	for(i=0; i<ROW;i++){
		for(j=0;j<COL;j++){
			if(mz[i][j] == mz[j][i]){
				aux++;
			}
		}
	}
	if(aux == (ROW*COL)){
		return 1;
	}
	else{
		return 0;
	}
}



int main(){
    int matriz[ROW][COL];
    int check;
	
    preencheMatriz(matriz);
    	
	check = verifica(matriz);
	
	if(check ==1){
		printf("Matriz simetrica\n\n");
	}
	else{
		printf("Matriz assimetrica\n\n");
	}
    
    
	int i, j;
	printf("\nMatriz: \n");
    for(i=0;i<ROW;i++){
        printf("Linha %d  ", i+1);
        for(j=0;j<COL;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 


    return 0;
}
