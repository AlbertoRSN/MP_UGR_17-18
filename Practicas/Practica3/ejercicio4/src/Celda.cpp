/* Archivo circulo.cpp */

#include "Celda.h"
#include <iostream>

using namespace std;

Celda::Celda(double valor){
    info = valor;
    sig = 0;
}


double Celda::obtenerInfo(){
    return info;
}

Celda* Celda::obtenerSiguiente(){
    return sig;
}

void Celda::anularSiguiente(){
    sig = 0;
}

void Celda::asignarSiguiente(Celda* psig){
    sig = psig;
}

void Celda::mostrar(){
    cout << info << " ";
}

