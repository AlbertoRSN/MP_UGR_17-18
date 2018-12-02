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



//--------------MEJORAR CON FUNCIÓN AUXILIAR-------------
/**
 * @brief Funcion para insertar una cadena
 * @param subcadena subcadena, contenida o no en cadena.
 * @return posicion de la subcadena.
 */
bool insertarCadena(char inicial[], char aInsertar[], int pos, char resultado[]){
	bool insertado = false;

	int tamInser = tamanoCadena(aInsertar);
	int tamIni = tamanoCadena(inicial);
	
	//ins controla la cadena a inserta
	//res controla la cadena resultado
	//ini controla la cadena inicial
	int ins=0, res=0, ini=0; 

	if(pos >= 0 && pos <=tamIni){
		//1. SI ES LA PRIMERA POSICIÓN
		if(pos == 0){
			// Primero.- inserto al principio la cadena a insertar y luego la cadena inicial.
			while(ins < tamInser){
				resultado[res] = aInsertar[ins];
				res++;
				ins++;
			}
			// Segundo.- Inserto la cadena inicial despues de la cadena a Insertar.
			while(ini < tamIni){
				resultado[res] = inicial[ini];
				ini++;
				res++;
			}
			resultado[res] = '\0';
		}

		//2. SI ES LA ULTIMA POSICION
		else if(pos == tamIni){
				while(ini < tamIni){
					//Primero meto la cadena inicial
					resultado[res] = inicial[ini];
					ini++;
					res++;
				}

				//Segundo, meto la cadena a insertar.
				while(ins < tamInser){
					resultado[res] = aInsertar[ins];
					res++;
					ins++;
				}
			resultado[res] = '\0';
		}	

		//3. SI LA POSICION ESTA ENTRE MEDIO
		else{
			//Copio la cadena inicial hasta posicion dada.
			while(ini < pos){
				resultado[res] = inicial[ini];
				ini++;
				res++;
			}

			//Copio cadena a insertar despues de la posicion
			while(ins < tamInser){
					resultado[res] = aInsertar[ins];
					res++;
					ins++;
			}

			//Copio el resto de cadena inicial despues de la cadena a insertar.
			while(ini < tamIni){
				resultado[res] = inicial[ini];
				ini++;
				res++;
			}

			resultado[res] = '\0';

		}
		
		//Si esta en este if, es que puede insertar.
		insertado = true;
	}//CIERRE IF COMPRUEBA SI POS ESTÁ DENTRO DEL TAMAÑO

	return insertado;
}










