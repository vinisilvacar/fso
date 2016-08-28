//Estrutura que define um ponto no plano cartesiano.
typedef struct ponto_{
    float posX;
    float posY;
}ponto;

//Estrutura que define um triangulo a partir de pontos cartesianos
typedef struct triangulo_{
    ponto a;
    ponto b;
    ponto c;
}triangulo;
