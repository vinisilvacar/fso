#include <stdlib.h>
#include <stdio.h>
#include "leitura.h"

int definePosicoes(){

    int posicoes = 0;

    printf("Digite quantos números deseja armazenar: \n");
    scanf("%d", &posicoes);

    return posicoes;
}

void insereValores(int *vetor, int tamanho){
    int auxValor = 0;
    int cont = 0;

    for(cont = 0; cont<tamanho; cont++){
        printf("Insira o valor da posição %d\n", cont+1);
        scanf("%d", &vetor[cont]);
    }
}

char defineOrdenacao(){
    int opcaoAux = 0;
    char ordenacao = 'd';

    printf("Digite 1 caso queira definir uma opção de ordenação ?");
    scanf("%d", &opcaoAux);
    fflush(stdin);

    if(opcaoAux == 1){
        printf("Digite 'd' para ordenação crescente ou 'r' para ordenação decrescente");
        scanf(" %c", &ordenacao);
    }

    return ordenacao;
}
