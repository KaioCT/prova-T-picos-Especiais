/******************************************************************************
11. Dados N números digitados pelo usuário, exibir o somatório deles. Onde o valor N é dado também pelo usuário. 
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N;
    double numero, soma = 0;
    cout << "Digite a quantidade de números: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        soma += numero;
    }
    cout << "O somatório dos números é " << soma << endl;
    return 0;
}
