#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include "Pareja.h" 

class Precuencias{
private:
	Pareja *parejas;
	int npares;

	//Metodos auxiliares
	void liberarEspacio(){
		delete[] parejas;
		npares = 0;
		parejas = 0;
	}
	void reservarEspacio(int n){
		npares = n;
		if(npares > 0){
			parejas = new Pareja[npares];
		}
		else{
			parejas = 0;
		}

	}
	void copiar(Pareja *parejas){
		for(int i=0; i<npares; i++){
			this->parejas[i] = parejas[i];
		}
	}

	void Redimensiona() {
		int newSize = this->npares + 1;
		Pareja * nueva = new Pareja[newSize]; 

		// Copiamos los valores del vector antiguo al nuevo
		for (int i = 0; i < this->npares; i++) {
			nueva[i] = this->parejas[i];
		}
		
		// Liberamos el vector antiguo
		this->liberarEspacio();

		// Devolvemos el resultado
		this->parejas = nueva;
		this->npares = newSize;
	}

public:
	//Constructor por defecto
	Precuencias();
	//Destructor
	~Precuencias();
	//Constructor de copia
	Precuencias(const Precuencias &otra);

	//Metodo agragarValor que recibe un valor entero y lo agrega
	//Si ya aparece alguna pareja asociada al valor, 
	// debe incrementarse su contador. 
	//Si no esta, se incluira una nueva pareja
	void agregarValor(int valor);

	void mostrar();

	//Operador ==
	bool operator==(const Precuencias &otra)const;

	//Operador !=
	bool operator!=(const Precuencias &otra)const;
};

#endif
