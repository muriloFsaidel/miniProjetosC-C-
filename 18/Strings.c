#include <stdio.h>
#include <stdlib.h>

void main(){

    //Variáveis
    char palavra[255];

    printf("digite uma palavra");

    //limpa a área de armazenamento da memória entre dispositivos(buffer)
    //atribuindo valor zero a entrada padrão(standard input)
    setbuf(stdin, 0);

    //leitura de valores à string
    //resgatar o valor digitado para inserção
    //na string palavra de 255 posições com entrada padrão
    fgets(palavra, 255, stdin);

    //limpa posições não utilizadas
    //atribuindo \0 a última posição(-1) não ocupada
    //informando o fim da string inserida
    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

}
