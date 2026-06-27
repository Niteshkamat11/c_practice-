# GtkBuilder *builder = gtk_builder_new_from_file("ui/calculator.ui"); idention must be tab not spaces 
CC = gcc # compiler 
CFLAGS = -Wall -Iinclude `pkg-config --cflags gtk4`
LIBS = `pkg-config --libs gtk4` -lm
SRC = student.c main.c #all source file
OUT = student

all:
	$(CC)  $(CFLAGS) $(SRC) -o $(OUT)
clean:
	rm -f $(OUT)

