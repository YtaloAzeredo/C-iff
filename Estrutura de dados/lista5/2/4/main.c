#include<stdlib.h>
#include<stdio.h>
#include"lista.h"
#include<stdbool.h>

int main(){
    tipo_lista *lista, *lista2;
    int opcaoMenu = 0;
    bool loop = true;

    do{
        printf("\n----Menu----\n 1 - criar fila\n 2 - adicionar na fila\n 3 - excluir na fila\n 4 - Verificar se esta vazia\n 5 - Qtd de Elementos\n 6 - Excluir fila\n 7 - Obter Elementos\n 8 - Testa pilhas iguais\n");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu){
            case 1: {
                lista = criarListaVazia();
                break;
            }
            case 2: {
                int dado;
                printf("insira o numero a ser incluido na fila\n");
                scanf("%d", &dado);
                inserirNoFim(lista, dado);
                break;
            }
            case 3 : {
                excluirNoInicio(lista);
                break;
            }
            case 4: {
                if(listaVazia(lista) == 0){
                    printf("-- Fila Vazia --\n");
                }else printf("-- A Fila contem dados --\n");
                break;
            }
            case 5: {
                printf("Quantidade de Elementos na Fila: %d\n", quantidadeElementosLista(lista));
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
                lista2 = criarListaVazia();
                int vetor[5] = {1,2,3,4,5}, i;
                for(i=0; i< 5; i++){
                    inserirNoFim(lista2, vetor[i]);
                }
                if(pilhasIguais(lista, lista2) == 1) printf("As pilhas sao iguais");
                else printf("As pilhas sao diferentes");
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