/* Questão 3 da ficha: Peça ao usuario para digitar três valores inteiros e imprima a soma deles. */

int main(){

    int valor1;
    int valor2;
    int valor3;

    cout << "Digite o primeiro número: ";
    cin >> valor1;
    cout << " Digite o segundo número: ";
    cin >> valor2;
    cout << " Digite o terceiro número: ";
    cin >> valor3;
    cout << "A soma total é: " << valor1 + valor2 + valor3;

     return 0;
}

/* Também pode ser:

#include <iostream>

using namespace std;

int main(){

    int valor1;
    int valor2;
    int valor3;

    cout << "Digite o primeiro número:\n ";
    cin >> valor1;
    cout << " Digite o segundo número:\n ";
    cin >> valor2;
    cout << " Digite o terceiro número:\n ";
    cin >> valor3;
    cout << "A soma total é: " << (valor1 + valor2 + valor3);

     return 0;
}
*/