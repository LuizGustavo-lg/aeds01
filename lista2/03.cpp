#include <iostream>
using namespace std;

bool eqType(float a, float b){
    if (a != 0) {
        cout << "Equação determinada" << endl;
        return true;
    } else if (b == 0){
        cout << "Equação indeterminada" << endl;
    } else {
        cout << "Equação impossivel" << endl;
    }
    return false;
}

float eqCalc(float a, float b){
    return -b/a;
}

int main(){
    float a, b;

    cout << "Digite os coeficietes a e b: ";
    cin >> a >> b;

    if (eqType(a, b)) cout << "Resposta: x = " << eqCalc(a, b) << endl; 
}