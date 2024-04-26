#include <iostream>
using namespace std;

int main(){
    const int qnt=10;
    float num;

    for (int i=0; i<qnt; i++){
        cout << "Digite o " << i+1 << "° número: ";
        cin >> num;

        if (num>20) cout << "Metade: " << num/2 << endl;
    }

}
