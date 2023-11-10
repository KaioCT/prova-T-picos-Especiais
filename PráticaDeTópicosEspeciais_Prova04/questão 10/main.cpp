/******************************************************************************
10. Entrar com dois números que indiquem o limite inferior e superior de um intervalo. Exibir os números impares 
entre o intervalo.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int inferior, superior;
    cout << "Digite o limite inferior do intervalo: ";
    cin >> inferior;
    cout << "Digite o limite superior do intervalo: ";
    cin >> superior;
    for(int i = inferior; i <= superior; i++) {
        if(i % 2 != 0) {
            cout << i << " é ímpar" << endl;
        }
    }
    return 0;
}
