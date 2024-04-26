#include <iostream>
using namespace std;

int main(){
    float salario, prestacao;

    cout << "Incira o salario e a prestação: ";
    cin >> salario >> prestacao;
    
    prestacao > (salario*0.2) ? cout << "empréstimo não pode ser concedido" << endl: cout << "Empréstimo pode ser concedido" << endl;

}