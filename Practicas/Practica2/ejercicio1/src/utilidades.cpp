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
void imprimirArray(double arg[], int length) {
  for (int n = 0; n < length; ++n)
    cout << arg[n] << ' ';
	cout<<"\n";
}


/**
 * @brief Funcion para mezclar dos arrays
 * @param v1 primer array
 * @param length1 tamaño array1
 * @param v2 segundo array
 * @param length2 tamaño segundo array
 * @param resultado array donde se guarda el resultado
 * @return el tamaño del array @a resultado
 */
int mezclar(double v1[], int length1, double v2[], int length2, double resultado[]){
	int marca1=0, marca2=0, marca3=0;

	while(marca1 < length1 && marca2 < length2){
		if(v1[marca1] < v2[marca2]){
			resultado[marca3] = v1[marca1];
			marca1++;
			marca3++;
		}
		else if(v1[marca1] == v2[marca2]){
			resultado[marca3] = v1[marca1];
			marca3++;
			marca1++;
			marca2++;
		}
		else{
			resultado[marca3] = v2[marca2];
			marca2++;
			marca3++;
		}
	}

	//Comprobar por que condicion ha salido y si quedan libres
	if(marca1 == length1 && !(marca2==length2)){
		//Rellenar con lo que queda del array2
		while(marca2<length2){
			resultado[marca3] = v2[marca2];
			marca3++;
			marca2++;
		}
	}
	else if(marca2 == length2){;
		//rellenar con lo que queda del array1
		while(marca1<length1){
			resultado[marca3] = v1[marca1];
			marca3++;
			marca1++;
		}
	}

	return marca3;
}
