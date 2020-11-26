CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG1 = $(BIN)/petfera

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS1 = $(OBJ)/animal.o $(OBJ)/silvestre.o $(OBJ)/domestico.o $(OBJ)/funcionario.o $(OBJ)/anfibios.o $(OBJ)/aves.o $(OBJ)/mamiferos.o $(OBJ)/repteis.o $(OBJ)/veterinario.o $(OBJ)/tratador.o $(OBJ)/petfera.o $(OBJ)/menu.o $(OBJ)/main.o

all: mkdirs $(PROG1)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJS1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJS1)

$(OBJ)/animal.o: $(SRC)/animal.cpp $(INC)/animal.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $(OBJ)/animal.o

$(OBJ)/anfibios.o: $(SRC)/anfibios.cpp $(INC)/anfibios.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibios.cpp -o $(OBJ)/anfibios.o

$(OBJ)/aves.o: $(SRC)/aves.cpp $(INC)/aves.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/aves.cpp -o $(OBJ)/aves.o

$(OBJ)/mamiferos.o: $(SRC)/mamiferos.cpp $(INC)/mamiferos.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferos.cpp -o $(OBJ)/mamiferos.o

$(OBJ)/repteis.o: $(SRC)/repteis.cpp $(INC)/repteis.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/repteis.cpp -o $(OBJ)/repteis.o

$(OBJ)/silvestre.o: $(SRC)/silvestre.cpp $(INC)/silvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/silvestre.cpp -o $(OBJ)/silvestre.o

$(OBJ)/domestico.o: $(SRC)/domestico.cpp $(INC)/domestico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/domestico.cpp -o $(OBJ)/domestico.o

$(OBJ)/funcionario.o: $(SRC)/funcionario.cpp $(INC)/funcionario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $(OBJ)/funcionario.o

$(OBJ)/tratador.o: $(SRC)/tratador.cpp $(INC)/tratador.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $(OBJ)/tratador.o

$(OBJ)/veterinario.o: $(SRC)/veterinario.cpp $(INC)/veterinario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $(OBJ)/veterinario.o

$(OBJ)/petfera.o: $(SRC)/petfera.cpp $(INC)/petfera.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/petfera.cpp -o $(OBJ)/petfera.o

$(OBJ)/menu.o: $(SRC)/menu.cpp $(INC)/menu.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/menu.cpp -o $(OBJ)/menu.o

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/menu.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*