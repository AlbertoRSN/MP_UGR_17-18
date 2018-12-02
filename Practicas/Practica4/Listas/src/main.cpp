
#include <iostream>
#include <cstdlib>
#include "Lista.h"
#include "Celda.h"

using namespace std;

/*
 * 
 */
int main(){

    //Creo una celda con valor 3 y la muestro
    Celda c1(7);
    cout<<"Celda 1 tiene valor -> ";
    c1.mostrar();
    cout<<endl;

    //Uso de operador binario de salida <<
    cout<<c1;
    //Creo una celda a partir del constructor de copia de Celda
    Celda c2(c1);
    
    cout<<endl;
    //muestro la celda c2 para comprobar que se ha creado bien a partir de c1.
    cout<<"Celda 2 tiene valor -> ";
    c2.mostrar();
    cout<<endl;

    //Uso de operador binario de salida <<
    cout<<c2;

    Lista lista1;
    for(int i=0; i<10; i++){
        lista1.agregarFinal(i);
    }

    cout<<lista1;
    
}

