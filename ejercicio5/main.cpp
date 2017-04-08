#include <iostream>

using namespace std;

/** \brief
 * Dado un nuemero y entero de 8 digitos con formato aaaammdd descompongalo en sus elementos logicos e imprimalo por pantalla
 * \param Int fecha
 * \return
 *
 */
int main()
{
    //Declaro variables
    int fecha, dia, mes, anio;
    //Solicito dato
    cout << "Ingrese un valor con formato aaaammdd" << endl;
    //Asigno dato a la variable
    cin >> fecha;
    //Calculo los datos
    anio = fecha / 10000;
    mes = (fecha / 100)%100;
    dia = fecha % 100;
    //Imprimo los datos
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Anio: " << anio << endl;

    return 0;
}
