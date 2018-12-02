#include "punto.h"
#include "circulo.h"
#include <iostream>
#include <cmath> // sqrt, M_PI
using namespace std;

/**
Punto::Punto() {
    x=0;
    y=0;
}

Punto::Punto(double x1, double p1) {
    x=x1;
    y=p1;
}

double Punto::getX() const {
	return x;
}

double Punto::getY() const{
	return y;
}

void Punto::setX(double newXValue) {
	x = newXValue;
}

void Punto::setY(double newXValue) {
	y = newXValue;
}


void Punto::escribir() const{
    // Formato de escritura del punto: (x,y)
    cout << "(" << x << "," << y << ")";
}

void Punto::leer(){
    // Formato de lectura del punto: (x,y)
    char car;
    cin >> car >> x >> car >> y >> car;
}


@brief Calcula la distancia entre dos puntos
@param p1 primer punto
@param p2 segundo punto
@return la distancia entre el punto @a p1 y el punto @a p2

double distancia(Punto p1, Punto p2){
    double distancia;
    distancia=sqrt((p1.getX()-p2.getX())*(p1.getX()-p2.getX()) + (p1.getY()-p2.getY())*(p1.getY()-p2.getY()));
    return distancia;
}


@brief Calcula el punto que está entre dos puntos dados con distancia mínima a ambos
@param p1 primer punto
@param p2 segundo punto
@return un punto entre el punto @a p1 y el punto @a p2 con distancia mínima a ambos


Punto puntoMedio(Punto p1, Punto p2){
    Punto medio;
    medio.setX((p1.getX()+p2.getX())/2.0);
    medio.setY((p1.getY()+p2.getY())/2.0);
    return medio;
}

Circulo::Circulo(){ 
    radio=0;
} ///< Constructor: Pone a 0 el punto y el radio
    
Circulo::Circulo(Punto p, double r){
    centro=p;
    radio=r;
} ///< Constructor: Inicializa el círculo con un centro y un radio
    
void Circulo::set(Punto p, double r){
    centro=p;
    radio=r;
} ///< Asigna el centro y el radio a un circulo
    
Punto Circulo::getCentro() const {
    return centro;
} ///< Devuelve el centro de un circulo
    
double Circulo::getRadio() const {
    return radio;
} ///< Devuelve el radio de un circulo
    
void Circulo::escribir() const{
    // Formato de escritura del círculo: radio-(x,y)
    cout << radio << "-";
    centro.escribir();
}

void Circulo::leer(){
    // Formato de lectura del círculo: radio-(x,y)
    char car;

    cin >> radio;
    cin >> car; //Leer -
    centro.leer();
}

double Circulo::area() const{
    return M_PI*radio*radio;
}



@brief Calcula la distancia entre dos circulos
@param c1 primer círculo
@param c2 segundo círculo
@return la distancia entre el círculo @a c1 y el círculo @a c2

La distancia entre dos círculos se define como la distancia entre los centros menos los dos radios.
Nótese que la distancia puede ser negativa si los círculos se intersecan


double distancia (Circulo c1, Circulo c2){
    Punto centro1, centro2;
    double dist;

    centro1=c1.getCentro();
    centro2=c2.getCentro();
    dist=distancia(centro1,centro2)-c1.getRadio()-c2.getRadio();
    return dist;
}

*/
bool interior (Punto p, Circulo c){
    if(distancia(p,c.getCentro())<=c.getRadio()) {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    Circulo c1,c2;

    do {
        cout << "Introduzca un circulo en formato radio-(x,y): ";
        c1.leer();
        cout << "Introduzca otro circulo: ";
        c2.leer();
    } while (distancia(c1.getCentro(),c2.getCentro())==0);

    Circulo res;

    res.set(puntoMedio(c1.getCentro(),c2.getCentro()),
                     distancia(c1.getCentro(),c2.getCentro())/2);
    cout << "El círculo que pasa por los dos centros es: ";
    res.escribir();
    cout << endl;
}

/* Fin: circulomedio.cpp */
