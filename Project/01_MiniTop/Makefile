CC = gcc
TARGET = MiniTop
OBJS = main.o cpu_usage.o memory_usage.o process_list.o

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) -c main.c

cpu_usage.o: cpu_usage.h cpu_usage.c
	$(CC) -c cpu_usage.c
memory_usage.o: memory_usage.h memory_usage.c
	$(CC) -c memory_usage.c
process_list.o: process_list.h process_list.c
	$(CC) -c process_list.c
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
