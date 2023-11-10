/******************************************************************************
9. Entrar com o nome, idade e sexo de 20 pessoas. Exibir o nome da pessoa se ela for do sexo masculino e tiver 
mais que 21 anos.
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, sexo;
    int idade;
    for(int i = 1; i <= 20; i++) {
        cout << "Digite o nome da " << i << "ª pessoa: ";
        cin >> nome;
        cout << "Digite a idade da " << i << "ª pessoa: ";
        cin >> idade;
        cout << "Digite o sexo da " << i << "ª pessoa (M para masculino, F para feminino): ";
        cin >> sexo;
        if(sexo == "M" && idade > 21) {
            cout << nome << " é do sexo masculino e tem mais que 21 anos." << endl;
        }
    }
    return 0;
}
