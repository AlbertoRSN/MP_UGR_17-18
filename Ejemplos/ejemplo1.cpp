#include <iostream>

using namespace std;

int main(){

	const int NUM_NOTAS = 5;
	double notas[NUM_NOTAS];
	double media = 0;

	//Bucle de lectura
	for(int i = 0; i < NUM_NOTAS; i++){
		cout << "Introduzca nota del alumno: " << i << " : ";
		cin >>notas[i];
	}

	//Bucle de Suma
	for(int i=0; i < NUM_NOTAS; i++){
		media += notas[i];
	}

	media = media/NUM_NOTAS;

	cout << "Media: " << media << endl;

}