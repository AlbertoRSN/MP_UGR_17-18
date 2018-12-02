OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio1

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio1

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio1.o -I$(INC) $(SRC)/ejercicio1.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio1.o $(OBJ)/utilidades.o

$(BIN)/ejercicio1: $(OBJ)/ejercicio1.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio1 $(OBJ)/ejercicio1.o -lformas