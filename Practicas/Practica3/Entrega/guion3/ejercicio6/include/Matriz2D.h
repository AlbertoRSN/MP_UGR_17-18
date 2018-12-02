#ifndef MATRIZ2D_H
#define MATRIZ2D_H

#include <iostream>

using namespace std;

class Matriz2D{
private:
    int  **datos;        //doble puntero 
    int filas, columnas; //numero de filas y numero de columnas

public:

    /**
     * Constructor de Matriz2D
     */
    Matriz2D(int filas, int columnas);

    /**
     * Constructor de copia de Matriz2D
     */
    Matriz2D(const Matriz2D &otra);

    /**
     * Destructor de Matriz2D
     */
    ~Matriz2D();
    

    int obtenerFilas();
    
    int obtenerColumnas();

    void eliminarFila(int fil);

    void eliminarColumna(int col);
    
    Matriz2D* copiarMatriz();
    
    /**
     * Mostrar por pantalla la matriz
     */
    void mostrarPantalla();
    
    // implementar un metodo que extraiga una submatriz de una matriz. 
    //El metodo recibira como argumento la fila y columna de inicio y final.
    Matriz2D* extrarSubmatriz(int filaIni, int colIni, int filaFin, int colFin);
    
    //ASigna valor a la posicion fil-col
    bool asignarValor(int fil, int col, int valor);


    

};
#endif //MATRIZ2D_H
