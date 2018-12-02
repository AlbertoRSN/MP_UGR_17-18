/* Archivo circulo.cpp */

#include "circulo.h"
#include "punto.h"
#include "utilidades.h"
#include <iostream>
#include <cmath> // sqrt, M_PI
using namespace std;

Circulo::Circulo(){
	radio = 0;
}


Circulo::Circulo(Punto vcentro, double vradio){
	centro = vcentro;
	radio = vradio;
}


Punto Circulo::getCentro() const{
	return centro;
}


double Circulo::getRadio() const{
	return radio;
}


void Circulo::setCentro(Punto puntoCentro){
	centro = puntoCentro;
}


void Circulo::setRadio(double valorRadio){
	radio = valorRadio;
}


void Circulo::mostrar() const{
	// Formato de escritura del círculo: radio - (x,y)
    cout << radio << "-";
    centro.mostrar();
}


void Circulo::leerDatos(){
    char car;

    cin >> radio;
    cin >> car; //leer "-"
    centro.leerDatos();
}


double Circulo::calcularArea() const {
    // Se calcula el area
    double area = 2 * M_PI * pow(radio,2);
    
    // Se devuelve el resultado
    return area;
}

