#include <iostream>
using namespace std;

void imp_media_pessoas(float p[4][2]) {
    cout << "Médias: " 
    << "\n1 a 10 anos: " << p[0][0]/p[0][1]
    << "\n11 a 20 anos: " << p[1][0]/p[1][1]
    << "\n21 a 30 anos: " <<  p[2][0]/p[2][1]
    << "\nmaiores que 30 anos: " << p[3][0]/p[3][1] << endl;
}

int get_indice_idade(int idade){
        if (idade >= 1 && idade < 11) return 0;
        else if (idade >= 11 && idade < 21) return 1;
        else if (idade >= 21 && idade < 31) return 2;
        else if (idade >= 31) return 3;
        return -1;
}

int main(){
    float pessoas[4][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
    int idade;
    float peso;
    
    for (int i = 0; i < 20; i++){
        cout << "Digite a idade e peso: ";
        cin >> idade >> peso;

        pessoas[get_indice_idade(idade)][0] += peso;
        pessoas[get_indice_idade(idade)][1] += 1;
    }

    imp_media_pessoas(pessoas);
}
