#include <iostream>
#include <iomanip>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Funcionario{
    string nome;
    int idade;
    char sexo;
    char cpf[11];
    Data nascimento;
    int cod_setor;
    string cargo;
    float salario;
};


int main(){
    Funcionario funcionarios[10];

    for (int i = 0; i < 2; i++){
        cout << "Cadastro do " << i+1 << "° funcionario:\n";
        cout << "Informe o nome: ";
        cin >> funcionarios[i].nome;
        cout << "Informe a idade: ";
        cin >> funcionarios[i].idade;
        cout << "Informe o sexo [M/F]: ";
        cin >> funcionarios[i].sexo;
        cout << "Informe o cpf [11111111111]: ";
        cin >> funcionarios[i].cpf;
        cout << "Informe a data de nascimento [dd mm yyyy]: ";
        cin >> funcionarios[i].nascimento.dia >> funcionarios[i].nascimento.mes >> funcionarios[i].nascimento.ano;
        cout << "Informe o codico do setor: ";
        cin >> funcionarios[i].cod_setor;
        cout << "Informe o cargo: ";
        cin >> funcionarios[i].cargo;
        cout << "Informe o salario: ";
        cin >> funcionarios[i].salario;
    }

    for (int i = 0; i < 2; i++){
        cout << "+==============================================+"
        << "\n Nome:        |" << setw(30) << funcionarios[i].nome
        << "\n Idade:       |" << setw(30) << funcionarios[i].idade
        << "\n Sexo:        |" << setw(30) << funcionarios[i].sexo
        << "\n CPF:         |" << setw(29) << funcionarios[i].cpf
        << "\n Data Nasc.:  |" << setw(23) << funcionarios[i].nascimento.dia << '/' << funcionarios[i].nascimento.mes << '/' << funcionarios[i].nascimento.ano
        << "\n Cod. setor:  |" << setw(30) << funcionarios[i].cod_setor
        << "\n Cargo:       |" << setw(30) << funcionarios[i].cargo
        << "\n Salario:     |" << setw(30) << funcionarios[i].salario << endl;        
    }

}