#ifndef ESTRUTURAS_H
#define ESTRUTURA_H

//Estrutura que define um ponto no plano cartesiano.
typedef struct ponto_{
    double posX;
    double posY;
}ponto;

//Estrutura que define um triangulo a partir de pontos cartesianos.
typedef struct triangulo_{
    ponto *a;
    ponto *b;
    ponto *c;
}triangulo;

#endif
