CC = gcc

TARGET = explode

OBJS = lab1.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

lab1.o: lab1.c lab1.h
	$(CC) -c lab1.c

main.o: main.c lab1.h
	$(CC) -c main.c

clean:
	rm -f $(TARGET) $(OBJS)
