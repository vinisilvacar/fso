#include <stdlib.h>
#include <stdio.h>
#include "leitura.h"
#include "ordenacao.h"

int main(){

    int tamanho = 0;
    char opcao;

    tamanho = definePosicoes();

    int vetor[tamanho];

    insereValores(vetor, tamanho);

    opcao = defineOrdenacao();

    switch(opcao){
        case 'd':
            ordenaVetorCrescente(vetor, tamanho);
            break;
        case 'r':
            ordenaVetorDecrescente(vetor, tamanho);
            break;
        default:
            printf("\nOpção de ordenação não existente !\n");
            printf("\nSerá ordenado por ordem crescente !\n");
    };

    imprimeVetor(vetor, tamanho);

    return 0;
}
