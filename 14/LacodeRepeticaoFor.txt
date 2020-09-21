#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo Variáveis
    int cont;

    //tabuada do 5
    //para contador = 1, enquanto contadop for menor ou igyal a 10, contador mais 1
    for(cont = 1; cont <= 10; cont++ ){
        printf("\n5 X %d = %d",cont, 5 * cont);
    }

    //contando de 2 em 2
    for(cont = 0; cont <= 10; cont += 2){
        printf("\n%d",cont);
    }

    //contagem regressiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);
    }

    printf("\n\n");
    system("pause");
}
