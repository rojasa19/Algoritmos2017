#include <iostream>

using namespace std;

/** \brief
 * Desarrollar un programa que calcule el promedio de varios valores ingresados por teclado
 * muestre ese promedio por pantalla y termine cuando el usuario ingrese el valor 0
 * \param Int valor
 * \return
 */

int main()
{
    //Declaro las variables
    int valor, contador, sumador;
    float promedio;

    //Pido datos
    cout << "Ingrese un valor" << endl;

    //Asigno dato a la variable
    cin >> valor;

    //Inicializo las variables
    contador = 0;
    sumador = 0;

    //Ciclo de repetición
    while(valor != 0) {
        //Calculo suma de valores
        sumador = sumador + valor;
        //Incremento el contador
        contador++;
        //Solicito nuevamente el valor
        cout << "Ingrese otro valor" << endl;
        //Asigno el nuevo valor a la variable
        cin >> valor;
    }
    //Calculo el promedio
    promedio = sumador / contador;
    //Imprimo el promedio final
    cout << "El promedio de los datos ingresados es: " << promedio << endl;
    return 0;
}
