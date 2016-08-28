#include <stdlib.h>
#include <stdio.h>
#include "leitura.c"
#include "ordenacao.c"

int main(){

    int tamanho = 0;
    char opcao;

    tamanho = definePosicoes();

    int vetor[tamanho];

    insereValores(vetor, tamanho);

    opcao = defineOrdenacao();

    // if(opcao == 'd'){
    //     ordenaVetorCrescente(vetor, tamanho);
    // }else{
    //     ordenaVetorDecrescente(vetor, tamanho);
    // }


    switch(opcao){
        case 'd':
            ordenaVetorCrescente(vetor, tamanho);
            break;
        case 'r':
            ordenaVetorDecrescente(vetor, tamanho);
            break;
        default:
            printf("\nOpção de ordenação não existente !\n");
    };

    imprimeVetor(vetor, tamanho);
    
    return 0;
}
