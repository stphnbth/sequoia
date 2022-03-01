IDIR = ./include
DDIR = ./obj
SDIR = ./src

CC = gcc
CFLAGS = -g -I$(IDIR)

DEPS = linked.o
OBJ = main.o

all:	deps main

deps:
	cd $(SDIR) && make

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ) $(DDIR)/$(DEPS)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f main $(OBJ)
	rm -f $(DDIR)/*

.PHONY: deps main clean
