/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 2.
 **/
 
#include <iostream>
#include "utilidades.h"

using namespace std;



/**
 * @brief Funcion auxiliar para saber el tamaño (sin tener en cuenta '\0') de una cadena.
 * @param cadena cadena para calcular el tamanio
 * @return tam tamanio de la subcadena.
 */
int tamanoCadena(char cadena[]){
	int tam=0;
	int i=0;

	while(cadena[i] != '\0'){
		tam++;
		i++;
	}

	return tam;
}


/**
 * @brief Funcion para localizar si una subcadena esta contenida en una cade y saber la posicion
 * @param cadena cadena principal
 * @param subcadena subcadena, contenida o no en cadena.
 * @return posicion de la subcadena.
 */
int localizarSubcadena(char cadena[], char subcadena[]){
	int pos = -1; //De primeras, digo que no es subcadena.
	int tamCadena = tamanoCadena(cadena); //Tamaño de la cadena principal
	int tamSubCadena = tamanoCadena(subcadena);
	int contador=0;
	bool encontrada=false;
 
 	for(int i=0; i < tamCadena; i++){//Recorro la cadena principal
    	if(cadena[i] == subcadena[contador]){ 
        	contador++;
        	if(contador == tamSubCadena){
        		pos=i-tamSubCadena+1;
        	}
     	}	
 	}
	
	return pos;
}







