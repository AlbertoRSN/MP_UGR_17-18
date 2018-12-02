all: bin/barquito 

obj/Barquitos.o: src/Barquitos.cpp include/Barquitos.h
	g++ -g -c -o obj/Barquitos.o src/Barquitos.cpp -Iinclude #-g para que incluye depuracion

obj/main.o: src/main.cpp include/Barquitos.h
	g++ -g -c -o obj/main.o src/main.cpp -Iinclude

bin/barquito: obj/Barquitos.o obj/main.o
	g++ -g -o bin/barquito obj/Barquitos.o obj/main.o