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
#include <libprimo.h>
#include <stdlib.h>
#include <stdio.h>

int main() {

    int result_primo = gera_primo();
    if (testa_primo(result_primo) == 2)
      printf("\nO número não é primo!\n");
    else
      printf("\nO número é primo!\n");

    return 0;
}
