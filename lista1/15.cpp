#include <iostream>
using namespace std;

int main(){
    const int x1=8, x2=9, x3=7, 
              y1=4, y2=5, y3=6;
    
    float m1, m2;
    m1 = (x1+x2+x3)/3;
    m2 = (y1+y2+y3)/3;

    cout << "Primeira Media: " << m1
    << "\nSegunda Media: " << m2
    << "\nSoma das Medias: " << m1+m2
    << "\nMedia das Medias: " << (m1+m2)/2 << endl;
}
