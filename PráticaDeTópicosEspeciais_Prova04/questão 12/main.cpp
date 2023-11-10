/******************************************************************************
12. Dados N números digitados pelo usuário, exibir o maior e o menor deles.
*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N;
    double numero, maior = -numeric_limits<double>::max(), menor = numeric_limits<double>::max();
    cout << "Digite a quantidade de números: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
    }
    cout << "O maior número é " << maior << " e o menor número é " << menor << endl;
    return 0;
}
