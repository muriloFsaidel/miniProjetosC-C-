#include <stdio.h>
#include <stdlib.h>

void main(){

    //Vari�veis
    char palavra[255];

    printf("digite uma palavra");

    //limpa a �rea de armazenamento da mem�ria entre dispositivos(buffer)
    //atribuindo valor zero a entrada padr�o(standard input)
    setbuf(stdin, 0);

    //leitura de valores � string
    //resgatar o valor digitado para inser��o
    //na string palavra de 255 posi��es com entrada padr�o
    fgets(palavra, 255, stdin);

    //limpa posi��es n�o utilizadas
    //atribuindo \0 a �ltima posi��o(-1) n�o ocupada
    //informando o fim da string inserida
    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

}
