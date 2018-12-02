// archivo main.cpp

#include <iostream>
#include "BigInt.h"

using namespace std;

/*
 * 
 */
int main() {

	//Usar constructor con cadena
    char cadena[] = "123447586904";
    char cadena2[] = "00045667";
    BigInt obj(cadena);

    cout << obj;
    obj.mostrar();

    BigInt obj2(4); //Objeto con los 4 valores a 0

    cout<<obj2;
    obj2.mostrar();

    BigInt obj3;
    //obj3.mostrar();

    //obj3 = obj2 + obj;
    //cout<<obj3;

    // obj3.mostrar();



}

