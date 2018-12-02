
#include<iostream>
#include "utilidades.h"

using namespace std;

int main() {
    cout << "--------------- Caso 1 ----------------------" << endl;
    cout << "Descomposicion de numero no primo: 13860" << endl;
    int factores[100];
    int numeroFactores=0;
    int numero;

    numero = 13860;
    descomponer(numero, factores, numeroFactores);

    // Se muestra el resultado
    cout << "Numero de factores: " << numeroFactores << endl;
    mostrar(factores, numeroFactores);
    cout << "----------------------------------------------" << endl;

    cout << "--------------- Caso 2 ----------------------" << endl;
    cout << "Descomposicion de numero no primo: 1989433" << endl;
    numeroFactores=0;
    numero = 1989433;
    descomponer(numero, factores, numeroFactores);

    // Se muestra el resultado
    cout << "Numero de factores: " << numeroFactores << endl;
    mostrar(factores, numeroFactores);
    cout << "----------------------------------------------" << endl;

    cout << "--------------- Caso 3 ----------------------" << endl;
    cout << "Descomposicion de numero primo: 104729" << endl;
    numeroFactores=0;
    numero = 104729;
    descomponer(numero, factores, numeroFactores);

    // Se muestra el resultado
    cout << "Numero de factores: " << numeroFactores << endl;
    mostrar(factores, numeroFactores);
    cout << "----------------------------------------------" << endl;

    cout << "--------------- Caso 4 ----------------------" << endl;
    cout << "Descomposicion de numero primo: 1" << endl;
    numeroFactores=0;
    numero = 0;
    descomponer(numero, factores, numeroFactores);

    // Se muestra el resultado
    cout << "Numero de factores: " << numeroFactores << endl;
    mostrar(factores, numeroFactores);
    cout << "----------------------------------------------" << endl;
}
