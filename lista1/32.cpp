#include <iostream>
using namespace std;

int main(){
    int sum_m21 = 0, sum_m50 = 0, idade = 0;   

    while (idade >= 0){
        cout << "Insira idade: ";
        cin >> idade;

        if (idade < 21 && idade >= 0) ++sum_m21;
        else if (idade > 50) ++sum_m50; 
    }
    
    cout << "Menores que 21: " << sum_m21
    << "\nMaiores que 50: " << sum_m50 << endl;
}