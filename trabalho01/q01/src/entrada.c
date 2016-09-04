#include <stdlib.h>
#include <stdio.h>
#include "estruturas.h"

triangulo recebePontos(){
    int pontos = 0;
    triangulo aux;
    // aux = (triangulo*) malloc(sizeof(triangulo));
    // double valueY = 0;

        // double valorX = 0;

    printf("Insira a Coordenada X do ponto %d :", pontos+1);
    scanf("%lf", &(aux.a->posX));

    printf("Insira a Coordenada Y do ponto %d :", pontos+1);
    scanf("%lf", &(aux.a->posY));

    pontos++;

    printf("Insira a Coordenada X do ponto %d :", pontos+1);
    scanf("%lf", &(aux.b->posX));

    printf("Insira a Coordenada Y do ponto %d :", pontos+1);
    scanf("%lf", &(aux.b->posY));

    pontos++;

    printf("Insira a Coordenada X do ponto %d :", pontos+1);
    scanf("%lf", &(aux.c->posX));

    printf("Insira a Coordenada Y do ponto %d :", pontos+1);
    scanf("%lf", &(aux.c->posY));


    return aux;
}
