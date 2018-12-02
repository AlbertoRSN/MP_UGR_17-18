#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

class SecuenciaEnteros{
private:
	static const int TAMANIO = 50;
	int vectorPrivado[TAMANIO];
	int totalUtilizados;
public:
	//Constructor de la clase
	SecuenciaEnteros(){
		totalUtilizados = 0;
	}

	//Metodo para agregar nuevo entero a la secuencia
	void agregarEntero(int nuevo){
		//Se comprueba si se puede realizar la operacion
		if(totalUtilizados < TAMANIO){
			vectorPrivado[totalUtilizados] = nuevo;
			totalUtilizados++;
		}
	}

	//Metodo para asignar al dato miembro vectorPrivado un conjunto de valores
	bool asignarValores(int valores[], int numeroValores){
		bool result = true;

		//Se comprueba si se puede, es decir, si hay espacio suficiente.
		if(numeroValores < TAMANIO){
			//Puede hacerse y se copian los valores a vectorPrivado
			for(int i = 0; i < numeroValores; i++){
				vectorPrivado[i] = valores[i];
			}

			//Se modifica el valor de total utilizados
			totalUtilizados = numeroValores;
		}
		else{
			//La operacion no es viable
			result = false;
		}

		return result;
	}
}



int secuenciaEnteros::obtenerValores(int valores[]){
	for(int i = 0; i<totalUtilizados; i++){
	valores[i] = vectorPrivado[i];
	}
	return totalUtilizados;
}



int main(){
	SecuenciaEnteros indices;

	int array[] = {1,2,3,4,5,6,7,8,9,10};
	bool resultado = indices.asignarValores(array, 10); // 0..9

	cout<<"Resultado agregacion: " << resultado << endl;

	int datosObjeto[TAMANIO];
	int usados = indices.obtenerValores(datos);
}