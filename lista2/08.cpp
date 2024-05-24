#include <iostream>
using namespace std;


void imp_qnt_pessoas(int idades[], int qnt_i) {
    int qnt21, qnt50;
    qnt21 = qnt50 = 0;

    for (int i = 0; i < qnt_i; i++){
        if (idades[i] < 21) {
            ++qnt21;

        } else if (idades[i] > 50) {
            ++qnt50;
        }
    }

    cout << "Menores que 21 anos: " << qnt21
    << "\nMaiores que 50 anos: " << qnt50 << endl;
}


int main(){
    const int max_idades = 1000;
    int idades[max_idades];
    int qnt_i;
    string idade;

    qnt_i = 0;

    for (qnt_i; qnt_i < max_idades; qnt_i++){
        cout << "Digite a idade da " << qnt_i+1 << "° pessoa: [-Fim- para terminar] ";
        cin >> idade;

        if (idade == "Fim") break;

        idades[qnt_i] = stoi(idade);
    }
    
    imp_qnt_pessoas(idades, qnt_i);
}
