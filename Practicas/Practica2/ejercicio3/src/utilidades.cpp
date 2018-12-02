/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 2.
 **/
 
#include <iostream>
#include "utilidades.h"

using namespace std;

/**
 * @brief Funcion para mostrar contenido de Array por pantalla.
 * @param arg array a imprimir
 * @param length tamaño del array arg
 */
void imprimirArray(int arg[], int length) {
  for (int n = 0; n < length; ++n)
    cout << arg[n] << ' ';
	cout<<"\n"; //Salto de linea cuando imprime un array completo.
}


/**
 * @brief Funcion auxiliar para externalizar la busqueda del elemento mayor en caso que no haya ninguna subsecuencia.
 * @param array1 array donde buscar el mayor elemento
 * @param utilArray tamaño del array
 * @return mayor elemento mayor de la secuencia (Array1)
 */
int mayorElemento(int array1[], int utilArray){
	int mayor = array1[0];

	for(int i=1; i<utilArray; i++){
		if(array1[i] > mayor)
			mayor = array1[i];
	}

	return mayor;
}


/**
 * @brief Funcion para obtener la mayor secuencia creciente dentro de un array pasado por argumento
 * @param array1 primer array
 * @param utilArray tamaño array1
 * @param secuenciaCreciente array donde se guarda el resultado
 * @param utilSecuenciaCreciente tamaño array resultado
 */

void obtenerMayorSecuenciaMonotonaCreciente(int array1[], int utilArray,  int secuenciaCreciente[], int & utilSecuenciaCreciente){
	int marca1=0, marca2=1;
	bool primera = true;
	utilSecuenciaCreciente = 0;

	while(marca2 < utilArray){

		
		if(array1[marca1] < array1[marca2]){
			if(primera){
				secuenciaCreciente[utilSecuenciaCreciente] = array1[marca1];
				utilSecuenciaCreciente++;
				secuenciaCreciente[utilSecuenciaCreciente] = array1[marca2];
				utilSecuenciaCreciente++;
			}
			else{
				secuenciaCreciente[utilSecuenciaCreciente] = array1[marca2];
				utilSecuenciaCreciente++;
			}
		}
		marca1++;
		marca2++;
		primera=false;
	}

	//Si no hay ninguna secuencia, meter el mayor numero del array
	if(utilSecuenciaCreciente == 0){
		secuenciaCreciente[utilSecuenciaCreciente] = mayorElemento(array1, utilArray);
		utilSecuenciaCreciente++;
	}

}
