#include <iostream>

using  namespace std;

int main() {
    char ch;
    cout << "Precione uma tecla: "; 
    ch = getchar();
    cout << "\nA tecla sucessora ASCII é: " << char(ch+1) << endl;
}
