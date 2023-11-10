/******************************************************************************
4. Exibir o somatório dos números entre 20 e 60. 
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    for(int i = 20; i <= 60; i++) {
        soma += i;
    }
    cout << "O somatório dos números entre 20 e 60 é " << soma << endl;
    return 0;
}
