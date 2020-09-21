#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 3
using namespace std;

int main(){

    //defindo vetor e inserção de valores
    int vetor[TAM] = {5,10,15},i,j;

      //imprimindo valores do vetor
    for(i = 0; i < TAM; i++){
        //printf("%d\n", vetor[i]);
        cout << vetor[i] << "\n";
    }
    //passando valores ao vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    //reinicia o contador
    i = 0;
    //imprimindo valores do vetor
    while (i < TAM){
        printf("%d \n", vetor[i] );
        i++;
    }

    //definindo matrizes
    int matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};

    //Imprimindo valores da matriz
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            cout << matriz[i][j] << " ";
        }
    cout << "\n";
    }


    return 0;
}
