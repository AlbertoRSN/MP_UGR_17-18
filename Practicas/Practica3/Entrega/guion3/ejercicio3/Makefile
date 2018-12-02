OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio3

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio3

$(OBJ)/ejercicio3.o: $(SRC)/ejercicio3.cpp $(INC)/utilidades.h 
	g++ -c -o $(OBJ)/ejercicio3.o -I$(INC) $(SRC)/ejercicio3.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h 
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio3.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio3.o $(OBJ)/utilidades.o

$(BIN)/ejercicio3: $(OBJ)/ejercicio3.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio3 $(OBJ)/ejercicio3.o -lformas