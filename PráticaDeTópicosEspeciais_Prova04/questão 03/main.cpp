/******************************************************************************
3. Exibir os números múltiplos de 3 no intervalo de 10 a 30.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    for(int i = 10; i <= 30; i++) {
        if(i % 3 == 0) {
            cout << i << " é múltiplo de 3" << endl;
        }
    }
    return 0;
}
