#include <iostream>

using namespace std;

int main(){
	const int DIM_NOTAS = 100;
	double notas[DIM_NOTAS];
	int util_notas;
	double media = 0;


	//Bucle de lectura
	do{
		cout << "Introduzca num alumnos (entre 1 y " << DIM_NOTAS << ")"<<endl;
		cin >> util_notas;
	}while(util_notas < 1 || util_notas > DIM_NOTAS);

	//Bucle de lectura de las notas
	for(int i = 0; i < util_notas ; i++){
		cin>>notas[i];
		media += notas[i];
	}

	//calculo de la media
	media /= util_notas;
	cout << "\n Media -> " << media << endl;

}