//Fichero Lista.cpp

#include "Lista.h"
#include "Celda.h"

#include <iostream>

using namespace std;

ostream & operator<<(ostream &flujo, const Lista &lista){
  flujo<<"-------------------------------------------------" << endl;

  Celda *pCelda = lista.contenido;
  while(pCelda->obtenerSiguiente() != 0){
    flujo<<pCelda; //Hago uso del operator << de Celda
    pCelda = pCelda->obtenerSiguiente();
  }

  return flujo;
}

Lista::Lista(){
	contenido = 0;
	// contenido = new Celda(0);
	tam = 0;
}

Lista::~Lista(){
	liberarEspacio();
}

void Lista::agregarInicio(double valor){
	Celda *pCelda;
  	pCelda = contenido;
  	pCelda = pCelda->obtenerSiguiente();
  	Celda *aux = new Celda(valor);
  	aux->asignarSiguiente(pCelda);
  	contenido->asignarSiguiente(aux);
}

void Lista::agregarFinal(double valor){
	Celda *pCelda;
  pCelda = contenido;

  	while(pCelda->obtenerSiguiente() != 0){
    	pCelda = pCelda->obtenerSiguiente();
  	}

  	Celda *aux = new Celda(valor);
    if(pCelda->obtenerSiguiente() != 0)
  	 pCelda->asignarSiguiente(aux);
}



void Lista::mostrar(){
	Celda *pCelda;
	pCelda = contenido;
	pCelda = pCelda->obtenerSiguiente();

	while(pCelda != 0){
		//Imprimo valor (info)
		//cout << pCelda->obtenerInfo() <<" -> ";
		pCelda->mostrar();
		cout<< "-> ";
		//Avanzo el puntero
		pCelda = pCelda->obtenerSiguiente();
	}

	//Ultimo elemento
	cout<< "NULL ";
}


int Lista::obtenerLongitud(){
	//return tam; 
	Celda *pCelda;
  	pCelda = contenido;
  	pCelda = pCelda->obtenerSiguiente();
  	int i=1;
  	while(pCelda->obtenerSiguiente() != 0){
    	i++;
    	pCelda = pCelda->obtenerSiguiente();
  	}

  	return i;
}

Celda* Lista::obtener(int pos){
	Celda *aux = contenido;
	Celda *res;
	int i=1;

	while(i<pos){
		if(aux->obtenerSiguiente() != 0){
			aux = aux->obtenerSiguiente();
		}
		else{
			res = aux; 
		}
		i++;
	}

	res = aux;

	return aux;
}

void Lista::eliminarFinal(){
	Celda *pCelda;
	pCelda = contenido;

  	pCelda = pCelda->obtenerSiguiente();
  
  	while(pCelda->obtenerSiguiente()->obtenerSiguiente() != 0 ){
    	pCelda = pCelda->obtenerSiguiente();
  	}

  	pCelda->anularSiguiente();
}



bool Lista::agregarPosicion(int indice, double dato){	
	int longitud = obtenerLongitud();
  	int i=0;
  	bool agregado = false;
  	Celda *pCelda;
  	pCelda = contenido;


  	if(indice < longitud){
    	pCelda = pCelda->obtenerSiguiente();
    
    	while(i != indice-1){
      		pCelda = pCelda->obtenerSiguiente();
      		i++;
    	}

      Celda *aux= new Celda(dato);
      aux->asignarSiguiente(pCelda->obtenerSiguiente());
      pCelda->asignarSiguiente(aux);

      agregado = true;
  }

  return agregado;

}



