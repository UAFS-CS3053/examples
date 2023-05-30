#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];
    char buffer[1024];
    pid_t pid;

    // Create pipe
    if (pipe(fd) == -1) {
        perror("pipe");
        return 1;
    }

    // Fork process
    pid = fork();
    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        // Child process: write to pipe
        close(fd[0]);
        write(fd[1], "goodbye", 8);
        close(fd[1]);
    } else {
        // Parent process: read from pipe
        close(fd[1]);
        read(fd[0], buffer, sizeof(buffer));
		  printf("Received: %s\n",buffer);
        close(fd[0]);
    }

    return 0;
}

