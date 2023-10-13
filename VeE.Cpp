/* 

Variáveis Principais:

Bool: se ultiliza 1 byte da memória e os valores true ou false.
Char: utiliza 1 byte da memória, permine armazemar um caractere ou uma cadeia de caracteres. 
Int: utiliza 4 bytes de memória e armazena números interos (sem casas decimais) com valores que vão de -2.147.483.648 a 2.147.483.647.
Double: utiliza 8 bytes de memória e armazena números com menos de 15 casas decimais com valores que vão de 2.2e-308 a 1.79e308.
Float: utiliza 4 bytes de memória e armazena números com menos de 6 casas decimais com valores que vão de 1.2e-38 a 3.4e-38.

ex:

#include <iostream>

using namespace std;

int main (){

int inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;
    
    double realM;
    realM = 5.2e99;
    cout << realM << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    bool booleanoF;
    booleanoF = false;
    cout << booleanoF << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    char letra2;
    letra2 = 'bola';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

}

*/

#include <iostream>

using namespace std;

int main() {

    int idade;
    cout << " Qual a sua idade?" << endl;
    cin >> idade;
    cout << "idade: " << idade << endl;
    system("pause");
    
    return 0;

}