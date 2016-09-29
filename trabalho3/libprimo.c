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
#include "libprimo.h"

int fatorial(int num) 
{ 
    int i; 
    int fat = 1; 
    for (i = 2; i <= num; i++) 
       fat = fat * i; 
    return fat; 
} 

int fibonacci(int num) 
{ 
    int i; 
    int fib = 0; 
    int fib_a = 0; 
    int fib_b = 1; 
    for (i = 2; i <= num;i++) 
       { 
          fib = fib_a + fib_b; 
          fib_a = fib_b; 
          fib_b = fib; 
       } 
    return fib; 
}
