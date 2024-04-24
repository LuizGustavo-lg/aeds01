#include <iostream>
using namespace std;

int main(){
    float preco_prod;
    cout << "Digite o valor: R$";
    cin >> preco_prod;

    cout << "Novo valor: R$" << preco_prod*(1-0.09) << endl;
}
