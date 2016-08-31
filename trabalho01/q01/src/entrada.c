#include <stdlib.h>
#include <stdio.h>
#include "estruturas.h"

triangulo* recebePontos(){
    int pontos = 0;
    triangulo *aux;
    aux = (triangulo*) malloc(sizeof(triangulo));
    double valorX = 0;
    // double valueY = 0;

    while(pontos < 3){

        printf("Insira a Coordenada X do ponto %d :", pontos+1);
        scanf("%lf", &valorX);

        if(pontos == 0){
            aux->a->posX = valorX;
            // aux->a->posY = valueY;
        }else if(pontos == 1){
            aux->b->posX = valorX;
            // aux->b->posY = valueY;
        }else{
            aux->c->posX = valorX;
            // aux->c->posY = valueY;
        }
        pontos++;

    }

    return aux;
}
