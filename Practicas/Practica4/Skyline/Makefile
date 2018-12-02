
all: bin/skyline 

obj/Skyline.o: src/Skyline.cpp include/Skyline.h
	g++ -g -c -o obj/Skyline.o src/Skyline.cpp -Iinclude #-g para que incluye depuracion

obj/main.o: src/main.cpp include/Skyline.h
	g++ -g -c -o obj/main.o src/main.cpp -Iinclude

bin/skyline: obj/Skyline.o obj/main.o
	g++ -g -o bin/skyline obj/Skyline.o obj/main.o