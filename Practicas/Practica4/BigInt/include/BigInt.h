#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>

class BigInt{

friend std::ostream & operator<<(std::ostream &output, const BigInt &big);

private:
    int  *datos;            //puntero a datos 
    int numeroDigitos;   //numero de filas y numero de columnas

     /**
     * Metodo auxiliar liberar espacio
     */
    inline void liberarEspacio(){
        delete[] datos;
    }

      /**
     * Metodo auxiliar para reservar espacio
     */
    inline void reservarEspacio(){
        datos = new int [numeroDigitos];
        if(numeroDigitos != 0)
            for(int i=0; i<numeroDigitos; i++){
              datos[i] = 0;
            }
    }


public:
    /**
     * Constructor por defecto
     */
    BigInt();

    /**
     * Constructor por defecto
     */
    BigInt(int n);
    
    /**
     * Destructor
     */
    ~BigInt(); 

    /**
    * Constructor con cadena
    */
    BigInt(const char * cadena);

    /**
    * Sobrecarga operator+
    */
    BigInt operator+(const BigInt &otro) const;

    /**
    * Mostrar BigInt
    */
    void mostrar();


};
#endif //BIGINT_H
