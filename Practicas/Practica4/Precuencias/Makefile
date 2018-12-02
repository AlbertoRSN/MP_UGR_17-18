OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/precuencias

clean: 
	echo "Limpiando archivos objeto y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a

mrpropper: clean
	rm $(BIN)/precuencias


$(OBJ)/Precuencias.o:$(SRC)/Precuencias.cpp $(INC)/Precuencias.h
	g++ -c -o $(OBJ)/Precuencias.o -I$(INC) $(SRC)/Precuencias.cpp

$(OBJ)/Pareja.o:$(SRC)/Pareja.cpp $(INC)/Pareja.h
	g++ -c -o $(OBJ)/Pareja.o -I$(INC) $(SRC)/Pareja.cpp

$(OBJ)/prueba.o: $(SRC)/prueba.cpp $(INC)/Precuencias.h $(INC)/Pareja.h
	g++ -c -o $(OBJ)/prueba.o -I$(INC) $(SRC)/prueba.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/prueba.o $(OBJ)/Precuencias.o $(OBJ)/Pareja.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/prueba.o $(OBJ)/Pareja.o $(OBJ)/Precuencias.o

$(BIN)/precuencias: $(OBJ)/prueba.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/precuencias $(OBJ)/prueba.o -lformas