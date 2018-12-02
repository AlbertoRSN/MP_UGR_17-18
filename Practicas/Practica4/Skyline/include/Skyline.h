#ifndef SKYLINE_H
#define SKYLINE_H

class Skyline {
	private :
		double * abscisas ; // array de abscisas
		double * alturas ; // array de alturas (> 0, la ultima sera 0)
		int num; // tam. de los arrays anteriores
		
		void reservarEspacio(const int &longitud);
		void liberarEspacio();
		void Copia(const Skyline& otra);
	public:
		Skyline();
		Skyline(const Skyline& otra);
		Skyline& operator=(const Skyline &otra);
		Skyline(double & abcisaInicio, double & abcisaFinal, double & altura);
		Skyline(double * abscisas, double * alturas, int & n);
		~Skyline();
		
		void mostrar();
};

#endif
