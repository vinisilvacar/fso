#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
#include <pthread.h>


int matriz_a[3][2];
int matriz_b[2][3];
int matriz_produto[3][3];

void *multiplica(int value);

int main(){

    int i = 0;
    pthread_t threads[9];

    leInteirosA(matriz_a);
    leInteirosB(matriz_b);

    for(i=0; i<9; i ++){
        pthread_create(&threads[i], NULL, multiplica, (void*)i);
        // multiplica(matriz_produto, matriz_a, matriz_b, i);
    }

    multiplica(i);

    for(i = 0; i < 9; i++)
        pthread_join(threads[i], NULL);

        printMatriz(matriz_produto);

    return 0;
}

void *multiplica(int value){

    switch(value){
        case 0:
            matriz_produto[0][0] = (matriz_a[0][0] * matriz_b[0][0]) + (matriz_a[0][1] * matriz_b[1][0]);
            break;
        case 1:
            matriz_produto[0][1] = (matriz_a[0][0] * matriz_b[0][1]) + (matriz_a[0][1] * matriz_b[1][1]);
            break;
        case 2:
            matriz_produto[0][2] = (matriz_a[0][0] * matriz_b[0][2]) + (matriz_a[0][1] * matriz_b[1][2]);
            break;
        case 3:
            matriz_produto[1][0] = (matriz_a[1][0] * matriz_b[0][0]) + (matriz_a[1][1] * matriz_b[1][0]);
            break;
        case 4:
            matriz_produto[1][1] = (matriz_a[1][0] * matriz_b[0][1]) + (matriz_a[1][1] * matriz_b[1][1]);
            break;
        case 5:
            matriz_produto[1][2] = (matriz_a[1][0] * matriz_b[0][2]) + (matriz_a[1][1] * matriz_b[1][2]);
            break;
        case 6:
            matriz_produto[2][0] = (matriz_a[2][0] * matriz_b[0][0]) + (matriz_a[2][1] * matriz_b[1][0]);
            break;
        case 7:
            matriz_produto[2][1] = (matriz_a[2][0] * matriz_b[0][1]) + (matriz_a[2][1] * matriz_b[1][1]);
            break;
        case 8:
            matriz_produto[2][2] = (matriz_a[2][0] * matriz_b[0][2]) + (matriz_a[2][1] * matriz_b[1][2]);
            break;
    }

    return 0;

}
