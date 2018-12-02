/* Archivo Punto.h */

#ifndef PUNTO_H
#define PUNTO_H


class Punto{
private:
	double x;
	double y;
public:
	Punto();
	Punto(double vx, double vy);
	double getX() const;
	double getY() const;
	void setX(double vx);
	void setY(double vy);
	void mostrar() const;
	void leerDatos();
};

// double calcularDistancia(Punto p1, Punto p2);
// Punto calcularPuntoMedio(Punto p1, Punto p2);


#endif