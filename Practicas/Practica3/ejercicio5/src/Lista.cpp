//Fichero Lista.cpp

#include "Lista.h"
#include "Celda.h"

#include <iostream>

using namespace std;


Lista::Lista(){
	// contenido = 0;
	contenido = new Celda(0);
	tam = 0;
}

void Lista::agregarInicio(double valor){
	Celda *pCelda;
  	pCelda = contenido;
  	pCelda = pCelda->obtenerSiguiente();
  	Celda *aux = new Celda(valor);
  	aux->asignarSiguiente(pCelda);
  	contenido->asignarSiguiente(aux);
}

void Lista::agregarElemento(double valor){
	if(contenido == 0)
  		contenido = new Celda(0);

	Celda *pCelda;
  	pCelda = contenido;
  	pCelda = pCelda->obtenerSiguiente();

  	Celda *celda = new Celda(valor);
  	celda->asignarSiguiente(pCelda);
  	contenido->asignarSiguiente(celda);
}



void Lista::mostrar(){
	Celda *pCelda;
	pCelda = contenido;
	pCelda = pCelda->obtenerSiguiente();

	while(pCelda != 0){
		//Imprimo valor (info)
		//cout << pCelda->obtenerInfo() <<" -> ";
		pCelda->mostrar();
		//cout<< "-> ";
		//Avanzo el puntero
		pCelda = pCelda->obtenerSiguiente();
	}

	//Ultimo elemento
	//cout<< "NULL ";
}

void Lista::imprimir()
{
  Celda *pCelda;
  pCelda = contenido;
  pCelda = pCelda->obtenerSiguiente();
  while(pCelda != 0){
    cout << pCelda->obtenerInfo() << " ";
    pCelda = pCelda->obtenerSiguiente();
  }
    cout << "\n";
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

void Lista::liberarEspacio(){
	while(contenido != 0){
		Celda *pCelda = pCelda->obtenerSiguiente();
		delete pCelda;
	}
}

Lista *Lista::particionar(int tam, int &util){
  int longitud = obtenerLongitud();
  int nuevoTam = (longitud/tam) + (longitud%tam);
  Lista *lista = new Lista[nuevoTam];
  Celda *pCelda = contenido;
  pCelda = pCelda->obtenerSiguiente();
  int v = 0;
  int indice = 0;

  Celda *aux;
  lista[indice].contenido = new Celda(0);
  aux = lista[indice].contenido;

  while(pCelda != 0){
    if(v == tam){
      indice++;
      v = 0;
      lista[indice].contenido = new Celda(0);
      aux = lista[indice].contenido;
    }

    Celda *c = new Celda(pCelda->obtenerInfo());
    aux->asignarSiguiente(c);
    aux = aux->obtenerSiguiente();
    pCelda = pCelda->obtenerSiguiente();
    v++;
  }

  delete contenido;
  util = nuevoTam;

  return lista;
}



