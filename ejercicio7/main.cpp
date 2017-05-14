#include <iostream>

using namespace std;
/**
 * @brief Dados dos valores numericos, informar cual es el mayor y cual es el menor o igual
 * @param numero1
 * @param numero2
 */

int main()
{
    int numero1, numero2;
    cout << "Ingrese dos valores numericos" << endl;
    cin >> numero1 >> numero2;

    if(numero1 >= numero2) {
        if(numero1 > numero2) {
            cout << "numero 1 es mayor :" << numero1 << endl;
            cout << "numero 2 es menor :" << numero2 << endl;
        }else {
            cout << "Ambos numeros son iguales" << endl;
        }
    }else {
        cout << "numero 2 es mayor :" << numero2 << endl;
        cout << "numero 1 es menor :" << numero1 << endl;
    }
    return 0;
}
