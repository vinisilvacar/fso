#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    double number1 = 7.3, number2;
    char s1[100], s2[100];
    double *dPtr;

    //Carrega o endereço da variável number1 no ponteiro dPtr.
    dPtr = &number1;

    //Imprime na tela o endereço da variável apartir do ponteiro.
    printf("Valor de number1: %lf\n", *dPtr);

    //Carrega o valor da variável apontada por dPtr na variável number2.
    number2 = *dPtr;

    //Imprime o valor da variável number2.
    printf("Valor de number2: %lf\n", number2);

    //Imprime o endereço de number1.
    printf("Endereço de number1: %p\n", &number1);

    //Imprime endereço armazenado em dPtr.
    printf("Endereço armazendo em dPtr: %p\n", dPtr);

    //Resposta: Os valores impressos do endereço de number1 e do endereço armazenado em dPtr são iguais, pois é justamente o endereço de number1 que está armazenado em dPtr.

    printf("Insira uma string qualquer: ");
    scanf("%s", s1);

    //Copiando string armazenada para s2.
    strcpy(s2, s1);

    //Comparando string s1 com s2 e imprimindo na tela.
    if(strcmp(s1,s2)==0){
        printf("\nAs strings são iguais !\n");
    }else if(strcmp(s1,s2)<0){
        printf("\nA string s1 é menor que a string s2\n");
    }else{
        printf("\nA string s1 é maior que a string s2\n");
    }

    //Unindo as duas strings em s1.
    strcat(s1, s2);

    printf("As strings concatenadas: %s\n", s1);

    //Determinando comprimento da string s1
    printf("O comprimento da string é: %d\n", strlen(s1));

}
