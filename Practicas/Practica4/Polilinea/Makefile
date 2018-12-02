all: bin/polilinea 

bin/polilinea: obj/prueba.o obj/polilinea.o 
	g++ -g -o bin/polilinea obj/prueba.o obj/polilinea.o 

obj/polilinea.o: src/polilinea.cpp include/polilinea.h include/punto.h
	g++ -g -c -o obj/polilinea.o src/polilinea.cpp -Iinclude

obj/prueba.o: src/prueba.cpp include/polilinea.h include/punto.h
	g++ -g -c -o obj/prueba.o src/prueba.cpp -Iinclude

