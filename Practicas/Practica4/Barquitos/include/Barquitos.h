#ifndef BARQUITOS_H
#define BARQUITOS_H

//#include <iostream>

//using namespace std;

class Barquitos{
private:
    int  **tablero;        //doble puntero 
    int filas, columnas;   //numero de filas y numero de columnas

    //Metodos privados
    /**
     * Metodo auxiliar liberar espacio
     */
    void liberarEspacio();

    /**
     * Metodo auxiliar para reservar espacio
     */
    void reservarEspacio();

    /**
     * Metodo auxiliar inicializar tablero vacio (Todo agua - valor 9)
     */
    void inicializarAgua();


    

public:

    //Constantes
    static const int AGUA = 9;
    static const char HORIZONTAL = 'H';
    static const char VERTICAL = 'V';

    /**
     * Constructor de Barquitos con los parametros filas y columnas
     */
    Barquitos(int filas, int columnas);

    /**
     * Destructor de Barquitos
     */
    ~Barquitos();

    /**
     * Metodo auxiliar para checkear -> En la posicion 
     * A8 cabe un barco de tamaño 4 y en posicion horizontal??
     */
    bool chequear(char fila, int columna, int tam, char direccion);

    /**
     * Metodo auxiliar para insertar el barco
     */
    void insertar(char fila, int columna, int tam, char direccion);

    /**
     * Constructor de copia de Barquitos
     */
    Barquitos(const Barquitos &otra);

    /**
     * Mostrar por pantalla el tablero
     */
    void mostrar();

    /**
     * Asignar valor al tablero
     */
    bool asignarValor(int fil, int col, int valor);


    /**
     * Operador asignacion
     */
    const Barquitos & operator=(const Barquitos &otro);

    

};
#endif //Barquitos_H
