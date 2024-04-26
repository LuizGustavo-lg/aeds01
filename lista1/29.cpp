#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (num%10 == 0) cout << num << " é divisivel por 10"<< endl;
    else if (num%5 == 0) cout << num << " é divisivel por 5"<< endl;
    else if (num%2 == 0) cout << num << " é divisivel por 2"<< endl;
    else cout << "Valor indivisivel!" << endl;
}
