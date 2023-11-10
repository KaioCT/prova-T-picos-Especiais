/******************************************************************************
6. Entrar com N números, exibir a metade e a raiz cúbica de cada número. Onde o valor N é dado também pelo usuário.
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double numero;
    cout << "Digite a quantidade de números: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        cout << "A metade de " << numero << " é " << numero/2 << endl;
        cout << "A raiz cúbica de " << numero << " é " << cbrt(numero) << endl;
    }
    return 0;
}
