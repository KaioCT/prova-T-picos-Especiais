/******************************************************************************
18. Fazer um algoritmo que exiba os 20 primeiros termos da série de FIBONACCI. A série de FIBONACCI começa 
com os números 1 e 1, os restantes são calculados a partir da soma dos dois anteriores a ele. Exemplo: 1, 1, 2, 3, 
5, 8, 13, 21, 34, ...
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 1, x;
    cout << "Série de Fibonacci: " << a << ", " << b << ", ";
    for(int i = 3; i <= 20; i++) {
        x = a + b;
        cout << x;
        if(i < 20) {
            cout << ", ";
        }
        a = b;
        b = x;
    }
    cout << endl;
    return 0;
}
