#include<stdlib.h>
#include<stdio.h>
#include"lista.h"
#include<stdbool.h>

int main(){
    tipo_lista *lista;
    int opcaoMenu = 0;
    bool loop = true;

    do{
        printf("\n----Menu----\n 1 - criar Lista\n 2 - Incluir no Fim\n 3 - excluir no Fim\n 4 - Verificar se esta vazia\n 5 - Qtd de Elementos\n 6 - Excluir Lista\n 7 - Obter Elementos\n 8 - excluir iguais\n 9 - fechar\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
            case 1: {
                lista = criarListaVazia();
                break;
            }
            case 2: {
                int dado;
                printf("insira o numero a ser incluido na lista\n");
                scanf("%d", &dado);
                inserirNoFim(lista, dado);
                break;
            }
            case 3 : {
                excluirNoFim(lista);
                break;
            }
            case 4: {
                if(listaVazia(lista) == 0){
                    printf("-- Lista Vazia --\n");
                }else printf("-- A lista contem dados --\n");
                break;
            }
            case 5: {
                printf("Quantidade de Elementos na lista: %d\n", quantidadeElementosLista(lista));
                break;
            }
            case 6: {
                lista = excluirLista(lista);
                break;
            }
            case 7: {
                int *elementos, i;
                elementos = obterElementos(lista);
                for(i=0; i < quantidadeElementosLista(lista); i++){
                    printf("%d ", elementos[i]);
                }
                break;
            }
            case 8: {
                int dado;
                printf("insira o numero repetido a ser incluido na lista\n");
                scanf("%d", &dado);
                lista = apagarElementosIguais(lista, dado);
                break;
            }
            case 9: {
                printf("Tchau!");
                lista = excluirLista(lista);
                loop = false;
                break;
            }
            default:
                break;
        }
    }while(loop);

    return 0;
}