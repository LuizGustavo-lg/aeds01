#include <iostream>
using namespace std;

int main(){
    float speso1 = 0, speso2 = 0, speso3 = 0, speso4 = 0, peso = 0;
    int qnt1 = 0, qnt2 = 0, qnt3 = 0, qnt4 = 0, idade = 0;

    for (int i = 0; i < 20; i++){
        cout << "Qual é a idade da " << i + 1 << "° pessoa? ";
        cin >> idade;

        cout << "Qual é o peso da " << i + 1 << "° pessoa? ";
        cin >> peso;

        if (idade >= 1 && idade <= 10){
            speso1 += peso;
            ++qnt1;
        } else if (idade >= 11 && idade <= 20){
            speso2 += peso;
            ++qnt2;
        } else if (idade >= 21 && idade <= 30){
            speso3 += peso;
            ++qnt3;
        } else if (idade > 30){
            speso4 += peso;
            ++qnt4;
        } 
    }

    cout << "Média entre 1 e 10 anos: " << speso1 / qnt1
    << "\nMédia entre 11 e 20 anos: " << speso2 / qnt2
    << "\nMédia entre 21 e 30 anos: " << speso3 / qnt3
    << "\nMédia a partir de 31 anos: " << speso4 / qnt4
    << endl;
}