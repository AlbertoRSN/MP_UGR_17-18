OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio7

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio7

$(OBJ)/ejercicio7.o: $(SRC)/ejercicio7.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio7.o -I$(INC) $(SRC)/ejercicio7.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio7.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio7.o $(OBJ)/utilidades.o

$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio7 $(OBJ)/ejercicio7.o -lformas