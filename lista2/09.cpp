#include <iostream>
using namespace std;

void imprimir_alunos(string nomes[], float notas[][3], int qnt, float media){
    for (int i = 0; i < qnt; i++) {
        cout << nomes[i] << 
        "\n----Nota PR1: " << notas[i][0] <<
        "\n----Nota PR2: " << notas[i][1] <<
        "\n----Media: " << notas[i][2] << endl;
    }

    cout << "\nMédia da turma: " << media << endl;
}


int main(){
    const int Q_ALUNOS = 3;

    string nomes[Q_ALUNOS];
    float notas[Q_ALUNOS][3];
    float soma_notas = 0;

    for (int i = 0; i < Q_ALUNOS; i++){
        cout << "Insira: [Nome, PR1, PR2] ";
        cin >> nomes[i] >> notas[i][0] >> notas[i][1];
        
        notas[i][2] = (notas[i][0]+notas[i][1])/2;
        soma_notas += notas[i][2];
    }

    imprimir_alunos(nomes, notas, Q_ALUNOS, soma_notas/Q_ALUNOS);
}
