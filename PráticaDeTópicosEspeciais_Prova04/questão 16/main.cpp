/******************************************************************************
16. Dadas as idades de várias pessoas, exibir a menor idade, a maior idade e a média aritmética das idades. O 
programa termina quando for digitada uma idade -1. 
*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int idade, cont = 0, soma = 0, menor = numeric_limits<int>::max(), maior = -numeric_limits<int>::max();
    double media;
    cout << "Digite a idade de uma pessoa ou -1 para terminar: ";
    cin >> idade;
    while(idade != -1) {
        soma += idade;
        cont++;
        if(idade < menor) {
            menor = idade;
        }
        if(idade > maior) {
            maior = idade;
        }
        cout << "Digite a idade de uma pessoa ou -1 para terminar: ";
        cin >> idade;
    }
    if(cont > 0) {
        media = static_cast<double>(soma) / cont;
        cout << "A menor idade é " << menor << endl;
        cout << "A maior idade é " << maior << endl;
        cout << "A média aritmética das idades é " << media << endl;
    } else {
        cout << "Nenhuma idade foi digitada." << endl;
    }
    return 0;
}
