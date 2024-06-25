#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a [2][2] = {{5, 6}, 
                    {2, 1}};
            
    int b [2][2] = {{8, 2}, 
                    {3, 4}};
    int p [2][2];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            p[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                p[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << setw(3) << p[i][j];
        }
        cout << '\n';
    }
}