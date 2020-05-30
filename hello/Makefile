
#Reference https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

OUTPUT=executable

IDIR=./include
ODIR=./obj
LDIR=./lib
SDIR=./src

CC=g++
CFLAGS=-I$(IDIR)
LIBS=-lm

_DEPS= main.h
DEPS= $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ= main.o
OBJ= $(patsubst %,$(ODIR)/%,$(_OBJ))

_SRC= main.cpp
SRC= $(patsubst %,$(SDIR)/%,$(_SRC))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -o $(OUTPUT) $^ $(CFLAGS) $(LIBS)

.PHONY: clean
clean:
	rm -f ./executable $(ODIR)/*.o *~ core $(INCDIR)/*~
