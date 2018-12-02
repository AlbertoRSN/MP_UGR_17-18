#include "Precuencias.h"
#include <iostream>

using namespace std;

Precuencias::Precuencias(){
	npares = 0;
	parejas = 0;
}

Precuencias::~Precuencias(){
	liberarEspacio();
}

Precuencias::Precuencias(const Precuencias &otra){
	this->npares = otra.npares;
	reservarEspacio(npares);
	copiar(otra.parejas);
}

//Metodo agragarValor que recibe un valor entero y lo agrega
//Si ya aparece alguna pareja asociada al valor, 
// debe incrementarse su contador. 
//Si no esta, se incluira una nueva pareja
void Precuencias::agregarValor(int valor){

	cout << "Comprobando para el valor" << valor << endl;
	int existe = -1;
	for (int i = 0; i < npares && existe < 0; i++) {
		if (valor == parejas[i].getDato()) {
			existe = i;
		}
	}
	if (existe >= 0) {
		parejas[existe].setNVeces(parejas[existe].getNVeces() + 1);

	} else {
		Redimensiona();
		parejas[this->npares - 1] = Pareja(valor, 1);
	}
	// bool existe = false;
	// for(int i=0; i<npares && existe; i++){
	// 	if(valor == parejas[i].getDato()){
	// 		parejas[i].setNVeces(parejas[i].getNVeces()+1);
	// 		existe=true;
	// 	}
	// }

	// if(existe){
	// 	Pareja *aux = new Pareja[npares + 1];
	// 	//Copio los valores de this en aux.
	// 	for(int i=0; i<npares; i++){
	// 		aux[i] = parejas[i];
	// 	}
	// 	//libero this
	// 	liberarEspacio();

	// 	//Apunto this a aux;
	// 	parejas = aux;
	// 	npares = npares + 1;

	// 	parejas[npares-1] = Pareja(valor, 1);
	// }
}


void Precuencias::mostrar() {
	cout << "Precuencia{";
	for (int i = 0; i < npares; i++) {
		if (i != 0)
			cout << ",";

		cout << "{Valor: " << parejas[i].getDato() << ", " << parejas[i].getNVeces() << " veces.}";
	}
	cout << "}" << endl;
}

