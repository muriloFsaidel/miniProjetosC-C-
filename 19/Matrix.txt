#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main() {

    // Conjunto de vetores[] ou de linhas ou colunas [][]
    int matrix[2][2],rows,columns;

    //atribuindo valores
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;

    cout << "digite 4 valores\n";
    for (rows = 0; rows < 2; rows++){
        for(columns = 0; columns < 2; columns++){
            cin >> matrix[rows][columns];
        }
    }

    for(rows = 0; rows < 2; rows++ ){
        for(columns = 0; columns < 2; columns++){
            //cout << "\n rows = " << rows << ", columns = " << columns << "\n";
            cout << matrix[rows][columns] * 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
