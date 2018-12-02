//Archivo Lista.h

#ifndef LISTA_H
#define LISTA_H

#include "Celda.h"
#include <iostream>

class Lista{

	friend std::ostream &operator<<(std::ostream &flujo, const Lista &lista);

private:
	Celda* contenido; //Puntero a la primera celda de la lista
	int tam; //Variable auxiliar para contabilizar el tamaño (No se si la usaré)

	void liberarEspacio(){
		while(contenido != 0){
			Celda *pCelda = pCelda->obtenerSiguiente();
			delete pCelda;
		}
	}

public:
	//Constructor por defecto
	Lista();
	//Destructor
	~Lista();
	//Constructor de copia
	Lista(const Lista &otra);
	void agregarInicio(double nueva);
	void agregarFinal(double nueva);
	void mostrar();
	int obtenerLongitud();
	Celda* obtener(int pos);
	void eliminarFinal();
	bool agregarPosicion(int indice, double dato);
	

};

#endif