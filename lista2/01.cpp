#include <iostream>
using namespace std;

void calc(int n1, int n2){
    cout << "Soma: " << n1+n2 
        << "\nMultiplicação: " << n1*n2 << endl;
}

int main(){
    int n1, n2;
    cout << "Encira os dois numeros:";
    cin >> n1 >> n2;
    calc(n1, n2);
}