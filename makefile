CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG1 = $(BIN)/petfera

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS1 = $(OBJ)/animal.o $(OBJ)/silvestre.o $(OBJ)/funcionario.o $(OBJ)/anfibio.o $(OBJ)/ave.o $(OBJ)/mamifero.o $(OBJ)/reptel.o $(OBJ)/reptelsilvestre.o $(OBJ)/mamiferosilvestre.o $(OBJ)/avesilvestre.o $(OBJ)/anfibiosilvestre.o $(OBJ)/veterinario.o $(OBJ)/tratador.o $(OBJ)/petfera.o $(OBJ)/menu.o $(OBJ)/main.o

all: mkdirs $(PROG1)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJS1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJS1)

$(OBJ)/animal.o: $(SRC)/animal.cpp $(INC)/animal.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $(OBJ)/animal.o

$(OBJ)/anfibio.o: $(SRC)/anfibio.cpp $(INC)/anfibio.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $(OBJ)/anfibio.o

$(OBJ)/ave.o: $(SRC)/ave.cpp $(INC)/ave.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $(OBJ)/ave.o

$(OBJ)/mamifero.o: $(SRC)/mamifero.cpp $(INC)/mamifero.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $(OBJ)/mamifero.o

$(OBJ)/reptel.o: $(SRC)/reptel.cpp $(INC)/reptel.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptel.cpp -o $(OBJ)/reptel.o

$(OBJ)/silvestre.o: $(SRC)/silvestre.cpp $(INC)/silvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/silvestre.cpp -o $(OBJ)/silvestre.o

$(OBJ)/reptelsilvestre.o: $(SRC)/reptelsilvestre.cpp $(INC)/reptelsilvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptelsilvestre.cpp -o $(OBJ)/reptelsilvestre.o

$(OBJ)/mamiferosilvestre.o: $(SRC)/mamiferosilvestre.cpp $(INC)/mamiferosilvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferosilvestre.cpp -o $(OBJ)/mamiferosilvestre.o

$(OBJ)/avesilvestre.o: $(SRC)/avesilvestre.cpp $(INC)/avesilvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/avesilvestre.cpp -o $(OBJ)/avesilvestre.o

$(OBJ)/anfibiosilvestre.o: $(SRC)/anfibiosilvestre.cpp $(INC)/anfibiosilvestre.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibiosilvestre.cpp -o $(OBJ)/anfibiosilvestre.o

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