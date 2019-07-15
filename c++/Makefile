.PHONY: clean all

CC = g++
FLAGS= -Wall -std=c++17
SRC = $(wildcard *.cpp) 
OBJ = $(SRC:.cpp=.o)
BIN = $(SRC:.cpp=)


all: $(BIN)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@ 
%: %.o
	$(CC) $(FLAGS) $< -o $@ 

clean: 
	rm -rf *.o $(BIN)
