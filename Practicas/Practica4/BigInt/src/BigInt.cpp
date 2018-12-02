#include "BigInt.h"
#include <iostream>

using namespace std;


BigInt::BigInt(int n){
	this->numeroDigitos = n;
	reservarEspacio();
}

BigInt::BigInt(){
	this->numeroDigitos = 1;
	reservarEspacio();
}

BigInt::BigInt(const char * cadena){
	this->numeroDigitos = strlen(cadena); //strlen(cadena) devuelve el tamaño de cadena sin contar el /0
	reservarEspacio(); 

	for(int i=0; i<numeroDigitos; i++){
		datos[numeroDigitos-i-1] = cadena[i] - '0'; 
	}
}


BigInt::~BigInt(){
	liberarEspacio();
	this->numeroDigitos = 0;
}

BigInt BigInt::operator+(const BigInt &otro)const{
	//Creo nuevo BigInt como resultado
	int numeroTotal = numeroDigitos + otro.numeroDigitos;
	BigInt *resultado = new BigInt[numeroTotal];

	//Primero copio los valores de this
	for(int i=0; i<numeroDigitos; i++){
		resultado->datos[i] = this->datos[i];
	}

	//Despues copio los valores de otro
	int k=numeroDigitos;
	for(int j=0; j<otro.numeroDigitos; j++){
		resultado->datos[k] = otro.datos[j];
		k++;
	}

	return *resultado;
}

void BigInt::mostrar(){
	for(int i=0; i<numeroDigitos; i++){
		cout<< datos[i] << " ";
	}
	cout<<endl;
}

ostream & operator<<(ostream &output, const BigInt &big){ 
    output << endl;

    for(int i=0; i <big.numeroDigitos; i++){
        output << big.datos[i] << " "; 
    }

    output << endl;
    // Se devuelve output
    return output; 
}

