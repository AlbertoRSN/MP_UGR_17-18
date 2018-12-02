/* Archivo Celda.h */

#ifndef CELDA_H
#define CELDA_H

#include <iostream>

class Celda{

	friend std::ostream &operator<<(std::ostream &flujo, const Celda &celda);
  
private:
	double info;
	Celda *sig;

public:
	//Constructor por defecto
	Celda();
	//Constructor por parametros
	Celda(double valor);
	//Destructor
	~Celda();
	//Constructor de copia
	Celda(const Celda &otra);

	//Funciones ejercicio
	double obtenerInfo();
	Celda* obtenerSiguiente();
	void anularSiguiente();
	void asignarSiguiente(Celda *psig);
	void mostrar();
};

#endif 