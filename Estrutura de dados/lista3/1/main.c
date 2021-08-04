#include<stdlib.h>
#include<stdio.h>
#include"lista.h"

int main(){
    tipo_no *inicio = NULL;
    int opcaoMenu = 0;
    
    do{
        printf("\n---Menu---\n 1 - Incluir no Inicio\n 2 - incluir no fim \n 3 - excluir no inicio\n 4 - excluir no fim\n 5 - imprimir Lista\n 6 - Limpar lista\n 7 - finalizar\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
        case 1: {
            int dado;
            printf("Insira o dado no inicio\n");
            scanf("%d", &dado);
            inicio = inserirNoInicio(inicio, dado);
        }
        break;
        case 2: {
            int dado;
            printf("Insira o dado no fim:\n");
            scanf("%d", &dado);
            inicio = inserirNoFim(inicio, dado);
        }
        break;
        case 3: {
            inicio = excluirNoInicio(inicio);
        }
        break;
        case 4: {
            inicio = excluirNoFim(inicio);
        }
        break;
        case 5: {
            imprimirLista(inicio);
        }
        break;
        case 6: {
            inicio = excluirLista(inicio);
        }
        break;
        case 7: {
            inicio = excluirLista(inicio);
            printf("Finalizando");
            opcaoMenu = 7;
        }
        break;
        
        default:
            break;
        }
    }while(opcaoMenu != 7);


    return 0;
}
