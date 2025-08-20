#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void sig_handler(int signo)
{
    if (signo == SIGINT)
    {
        printf("[PID %d] SIGINT 받아서 종료!\n", getpid());
    }
    else if (signo == SIGTERM)
    {
        printf("[PID %d] SIGTERM 받아서 종료!\n", getpid());
    }
    exit(0);
}

int main()
{
    int fd[2];
    if (pipe(fd) == -1)
    {
        perror("pipe failed");
        exit(1);
    }

    // 시그널 핸들러 등록
    signal(SIGINT, sig_handler);
    signal(SIGTERM, sig_handler);

    pid_t pid = fork();

    if (pid == 0)
    { // 자식 프로세스
        close(fd[0]); // 읽기 닫기
        char msg[] = "Hello from child!";
        write(fd[1], msg, strlen(msg) + 1); // 문자열 끝에 \0 포함
        close(fd[1]); // 쓰기 닫기
        pause();      // 시그널 받을 때까지 대기
    }
    else if (pid > 0)
    { // 부모 프로세스
        close(fd[1]); // 쓰기 닫기
        char buf[100];
        read(fd[0], buf, sizeof(buf));
        printf("부모가 받은 메시지: %s\n", buf);
        close(fd[0]); // 읽기 닫기
        pause();      // 시그널 받을 때까지 대기
    }
    else
    {
        perror("fork failed!");
        exit(1);
    }

    return 0;
}
