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


$(OBJ)/Lista.o:$(SRC)/Lista.cpp $(INC)/Lista.h
	g++ -c -o $(OBJ)/Lista.o -I$(INC) $(SRC)/Lista.cpp

$(OBJ)/Celda.o:$(SRC)/Celda.cpp $(INC)/Celda.h
	g++ -c -o $(OBJ)/Celda.o -I$(INC) $(SRC)/Celda.cpp

$(OBJ)/ejercicio5.o: $(SRC)/ejercicio5.cpp $(INC)/Celda.h $(INC)/Lista.h
	g++ -c -o $(OBJ)/ejercicio5.o -I$(INC) $(SRC)/ejercicio5.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/ejercicio5.o $(OBJ)/Lista.o $(OBJ)/Celda.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/ejercicio5.o $(OBJ)/Celda.o $(OBJ)/Lista.o

$(BIN)/ejercicio5: $(OBJ)/ejercicio5.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o -lformas