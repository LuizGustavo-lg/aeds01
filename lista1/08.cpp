#include <iostream>
using namespace std;

int main(){
    int seg=0, min=0, hr=0;
    cout << "Digite o tempo [S]: ";
    cin >> seg;

    hr = seg/3600;
    seg = seg%3600;

    min = seg/60;
    seg = seg%60;

    cout << hr << ":" << min << ":" << seg << endl;
    

}