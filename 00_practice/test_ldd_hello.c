#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <string.h>

// ldd_hello.c 드라이버에 정의된 ioctl 명령어들을 그대로 가져와야 합니다.
#define HELLO_MAGIC 'k'
#define HELLO_IOCTL_RESET    _IO(HELLO_MAGIC, 1)
#define HELLO_IOCTL_SET_MSG  _IOW(HELLO_MAGIC, 2, char *)
#define HELLO_IOCTL_GET_MSG  _IOR(HELLO_MAGIC, 3, char *)

#define MAX_IOCTL_MSG_SIZE 128
#define DEVICE_PATH "/dev/hello"

int main() {
    int fd;
    char buffer[MAX_IOCTL_MSG_SIZE];
    char *msg_to_kernel = "This is a message from user space!";

    // 1. 디바이스 파일 열기
    printf("Opening device: %s\n", DEVICE_PATH);
    fd = open(DEVICE_PATH, O_RDWR);
    if (fd < 0) {
        perror("Failed to open the device");
        return -1;
    }

    // 2. SET_MSG ioctl 호출하여 커널에 메시지 보내기
    printf("\nTesting SET_MSG: Sending message to kernel...\n");
    if (ioctl(fd, HELLO_IOCTL_SET_MSG, msg_to_kernel) < 0) {
        perror("ioctl(SET_MSG) failed");
        close(fd);
        return -1;
    }
    printf("Message sent successfully.\n");

    // 3. GET_MSG ioctl 호출하여 커널로부터 메시지 받기
    printf("\nTesting GET_MSG: Reading message from kernel...\n");
    memset(buffer, 0, MAX_IOCTL_MSG_SIZE);
    if (ioctl(fd, HELLO_IOCTL_GET_MSG, buffer) < 0) {
        perror("ioctl(GET_MSG) failed");
        close(fd);
        return -1;
    }
    printf("Message from kernel: \"%s\"\n", buffer);

    // 4. RESET ioctl 호출하기
    printf("\nTesting RESET...\n");
    if (ioctl(fd, HELLO_IOCTL_RESET) < 0) {
        perror("ioctl(RESET) failed");
        close(fd);
        return -1;
    }
    printf("RESET command sent successfully.\n");

    // 5. 디바이스 파일 닫기
    printf("\nClosing device.\n");
    close(fd);

    return 0;
}
