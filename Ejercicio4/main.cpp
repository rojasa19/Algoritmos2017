/*
* @Descripciosn: Escriba un programa que repita 9 veces la cadena de texto "Soy feliz" pero usando while, do while y for
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Primer ejercicio con while" << endl;
    int valor1 = 0;
    while(valor1 < 9) {
        cout << "Soy feliz" << endl;
        valor1++;
    }
    cout << "Fin del while" << endl << endl;

    cout << "Primer ejercicio con do while" << endl;
    int valor2 = 0;
    do {
        cout << "Soy feliz" << endl;
        valor2++;
    }while(valor2 < 9);
    cout << "Fin del do while" << endl << endl;

    cout << "Primer ejercicio con for" << endl;
    int valor3 = 0;
    for(valor3; valor3 < 9; valor3++){
        cout << "Soy feliz" << endl;
    }
    cout << "Fin del for" << endl;

    return 0;
}
