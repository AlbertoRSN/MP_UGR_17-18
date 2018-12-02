OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio6

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio6

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio6.o -I$(INC) $(SRC)/ejercicio6.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio6.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio6.o $(OBJ)/utilidades.o

$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o -lformas