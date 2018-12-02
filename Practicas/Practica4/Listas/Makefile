OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/listas

clean: 
	echo "Limpiando archivos objetos y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a
	rm $(BIN)/listas

mrpropper: clean
	rm $(BIN)/listad


$(OBJ)/Lista.o:$(SRC)/Lista.cpp $(INC)/Lista.h
	g++ -g -c -o $(OBJ)/Lista.o -I$(INC) $(SRC)/Lista.cpp

$(OBJ)/Celda.o:$(SRC)/Celda.cpp $(INC)/Celda.h
	g++ -g -c -o $(OBJ)/Celda.o -I$(INC) $(SRC)/Celda.cpp

$(OBJ)/listas.o: $(SRC)/main.cpp $(INC)/Celda.h $(INC)/Lista.h
	g++ -g -c -o $(OBJ)/listas.o -I$(INC) $(SRC)/main.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/listas.o $(OBJ)/Lista.o $(OBJ)/Celda.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/listas.o $(OBJ)/Celda.o $(OBJ)/Lista.o

$(BIN)/listas: $(OBJ)/listas.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/listas $(OBJ)/listas.o -lformas