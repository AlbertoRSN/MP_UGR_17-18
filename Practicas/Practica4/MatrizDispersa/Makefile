OBJ=obj
BIN=bin
LIB=lib
SRC=src
INC=include

all: $(BIN)/matrizdispersa

clean: 
	echo "Limpiando archivos objetos y biblioteca...."
	rm $(OBJ)/*.o $(LIB)/*.a
	rm $(BIN)/matrizdispersa

mrpropper: clean
	rm $(BIN)/matrizdispersa


$(OBJ)/MatrizDispersa.o:$(SRC)/MatrizDispersa.cpp $(INC)/MatrizDispersa.h
	g++ -g -c -o $(OBJ)/MatrizDispersa.o -I$(INC) $(SRC)/MatrizDispersa.cpp

$(OBJ)/Valor.o:$(SRC)/Valor.cpp $(INC)/Valor.h
	g++ -g -c -o $(OBJ)/Valor.o -I$(INC) $(SRC)/Valor.cpp


$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/Valor.h $(INC)/MatrizDispersa.h
	g++ -g -c -o $(OBJ)/main.o -I$(INC) $(SRC)/main.cpp

$(LIB)/$(LIB)formas.a: $(OBJ)/main.o $(OBJ)/MatrizDispersa.o $(OBJ)/Valor.o
	ar rsv $(LIB)/$(LIB)formas.a $(OBJ)/main.o $(OBJ)/Valor.o $(OBJ)/MatrizDispersa.o

$(BIN)/matrizdispersa: $(OBJ)/main.o $(LIB)/$(LIB)formas.a
	g++ -L$(LIB)/ -o $(BIN)/matrizdispersa $(OBJ)/main.o -lformas