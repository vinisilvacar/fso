#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "estruturas.h"
#include "operacoes.h"

double calculaTamanhoLado(triangulo *triangulo, int opcao){

    double medidaLado = 0;

    switch(opcao){
        case 1:
            medidaLado = sqrt(pow(triangulo->a->posX - triangulo->b->posX,2) + pow(triangulo->a->posY - triangulo->b->posY ,2));
            break;
        case 2:
            medidaLado = sqrt(pow(triangulo->b->posX - triangulo->c->posX,2) + pow(triangulo->b->posY - triangulo->c->posY ,2));
            break;
        case 3:
            medidaLado = sqrt(pow(triangulo->c->posX - triangulo->a->posX,2) + pow(triangulo->c->posY - triangulo->a->posY ,2));
            break;
        default:
            printf("Opção inválida !");
    }

    return medidaLado;

}

int calculaCondicaoExistencia(double ladoAB, double ladoBC, double ladoCA){
    int resposta = 0;

    if(ladoAB > abs(ladoBC-ladoCA) && ladoAB < (ladoBC+ladoCA)){
        if(ladoBC > abs(ladoAB-ladoCA) && ladoBC < (ladoAB+ladoCA)){
            if(ladoCA > abs(ladoAB-ladoBC) && ladoCA < (ladoAB+ladoBC)){
                resposta = 1;
            }else{
                resposta = 0;
            }
        }else{
            resposta = 0;
        }
    }else{
        resposta = 0;
    }

    return resposta;

}

double calculaPerimetro(double ladoAB, double ladoBC, double ladoCA){
    double perimetro = 0;
    perimetro = ladoAB + ladoBC + ladoCA;

    return perimetro;
}

double calculaArea(double ladoAB, double ladoBC, double ladoCA){
    double area = 0;
    double semiPerimetro = 0;
    double difAB = 0, difBC = 0, difCA = 0;
    double produto = 0;

    semiPerimetro = (ladoAB + ladoBC + ladoCA)/2;

    difAB = semiPerimetro - ladoAB;
    difBC = semiPerimetro - ladoBC;
    difCA = semiPerimetro - ladoCA;

    produto = semiPerimetro * (difAB * difBC * difCA);

    area = sqrt(produto);

    return area;
}
