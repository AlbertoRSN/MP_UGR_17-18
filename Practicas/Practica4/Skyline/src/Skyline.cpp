#include "Skyline.h"
#include <iostream>

using namespace std;

Skyline::Skyline() {
	this->reservarEspacio(0);
}

Skyline::Skyline(const Skyline& otra) {
	this->reservarEspacio(otra.num);
	this->Copia(otra);
}

Skyline::Skyline(double & abcisaInicio, double & abcisaFinal, double & altura) {
	if (altura > 0) {
		this->reservarEspacio(2);
		
		this->abscisas[0] = abcisaInicio;
		this->alturas[0] = altura;
		this->abscisas[1] = abcisaFinal;
	}
}

Skyline::Skyline(double * abscisas, double * alturas, int & n) {
	this->reservarEspacio(n);
	
	for (int i = 0; i < this->num; i++) {
		this->abscisas[i] = abscisas[i];
		this->alturas[i] = alturas[i];
	}
}

/*
 * Copia los datos de otra en la instancia original
 */
void Skyline::Copia(const Skyline& otra) {
	this->num = otra.num;
	
	for (int i = 0; i < this->num; i++) {
		this->abscisas[i] = otra.abscisas[i];
		this->alturas[i] = otra.alturas[i];
	}
}

/*
 * Si no es la misma skyline, se copian los datos de otra
 */
Skyline& Skyline::operator=(const Skyline &otra) {
	if (this != &otra) {
        this->liberarEspacio();
        this->Copia(otra);
    }

    return (*this);
}

Skyline::~Skyline() {
	this->liberarEspacio();
}

void Skyline::reservarEspacio(const int &longitud) {
	this->num = longitud;
	
	this->abscisas = new double[longitud];
	this->alturas = new double[longitud];
	
	this->alturas[longitud - 1] = 0; //Ultima altura es 0 
}

void Skyline::liberarEspacio() {
	delete [] this->abscisas;
	delete [] this->alturas;
	this->num = 0;
}

void Skyline::mostrar() {
	cout << "Vista del Skyline:" << endl;
	for (int i = 0; i < num; i+=2) {
		if (i+1 < num) //Evitar que el último cero se muestre con valores basura
			cout << "(" << abscisas[i] << ", " << abscisas[i+1] << ") -> " << alturas[i] << endl;
	}
}


