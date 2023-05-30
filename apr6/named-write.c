#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    char* pipe_name = "mypipe";
    char* message = "Hello, named pipe!";
    int fd;

    // Open pipe for writing
    fd = open(pipe_name, O_WRONLY);
    write(fd, message, strlen(message) + 1);
    close(fd);

    return 0;
}

