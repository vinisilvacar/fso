#include <stdlib.h>
#include <stdio.h>
#include "entrada.h"
#include "operacoes.h"

int main() {

    triangulo *triangulo;
    double ladoAB = 0, ladoBC = 0, ladoCA = 0;

    triangulo = recebePontos();
    ladoAB = calculaTamanhoLado(triangulo,1);
    ladoBC = calculaTamanhoLado(triangulo,2);
    ladoCA = calculaTamanhoLado(triangulo,3);


    if(calculaCondicaoExistencia(ladoAB, ladoBC, ladoCA)==1){
        printf("O lado AB mede: %lf\n", ladoAB);
        printf("O lado BC mede: %lf\n", ladoBC);
        printf("O lado CA mede: %lf\n", ladoCA);
        printf("O perimetro do triângulo é:%lf\n", calculaPerimetro(ladoAB, ladoBC, ladoCA));
        printf("A área do triângulo é: %lf\n", calculaArea(ladoAB, ladoBC, ladoCA));
    }else{
        printf("Os lados não atendem a condição de existência de um triângulo!\n");
    }

    return 0;
}
