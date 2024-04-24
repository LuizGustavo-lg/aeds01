#include <iostream>
using namespace std;

int main(){
    string nome;
    char sexo;
    int idade;

    cout << "Digite seu nome, sexo[f/m] e idade: ";
    cin >> nome >> sexo >> idade;

    if (sexo == 'f' && idade < 25 ) {
        cout << nome << "\nACEITA!" << endl;
    } else {
        cout << "NÃO ACEITA!" << endl;
    }
}
