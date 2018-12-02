#include <iostream>

# include "utilidades.h"
# include "Valor.h"

int main() {
    // Se definen los casos de prueba de interes
    // Caso 1
    Valor array1[]={Valor(1, 1, 0.7), Valor(1, 3, 9.4), Valor(2, 1, 8.3), Valor(3, 1, 6.45),
                    Valor(3, 3, 2.75)};
    Valor *pArray1 = array1;

    Valor array2[]={Valor(0, 0, 10), Valor(1, 1, 0.3), Valor(1, 2, 4.3), Valor(2, 2, 1.5), Valor(3, 2, 0.25)};
    Valor *pArray2 = array2;

    Valor resultado1[10];
    Valor *res = resultado1;

    // Se llama a la metodo de combinacion en suma
    int util1=combinarSuma(array1, 5, array2, 5, resultado1);

    // Se muestra el resultado del caso de prueba
    cout << "------------------ caso prueba 1 -----------------------" << endl;
    mostrarContenido(pArray1, 5);
    mostrarContenido(pArray2, 5);
    cout << "--------------------------------------------------------" << endl;
    mostrarContenido(res, util1);

    // Caso 2
    Valor array3[] = {Valor(0, 0 , 9.3), Valor(1 , 3 , 5.4), Valor(2, 3, 8.3), Valor(3, 1, 6.45)} ;
    Valor *pArray3 = array3;

    Valor array4[] = {Valor(2, 2, 0.85) , Valor(2, 3, 3.8) , Valor(3, 1, 4.3) , Valor(3, 2, 6.4),
                       Valor(3, 3, 9.3)};
    Valor *pArray4 = array4;

    Valor resultado2[10];
    Valor *pResultado2 = resultado2;

    // Se llama al metodo de combinacion
    int util2=combinarSuma(pArray3, 4, pArray4, 5, pResultado2);

    // Se muestra el resultado de la prueba
    cout << "\n------------------ caso prueba 2 -----------------------" << endl;
    mostrarContenido(pArray3, 4);
    mostrarContenido(pArray4, 5);
    cout << "--------------------------------------------------------" << endl;
    mostrarContenido(pResultado2, util2);

    // Caso 3
    Valor array5[] = {Valor(0, 0 , 5.2), Valor(1 , 1 , 6.3), Valor(2, 2, 7.5), Valor(2, 3, 8.3),
                      Valor(3, 3, 9.2)} ;
    Valor *pArray5 = array5;

    Valor array6[] = {Valor(0, 0, 1.0) , Valor(1, 1, 3.4) , Valor(3, 3, 6.3)};
    Valor *pArray6 = array6;

    Valor resultado3[10];
    Valor *pResultado3 = resultado3;

    // Se llama al metodo de combinacion
    int util3=combinarSuma(pArray5, 5, pArray6, 3, pResultado3);

    // Se muestra el resultado de la prueba
    cout << "\n------------------ caso prueba 3 -----------------------" << endl;
    mostrarContenido(pArray5, 5);
    mostrarContenido(pArray6, 3);
    cout << "--------------------------------------------------------" << endl;
    mostrarContenido(pResultado3, util3);
}