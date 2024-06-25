#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m, n;
    cout << "Digite o tamnho das matrizes m X n: ";
    while (true){
        cin >> m >> n;
        if (m > 20 && n > 30){
            cout << "**Os valores devem ser m ≤ 20 e n ≤ 30** \nDigite os valores corretamente: ";
        } else {
            break;
        }
    }

    int a[m][n], b[m][n], c[m][n], at[n][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j] >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }  


    cout << "Matriz C" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << setw(3) << c[i][j]; 
        }
        cout << '\n';
    }  

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            at[j][i] = a[i][j];
        }
    }  


    cout << "Matriz A" << endl;  
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << setw(3) << a[i][j]; 
        }
        cout << '\n';
    }  

    cout << "Matriz A Transposta" << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << setw(3) << at[i][j]; 
        }
        cout << '\n';
    }  
}