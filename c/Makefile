CC=gcc
FLAGS= -Wall -std=c11
SRC=$(wildcard *.c)
OUTPUT=$(SRC:.c=)

.PHONY: all clean

all: $(OUTPUT)

%: %.c
	$(CC) $(FLAGS) -o $@ $<  
clean:
	rm -rf $(OUTPUT)
