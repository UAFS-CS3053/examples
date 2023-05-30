#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    char* pipe_name = "mypipe";
    char buffer[1024];
    int fd;

    // Create named pipe
    if (mkfifo(pipe_name, 0666) == -1) {
        perror("mkfifo");
        return 1;
    }

    // Open pipe for reading
    fd = open(pipe_name, O_RDONLY);
    read(fd, buffer, sizeof(buffer));
    printf("Received message: %s\n", buffer);
    close(fd);

    // Remove pipe from file system
    unlink(pipe_name);

    return 0;
}

