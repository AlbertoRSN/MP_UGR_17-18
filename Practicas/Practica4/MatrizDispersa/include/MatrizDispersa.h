#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H

#include "Valor.h"

class MatrizDispersa {
	private:
		int nfilas;
		int ncolumnas; 
		Valor * valores;
		int numeroValores;
		
		void LiberaMemoria();
		void Copia(const MatrizDispersa &otra);
	public:
		MatrizDispersa();
		MatrizDispersa(int* filas, int* columnas, double* numeros, int elementos); 
		~MatrizDispersa();

		int getNumFilas() const;
		int getNumColumnas() const;
		Valor * getValores() const;
		int getNumValores() const;
		
		void muestraValores();
};

#endif
