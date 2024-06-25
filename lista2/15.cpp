#include <iostream>
using namespace std;

struct aluno{
    string nome;
    float notas[3];

    int soma = 0;
    bool aprovado = false;
};

int main(){
    aluno alunos[3];

    for (int i = 0; i < 3; i++){
        cout << "Digite o nome do " << i+1 << "° aluno: ";
        cin >> alunos[i].nome;
        
        for (int j = 0; j < 3; j++){
            cout << "  Nota da prova " << j+1 << " : ";
            cin >> alunos[i].notas[j];
            alunos[i].soma += alunos[i].notas[j];
        }
        if (alunos[i].soma >= 60) alunos[i].aprovado = true;
    }

    for (int i = 0; i < 3; i++){
        cout << alunos[i].nome
        << "\n Soma: " << alunos[i].soma
        << "\n Situação: " << (alunos[i].aprovado ? "Aprovado" : "Reprovado") << endl;  
    }

}