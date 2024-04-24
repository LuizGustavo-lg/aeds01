#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float alt, base, area, perimetro, diag;
    cout << "Digite a altura e a base do retangulo em cm: ";
    cin >> alt >> base;

    area = alt*base;
    perimetro = (alt*2)+(base*2);
    diag = sqrt(pow(alt, 2) + pow(base, 2));

    cout << "Perímetro: " << perimetro << "cm\n"
    << "Diagonal: " << diag << "cm\n"
    << "Área: " << area << "cm" << endl;
}