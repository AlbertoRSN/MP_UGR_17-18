OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio5

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio5

$(OBJ)/ejercicio5.o: $(SRC)/ejercicio5.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio5.o -I$(INC) $(SRC)/ejercicio5.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio5.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio5.o $(OBJ)/utilidades.o

$(BIN)/ejercicio5: $(OBJ)/ejercicio5.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o -lformas