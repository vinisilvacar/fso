#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include "estruturas.h"
#include "operacoes.h"

double calculaTamanhoLado(Triangulo triangulo, int opcao){

    double medidaLado = 0;

    switch(opcao){
        //Distancia entre AB
        case 1:
            medidaLado = sqrt(pow(triangulo.a.x - triangulo.b.x,2) + pow(triangulo.a.y - triangulo.b.y ,2));
            break;
        //Distância entre BC
        case 2:
            medidaLado = sqrt(pow(triangulo.b.x - triangulo.c.x,2) + pow(triangulo.b.y - triangulo.c.y ,2));
            break;
        //Distância entre CA
        case 3:
            medidaLado = sqrt(pow(triangulo.c.x - triangulo.a.x,2) + pow(triangulo.c.y - triangulo.a.y ,2));
            break;
        default:
            printf("Opção inválida !");
    }

    return medidaLado;

}

//Retorna 1 se é possível existir o triangulo, e 0 se não for possível.
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
