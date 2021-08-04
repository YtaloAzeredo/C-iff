#include<stdlib.h>
#include<stdio.h>
#include"lista.h"
#include<stdbool.h>

int main(){
    tipo_lista *lista, *lista2;
    int opcaoMenu = 0;
    bool loop = true;

    do{
        printf("\n----Menu----\n 1 - criar Lista\n 2 - Incluir ordenado\n 3 - excluir ordenado\n 4 - Verificar se esta vazia\n 5 - Qtd de Elementos\n 6 - Excluir Lista\n 7 - Obter Elementos\n 8 - calcular media\n 9 - verificar profundidade\n 10 - comparar listas\n 11 -fechar\n");
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
                inserirElementoOrdenado(lista, dado);
                break;
            }
            case 3 : {
                int dado;
                printf("insira o numero a ser excluido na lista\n");
                scanf("%d", &dado);
                excluirElementoOrdenado(lista, dado);
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
                printf("Media dos elementos da lista: %.2f\n", calcularMedia(lista));
                break;
            }
            case 9: {
                int dado;
                printf("Valor a ser verificado a profundidade:\n");
                scanf("%d", &dado);
                printf("profundidade: %d", verificarProfundidade(lista, dado));
                break;
            }
            case 10: {
                int i, vetor[5] = {1,2,3,4,5};
                lista2 = criarListaVazia();
                for(i = 0; i< 5; i++){
                    inserirElementoOrdenado(lista2, vetor[i]);
                }
                if(compararListas(lista, lista2)) printf("listas iguais");
                else printf("listas diferentes");
                break;
            }
            case 11: {
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