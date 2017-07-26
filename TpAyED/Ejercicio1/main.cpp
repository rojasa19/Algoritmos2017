#include <iostream>

using namespace std;

int main()
{
    char pertenece[2];
    char aval[2];
    cout << "Ejercicio n1: Implicacion logica 1" << endl;
    cout << "¿Pertenece al partido politico? (s/n)" << endl;
    cin >> pertenece;
    cout << "¿Cuenta con el aval del 2% de los afiliados a dicho partido? (s/n)" << endl;
    cin >> aval;

    if(pertenece[0] == 's' && aval[0] == 's') {
        cout << "Puede ser candidato, felicitaciones" << endl;
    }else {
        cout << "No puede ser candidato" << endl;
    }
    return 0;
}
