/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 2.
 **/
 
#include <iostream>
#include "utilidades.h"

using namespace std;



/**
 * @brief Funcion auxiliar para mostrar el array de factores.
 * @param factores cadena de factores a mostrar
 */
void mostrar(int factores[], int numeroFactores){
  for (int i = 0; i < numeroFactores; ++i)
    cout << factores[i] << ' ';
	cout<<"\n";

}


/**
 * @brief Funcion para descomponer
 * @param factores array de factores
 * @param numero
 * @param numeroFactores numero de factores de la cadena
 */
void descomponer(int numero, int *factores, int &numeroFactores){
	int i=2; //Empiezo a verificar todos los factores desde 2 porque el 1 es factor de todos.

	while(i <= numero){
		if((numero%i)==0){
			factores[numeroFactores]=i;  
    		numero=numero/i;         	 
    		numeroFactores++; 			 
		}
		i++;
	}


}












