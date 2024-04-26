#include <iostream>
using namespace std;

int main(){
    int l_super, l_infer, somat=0;

    cout << "Digite o limite inferior e superior do intervalo: ";
    cin >> l_infer >> l_super;

    if (l_infer%2!=0) ++l_infer;

    for (l_infer; l_infer<=l_super; l_infer += 2) {
        cout << l_infer << " ";
        somat+=l_infer;
    }

    cout << "\nSomatorio: " << somat << endl;
}
