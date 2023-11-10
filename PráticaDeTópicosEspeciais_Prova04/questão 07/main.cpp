/******************************************************************************
7. Dados os números inteiros A e B, fazer um algoritmo que calcule 𝐴^𝐵. 
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "A^B = " << pow(A, B) << endl;
    return 0;
}
