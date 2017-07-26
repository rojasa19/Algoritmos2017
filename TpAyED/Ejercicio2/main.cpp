#include <iostream>

using namespace std;

int main()
{
    char p[2], q[2], r[2];
    cout << "Ejercicio n1: Implicacion logica 2" << endl;
    cout << "¿El voto es emitido mediante boleta no oficializada? (s/n)" << endl;
    cin >> p;
    cout << "¿Fue emitido con papel de cualquier color con inscripciones o imagenes de cualquier naturaleza? (s/n)" << endl;
    cin >> q;
    cout << "¿Fue emitido mediante dos o mas boletas de la misma categoria de candidatos y diferente agrupacion politica? (s/n)" << endl;
    cin >> r;

    if(p[0] == 's' || q[0] == 's') {
        cout << "El voto es nulo" << endl;
    }else {
        if(r[0] == 's') {
            cout << "El voto es nulo" << endl;
        }else {
            cout << "El voto no es nulo" << endl;
        }
    }
    return 0;
}
