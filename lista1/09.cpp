#include <iostream>
using namespace std;

int main(){
    float hr_trab, v_sal_horas, inss, sbruto; 
    cout << "Digite as horas trabalhadas, salario-hora e o inss: ";
    cin >> hr_trab >> v_sal_horas >> inss;

    sbruto = hr_trab*v_sal_horas;

    cout << "Salario Bruto: R$" << sbruto
    << "\nSalario Liguido: R$" << sbruto*(1-(inss/100))
    << endl;
}