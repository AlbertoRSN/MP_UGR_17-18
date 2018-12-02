// matriz2D.h

class Matriz2D{
private:
	int ** datos;
	int numeroFilas;
	int numeroColumnas;
public:
	Matriz2D(int, int);
	.....

}


//Matriz2D.cpp

Matriz2D::Matriz2D(int numeroFilas, int numeroColumnas){
	//Asignacion numero filas y columnas
	this->numeroFilas = numeroFilas;
	this->numeroColumnas = numeroColumnas;

	//Reserva Array punteros
	datos = new int *[numeroFilas];

	//Reserva espacio de filas
	for(int i=0; i<numeroFilas; i++){
		datos[i] = new int[numeroColumnas];
	}
}

int Matriz2D::obtenerValor(int fila, int columna){
	int resultado = -1;
	if(fila < 0 || columna <0 || fila >=numeroFilas || columna >= numeroColumnas ){
		cout << "Error acceso";
	}
	else{
		resultado = datos[fila][columna];
	}

	return resultado;
} //No es adecuado un doble return en una funcion.





//Destructor de la clase
Matriz2D:: ~Matriz2D(){

	//Borrado del espacio de las filas
	for(int i=0; i<numeroFilas; i++){
		delete [] datos[i];
	}

	//Liberar el array de punteros
	delete [] datos;
}


//MAIN
1º -> Reserva de memoria C
Matriz2D *ptr = new Matriz2D(8,5); //Objeto alojado en el heap, no esta alojado en la pila
.....
delete ptr; //Se llama al destructor.

2º Donde aparece un delete sin usar memoria dinamica en sí, un new.

void funcion(){
	Matriz2D objeto(8,4);
	...
	...
}

Despues de la funcion, se llama automaticamente al destructor para que borre el objeto creado en la funcion




Ahora para una matriz con un solo array de Filas x columnas



class Matriz2D{
private:
	int ** datos;
	int numeroFilas;
	int numeroColumnas;
public:
	Matriz2D(int, int);
	.....

}



Matriz2D::Matriz2D(int filas, int columnas){
	//Asignacion numero filas y columnas
	numeroFilas = filas;
	numeroColumnas = columnas;

	//Reserva Array punteros
	datos = new int *[numeroFilas];

	//Reserva de espacio global.
	datos[0] = new int[numeroFilas*numeroColumnas];

	//Asignacion punteros inido filas
	for(int i=1; i < numeroFilas; i++){
		datos[i] = datos[i-1] + numeroColumnas;
	}

}


//Destructor de la clase
Matriz2D:: ~Matriz2D(){
	delete [] datos[0]; //Primero borro lo que apunte la posicion 0
	delete [] datos; 
}

int Matriz2D::obtenerValor(int fila, int columna){
	int resultado = -1;
	if(fila < 0 || columna <0 || fila >=numeroFilas || columna >= numeroColumnas ){
		cout << "Error acceso";
	}
	else{
		resultado = datos[fila][columna];
	}

	return resultado;
} //No es adecuado un doble return en una funcion.
















