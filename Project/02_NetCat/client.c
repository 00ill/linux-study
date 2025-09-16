#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>

int main(int argc, char *argv[])
{
    int client = socket(AF_INET, SOCK_STREAM, 0); //Select the default protocol (TCP)
    if(client == -1)
    {
        perror("Failed to create client socket");
        return -1;
    }
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET; //IPv4
    server_addr.sin_port = htons(8080); //Port number, converted to network byte
    server_addr.sin_addr.s_addr = INADDR_ANY; //Accept connections from any IP address
    if(connect(client, (struct sockaddr*)&(server_addr), sizeof(server_addr)) == -1)
    {
        perror("Failed to connect to server");
        return -1;
    }
    send(client, argv[1], 13, 0);

    return 0;
}