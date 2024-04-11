#include <iostream>

using  namespace std;

int main() {
    float n1, n2, n3, n4;

    cout << "Digite as notas das 4 provas: ";
    cin >> n1 >> n2 >> n3 >> n4;

    float media = (n1+n2+n3+n4)/4.0;

    cout << "Média: " << media << endl;
}
