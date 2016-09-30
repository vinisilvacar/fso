/*
 * main.c
 *
 * Programa de exemplo para a criação e uso de bibliotecas estáticas na
 * linguagem C.
 *
 * Esta arquivo se utiliza da biblioteca my_print.a construída anteriormente.
 *
 * Licença: GPL 3.0
*/
#include "libprimo.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    if (testa_primo(gera_primo()) == 2)
      printf("O número é primo!\n");
    else
      printf("O número não é primo!\n");

    return 0;
}
