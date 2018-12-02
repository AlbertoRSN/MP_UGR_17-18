/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 3.
 **/
 
#include <iostream>
#include "utilidades.h"

using namespace std;

/**
 * @brief Funcion para mostrar contenido de Array por pantalla.
 * @param secuencia array a imprimir
 * @param util tamaño del array arg
 */
void imprimir(int *secuencia, int util){
	for(int i=0; i<util; i++){
		cout << *(secuencia+i)<<" ";
	}
	cout<<"\n"; //equivalente -> cout<<endl;
}

/**
 * @brief Funcion para mostrar contenido de Array de punteros por pantalla.
 * @param parray array a imprimir
 * @param util tamaño del array arg
 */
void imprimir(int **parray, int util){
	for(int i=0; i<util; i++){
		cout << *(parray[i])<<" "; // Se puede representar asi -> **(parray+i) 
		//Equivalente -> *parray[i];

	}
	cout<<"\n";
}



/**
 * @brief 
 * @param array primer array
 * @param parray segundo array
 * @param util tamaño array
 */

void ordenarPunteros(int *array, int **parray, int util){
	int indice;
	int *aux;

	//Que cada puntero apunte a la posicion i
	for(int i=0; i<util; i++){
		parray[i] = &array[i]; // Se puede sustituir los corchetes por -> *(parray+i) = (array+i)
	}

	//Bucle de ordenacion
	for(int i=0; i<util-1; i++){
		indice = i;
		for(int j=i+1; j<util; j++){
			if(*parray[indice] > *parray[j]){ // Se puede sustituir por -> **(parray + indice) > **(parray[j])
				indice = j;
			}
		}

		aux = parray[i]; // aux = *(parray+i);
		parray[i] = parray[indice]; //*(parray+i); = *(parray+indice);
		parray[indice] = aux; //*(parray+indice);
	}

}








