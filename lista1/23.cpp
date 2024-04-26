#include <iostream>
using namespace std;

int main(){
    int d_nasc, m_nasc, a_nasc, d_at, m_at, a_at, idade;

    cout << "Insira a data de nascimento: [DD MM AAAA] ";
    cin >> d_nasc >> m_nasc >> a_nasc;

    cout << "Insira a data atual: [DD MM AAAA] ";
    cin >> d_at >> m_at >> a_at;
    
    
    idade = a_at-a_nasc;

    if ((m_at < m_nasc) || (m_at == m_nasc && d_at < d_nasc)){
        --idade;
    }

    cout << "Você tem " << idade << " anos" << endl;
}
