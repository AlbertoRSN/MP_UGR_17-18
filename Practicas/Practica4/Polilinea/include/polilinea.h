#ifndef POLILINEA_H
#define POLILINEA_H

#include "punto.h"

#include <iostream>


class Polilinea{

    friend std::ostream &operator<<(std::ostream &flujo, const Polilinea &polilinea);

private:
    Punto *p;
    int num;

    //Metodo para liberar espacio
    void liberarEspacio(){
        if(p!=0){
            delete [] p;
            p=0;
        }
        
    }

    void reservarEspacio(int num){
        //Se reserva espacio para num
        p = new Punto[num];

        //Actualizo el valor del dato miembro tam
        this->num = num;
    }

public:

    //Constructor por defecto
    Polilinea(){
        p=0;
        num=0;
    }

    Polilinea(int num){
        reservarEspacio(num);
    }

    //Destructor
    ~Polilinea(){
        liberarEspacio();
    }

    //Constructor de copia
    Polilinea(const Polilinea &copiar);

    //Operador mas que sustituye a agregarPunto
    Polilinea operator+(const Punto &punto);

    //Operador de asignacion
    Polilinea& operator=(const Polilinea &otro);
};

#endif //Polilinea_H
