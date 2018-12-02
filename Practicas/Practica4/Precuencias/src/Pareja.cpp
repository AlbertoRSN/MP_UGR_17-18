#include "Pareja.h"
#include <iostream>

using namespace std;

Pareja::Pareja() { }

Pareja::Pareja(int dato, int veces) {
	this->dato = dato;
	this->nveces = veces;
}

Pareja::Pareja(const Pareja& otra) {
	this->Copia(otra);
}

Pareja& Pareja::operator=(const Pareja &otra) {
	if (this != &otra) {
		this->Copia(otra);
	}
	return (*this);
}

void Pareja::Copia(const Pareja& otra) {
	this->dato = otra.dato;
	this->nveces = otra.nveces;
}

Pareja::~Pareja() { }

int Pareja::getDato() {
	return this->dato;
}

void Pareja::setDato(int dato) {
	this->dato = dato;
}

int Pareja::getNVeces() {
	return this->nveces;
}

void Pareja::setNVeces(int veces) {
	this->nveces = veces;
}

void Pareja::mostrar() {
	cout << "Pareja{" << this->dato << "x" << this->nveces << "}" << endl;
}
