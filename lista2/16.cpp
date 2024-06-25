#include <iostream>
using namespace std;

struct Horario{
    int hora;
    int minuto;
    int segundo;
};

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Compromisso{
    Horario hora;
    Data data;
    string descricao;
};
