#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //Definindo Variaveis
    int a;
    float b;
    char c;
    bool d;

    //Atribuindo valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //escrevendo vari�veis na tela(C)
    printf("Valor : %d \n", a);
    printf("Valor : %.2f \n", b);
    printf("Valor : %c \n", c);
    printf("Valor : %d \n", d);

    // imprimindo com c++
    cout << "\nValor : " << a;
    cout << "\nValor : " << b;
    cout << "\nValor : " << c;
    cout << "\nValor : " << d;

    // lendo vari�veis(C)
    //scanf("%d", &a);
    //scanf("%f", &b);
    //scanf(" %c", &c);
    //scanf("%d", &d);

    //lendo varri�veis(C++)
    // C++ a leitura � independente de tipo, oque vir ele l� sem maiores codifica��es(%d, a)
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    //imprimindo valores (C++)
    cout << "\nValor : " << a;
    cout << "\nValor : " << b;
    cout << "\nValor : " << c;
    cout << "\nValor : " << d;


    return 0;
}
