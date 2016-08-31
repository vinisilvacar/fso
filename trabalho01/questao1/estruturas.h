#ifndef ESTRUTURAS_H
#define ESTRUTURA_H

//Estrutura que define um ponto no plano cartesiano.
typedef struct cartesian_plane_point {
    float coordenada[1][2];
} Ponto;

//Estrutura que define um triangulo a partir de pontos cartesianos.
typedef struct triangle {
    Ponto pontos[3];
} Triangulo;

#endif
