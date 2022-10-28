#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <wait.h>

int main(int argc, char *argv[]){
	pid_t pid;

	pid=fork();
	if(pid<0){
		printf("Fork Error\n");
		exit(1);
	}

	if(pid==0){
		//** Child Process
	}else{
		//** Parent Process

	}

	return 0;
}
