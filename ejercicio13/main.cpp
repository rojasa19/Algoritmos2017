#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Ingredientes {
    int idIngrediente;
    char nombre[30+1];
};

struct Pizza {
    int idPizza;
    char nombre[30 +1];
    float precio;
    Ingredientes ingrediente[5];
};

Ingredientes initIngredientes(Ingredientes[4]);
Pizza nuevaPizza();

int main()
{
    Ingredientes vecIngredientes[5];
    initIngredientes(vecIngredientes);
    int pregunta;
    Pizza arrPizzas[10];
    countPizza = 0;

    cout << "¿Quiéres hacer una pizza? Si(1)/ No(0)" << endl;
    cin >> pregunta;
    while(pregunta == 1) {
        Pizza pizza;
        pizza.idPizza = 1;
        cout << "Ingrese nombre de su pizza: " << endl;
        cin >> pizza.nombre;
        cout << "¿Cuál es el precio de tu pizza?" << endl;
        cin >> pizza.precio;
        arrPizzas[countPizza] = pizza;

        cout << "¿Quiéres hacer otra pizza? Si(1)/ No(0)" << endl;
        cin >> pregunta;
    }
    return 0;
}

Ingredientes initIngredientes(Ingredientes vecIngredientes[]) {
    Ingredientes salsa;
    salsa.idIngrediente = 1;
    strcpy(salsa.nombre,"Salsa");

    Ingredientes muzzarela;
    muzzarela.idIngrediente = 2;
    strcpy(muzzarela.nombre, "muzzarela");

    Ingredientes oregano;
    oregano.idIngrediente = 3;
    strcpy(oregano.nombre, "Oregano");

    Ingredientes aceituna;
    aceituna.idIngrediente = 4;
    strcpy(aceituna.nombre, "Aceituna");

    vecIngredientes[0] =  salsa;
    vecIngredientes[1] = muzzarela;
    vecIngredientes[2] = oregano;
    vecIngredientes[2] = aceituna;
}

Pizza nuevaPizza() {
    Pizza pizza;
    pizza.idPizza = 1;
    cout << "Ingrese nombre de su pizza: " << endl;
    cin >> pizza.nombre;
    cout << "¿Cuál es el precio de tu pizza?" << endl;
    cin >> pizza.precio;
}
