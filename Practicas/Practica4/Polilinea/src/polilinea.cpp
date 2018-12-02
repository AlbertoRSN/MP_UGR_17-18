#include "polilinea.h"

#include <iostream> 

using namespace std;

Polilinea::Polilinea(const Polilinea &otro){

	//Reservar espacio de memoria
	reservarEspacio(otro.num);

	//Copiar los datos
	for(int i=0; i<num; i++){
		p[i] = otro.p[i]; //Aqui esta usando el operador asignacion de la clase punto, y no esta implementado porque la clase punto no tiene me moria dinamica
	}
}

//No devuelvo una referencia porque voy a crear un objeto nuevo
Polilinea Polilinea::operator+(const Punto &punto){
	Polilinea *resultado = new Polilinea();


	//Reservar espacio para resultado tanto como tenga this mas 1
	resultado->reservarEspacio(num+1);

	//Copiar los puntos de this
	for(int i=0; i<num; i++){
		resultado->p[i] = p[i];
	}

	//Agregar en la ultima posicion el objeto pasado como argumento (Punto)
	resultado->p[num] = punto;

	return *resultado;
}

Polilinea& Polilinea::operator=(const Polilinea &otro){
	//Borrar todo el contenido de this
	liberarEspacio();

	//Reservar todo el espacio necesario para almacenar todos los elerementos de otro.
	reservarEspacio(otro.num);

	for(int i=0; i<num; i++){
		p[i] = otro.p[i];
	}

	//Devuelvo this tras mdificarlo.
	return *this;

}

ostream & operator<<(ostream &flujo, const Polilinea &polilinea){
	flujo<<"-------------------------------------------------" << endl;

	//Bucle para mostrar los elementos almacenados
	for(int i=0; i<polilinea.num; i++){
		flujo << polilinea.p[i];
	}

	return flujo;
}

ostream & operator<<(ostream &flujo, const Punto &punto){
	flujo<<"("<<punto.x<<","<<punto.y<<") "<<endl;

	return flujo;
}

