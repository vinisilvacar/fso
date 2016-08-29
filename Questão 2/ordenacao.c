#include <stdlib.h>
#include <stdio.h>
#include "ordenacao.h"

void ordenaVetorCrescente(int *vetor, int tamanho){
    int i = 0;
    int j = 0;
    int aux = 0;

    for(i=0; i<tamanho-1; i++){
        for(j=i+1; j<tamanho; j++){
            if(vetor[i]>vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

}


void ordenaVetorDecrescente(int *vetor, int tamanho){
    int i = 0;
    int j = 0;
    int aux = 0;

    for(i=0; i<tamanho-1; i++){
        for(j=i+1; j<tamanho; j++){
            if(vetor[i]<vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

}

void imprimeVetor(int *vetor, int tamanho){
    int cont = 0;

    while(cont<tamanho){
        printf("%d", vetor[cont]);
        cont++;
    }

    printf("\n");
}
