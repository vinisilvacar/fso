#ifndef LEITURA_H
#define LEITURA_H

//Função que define quantos números inteiros o usuário quer armazenar no vetor.
int definePosicoes();

//Funcão que le os valores do usuário e armazena no vetor.
void insereValores(int *vetor, int tamanho);

//Função que le a opção de ordenação do usuário, caso exista.
char defineOrdenacao();

#endif
