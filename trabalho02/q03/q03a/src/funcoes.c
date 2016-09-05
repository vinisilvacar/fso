#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

void leInteirosA(int matriz[3][2]){
    int i = 0, j = 0;
    int aux = 0;

    for(i = 0; i < 3; i ++){
        for(j=0; j< 2; j++){
            printf("Insira o número na linha %d e coluna %d da matriz 1: ", (i+1), (j+1));
            scanf("%d", &aux);
            matriz[i][j] = aux;
        }
    }
}

void leInteirosB(int matriz[2][3]){
    int i = 0, j = 0;
    int aux = 0;

    for(i = 0; i < 2; i ++){
        for(j=0; j< 3; j++){
            printf("Insira o número na linha %d e coluna %d da matriz 2: ", (i+1), (j+1));
            scanf("%d", &aux);
            matriz[i][j] = aux;
        }
    }
}

void multiplica(int matriz_produto[3][3], int matriz_a[3][2], int matriz_b[2][3]){
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0 ; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            matriz_produto[i][j] = 0;
            for (k = 0; k < 2; k++){
                matriz_produto[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
}

void printMatriz(int matriz[3][3]){
    int i = 0;
    int j = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
