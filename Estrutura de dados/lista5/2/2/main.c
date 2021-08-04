#include<stdlib.h>
#include<stdio.h>
#include"fila.h"
#include<stdbool.h>

int main(){
    tipo_fila *fila;
    int opcaoMenu = 0;
    bool loop = true;

    do{
        printf("\n----Menu----\n 1 - criar fila\n 2 - adicionar na fila\n 3 - excluir na fila\n 4 - Verificar se esta vazia\n 5 - Qtd de Elementos\n 6 - Excluir fila\n 7 - Obter Elementos\n 8 - fechar\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
            case 1: {
                fila = criarFilaVazia();
                break;
            }
            case 2: {
                int dado;
                printf("insira o numero a ser incluido na fila\n");
                scanf("%d", &dado);
                inserirNoFim(fila, dado);
                break;
            }
            case 3 : {
                excluirNoInicio(fila);
                break;
            }
            case 4: {
                if(filaVazia(fila) == 0){
                    printf("-- Fila Vazia --\n");
                }else printf("-- A Fila contem dados --\n");
                break;
            }
            case 5: {
                printf("Quantidade de Elementos na Fila: %d\n", quantidadeElementosFila(fila));
                break;
            }
            case 6: {
                fila = excluirFila(fila);
                break;
            }
            case 7: {
                int *elementos, i;
                elementos = obterElementos(fila);
                for(i=0; i < quantidadeElementosFila(fila); i++){
                    printf("%d ", elementos[i]);
                }
                break;
            }
            case 8: {
                printf("Tchau!");
                fila = excluirFila(fila);
                loop = false;
                break;
            }
            default:
                break;
        }
    }while(loop);

    return 0;
}