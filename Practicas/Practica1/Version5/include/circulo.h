/* Archivo circulo.h */

#ifndef CIRCULO_H
#define CIRCULO_H

#include "punto.h"

class Circulo{
private:
	Punto centro;
	double radio;

public:
	Circulo();
	Circulo(Punto vcentro, double vradio);
	Punto getCentro() const;
	double getRadio() const;
	void setCentro(Punto puntoCentro);
	void setRadio(double valorRadio);
	void mostrar() const;
	void leerDatos();
	double calcularArea() const;
};

#endif 