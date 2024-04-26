#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (num > 20){
        cout << "Maior que 20" << endl;
    } else if (num < 20){
        cout << "Menor que 20" << endl;
    } else {
        cout << "Igual a 20" << endl;
    }
}
