// archivo main.cpp

#include <iostream>
#include "Barquitos.h"

using namespace std;

/*
 * 
 */
int main() {

    cout<<"\n\t   JUEGO BARQUITOS       \n" << endl;

	//Creo un objeto de la clase Barquitos con 10f filas y 10 columnas
	Barquitos tablero1(12,12);

	// for(int i=0; i<10; i++){
	// 	for(int j=0; j<10; j++){
	// 		tablero1.asignarValor(i, j, 7);
	// 	}
	// }

	// Se muestra el contenido
    //cout << "Tablero: " << endl;
    tablero1.mostrar();

    cout<<endl;

    bool cabe = tablero1.chequear('A',1,2,'H');

    cabe= tablero1.chequear('C',3,4,'H');
    if(cabe){
        tablero1.insertar('C',3,4,'H');
    }

    if(cabe == 0)
        cout<<"El barco no cabe."<< endl;
    else
        cout<<"Si cabe el barco"<<endl;

    tablero1.mostrar();

    Barquitos tablero2(20,20);


    cout<<"\nSe muestra Tablero2 antes de ejecutar operador asignacion: "<<endl;
    tablero2.mostrar();

    tablero2 = tablero1;

    cout<<"\nSe muestra despues de hacer la asignacion: "<<endl;
    tablero2.mostrar();
    
}

