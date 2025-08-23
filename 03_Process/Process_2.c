//Practice
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void SigHandler(int signal)
{
    if(signal == SIGTERM)
    {
        printf("PID[%d] is killed 15", getpid());
    }
    else if(signal == SIGINT)
    {
        printf("PID[%d] is killed by 2", getpid());
    }
}

int main(void)
{
    int fd[2];  // child : write, parent : read
    int fd2[2]; // child : read, parent : write

    if (pipe(fd) == -1 || pipe(fd2) == -1)
    {
        perror("pipe failed");
        exit(1);
    }

    pid_t pid = fork();
    signal(SIGINT, SigHandler);
    signal(SIGTERM, SigHandler);
    if (pid == 0)
    {
        close(fd[0]); // close read
        char msg[] = "Child Send";
        write(fd[1], msg, strlen(msg)+1);
        printf("Child Write\n");
        close(fd[1]);
        
        close(fd2[1]); // close write
        char buffer[100];
        read(fd2[0], buffer, sizeof(buffer));
        printf("Chide Read : %s\n", buffer);
        printf("Child Read Command\n");
        close(fd2[0]);
        pause();
    }
    else if (pid > 0)
    {
        close(fd[1]); // close write
        char buffer[100];
        read(fd[0], buffer, sizeof(buffer));
        printf("Parent Read : %s\n", buffer);
        printf("Parent Read Command\n");
        close(fd[0]);
        
        close(fd2[0]); // close read
        char msg[] = "Parent Send";
        write(fd2[1], msg, strlen(msg)+1);
        printf("Parent Write\n");
        close(fd2[1]);
        pause();
    }
    else
    {
        perror("fork failed");
    }
}
