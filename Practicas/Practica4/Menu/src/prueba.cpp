#include <iostream>

#include "Menu.h"

using namespace std;

int main() {
	
	cout << "\nCreo menu de titulo -> 'Menu1'" << endl;
	Menu * menu = new Menu();
	menu->setTitulo("Menu1");
	
	cout << "Agrego 6 opciones por defecto. \n" << endl;
	menu->agregarOpcion("Opcion 1");
	menu->agregarOpcion("Opcion 2");
	menu->agregarOpcion("Opcion 3");
	menu->agregarOpcion("Opcion 4");
	menu->agregarOpcion("Opcion 5");
	menu->agregarOpcion("Opcion 6");
	
	cout << "Menu creado: " << endl;
	menu->mostrar();
	
	cout << "Nuevo menu copiado con operador asignacion: \n" << endl;
	Menu * copia = menu;
	
	copia->setTitulo("Menu copiado");
	copia->mostrar();
	
}
