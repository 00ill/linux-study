CC = gcc
TARGET = Server Client
OBJS_SERVER = server.o
OBJS_CLIENT = client.o

all: $(TARGET)

Server: $(OBJS_SERVER)
	$(CC) -o Server $(OBJS_SERVER)
Client: $(OBJS_CLIENT)
	$(CC) -o Client $(OBJS_CLIENT)

server.o: server.c
	$(CC) -c server.c

client.o: client.c
	$(CC) -c client.c

clean: 
	rm -f $(TARGET) $(OBJS_SERVER) $(OBJS_CLIENT)

.PHONY: all clean