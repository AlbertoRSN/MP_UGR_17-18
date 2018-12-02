/* Archivo punto.cpp */

#include "punto.h"
#include <iostream>
#include <cmath> // sqrt, M_PI
using namespace std;

Punto::Punto(){
	x = 0;
	y = 0;
}

Punto::Punto(double vx, double vy){
	x = vx;
	y = vy;
}

double Punto::getX() const{
	return x;
}

double Punto::getY() const{
	return y;
}

void Punto::setX(double vx){
	x = vx;
}

void Punto::setY(double vy){
	y = vy;
}

void Punto::mostrar() const{
	// Formato de escritura del punto: (x,y)
    cout << "(" << x << "," << y << ")" << endl;
}

void Punto::leerDatos(){
    // Se leen los datos del usuario
    char car;
    cin >> car >> x >> car >> y >> car;
}

