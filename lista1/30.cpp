#include <iostream>
using namespace std;

int main(){
    int idade;
    cout << "Insira a idade: ";
    cin >> idade;

    if (idade<16) cout << "Não-eleitor" << endl;
    else if (idade >= 18 && idade <= 65) cout << "Eleitor obrigatório" << endl;
    else cout << "Eletor facultativo" << endl;
}