/*
 * libprimo.c
 *
 * Biblioteca de exemplo para a criação e uso de bibliotecas estáticas na
 * linguagem C.
 *
 * Esta arquivo possui a implementação da função libprimo.
 *
 * Licença: GPL 3.0
*/

#include <stdio.h>
#include <time.h>
#include <math.h>
#include "libprimo.h"

// void libprimo(char *str){
//         printf("My Print: %s\n", str);
//         return;
// }

int gera_primo(){

	int prime;

	time_t t;
	srand((unsigned) time(&t));

	do{
		prime = rand();
	}while(!testa_primo(prime));

	return prime;
}

int testa_primo(int primo){

    int divisor = 0;
    int i = 0;

  for (i = 1; i <= primo; i++) {
    if (primo % i == 0) {
     divisor++;
    }
  }
    return divisor;
}
