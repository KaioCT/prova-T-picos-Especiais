/******************************************************************************
19. Entrar com as idades de 20 pessoas. Exibir a média aritmética das idades, a maior idade e menor idade
*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int idade, soma = 0, menor = numeric_limits<int>::max(), maior = -numeric_limits<int>::max();
    double media;
    for(int i = 1; i <= 20; i++) {
        cout << "Digite a idade da " << i << "ª pessoa: ";
        cin >> idade;
        soma += idade;
        if(idade < menor) {
            menor = idade;
        }
        if(idade > maior) {
            maior = idade;
        }
    }
    media = static_cast<double>(soma) / 20;
    cout << "A média aritmética das idades é " << media << endl;
    cout << "A maior idade é " << maior << endl;
    cout << "A menor idade é " << menor << endl;
    return 0;
}

