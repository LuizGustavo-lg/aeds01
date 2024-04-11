#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// Uma pessoa aplicou seu capital a juros e deseja saber,
// trimestralmente, a posição de seu investimento C inicial. Chamando de
// I a taxa de juros do trimestre, escrever uma tabela que dê para cada
// trimestre o rendimento auferido e o saldo acumulado durante um
// período de X anos, supondo-se que nenhuma retirada tenha sido feita.
// Observações:
//     a) Os valores de C, I e X estão disponíveis numa unidade de entrada.
//     b) A fórmula para capitalização composta é dada por:

//     Mn = C*(1+i)**n

// onde:
//     Mn montante após terem decorridos n trimestres;  
//     C capital inicial investido;
//     i taxa de juros;
//     n número de períodos decorridos (trimestres)

int main() {
    int anos;
    float capital, juros;

    cout << "Encira os valores iniciais\n" << endl;
    cout << "Investimento inicial: ";
    cin >> capital;

    cout << "Taxa de Juros trimestrais: ";
    cin >> juros;

    cout << "Anos para serem analizados: ";
    cin >> anos;

    float rendimento, montante = capital;


    cout << "\n\n|" << "Trimestre" << "|" << "Rendimento " << "|" << "Montante   " << "|" << endl;

    for (int n=1; n<=(anos*4); n++){
        rendimento = montante * juros;
        montante = capital * pow((1+juros), n);

        cout << "|" << setw(9) << n << "|" << setw(11) << rendimento << "|" << setw(11) << montante << "|" << endl;
    }
}
