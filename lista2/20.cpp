#include <iostream>
using namespace std;

struct Carro{
    string marca;
    float preco;
    int ano;
};

void imprime_carro(Carro c){

    cout << "+=====================+"
    << "\n Marca: " << c.marca
    << "\n Preço: " << c.preco
    << "\n Ano: " << c.ano << endl;
}

int main(){
    Carro carros[5];

    for (int i = 0; i < 5; i++){
        cout << "Informe a marca, preco e ano do " << i+1 << "° carro: ";
        cin >> carros[i].marca >> carros[i].preco >> carros[i].ano;
    }

    int preco;
    cout << "Digite o preco para busca: ";
    cin >> preco;
    for (int i = 0; i < 5; i++){
        if (preco == carros[i].preco) imprime_carro(carros[i]);
    }
}