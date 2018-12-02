/* Archivo Celda.h */

#ifndef CELDA_H
#define CELDA_H

class Celda{
private:
	double info;
	Celda *sig;

public:
	Celda(double valor);
	double obtenerInfo();
	Celda* obtenerSiguiente();
	void anularSiguiente();
	void asignarSiguiente(Celda *psig);
	void mostrar();
};

#endif 