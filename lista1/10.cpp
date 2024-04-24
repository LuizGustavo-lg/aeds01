#include <iostream>
using namespace std;

int main(){
    float tempo, vel, distancia;
    cout << "Digite o tempo e a velocidade média da viagem: ";
    cin >> tempo >> vel;

    distancia = vel*tempo;
    cout << "Litros gastos: " << distancia/12 << endl;
}