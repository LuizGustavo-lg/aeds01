#include <iostream>

using  namespace std;

int main() {
    const char Bip = '\a';
    const double Pi = 3.14;
    double raio;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double area = Pi * raio * raio;

    cout << Bip << Bip;
    cout << "Área da esfera: " << area << endl;
}
