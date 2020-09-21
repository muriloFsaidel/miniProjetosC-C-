#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo Variáveis
    int opcao;

    //confere e valida a opcao
    while(opcao < 1 || opcao > 3){

    //interface de Menu
    printf("Escolha uma option:");
    printf("\n1- Option 1");
    printf("\n2- Option 2");
    printf("\n3- Option 3\n\n");

    //lendo a opcao
    scanf("%d", &opcao);

    //resultado de acordo com a escolha
    switch(opcao){
        case 1:
            printf("\nOption 1 foi escolhida");
            break;
        case 2:
            printf("\nOption 2 foi escolhida");
            break;
        case 3:
            printf("\nOption 3 foi escolhida");
            break;

        default:
            printf("\nOption Invalid");
            break;

    }
    system("pause");

    }

}
