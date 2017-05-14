#include <iostream>
#include <string.h>

using namespace std;

bool esVocal(char);

void geringosoFacil(char[],char[]);
void geringosoDificil(char[],char[]);

int main()
{

    char palabra [50];
    char palabraGerFac [50] = "";
    char palabraGerDif [50] = "";
    cout<< "Ingrese la palabra" << endl;
    cin >> palabra;
    geringosoFacil(palabra,palabraGerFac);
    geringosoDificil(palabra,palabraGerDif);
    cout << "Gerundio Facil : " << palabraGerFac << endl;
    cout << "Gerundio Dificl : " << palabraGerDif;
    return 0;
}

void geringosoFacil(char palabra [],char palabraGer []){
    for(int i=0;i<strlen(palabra);i++){
        if(esVocal(palabra[i])){
            palabraGer[strlen(palabraGer)] = palabra[i];
            palabraGer[strlen(palabraGer)] = 'p';
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        else{
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
    }
}

void geringosoDificil(char palabra [],char palabraGer []){
    /*
    Se definen tres casos especiales
    1 - La ultima letra no es vocal y la anterior si lo es
    2 - La primer letra es vocal y las segundas dos no lo son
    3 - Una vocal esta seguida de la letra 'n'
    */
    for(int i=0;i<strlen(palabra);i++){
        //Condicion para tener en cuenta para el caso de que tengo siguiente letra y es N
        if(esVocal(palabra[i]) && strlen(palabra) > i+2 && palabra[i+1] == 'n'){
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Condicion cuando la letra es n, no es la ultima letra y la anterior es vocal
        else if(palabra[i] == 'n' && strlen(palabra) > i+1 && esVocal(palabra[i-1])){
            palabraGer[strlen(palabraGer)] = palabra[i];
            palabraGer[strlen(palabraGer)] = 'p';
            palabraGer[strlen(palabraGer)] = palabra[i-1];
        }
        //Condicion cuando estoy en la anteultima letra es vocal y la siguiente no es vocal
        else if(esVocal(palabra[i]) && i+2 == strlen(palabra) && !esVocal(palabra[i+1])){
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Condicion cuando estoy en la ultima letra no es vocal y la anterior si es vocal
        else if(!esVocal(palabra[i]) && i+1 == strlen(palabra) && esVocal(palabra[i-1])){
            palabraGer[strlen(palabraGer)] = palabra[i];
            palabraGer[strlen(palabraGer)] = 'p';
            palabraGer[strlen(palabraGer)] = palabra[i-1];
        }
        //Condicion cuando la primer letra es vocal y las siguientes dos no lo son
        else if(esVocal(palabra[i]) && i == 0 && !esVocal(palabra[i+1]) && !esVocal(palabra[i+2])){
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Condicion cuando es la segunda letra, no es vocal, la anterior si es vocal y la siguiente no es vocal
        else if(esVocal(palabra[i-1]) && i== 1 && !esVocal(palabra[i]) && !esVocal(palabra[i+1])){
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Condicion cuando es la tercer letra, la primera es vocal, la segunda no es vocal y la actual tampoco
        else if(esVocal(palabra[i-2]) && i== 2 && !esVocal(palabra[i-1]) && !esVocal(palabra[i])){
            palabraGer[strlen(palabraGer)] = 'p';
            palabraGer[strlen(palabraGer)] = palabra[i-2];
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Condicion cuando no se cumple ninguna de las anteriores y es vocal
        else if(esVocal(palabra[i])){
            palabraGer[strlen(palabraGer)] = palabra[i];
            palabraGer[strlen(palabraGer)] = 'p';
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
        //Si no se cumple ninguna de las anteriores entonces no hay ninguna condicion especial y no es vocal
        else{
            palabraGer[strlen(palabraGer)] = palabra[i];
        }
    }
}

bool esVocal(char letra){
    if(letra == 'a' || letra == 'e'|| letra == 'i' || letra == 'o' || letra == 'u'){
        return true;
    }
    return false;
}
