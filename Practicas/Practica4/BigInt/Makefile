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

$(OBJ)/ejercicio2.o: $(SRC)/main.cpp $(INC)/BigInt.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio2.o $(SRC)/main.cpp


$(OBJ)/BigInt.o: $(SRC)/BigInt.cpp $(INC)/BigInt.h
	g++ -c -I$(INC) -o $(OBJ)/BigInt.o $(SRC)/BigInt.cpp


$(LIB)/libformas.a: $(OBJ)/BigInt.o
	ar rvs $(LIB)/libformas.a $(OBJ)/BigInt.o

$(BIN)/ejercicio2: $(OBJ)/ejercicio2.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio2 $(OBJ)/ejercicio2.o -L$(LIB) -lformas
