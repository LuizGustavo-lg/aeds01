#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float graus;
    cout << "Digite um ângulo [G]: ";
    cin >> graus;

    cout << "Ângulo em radianos: " << graus*(M_PI/180) << endl;

}