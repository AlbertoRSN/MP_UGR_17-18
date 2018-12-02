OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/ejercicio4

clean: 
	echo "Limpiando archivos objetos y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a
	rm $(BIN)/ejercicio4

mrpropper: clean
	rm $(BIN)/ejercicio4


$(OBJ)/Lista.o:$(SRC)/Lista.cpp $(INC)/Lista.h
	g++ -c -o $(OBJ)/Lista.o -I$(INC) $(SRC)/Lista.cpp

$(OBJ)/Celda.o:$(SRC)/Celda.cpp $(INC)/Celda.h
	g++ -c -o $(OBJ)/Celda.o -I$(INC) $(SRC)/Celda.cpp

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INC)/Celda.h $(INC)/Lista.h
	g++ -c -o $(OBJ)/ejercicio4.o -I$(INC) $(SRC)/ejercicio4.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio4.o $(OBJ)/Lista.o $(OBJ)/Celda.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio4.o $(OBJ)/Celda.o $(OBJ)/Lista.o

$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o -lformas