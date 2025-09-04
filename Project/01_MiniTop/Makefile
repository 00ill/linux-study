CC = gcc
TARGET = MiniTop
OBJS = MiniTop.o

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

MiniTop.o: MiniTop.c
	$(CC) -c MiniTop.c

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean