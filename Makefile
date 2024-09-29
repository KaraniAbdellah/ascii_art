CC = gcc
TARGET = main
SRCS = ascii_art.c main.c


all: clean $(TARGET)


$(TARGET): $(SRCS)
	$(CC) $(SRCS) -o $(TARGET)


clean:
	rm -f $(TARGET)
