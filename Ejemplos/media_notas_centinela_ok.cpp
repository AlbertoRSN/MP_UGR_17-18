#include <iostream>

using namespace std;

int main(){
	const int DIM_NOTAS = 100;
	double notas[DIM_NOTAS];
	double media = 0;
	int i = 0;

	//Se leen las notas hasta introducir el centinela
	do{
		cout << "Introduzca num alumnos (entre 1 y " << DIM_NOTAS << ")"<<endl;
		cin >> util_notas;
	}while(notas[i-1] != -1 && i < DIM_NOTAS);

	//Bucle de lectura de las notas
	for(int i = 0; notas[i] != -1 ; i++){
		cin>>notas[i];
		media += notas[i];
	}

	//calculo de la media
	media /= util_notas;
	cout << "\n Media -> " << media << endl;

}