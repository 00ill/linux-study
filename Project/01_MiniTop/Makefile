CC = gcc
TARGET = MiniTop
OBJS = main.o cpu_usage.o memory_usage.o process_list.o
CFLAGS = -lncurses

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

cpu_usage.o: cpu_usage.h cpu_usage.c
	$(CC) -c cpu_usage.c
memory_usage.o: memory_usage.h memory_usage.c
	$(CC) -c memory_usage.c
process_list.o: process_list.h process_list.c
	$(CC) -c process_list.c
display.o: display.h display.c
	$(CC) $(CFLAGS) -c display.c

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
