#include <iostream>
using namespace std;

int main(){
    int max=0, min=0, num=0;

    cout << "Digite um valor: ";
    cin >> num;
    max = min = num;
    
    while(num >= 0) {
        cout << "Digite um valor: ";
        cin >> num;

        if (num < 0) break;

        if (num>max) max = num;
        else if (num<min) min = num;  
    }

    cout << "Maior: " << max << "\nMenor: " << min << endl;

}