#include <iostream>
using namespace std;

int main(){
    float v[10] = {21, 5, 76, -23, 1, 9, 4, 10, -45};
    float maior, menor;

    maior = menor = v[0];

    for (int i = 0; i < 10; i++){
        if (v[i] < menor) menor = v[i];
        if (v[i] > maior) maior = v[i];
    }

    cout << "Menor: " << menor << "\nMaior: " << maior << endl;
}