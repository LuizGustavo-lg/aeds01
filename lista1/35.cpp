#include <iostream>
using namespace std;

int main(){
    int idade1 = 0, idade2 = 0, idade3 = 0, idade = 0, nota = 0, qnt1 = 0, qnt2 = 0, qnt3 = 0; 
    const float espectadores = 4;

    for (int i = 0; i < espectadores; i++){
        cout << "Digite a idade do " << i + 1 << "° espectador? ";
        cin >> idade;

        cout << "Digite a nota do " << i + 1 << "° espectador? ";
        cin >> nota;

        if (nota == 1){
            idade1 += idade;
            ++qnt1;
        } else if (nota == 2){
            idade2 += idade;
            ++qnt2;
        } else if (nota == 3){
            idade3 += idade;
            ++qnt3;
        }
    }
    
    cout << "REGULAR: \n    Idade média: " << idade1 / qnt1 
    << "\n    Porcentagem de pessoas: " << (qnt1 / espectadores) * 100 << "%\n"
    
    << "BOM: \n    Idade média: " << idade2 / qnt2 
    << "\n    Porcentagem de pessoas: " << (qnt2 / espectadores) * 100 << "%\n"
    
    << "EXCELENTE: \n    Idade média: " << idade3 / qnt3 
    << "\n    Porcentagem de pessoas: " << (qnt3 / espectadores) * 100 << "%\n" << endl;
}