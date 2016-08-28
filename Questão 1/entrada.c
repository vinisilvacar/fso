#include <stdlib.h>
#include <stdio.h>
#include "estruturas.h"

triangulo* recebePontos(){
    int pontos = 0;
    triangulo aux;
    float valorX = 0;
    float valorY = 0;

    while(pontos < 3){
        printf("Insira a Coordenada X do ponto %d", pontos+1);
        scanf("%f", &valorX);

        printf("Insira a Coordenada Y do ponto %d", pontos+1);
        scanf("%f", &valorY);

        //Essa condicional define em qual ponto os valore estão sendo colocados dentro do while.
        if(pontos == 0){
            aux.a.posX = valorX;
            aux.a.posY = valorY;
        }else if(pontos == 1){
            aux.b.posX = valorX;
            aux.b.posY = valorY;
        }else{
            aux.c.posX = valorX;
            aux.c.posY = valorY;
        }
        pontos++;
    }

    return aux;
}
