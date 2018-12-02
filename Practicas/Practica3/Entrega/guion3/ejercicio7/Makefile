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

$(OBJ)/ejercicio7.o: $(SRC)/ejercicio7.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio7.o $(SRC)/ejercicio7.cpp


$(OBJ)/Matriz2D.o: $(SRC)/Matriz2D.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/Matriz2D.o $(SRC)/Matriz2D.cpp


$(LIB)/libformas.a: $(OBJ)/Matriz2D.o
	ar rvs $(LIB)/libformas.a $(OBJ)/Matriz2D.o

$(BIN)/ejercicio7: $(OBJ)/ejercicio7.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio7 $(OBJ)/ejercicio7.o -L$(LIB) -lformas
