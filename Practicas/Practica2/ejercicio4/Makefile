OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio4

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio4

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio4.o -I$(INC) $(SRC)/ejercicio4.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o

$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o -lformas