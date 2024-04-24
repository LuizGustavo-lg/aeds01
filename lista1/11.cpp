#include <iostream>
using namespace std;

int main(){
    char a, b, aux;
    cout << "Escreva os caracteres de a e b: ";
    cin >> a >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "A: " << a << "\nB: " << b << endl;
}


