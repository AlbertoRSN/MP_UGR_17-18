#include "Barquitos.h"
#include <iostream>

using namespace std;

void Barquitos::reservarEspacio(){
	tablero = new int *[this->filas];

	for(int i=0; i<filas; i++){
		*(tablero + i) = new int[this->columnas];  //Reserva espacio para columnas
	}
}

void Barquitos::inicializarAgua(){
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			tablero[i][j] = Barquitos::AGUA;
		}
	}
}

Barquitos::Barquitos(int filas, int columnas){
	this->filas = filas;
	this->columnas = columnas;

	reservarEspacio();

	//Inicializar todo a agua
	inicializarAgua();
}

void Barquitos::liberarEspacio(){
	for(int i=0; i<filas; i++){
		delete [] *(tablero + i); //Borrado de columnas 1 a 1
	}

	delete[] tablero; //Borrado de filas
}


Barquitos::~Barquitos(){
	this->liberarEspacio();

	this->filas = 0;
	this->columnas = 0;
}


Barquitos::Barquitos(const Barquitos &otra){
	//Asigno valores
	this->filas = otra.filas;
	this->columnas = otra.columnas;

	//Primero reserva de memoria
	this->reservarEspacio();

	//Copiar matriz
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			tablero[i][j] = otra.tablero[i][j];
		}
	}
}


void Barquitos::mostrar(){
	cout<<"\n-------------- TABLERO "<<filas<<"x"<<columnas<<" --------------\n" << endl;
    
	//Mostrar numero de columnas
    cout<<" \t  ";
    for(int i=1; i<=columnas; i++){
    	cout<< i << " ";
    }
    cout<<endl;

    //Mostrar numero de filas
    for(int i=0; i<filas; i++){
    	cout<<"\t";
    	cout<<(char)('A'+i) << " ";
    	for(int j=0; j<columnas; j++){
    		if(j >=10){
    			cout <<" "<< tablero[i][j] << " ";
    		}
    		else{
    			cout << tablero[i][j] << " ";
    		}
    		
    	}
    	cout<<endl;
    }
}

bool Barquitos::chequear(char fila, int columna, int tam, char direccion){

	bool resultado = true;

	//Pasamos de caracter de la fila a entero
	int filaInicial = fila - 'A'; //Va a devolver 0
	int columnaInicial = columna - 1;

	//Determinar si los datos son validos.
	if(filaInicial >= this->filas || columnaInicial >= this->columnas){
		resultado = false;
	}
	else{
		int columnaFinal = 0;
		int filaFinal = 0;

		//Depende de la orientacion
		if(direccion == HORIZONTAL){
			columnaFinal = columnaInicial+tam; //determino posicion final del barco
		}
		else if(direccion == VERTICAL){
			filaFinal = filaInicial + tam;
		}

		//Comprobar si la posicion final es valida
		if(filaFinal >= this->filas || columnaFinal >= this->columnas){
			resultado = false;
		}
		else{ //Ya se que me cabe el barco, ahora se comprueba si todo es agua
			if(direccion == HORIZONTAL){
				//bool agua = true;
				for(int i=columnaInicial; i<= columnaFinal && resultado; i++){
					if(tablero[filaInicial][i] != AGUA){
						resultado = false;
					}
				}
			}
			else if(direccion == VERTICAL){
				for(int i=filaInicial; i<=filaFinal && resultado; i++){
					if(tablero[i][columnaInicial] != AGUA){
						resultado = false;
					}
				}
			}
		}
	}

	return resultado;
}

//Ahora despues de comprobar, hacer metodo para colocar el barco
void Barquitos::insertar(char fila, int columna, int tam, char direccion){
	int filaInicio = fila - 'A';
	int columnaInicio = columna - 1;

	if(direccion == HORIZONTAL){
		for(int i=0; i<tam; i++){
			tablero[filaInicio][columnaInicio+i] = tam;
		}
	}
	else if(direccion == VERTICAL){
		for(int i=0; i<tam; i++){
			tablero[filaInicio+i][columnaInicio] = tam;
		}
	}
}

bool Barquitos::asignarValor(int fil, int col, int valor){
    bool asignado = false;
  		
  	if(fil < filas && col < columnas)
    	tablero[fil][col] = valor;
    	asignado = true;

  	return asignado;
}

const Barquitos & Barquitos::operator=(const Barquitos &otro){
	if(this != &otro){
		//Liberar espacio de memoria asociado a this
		liberarEspacio();

		//Asignar numero de filas y columnas para que coincida con los valores de otro
		filas = otro.filas;
		columnas = otro.columnas;

		//Reserva de espacio
		reservarEspacio();

		//Copiar valores del tablero pasado como argumento a this
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				tablero[i][j] = otro.tablero[i][j];
			}
		}
	}
	//Devolver el objeto modificado, si no pongo el asterisco devuelo un puntero.
	return *this;
}




//Barquitos* Barquitos::copiarTablero(){
// 	Barquitos *ptr = new Barquitos(filas, columnas);

// 	for(int i=0; i<filas; i++){
// 		for(int j=0; j<columnas; j++){
// 			ptr->tablero[i][j] = tablero[i][j];
// 		}
// 	}

// 	//Devuelvo el puntero
// 	return ptr;
// }


