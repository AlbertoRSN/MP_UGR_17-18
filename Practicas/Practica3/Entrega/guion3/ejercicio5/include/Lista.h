//Archivo Lista.h

#ifndef LISTA_H
#define LISTA_H

#include "Celda.h"

class Lista{

private:
	Celda* contenido; //Puntero a la primera celda de la lista
	int tam; //Variable auxiliar para contabilizar el tamaño (No se si la usaré)

public:
	Lista();
	void agregarInicio(double nueva);
	void agregarElemento(double nueva);
	void imprimir();
	void mostrar();
	int obtenerLongitud();
	Celda* obtener(int pos);
	void eliminarFinal();
	bool agregarPosicion(int indice, double dato);
	void liberarEspacio();

	//Metodo nuevo para particionar lista
	Lista *particionar(int tam, int &util);


};

#endif