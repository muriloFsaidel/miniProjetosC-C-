#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

//usando diretamente a biblioteca iostream(std::) para comando cin/out/string
using namespace std;

int main(){

    //definindo a string
    string palavra;

    //imprimindo saída(cout) equivale ao printf
    // << equivale a ""
    cout << "Digite uma palavra";

    //lendo a string(cin) palavra
    cin >> palavra;

    // << equivale a "" e concatenação
    cout << "\nA palavra is:" << palavra;

    system("pause");

    return 0;
}
