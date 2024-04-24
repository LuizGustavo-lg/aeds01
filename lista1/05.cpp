#include <iostream>
using namespace std;

int main(){
    float f, c;
    cout << "Digite uma temperatura [F°]: ";
    cin >> f;

    c = (f-32)*(5/9.0);
    cout << "Temperatura em C°: " << c << endl;
}