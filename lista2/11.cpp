#include <iostream>
#include <iomanip>
using namespace std;

void imprimir_mat(int mat[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << setw(3) << mat[i][j];
        }
        cout << endl;
    }
}

int main(){
    int a[3][3] = {{2, 4, 5},
                {1, 5, 6},
                {11, 3, 7}};

    int b[3][3] = {{65, 9, 5},
                {0, 45, 8},
                {1, 4, 3}};

    int c[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Conjunto resultante: " << endl;
    imprimir_mat(c);
}