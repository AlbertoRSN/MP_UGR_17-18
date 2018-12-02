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

$(OBJ)/ejercicio6.o: $(SRC)/ejercicio6.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/ejercicio6.o $(SRC)/ejercicio6.cpp


$(OBJ)/Matriz2D.o: $(SRC)/Matriz2D.cpp $(INC)/Matriz2D.h
	g++ -c -I$(INC) -o $(OBJ)/Matriz2D.o $(SRC)/Matriz2D.cpp


$(LIB)/libformas.a: $(OBJ)/Matriz2D.o
	ar rvs $(LIB)/libformas.a $(OBJ)/Matriz2D.o

$(BIN)/ejercicio6: $(OBJ)/ejercicio6.o $(LIB)/libformas.a
	g++ -o $(BIN)/ejercicio6 $(OBJ)/ejercicio6.o -L$(LIB) -lformas
