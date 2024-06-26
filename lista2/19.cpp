#include <iostream>
using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};

void imprime_livro(Livro l){

    cout << "+========================+"
    << "\n Titulo: " << l.titulo
    << "\n Autor: " << l.autor
    << "\n Ano: " << l.ano << endl;
}

int main(){
    Livro livros[5];

    for (int i = 0; i < 5; i++){
        cout << "Informe o titulo, autor e ano do " << i+1 << "° livro: ";
        cin >> livros[i].titulo >> livros[i].autor >> livros[i].ano;
    }

    int ano;
    cout << "Digite o ano para buscar: ";
    cin >> ano;
    for (int i = 0; i < 5; i++){
        if (ano == livros[i].ano) imprime_livro(livros[i]);
    }
}