#include "punto.h"
#include "circulo.h"
#include <iostream>
#include <cmath> // sqrt, M_PI
using namespace std;

   
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


/**
@brief Calcula la distancia entre dos circulos
@param c1 primer círculo
@param c2 segundo círculo
@return la distancia entre el círculo @a c1 y el círculo @a c2

La distancia entre dos círculos se define como la distancia entre los centros menos los dos radios.
Nótese que la distancia puede ser negativa si los círculos se intersecan
*/

double distancia (Circulo c1, Circulo c2){
    Punto centro1, centro2;
    double dist;

    centro1=c1.getCentro();
    centro2=c2.getCentro();
    dist=distancia(centro1,centro2)-c1.getRadio()-c2.getRadio();
    return dist;
}

