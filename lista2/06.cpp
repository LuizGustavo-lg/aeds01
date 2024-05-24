#include <iostream>
using namespace std;

int imp_posicao(int nums[8], int n) {
    for (int i = 0; i < 8; i++){
        if (nums[i] == n) {
             return i+1;
        }
    }
    return 0;
}

int main(){
    int numeros[8] = {3, 5, 8, 10, 2, 14, 1, 0};
    int num;

    cout << "Digie um número: ";
    cin >> num;

    int pos = imp_posicao(numeros, num);
    
    pos ? cout << pos << "° posição" << endl : cout << "Número inexistente no vetor" << endl;
}