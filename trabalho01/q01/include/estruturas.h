#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

typedef struct ponto_{
    double posX;
    double posY;
}ponto;

typedef struct triangulo_{
    ponto *a;
    ponto *b;
    ponto *c;
}triangulo;

#endif
