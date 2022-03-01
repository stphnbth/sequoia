IDIR = ../include
OBJDIR = ../obj/

CC = gcc
CFLAGS = -g -I$(IDIR)

SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)

all:	$(OBJS)

%.o: %.c
	$(CC) -c -o $(OBJDIR)$@ $< $(CFLAGS)

clean:
	rm -f $(OBJS)

.PHONY:	all clean
