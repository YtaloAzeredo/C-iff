#include<stdlib.h>
#include<stdio.h>
#include"esfera.h"

int main(){

    int opcaoMenu;
    tipo_esfera *esfera;

    while(opcaoMenu != 6){
        printf("---Menu---\n 1 - criar esfera\n 2 - calcular raio\n 3 - calcular area\n 4 - calcular volume\n 5 - fechar\n");
        scanf("%d", &opcaoMenu);
        
        switch (opcaoMenu){    
        case 1: {
            esfera = criarEsfera();
            if(esfera != NULL) printf("Esfera criada!\n");
            else printf("Falha ao criar esfera\n");
        }break;
        case 2: {
            double diam;
            printf("Insira o diametro:\n");
            scanf("%lf", &diam);
            printf("O raio eh: %.2lf\n", calcRaio(esfera, diam));
        }break;
        case 3: {
            if(getRaio(esfera) == 0){
                printf("Calcule o Raio primeiro!\n");
            }else{
               printf("A area eh: %.2lf\n", calcArea(esfera));
            }
        }break;
        case 4: {
            if( getRaio(esfera) == 0){
                printf("Calcule o Raio primeiro!\n");
            }else{
                printf("O volume eh: %.2lf\n", calcVolume(esfera));
            }
        }break;
        case 5: {
            opcaoMenu = 6;
            esfera = excluirEsfera(esfera);
        }
        default:
            break;
        }
    }


    return 0;
}