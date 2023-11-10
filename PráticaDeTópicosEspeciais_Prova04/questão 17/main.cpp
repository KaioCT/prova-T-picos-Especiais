/******************************************************************************
17. Dado um número inteiro e positivo N, exibir o valor de seu fatorial (N!). 
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N;
    long long fatorial = 1;
    cout << "Digite um número inteiro e positivo: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        fatorial *= i;
    }
    cout << "O fatorial de " << N << " é " << fatorial << endl;
    return 0;
}
