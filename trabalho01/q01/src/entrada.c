#include <stdlib.h>
#include <stdio.h>

#include "entrada.h"
#include "estruturas.h"

triangulo* recebePontos(){
    int pontos = 0;
    triangulo *aux;
    double valorX = 0;
    double valorY = 0;

    while(pontos < 3){
        printf("Insira a Coordenada X do ponto %d", pontos+1);
        scanf("%lf", &valorX);

        printf("Insira a Coordenada Y do ponto %d", pontos+1);
        scanf("%lf", &valorY);

        //Essa condicional define em qual ponto os valores estão sendo colocados dentro do while.
        if(pontos == 0){
            aux->a->posX = valorX;
            aux->a->posY = valorY;
        }else if(pontos == 1){
            aux->b->posX = valorX;
            aux->b->posY = valorY;
        }else{
            aux->c->posX = valorX;
            aux->c->posY = valorY;
        }
        pontos++;
    }

    return aux;
}