#include <iostream>
using namespace std;

struct Pessoa{
    string nome;
    int idade;
    string endereco;
};


int main(){
    Pessoa pessoa;
    cout << "Digite o nome, idade e endereço: ";
    cin >> pessoa.nome >> pessoa.idade >> pessoa.endereco;
}