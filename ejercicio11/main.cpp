#include <iostream>
#define tam 9
using namespace std;

float promVect(int[tam]);
void esParVect(int[tam], bool[tam]);
bool esPar(int);

int main()
{
    int vecEnteros[tam];
    for(int i = 0; i < tam; i++) {
        vecEnteros[i] = i + 1;
    }
    cout << vecEnteros << endl;
    promVect(vecEnteros);
    return 0;
}

// Funcion que retorna el promedio del vector
float promVect(int vecEnteros[tam]) {
    int sum = 0;
    float result = 0;
    for(int i = 0; i < tam; i++) {
        sum = sum + vecEnteros[i];
    }
    result = sum / tam;
    cout << "El promedio del vector es: " << result << endl;
    return result;
}
// Funcion que retorna si el vector es par
void esParVect(int vecEnteros[tam], bool vecBool[tam]) {
    for(int i = 0; i < tam; i ++) {
        vecBool[i] = esPar(vecEnteros[i]);
    }
}
// Funcion que retorna si un numero es par o no
bool esPar(int valor) {
    int res = valor % 2;
    if(res == 0) {
        return true;
    }else {
        return false;
    }
}
