#include <iostream>
using namespace std;

int main(){
    float soma=0, qnt=0, num=0;

    while(true) {
        cout << "Digite o " << qnt+1 << "° valor: ";
        cin >> num;

        if (num < 0) break;

        ++qnt;
        soma += num;
    };

    cout << "Somatorio: " << soma 
    << "\nMédia: " << soma/qnt
    << "\nTotal de valores lidos: " << qnt 
    << endl;
}