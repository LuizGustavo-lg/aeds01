#include <iostream>
using namespace std;

float convertPol(int a, int b){
    if (b <= 0) return 0;
    return ((float) a/b)*25.4;
}

int main(){
    int a, b;
    cout << "Digite os valores em polegadas [a/b]: ";
    cin >> a >> b;

    cout << a << "/" << b << " equivale a " << convertPol(a, b) << "mm" << endl;

}