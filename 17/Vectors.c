#include <stdio.h>
#include <stdlib.h>
#define TAM 3
void main(){

    // criando estrutura de dados com armazenamento em posições(gavetas)
    int vetor[TAM], counter;

    // com indexação começando por 0(1° posição)
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posição
    for(counter = 0; counter < TAM; counter++){
        vetor[counter] = vetor[counter] +1;
    }

    printf("\nPosition 0: %d", vetor[0]);
    printf("\nPosition 1: %d", vetor[1]);
    printf("\nPosition 2: %d", vetor[2]);

    //imprimindo vetor através de laço de repetição
    for(counter = 0; counter < TAM; counter++){
        printf("\nPosition %d: %d",counter,vetor[counter]);
    }

      //Adicionando 1 para cada posição
    for(counter = 0; counter < TAM; counter++){
        scanf("%d", &vetor[counter]);
    }

     for(counter = 0; counter < TAM; counter++){
        printf("\nPosition %d: %d",counter,vetor[counter]);
    }
    system("pause");
}
