#ifndef _PUNTO_H_
#define _PUNTO_H_

class Punto {
private:
    double x; ///< coordenada x del punto
    double y; ///< coordenada y del punto

public:
    Punto(); ///< constructor. Pone a 0 las dos coordenadas
    Punto(double x1, double y1); ///< constructor. Inicializa un punto con dos valores x y
    double getX() const; ///< Devuelve la coordenada x del punto    
    double getY() const; ///< Devuelve la coordenada y del punto
    void setX(double newXValue); ///< Asigna el valor newXValue a la coordenada x del punto
    void setY(double newYValue); ///< Asigna el valor newYValue a la coordenada y del punto
    void escribir() const; ///<  Escribe un punto en formato (x,y)    
    void leer(); ///< // Lee un punto en el formato (x,y)
};

/**
@brief Calcula la distancia entre dos puntos
@param p1 primer punto
@param p2 segundo punto
@return la distancia entre el punto @a p1 y el punto @a p2
*/
double distancia(Punto p1, Punto p2);

/**
@brief Calcula el punto que está entre dos puntos dados con distancia mínima a ambos
@param p1 primer punto
@param p2 segundo punto
@return un punto entre el punto @a p1 y el punto @a p2 con distancia mínima a ambos
*/

Punto puntoMedio(Punto p1, Punto p2);


#endif
