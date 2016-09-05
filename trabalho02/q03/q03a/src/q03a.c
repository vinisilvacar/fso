#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

int main(){

    int matriz_a[3][2];
    int matriz_b[2][3];
    int matriz_produto[3][3];

    leInteirosA(matriz_a);
    leInteirosB(matriz_b);
    multiplica(matriz_produto, matriz_a, matriz_b);
    printMatriz(matriz_produto);

    return 0;
}
