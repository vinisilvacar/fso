#include <stdlib.h>
#include <stdio.h>

#include "entrada.h"
#include "estruturas.h"

Triangulo recebePontos(){
    int pontos = 0;
    Triangulo triangulo;
    double valorX = 0;
    double valorY = 0;

    for(pontos=0; pontos < 3; pontos++){
        printf("Insira a Coordenada X do ponto %d", pontos+1);
        scanf("%lf", &valorX);

        printf("Insira a Coordenada Y do ponto %d", pontos+1);
        scanf("%lf", &valorY);

	triangulo.pontos[i].coordenadas[0][0] = valorX;
	triangulo.pontos[i].coordenadas[0][1] = valorY;
    }

    return triangulo;
}
