#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

void leInteirosA(int matriz[3][2]){
    int i = 0, j = 0;
    int aux = 0;

    for(i = 0; i < 3; i ++){
        for(j=0; j< 2; j++){
            printf("Insira o número na linha %d e coluna %d : ", i, j);
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
            printf("Insira o número na linha %d e coluna %d : ", i, j);
            scanf("%d", &aux);
            matriz[i][j] = aux;
        }
    }
}
//
// void *multiplica(int matriz_produto[3][3], int matriz_a[3][2], int matriz_b[2][3], int value){
//
//     switch(value){
//         case 0:
//             matriz_produto[0][0] = (matriz_a[0][0] * matriz_b[0][0]) + (matriz_a[0][1] * matriz_b[1][0]);
//             break;
//         case 1:
//             matriz_produto[0][1] = (matriz_a[0][0] * matriz_b[0][1]) + (matriz_a[0][1] * matriz_b[1][1]);
//             break;
//         case 2:
//             matriz_produto[0][2] = (matriz_a[0][0] * matriz_b[0][2]) + (matriz_a[0][1] * matriz_b[1][2]);
//             break;
//         case 3:
//             matriz_produto[1][0] = (matriz_a[1][0] * matriz_b[0][0]) + (matriz_a[1][1] * matriz_b[1][0]);
//             break;
//         case 4:
//             matriz_produto[1][1] = (matriz_a[1][0] * matriz_b[0][1]) + (matriz_a[1][1] * matriz_b[1][1]);
//             break;
//         case 5:
//             matriz_produto[1][2] = (matriz_a[1][0] * matriz_b[0][2]) + (matriz_a[1][1] * matriz_b[1][2]);
//             break;
//         case 6:
//             matriz_produto[2][0] = (matriz_a[2][0] * matriz_b[0][0]) + (matriz_a[2][1] * matriz_b[1][0]);
//             break;
//         case 7:
//             matriz_produto[2][1] = (matriz_a[2][0] * matriz_b[0][1]) + (matriz_a[2][1] * matriz_b[1][1]);
//             break;
//         case 8:
//             matriz_produto[2][2] = (matriz_a[2][0] * matriz_b[0][2]) + (matriz_a[2][1] * matriz_b[1][2]);
//             break;
//     }
//
// }
//
//

void printMatriz(int matriz_produto[3][3]){
    int i = 0;
    int j = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz_produto[i][j]);
        }
        printf("\n");
    }
}
