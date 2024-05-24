#include <iostream>
using namespace std;


void imprimir_op(int notas[3][2], int espectadores){
    cout << "REGULAR: \n    Idade média: " << notas[0][0] / notas[0][1] 
    << "\n    Porcentagem de pessoas: " << ((float) notas[0][1] / espectadores) * 100 << "%\n"
    
    << "BOM: \n    Idade média: " << notas[1][0] / notas[1][1] 
    << "\n    Porcentagem de pessoas: " << ((float) notas[1][1] / espectadores) * 100 << "%\n"
    
    << "EXCELENTE: \n    Idade média: " << notas[2][0] / notas[2][1] 
    << "\n    Porcentagem de pessoas: " << ((float) notas[2][1] / espectadores) * 100 << "%\n" << endl;
}

int main(){
    const int Q_ESPECTADORES = 20;
    int nota, idade;
    int notas[3][2] = {{0,0}, {0,0}, {0,0}};

    nota = idade = 0;
    for (int i = 0; i < Q_ESPECTADORES; i++){
        cout << "Insira [Idade, Nota(3 - 2 - 1)] ";
        cin >> idade >> nota;

        notas[nota-1][0] += idade;
        notas[nota-1][1] += 1;
    }

    imprimir_op(notas, Q_ESPECTADORES);
}
