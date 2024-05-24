#include <iostream>
using namespace std;

float calc_salario(float salario, int hrs_t){
    float s_bruto = salario*hrs_t;
    float desconto = 1;

    if (s_bruto > 200) desconto = 0.8;
    else if (s_bruto >= 100) desconto = 0.9;

    return s_bruto*desconto;
}

int main(){
    int hrs;
    float salario_hr, salario_l;

    cout << "Informe o salario hora e a quantidade de horas trabalhadas: ";
    cin >> salario_hr >> hrs;

    cout << "Salario líquido: " << calc_salario(salario_hr, hrs) << endl;
}