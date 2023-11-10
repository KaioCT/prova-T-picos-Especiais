/******************************************************************************
14. Entrar com números positivos e exibir se cada número é par ou ímpar. O algoritmo termina quando é digitado -1.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número positivo ou -1 para terminar: ";
    cin >> numero;
    while(numero != -1) {
        if(numero % 2 == 0) {
            cout << numero << " é par" << endl;
        } else {
            cout << numero << " é ímpar" << endl;
        }
        cout << "Digite um número positivo ou -1 para terminar: ";
        cin >> numero;
    }
    return 0;
}
