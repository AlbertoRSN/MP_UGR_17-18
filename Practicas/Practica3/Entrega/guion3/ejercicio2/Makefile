OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio2

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/ejercicio2

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INC)/utilidades.h $(INC)/Valor.h
	g++ -c -o $(OBJ)/ejercicio2.o -I$(INC) $(SRC)/ejercicio2.cpp

$(OBJ)/utilidades.o:$(SRC)/utilidades.cpp $(INC)/utilidades.h $(INC)/Valor.h
	g++ -c -o $(OBJ)/utilidades.o -I$(INC) $(SRC)/utilidades.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio2.o $(OBJ)/utilidades.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio2.o $(OBJ)/utilidades.o

$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o -lformas