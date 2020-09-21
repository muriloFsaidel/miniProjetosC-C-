#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //definindo variáveis
    int a = 20;

    //imprimindo o valor de uma variável
    printf("Valor de a: %d \n", a);

    //imprimindo o endereço de memória de uma variável
    printf("Address de a: %d\n", &a);

    //Variaveis armazenam valores
    // [valor]
    // [posição de memória]
    int b = 10;
    //Ponteiros armazenam posições de memória
    //[posição de memória que está armazenando o valor]
    //[posição de memória(própria)]
    int *ponteiro;

    //ponteiro recebendo a posição de memória da variável b
    ponteiro = &b;

    printf ("Valor de b: %d \n", b);

    //* conteúdo apontado por
    *ponteiro = 40;

    printf ("Valor de b: %d \n", b);

    //Lendo o valor de uma variável
    //& comercial é para ler diretamente da memoria
    //scanf("%d", &a);

    //imprimindo o valor de uma variável
    //printf("Valor de a: %d", a);


    return 0;
}
