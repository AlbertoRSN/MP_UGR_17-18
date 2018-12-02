OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio8

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio1

$(OBJ)/estimadorDistancia.o: $(SRC)/estimadorDistancia.cpp $(INC)/estimadorDistancia.h
	g++ -c -o $(OBJ)/ejercicio1.o -I$(INC) $(SRC)/ejercicio1.cpp

$(OBJ)/ejercicio8.o : $(SRC)/ejercicio8.cpp $(INC)/estimadorDistancia.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(BIN)/ejercicio8: $(OBJ)/ejercicio8.o $(OBJ)/estimadorDistancia.o
	g++ -o $(BIN)/ejercicio8 $(OBJ)/ejercicio8.o $(OBJ)/estimadorDistancia.o 