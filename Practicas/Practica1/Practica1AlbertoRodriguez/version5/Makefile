//Se ejecuta en el terminal, en este caso, con "make -f Makefile" y me crea directamente central,
//creando los archivos .o, .a necesarios. 

#fichero miMakefile

INCLUDE = ./include
SRC = ./src
OBJ = ./obj
LIB = ./lib
BIN = ./bin

all: $(BIN)/central

$(OBJ)/punto.o: $(SRC)/punto.cpp $(INCLUDE)/punto.h
	g++ -c $(SRC)/punto.cpp -o $(OBJ)/punto.o -I$(INCLUDE)/

$(OBJ)/circulo.o: $(SRC)/circulo.cpp $(INCLUDE)/circulo.h $(INCLUDE)/punto.h
	g++ -c $(SRC)/circulo.cpp -o $(OBJ)/circulo.o -I$(INCLUDE)/

$(OBJ)/central.o: $(INCLUDE)/punto.h $(INCLUDE)/circulo.h $(SRC)/central.cpp
	g++ -c $(SRC)/central.cpp -o $(OBJ)/central.o -I$(INCLUDE)/

$(LIB)/libformas.a: $(OBJ)/punto.o $(OBJ)/circulo.o
	ar rsv $(LIB)/libformas.a $(OBJ)/punto.o $(OBJ)/circulo.o

$(BIN)/central : $(OBJ)/central.o $(LIB)/libformas.a
	g++ -o $(BIN)/central $(OBJ)/central.o -L$(LIB)/ -lformas
