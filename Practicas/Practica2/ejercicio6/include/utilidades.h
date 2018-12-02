//Archivo utilidades.h

#ifndef UTILIDADES_H
#define UTILIDADES_H

const int FIL = 10, COL = 10;

void mostrarMatriz(double matriz[][COL], int fil, int col);
bool multiplicar(double matriz1[][COL], int fil1, int col1, double matriz2[][COL], int fil2, int col2, double matrizResultado[][COL], int utilFilRes1, int utilColRes1);
#endif