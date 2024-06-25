#include <iostream>
using namespace std;


struct aluno{
    int pontos = 0;
    int numero;
};


int main(){
    const int N_ALUNOS = 5;
    int n_aproados = 0;
    char gabarito[10];
    aluno alunos[N_ALUNOS];

    for (int i = 0; i < 10; i++){
        cout << "Digite a resposta da questão " << i+1 << ": ";
        cin >> gabarito[i];
    }

    char resposta;
    for (int i = 0; i < N_ALUNOS; i++){
        cout << "Digite o número do " << i+1 << "° aluno: ";
        cin >> alunos[i].numero;
 
        for (int questao = 0; questao < 10; questao++){
            cout << "\tResposta questão " << questao+1 << " : ";
            cin >> resposta;
            if (gabarito[questao] == resposta) ++alunos[i].pontos;
        }

        if (alunos[i].pontos >= 6) ++n_aproados;
    }


    for (int i = 0; i < N_ALUNOS; i++){
        cout << "Aluno n° " << alunos[i].numero << endl;
        cout << "\tNota: " << alunos[i].pontos << endl;
    }
    cout << "Porcentagem de aprovação: " << (n_aproados*100)/N_ALUNOS << "%" << endl;
}
