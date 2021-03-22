CC = gcc
FLAGS = -g -Wall 
SOURCES = task1.c 1.c 
OBJECTS = $(SOURCES:.c=.o)
TARGET = coins

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(SOURCES) -lm -o $(TARGET)

clean:
	rm $(TARGET).exe $(OBJECTS)