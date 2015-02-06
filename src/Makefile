CXX     = g++
CC      = gcc
CFLAGS  = -O2 -Wall -g -I../include/
CXXFLAGS= -O2 -Wall -g -I../include/
TARGET  = main
OBJECTS = trans_fitting.o main.o                

default: halo
all: halo

halo: $(OBJECTS)
	$(CXX)  $(OBJECTS) -o ../halo

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $*.cpp

%.o: %.c
	$(CC) $(CFLAGS) -c $*.c

clean:
	rm -f *.o ../halo
