#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>

int main(void)
{
    int server;
    server = socket(AF_INET, SOCK_STREAM, 0); //Select the default protocol (TCP)
    if(server == -1)
    {
        perror("Failed to create server socket");
        return 0;
    }
    printf("Server FD : %d\n", server);
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET; //IPv4
    server_addr.sin_port = htons(8080); //Port number, converted to network byte
    server_addr.sin_addr.s_addr = INADDR_ANY; //Accept connections from any IP address
    
    bind(server, (struct sockaddr*)&(server_addr), sizeof(server_addr));
    listen(server, 5); //Maximum number of queued connections is 5
    int accect_fd;
    accect_fd = accept(server, NULL, NULL);
    if(accect_fd == -1)
    {
        perror("Failed to accept connection");
        return 0;
    }
    else
    {
        printf("Connection accepted, FD : %d\n", accect_fd);
    }
    
    return 0;
}