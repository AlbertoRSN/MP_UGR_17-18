/* Archivo circulo.cpp */

#include "Celda.h"
#include <iostream>

using namespace std;

ostream & operator<<(ostream &flujo, const Celda &celda){
  flujo<<"Valor:"<<celda.info<<endl;

  return flujo;
}

Celda::Celda(){
	info = 0;
	sig=0;
}

Celda::Celda(double valor){
    info = valor;
    sig = 0;
}

Celda::~Celda(){
	delete[] sig;
	sig = 0; //Para asegurar que apunta a nula y no a algun otro sitio que no queramos.
	info=0;
}

Celda::Celda(const Celda &otra){
	this->info = otra.info;
	sig = otra.sig; //sig = new Celda(info); Esta sentencia 
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

