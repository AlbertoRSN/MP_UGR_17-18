#include "Matriz2D.h"
#include <iostream>

using namespace std;


	Matriz2D::Matriz2D(int filas, int columnas){
        this->filas = filas;
        this->columnas = columnas;

        datos = new int *[filas];

        for(int i=0; i < filas; i++){
            *(datos + i) = new int[columnas]; //Reserva de memoria para las columnas.
        }
    }

    Matriz2D::Matriz2D(const Matriz2D &otra){

        this->filas = otra.filas;
        this->columnas = otra.columnas;

        datos = new int *[filas];

        for(int i=0; i < filas; i++){
            *(datos + i) = new int[columnas]; 
        }

        for(int i=0; i<filas; i++){
        	for(int j=0; j<columnas; j++){
        		datos[i][j] = otra.datos[i][j];
        	}
        }
    }

    Matriz2D::~Matriz2D(){
        for(int i=0; i<filas; i++){
            delete[] *(datos + i);
        }

        delete[] datos;

        this->filas = 0;
        this->columnas = 0;
    }

    int Matriz2D::obtenerFilas(){
        return this->filas;
    }

    int Matriz2D::obtenerColumnas(){
        return this->columnas;
    }

   

    Matriz2D* Matriz2D::copiarMatriz(){
        Matriz2D *ptr = new Matriz2D(filas, columnas);

        for(int i=0; i<filas; i++){
        	for(int j=0; j<columnas; j++){
        		ptr->datos[i][j] = datos[i][j];
        	}
        }

        //Devolver el puntero
        return ptr;
    }

    void Matriz2D::mostrarPantalla(){
    	cout<<"\n";
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                cout << datos[i][j] << " ";
            }
            cout << endl;
        }
        //cout << endl << endl;
    }

    Matriz2D* Matriz2D::extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin){
        int fil = filaFin - filaIni + 1;
        int col = colFin - colIni + 1;

        Matriz2D *ptr = new Matriz2D(fil, col);
 

        for(int i=0, posFil=filaIni; posFil<=filaFin; i++,posFil++){
            for(int j=0, posCol=colIni; posCol<=colFin; j++,posCol++){
                ptr->datos[i][j] = datos[posFil][posCol];
            }
        }

        return ptr;
    }

    bool Matriz2D::asignarValor(int fil, int col, int valor){
    	bool asignado = false;
  		
  		if(fil < filas && col < columnas)
    		datos[fil][col] = valor;
    		asignado = true;


  		return asignado;
    }

    void Matriz2D::eliminarFila(int fil){
  	
  		for(int i=fil;i<filas-1;i++){
    		for(int j=0;j<columnas;j++){
    	  		datos[i][j] = datos[i+1][j];
    		}
  		}
		filas--;
	}


	void Matriz2D::eliminarColumna(int col){
 		for(int i=0;i<filas;i++){
   			for(int j=col;j<columnas-1;j++){
      			datos[i][j] = datos[i][j+1];
    		}
  		}
		columnas--;
	}

