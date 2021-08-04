#include<stdlib.h>
#include<stdio.h>
#include"pilha.h"
#include<stdbool.h>

int main(){
    tipo_pilha *pilha;
    int opcaoMenu = 0;
    bool loop = true;

    do{
        printf("\n----Menu----\n 1 - criar pilha\n 2 - adicionar na pilha\n 3 - excluir na pilha\n 4 - Verificar se esta vazia\n 5 - Qtd de Elementos\n 6 - Excluir pilha\n 7 - Obter Elementos\n 8 - fechar\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
            case 1: {
                pilha = criarPilhaVazia();
                break;
            }
            case 2: {
                int dado;
                printf("insira o numero a ser incluido na pilha\n");
                scanf("%d", &dado);
                inserirNoTopo(pilha, dado);
                break;
            }
            case 3 : {
                if (quantidadeElementosPilha(pilha)>0){ excluirNoTopo(pilha);}
                else{
                printf("\nA pilha ja esta vazia");}
                break;
            }
            case 4: {
                if(pilhaVazia(pilha) == 0){
                    printf("-- pilha Vazia --\n");
                }else printf("-- A pilha contem dados --\n");
                break;
            }
            case 5: {
                printf("Quantidade de Elementos na pilha: %d\n", quantidadeElementosPilha(pilha));
                break;
            }
            case 6: {
                pilha = excluirPilha(pilha);
                break;
            }
            case 7: {
                int *elementos, i;
                elementos = obterElementos(pilha);
                for(i=0; i < quantidadeElementosPilha(pilha); i++){
                    printf("%d ", elementos[i]);
                }
                break;
            }
            case 8: {
                printf("Tchau!");
                pilha = excluirPilha(pilha);
                loop = false;
                break;
            }
            default:
                break;
        }
    }while(loop);

    return 0;
}