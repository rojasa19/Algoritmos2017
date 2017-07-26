#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribir(string);
void datosCandidato(ofstream&);
void ingresoTotales(ofstream&);

int main() {
    string numeroMesa;
    cout <<"Ingrese numero de mesa: ";
    getline(cin, numeroMesa);
    escribir(numeroMesa);
    return 0;
}

void escribir(string numeroMesa) {
    ofstream archivo;
    string nombreArchivo;
    nombreArchivo = "Mesa_" + numeroMesa + ".txt";
    archivo.open(nombreArchivo.c_str(), ios::app);

    if(archivo.fail()) {
        cout << "No se pudo leer el archivo " << numeroMesa << ".txt" << endl;
        exit(1);
    }

    archivo<<"Acta de Mesa " << numeroMesa <<endl;
    archivo<<"Senadores"<<endl;
    cout<<"Datos de senadores"<<endl;
    for(int i=0; i<10;i++) {
        datosCandidato(archivo);
    }
    ingresoTotales(archivo);
    archivo<<"-------------------------------------------------------------------------------------"<<endl;

    archivo<<"Diputados"<<endl;
    cout<<"Datos de diputados"<<endl;
    for(int j=0; j<20;j++) {
        datosCandidato(archivo);
    }
    ingresoTotales(archivo);
    archivo.close();
}

void datosCandidato(ofstream& archivo) {
    string registroArchivo, agrupacionPolitica, nombreCandidato;

    cout<<"Ingrese los siguientes datos con dicho formato: " << endl;
    cout<<"Agrupacion Polotica - Numero de Lista - Nombre del Candidato - Cantidad de Votos"<<endl;
    getline(cin, registroArchivo);

    archivo<<registroArchivo<<endl;
    cout<<"Datos guardados!!!"<<endl<<endl;
}

void ingresoTotales(ofstream& archivo) {
    int votosBranco, votosImpugnados;
    cout<<"Ingrese total votos en blanco: " << endl;
    cin >> votosBranco;
    archivo<<"Votos en blanco-"<<votosBranco<<endl;
    cout<<"Ingrese total votos impugnados: " << endl;
    cin >> votosImpugnados;
    archivo<<"Votos impugnados-"<<votosImpugnados<<endl;
}
