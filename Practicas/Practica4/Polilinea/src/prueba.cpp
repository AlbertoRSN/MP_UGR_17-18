// archivo main.cpp

#include <iostream>

#include "polilinea.h"
#include "punto.h"

using namespace std;

int main(int argc, char **argv) {


    Punto punto1(1,1);
    Punto punto2(2,3);
    Punto punto3(3,4);

    Polilinea linea1;

    //Con esto pruebo el constructor de copia
    Polilinea *ptr = new Polilinea(linea1);
    Polilinea linea2(linea1); //Se crea en la pila

    Polilinea linea3 = linea1 + punto1;
    Polilinea linea4 = linea2 + punto3;


    cout<<linea4;
    cout<<linea3;


}

