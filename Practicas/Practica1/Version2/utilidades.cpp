/* Archivo utilidades.cpp */

#include <cmath>
#include "utilidades.h"
#include "punto.h"
#include "circulo.h"

//CIRCULO
double calcularDistancia(Circulo c1, Circulo c2) {
    // Se recuperan los centros de ambos circulos
    Punto cc1 = c1.getCentro();
    Punto cc2 = c2.getCentro();
    
    // Se calcula la distancia entre los dos puntos
    double distancia = calcularDistancia(cc1, cc2);
    
    // Se devuelve el valor calculado
    return distancia;
}


bool comprobarInterior(Punto p, Circulo c) {
    bool interior=false;
    
    // Se calcula si la distancia entre el punto y el centro
    // del circulo es menor que el radio del circulo
    Punto cc=c.getCentro();
    double radio=c.getRadio();
    
    // Se calcula la distancia
    double distancia=calcularDistancia(p, cc);
    
    // Si es interior, se cambia el valor del flag
    if(distancia <= radio){
        interior=true;
    }
    
    // Se devuelve el valor de interior
    return interior;
}


//PUNTO
double calcularDistancia(Punto p1, Punto p2) {
    double distancia;

    distancia = sqrt(pow((p1.getX()-p2.getX()),2) + pow((p1.getY()-p2.getY()),2));
    
    return distancia;
}

Punto calcularPuntoMedio(Punto p1, Punto p2) {
    Punto medio;
    medio.setX((p1.getX() + p2.getX()) / 2.0);
    medio.setY((p1.getY() + p2.getY()) / 2.0);
    return medio;
}

