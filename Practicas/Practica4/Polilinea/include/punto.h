#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>


class Punto{

	friend std::ostream & operator<<(std::ostream &flujo, const Punto &punto);

private:
	int x,y;

public:

	Punto(){
		x=0;
		y=0;
	}

	Punto(int x, int y){
		this->x=x;
		this->y=y;
	}

	int obtenerX(){
		return x;
	}

	int obtenerY(){
		return y;
	}

	bool operator==(const Punto &otro)const{
		bool res = false;
		if(this == &otro)
			res = true;
		else
			res = (x == otro.x && y==otro.y);
		return res;
	}
	
};


#endif