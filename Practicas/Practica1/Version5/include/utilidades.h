/* Archivo utilidades.h */

#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "punto.h"
#include "circulo.h"

double calcularDistancia(Circulo c1, Circulo c2);
bool comprobarInterior(Punto p, Circulo c);

double calcularDistancia(Punto p1, Punto p2);
Punto calcularPuntoMedio(Punto p1, Punto p2);

#endif