#include<stdlib.h>
#include<stdio.h>
#include"lista.h"

int main(){
    tipo_no *inicio = NULL;
    int opcaoMenu;

    do{
        printf("\n---Menu---\n 1 - Incluir Nome\n 2 - Excluir Nome\n 3 - Buscar Nome\n 4 - Limpar lista\n 5 - imprimir\n 6 - Finalizar\n");
        scanf("%d", &opcaoMenu);
        
        char nome[TAM];

        switch (opcaoMenu){
            case 1: {
                printf("Insira o nome:\n");
                scanf("%s", nome);
                inicio = incluir(inicio, nome);
            }
            break;
            case 2: {
                printf("Insira o nome a ser excluido\n");
                scanf("%s", nome);
                inicio = excluir(inicio, nome);
            }
            break;
            case 3: {
                printf("Insira o nome a ser buscado\n");
                scanf("%s", nome);
                int posicao = buscar(inicio, nome);
                if(posicao < 0) {
                    printf("%s nao encontrado na lista\n", nome);
                }else printf("%s encontrado na posicao %d", nome, posicao);
            }break;
            case 4: {
                inicio = limparLista(inicio);
            }
            break;
            case 5: {
                imprimir(inicio);
            }
            break;
            case 6: {
                inicio = limparLista(inicio);
                opcaoMenu = 6;
            }
            break;
        default:
            break;
        }
    }while(opcaoMenu != 6);
    
    return 0;
}