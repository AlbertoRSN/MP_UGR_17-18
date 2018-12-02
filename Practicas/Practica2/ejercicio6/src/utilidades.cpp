/**
 *  @file utilidades.cpp
 *  @brief Declaracion de funciones necesarias para ejercicio1
 *	Practica 2.
 **/
 
#include <iostream>
#include "utilidades.h"

using namespace std;

//const int FIL = 10, COL = 10;

/**
 * @brief Funcion auxiliar para mostrar la matriz por pantalla.
 * @param matriz matriz a mostrar
 * @param fil numero de filas de la matriz
 * @param col numero de columnas de la matriz
 */
void mostrarMatriz(double matriz[][COL], int fil, int col){
	for(int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}



/**
 * @brief Funcion para multiplicar dos matrices
 * @param matriz1 matriz 1
 * @param fil1 filas de la matriz 1
 * @param col1 columnas de la matriz 1
 * @param matriz2 matriz 2
 * @param fil2 filas de la matriz 2
 * @param col2 columnas de la matriz 2
 * @param matrizResultado matriz resultado
 * @param utilFilRes1 filas de la matriz resultado
 * @param utilColRes1 columnas de la matriz resultado
 * @pre Las filas de la pirmera matriz deben ser iguales a las columnas de la segunda 
 * @return posible si es posible realizar la multiplicacion o no
 */
bool multiplicar(double matriz1[][COL], int fil1, int col1, double matriz2[][COL], int fil2, int col2, double matrizResultado[][COL], int utilFilRes1, int utilColRes1){
	bool posible = false;

	if(fil1 == col2 && col1 == fil2){
		for(int i=0; i<fil1; ++i)
    	   for(int j=0; j<col2; ++j)
      	      for(int x=0; x<fil2; ++x)
          	      matrizResultado[i][j] += matriz1[i][x] * matriz2[x][j];
        posible = true;
        utilFilRes1 = fil1;
    	utilColRes1 = col2;
    }

    return posible;

}








