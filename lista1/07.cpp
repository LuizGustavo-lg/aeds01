#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float rad;
    cout << "Digite um ângulo [R]: ";
    cin >> rad;

    cout << "Ângulo em graus: " << rad*(180/M_PI) << endl;

}