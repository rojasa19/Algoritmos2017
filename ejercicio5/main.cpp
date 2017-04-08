#include <iostream>

using namespace std;

/** \brief
 * Dado un nuemero y entero de 8 digitos con formato aaaammdd descompongalo en sus elementos logicos e imprimalo por pantalla
 * \param
 * \param
 * \return
 *
 */
int main()
{
    long fecha;
    int dia, mes, anio;
    cout << "Ingrese un valor con formato aaaammdd" << endl;
    cin >> fecha;

    anio = fecha / 10000;
    mes = (fecha / 100)%100;
    dia = fecha % 100;

    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
    cout << "Anio: " << anio << endl;

    return 0;
}
