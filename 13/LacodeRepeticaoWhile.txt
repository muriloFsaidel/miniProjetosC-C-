#include <stdio.h>
#include <stdlib.h>

void main(){

//definindo variáveis
    int a = 1;
    int b = 19;
        //executa ao menos uma vez, depois confere a condição
        do{
            printf("\n%d", a);
            a++;
        }while (a <= 10);

        //alterando o valor de a
        a = 11;
        //primeiro confere a condição, depois repete o bloco
        while(a < 21){
            printf("\n%d",a);
            a++;
        }

        do{
            printf("\n%d", b);
            b--;
        }while( b >=1);
}
