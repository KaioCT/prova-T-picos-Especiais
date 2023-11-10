/******************************************************************************
13. Dados N números digitados pelo usuário, exibir o somatório, o maior e o menor deles.
*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N;
    double numero, soma = 0, maior = -numeric_limits<double>::max(), menor = numeric_limits<double>::max();
    cout << "Digite a quantidade de números: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        soma += numero;
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }
    }
    cout << "O somatório dos números total é " << soma << endl;
    cout << "O somatório do maior e menor numero é " << maior + menor << endl;
    cout << "O maior número é " << maior << endl;
    cout << "O menor número é " << menor << endl;
    return 0;
}
