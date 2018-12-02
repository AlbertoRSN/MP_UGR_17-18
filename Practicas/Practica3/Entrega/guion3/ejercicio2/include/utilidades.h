//Archivo utilidades.h

#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "Valor.h"


int combinarSuma(Valor *coleccion1, int util1, Valor *coleccion2, int util2, Valor *resultado);

//Metodo auxiliar para comprobar si un array esta o no.
bool comprobarValor(Valor *coleccion, int util, Valor valor);

void mostrarContenido(Valor *secuencia, int util);


#endif