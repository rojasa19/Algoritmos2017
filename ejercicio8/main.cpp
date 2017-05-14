#include <iostream>

using namespace std;
/**
 * @brief Ingresar por teclado la palabra 'topo' y mostrar por pantalla la palabra invertida
 * param chart topo
 * \return 0
 */
int main()
{
    char topo[4] = "";
    int contador = 0;

    cout << "Ingrese la palabra topo" << endl;
    cin >> topo;
    //Obtengo el length del chart
    while(topo[contador] != '\0') {
        contador++;
    }
    //Recorro caracter por caracter para invertirlo
    for(int i = 1; i <= contador; i++) {
        cout << topo[contador - i];
    }
    return 0;
}
