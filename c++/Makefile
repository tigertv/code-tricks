.PHONY: clean all

CC = g++
FLAGS= -Wall -std=c++17
SRC = $(wildcard *.cpp) 
OBJ = $(SRC:.cpp=.out)

all: $(OBJ)

%.out: %.cpp
	$(CC) $(FLAGS) $< -o $@ 
clean: 
	rm -rf *.o $(OBJ)
