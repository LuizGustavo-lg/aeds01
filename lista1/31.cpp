#include <iostream>
using namespace std;

int main(){
    int soma = 0, qnt = 0, num;

    while (true){
        cout << "Insira o número: ";
        cin >> num;
        if (num == 0) break;
        else if (num % 3 == 0){
            soma += num;
            ++qnt;
        }
    }

    cout << "Média: " << (float) soma / qnt << endl;
}