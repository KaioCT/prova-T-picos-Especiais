/******************************************************************************
20. Dados 20 números, exibir a média aritmética dos números pares e a média aritmética dos números ímpares
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero, somaPar = 0, somaImpar = 0, contPar = 0, contImpar = 0;
    double mediaPar, mediaImpar;
    for(int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> numero;
        if(numero % 2 == 0) {
            somaPar += numero;
            contPar++;
        } else {
            somaImpar += numero;
            contImpar++;
        }
    }
    if(contPar > 0) {
        mediaPar = static_cast<double>(somaPar) / contPar;
        cout << "A média aritmética dos números pares é " << mediaPar << endl;
    } else {
        cout << "Nenhum número par foi digitado." << endl;
    }
    if(contImpar > 0) {
        mediaImpar = static_cast<double>(somaImpar) / contImpar;
        cout << "A média aritmética dos números ímpares é " << mediaImpar << endl;
    } else {
        cout << "Nenhum número ímpar foi digitado." << endl;
    }
    return 0;
}
