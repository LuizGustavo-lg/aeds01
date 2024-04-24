#include <iostream>
using namespace std;

int main(){
    const int qnt=3;
    int soma=0, num=0;

    for (int i=0; i<qnt; i++){
        cout << "Digite o " << i+1 << "° número: ";
        cin >> num;
        soma += num;
    }

    cout << "Média: " << soma/qnt << endl; 
}
