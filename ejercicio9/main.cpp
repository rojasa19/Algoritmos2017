#include <iostream>
#include <string.h>

using namespace std;

bool esPar(int);
bool esImpar(int);
void permutarNumeros(int &, int &);
bool divisible(int &, int &);
bool cantCaracteresTipoDato(char [10]);
bool esCapicua(char[6]);
int factorial(int);

int main() {
    cout << "Hello world!" << endl;
    int a = 5;
    int b = 4;
    cout << a << endl;
    cout << b << endl;
    permutarNumeros(a, b);
    cout << a << b;

    int numero = 5;
    int fact = factorial(numero);
    cout << "El factorial de " << numero << " es: " << fact << endl;
    return 0;
}

//Funcion que chequea si el numero es par
bool esPar(int num) {
    int res = num % 2;
    if(res == 0) {
        cout << "El numero es par" << endl;
        return true;
    }else {
        cout << "El numero no es par" << endl;
        return false;
    }
}

//Funcion que chequea si el numero es impar
bool esImpar(int num) {
    int res = num % 2;
    if(res != 0) {
        cout << "El numero es impar" << endl;
        return true;
    }else {
        cout << "El numero no es impar" << endl;
        return false;
    }
}

// Funcion que permuta dos valores
void permutarNumeros(int &numero1, int &numero2) {
    int aux;
    aux = numero1;
    numero1 = numero2;
    numero2 = aux;
}

// funcion que retorna si el numero es divisible
bool divisible(int &numero1, int &numero2) {
    int res = numero1 % numero2;
    if(res == 0) {
        return true;
        cout << "El numero es divisible" << endl;
    }else {
        return false;
        cout << "El numero no es divisible" << endl;
    }
}

// Funcion que retorna si el total de caracteres es par o impar
bool cantCaracteresTipoDato(char palabra[]) {
    int cantCaracteres = strlen(palabra);
    cout << "El total de caracteres es: " << cantCaracteres;
    bool res = esPar(cantCaracteres);
    if(res) {
        cout << "La palabra es par" << endl;
        return true;
    }else {
        cout << "La palabra es impar" << endl;
        return false;
    }
}

// Funcion que retorna si la palabra es capicua
bool esCapicua(char palabra[]) {
    int sizePalabra = strlen(palabra);

    for(int i = 0; i < sizePalabra; i++) {
        if(palabra[i] != palabra[sizePalabra - i - 1]) {
            return false;
        }
    }
    return true;
}

// Funcion factorial
int factorial(int numero) {
    if(numero == 0) {
        return 1;
    }
    return numero * factorial(numero - 1);
}
