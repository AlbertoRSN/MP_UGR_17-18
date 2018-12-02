
all: bin/menu 

obj/Menu.o: src/Menu.cpp include/Menu.h
	g++ -g -c -o obj/Menu.o src/Menu.cpp -Iinclude #-g para que incluye depuracion

obj/prueba.o: src/prueba.cpp include/Menu.h
	g++ -g -c -o obj/prueba.o src/prueba.cpp -Iinclude

bin/menu: obj/Menu.o obj/prueba.o
	g++ -g -o bin/menu obj/Menu.o obj/prueba.o