#!/bin/bash

gcc -c src/trans_fitting.c  -o trans_fitting.o 
g++ -c src/main.cpp -o main.o
g++ -o trans_test main.o trans_fitting.o
rm *.o
