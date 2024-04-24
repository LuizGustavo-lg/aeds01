#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float lado, area_circulo, area;
    cout << "Digite o lado do quadrado [M]: ";
    cin >> lado;
    
    area_circulo = M_PI*pow((lado/2), 2);
    area = (pow(lado, 2))-area_circulo;

    cout << "Área restante: " << area << endl;
}
