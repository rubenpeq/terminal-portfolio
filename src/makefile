# makefile for terminal-portfolio project

CC=gcc  #compiler
TARGET=terminal-portfolio #target file name

all:	terminal.o text_to_ASCII.o
	$(CC) terminal.c text_to_ASCII.c -o $(TARGET) -Wall

terminal:
	$(CC) terminal.c -o terminal.o

text_to_ASCII:
	$(CC) text_to_ASCII.c -o text_to_ASCII.o
 
clean:
	rm *.o $(TARGET)