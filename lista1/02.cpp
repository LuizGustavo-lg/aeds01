#include <iostream>
using namespace std;

int main(){
    int u=0, d=0, c=0, num=0;
    cout << "Encira os valores das [U, D, C]: ";
    cin >> u >> d >> c;
    
    num = (c*100) + (d*10) + u;
    num *= 2;

    cout << num << endl;
}