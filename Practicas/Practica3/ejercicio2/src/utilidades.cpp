/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 2.
 **/
 
#include <iostream>
#include "utilidades.h"
#include "Valor.h"

using namespace std;

/**
 * @brief Funcion para mostrar contenido de Array por pantalla.
 * @param arg array a imprimir
 * @param length tamaño del array arg
 */

//Pasar a puntero
int combinarSuma(Valor *coleccion1, int util1, Valor *coleccion2, int util2, Valor *resultado){
	int contadorValoresResultado = 0;
	int indiceResultado = 0;

	//Rellenar resultado con objetos de coleccion 1
	for(int i=0; i<util1; i++){
		resultado[i] = coleccion1[i];
		//Cada vez que introduzco uno, incremento el contador
		contadorValoresResultado++;
	}

	for(int i=0; i<util2; i++){
		indiceResultado = comprobarValor(resultado, contadorValoresResultado, coleccion2[i]);
		if(indiceResultado != -1){
			//resultado[indiceResultado].valor = resultado[indiceResultado] + coleccion2[i].valor;
			(resultado+indiceResultado)->valor += (coleccion2+i)->valor;
		}
		else{
			resultado[contadorValoresResultado] = coleccion2[i];
			contadorValoresResultado++;
		}

	}
}


//Metodo auxiliar para comprobar si un array esta o no.
bool comprobarValor(Valor *coleccion, int util, Valor valor){
	int indice = -1;

	for(int i = 0; i< util && (indice == -1); i++){
		if((coleccion+i)->fila == valor.fila && (coleccion+i)->columna == valor.columna){ //(*(coleccion)).fila
			indice = i;
		}
	}

	return indice;
}

void mostrarContenido(Valor *secuencia, int util){
	for(int i=0; i<util; i++){
		//cout << (secuencia+i)->fila<<" " << (secuencia+i)->columna;
		cout << " {" << secuencia[i].fila << ", " << secuencia[i].columna << ", " << secuencia[i].valor << "} ";

	}
	cout<<"\n";
}
