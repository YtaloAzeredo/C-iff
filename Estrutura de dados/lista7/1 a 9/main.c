#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"pilhaTADstructArvore.h"






int main()
{
    tipo_no_arvore *arvore = NULL;

    tipo_pilha* pilha;

    pilha = criarPilhaVazia();

    incluir_no_arvore_iterativo(&arvore, 100);
    incluir_no_arvore_iterativo(&arvore, 50);
    incluir_no_arvore_iterativo(&arvore, 150);
    incluir_no_arvore_iterativo(&arvore, 25);
    incluir_no_arvore_iterativo(&arvore, 75);
    incluir_no_arvore_iterativo(&arvore, 45);
    incluir_no_arvore_iterativo(&arvore, 35);
    incluir_no_arvore_iterativo(&arvore, 48);
    incluir_no_arvore_iterativo(&arvore, 150);
    incluir_no_arvore_iterativo(&arvore, 175);
    incluir_no_arvore_iterativo(&arvore, 165);
    incluir_no_arvore_iterativo(&arvore, 160);
    percurso_em_ordem_recursivo(arvore);
    percurso_em_ordem_iterativo(arvore,pilha);

    

    printf("\n O menor valor da arvore é : %d \n", menor(arvore));
    printf("\n A soma dos nós da arvore é : %d \n", soma(arvore));
    printf("\n A Quantidade de nós que a arvore possui são : %d \n", numero_nos(arvore));
    printf("\n A media dos valores presentes na arvore é : %d \n", media(arvore));
    printf("\n A quantidade de folhas que a arvore possui são : %d \n", qtdFolha(arvore));
    printf("\n A quantidade de NULL que a arvore possui são : %d \n", qtdNull(arvore));
    printf("\n A altura que a arvore possui é : %d \n", alturaArvore(arvore));
    printf("\n A quantidade de multiplos de 3 que a arvore possui é : %d \n", multiploTres(arvore));
    printf("\n Numero de comparações até achar o valor 160 : %d \n",numComparacoes(arvore, 175));
    printf("\n Numero de comparações até achar o valor 160 : %d \n",numero_comparacoes(arvore, 175));

    return 0;
}
