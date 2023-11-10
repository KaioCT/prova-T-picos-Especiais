/******************************************************************************
15. Entrar com os sexos de várias pessoas (m ou f). Exibir a quantidade de pessoas do sexo masculino e a quantidade 
de pessoas do sexo feminino. O algoritmo termina quando é digitado um sexo @.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char sexo;
    int masculino = 0, feminino = 0;
    cout << "Digite o sexo de uma pessoa (m para masculino, f para feminino, @ para terminar): ";
    cin >> sexo;
    while(sexo != '@') {
        if(sexo == 'm') {
            masculino++;
        } else if(sexo == 'f') {
            feminino++;
        }
        cout << "Digite o sexo de uma pessoa (m para masculino, f para feminino, @ para terminar): ";
        cin >> sexo;
    }
    cout << "Quantidade de pessoas do sexo masculino: " << masculino << endl;
    cout << "Quantidade de pessoas do sexo feminino: " << feminino << endl;
    return 0;
}
