#include <iostream>
using namespace std;


int main(){
    float pr1 = 0, pr2 = 0, media_al, media_t;
    string nome;

    int i;
    for (i = 0; i < 15; i++){
        cout << "Digite o nome do " << i + 1 << "° aluno e a nota da prova 1 e 2: ";
        cin >> nome >> pr1 >> pr2;

        media_al = (pr1 + pr2) / 2;
        media_t += media_al;
        cout << "Nome: " << nome
        << "\nNota da prova 1: " << pr1
        << "\nNota da prova 2: " << pr2
        << "\nMédia do aluno: " << media_al << endl;
    }
    cout << "Media geral: " << media_t / (++i) << endl;
}
