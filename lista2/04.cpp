#include <iostream>
using namespace std;


void calc_media_pessoas(float p[20][2]) {
    float soma1, soma11, soma21, soma30;
    float qnt1, qnt11, qnt21, qnt30;

    soma1 = soma11 = soma21 = soma30 = qnt1 = qnt11 = qnt21 = qnt30 = 0;
    
    for (int i = 0; i < 20; i++){
        if (p[i][0] >= 1 && p[i][0] < 11) {
            soma1 += p[i][1];
            ++qnt1;

        } else if (p[i][0] >= 11 && p[i][0] < 21) {
            soma11 += p[i][1];
            ++qnt11;

        } else if (p[i][0] >= 21 && p[i][0] < 31) {
            soma21 += p[i][1];
            ++qnt21;

        } else if (p[i][0] >= 31) {
            soma30 += p[i][1];
            ++qnt30;

        } 
    }

    cout << "1 a 10 anos: " << soma1/qnt1 
    << "\n11 a 20 anos: " << soma11/qnt11
    << "\n21 a 30 anos: " << soma21/qnt21
    << "\nmaiores que 30 anos: " << soma30/qnt30 << endl;
}


int main(){
    float pessoas[20][2];
    
    for (int i = 0; i < 20; i++){
        cout << "Digite a idade e peso: ";
        cin >> pessoas[i][0] >> pessoas[i][1];
    }

    calc_media_pessoas(pessoas);
}