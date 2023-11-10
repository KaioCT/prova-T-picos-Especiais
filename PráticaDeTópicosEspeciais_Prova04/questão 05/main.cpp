/******************************************************************************
5. Entrar com dez números, exibir a metade e a raiz cúbica de cada número. 
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;
    for(int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        cout << "A metade de " << numero << " é " << numero/2 << endl;
        cout << "A raiz cúbica de " << numero << " é " << cbrt(numero) << endl;
    }
    return 0;
}
