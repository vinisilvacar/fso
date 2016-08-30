#ifndef OPERACOES_H
#define OPERACOES_H

#include "estruturas.h"

//Recebe qual lado deseja calcular e retorna o valor desse lado do triângulo.
double calculaTamanhoLado(triangulo *triangulo, int opcao);

//Verifica se, dados os pontos, pode existir um triângulo.
double calculaCondicaoExistencia(double ladoAB, double ladoBC, double ladoCA);

//Calcula o perimetro do triangulo.
double calculaPerimetro(double ladoAB, double ladoBC, double ladoCA);

//Calcula área do triângulo.
double calculaArea(double ladoAB, double ladoBC, double ladoCA);

#endif
