#include <iostream>

using namespace std;

int main()
{
    // Declaro las variables
    int valor1, valor2, resultado;
    // Solicito por pantalla los dos valores
    cout << "Ingrese dos valores numericos: " << endl;
    // Guardo los valores en las variables
    cin >> valor1 >> valor2;
    // Se suman los valores
    resultado = valor1 + valor2;
    //Imprimo el resultado
    cout << "La suma entre " << valor1 << " y " << valor2 << " es: " << resultado;
    return 0;
}
