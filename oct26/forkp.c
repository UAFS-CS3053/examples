#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <wait.h>

int main(int argc, char *argv[]){
	pid_t pid;
	int status;

	//*** Fork is Called Once, but returns twice (in Parent,in Child) ***
	pid=fork();
	if(pid<0){
		printf("Fork Error: %d\n", errno);
		exit(1);
	}

	if(pid==0){
		//*** Fork() returns 0 to Child Process **
		printf("[%d] Child Process\n",getpid());
		if(argc==2){
			sleep(atoi(argv[1]));
		}
	}else{
		//*** Fork() returns pid of the Child Process **
		wait(&status);
		printf("[%d] Parent Process\n",getpid());
	}
	printf("[%d] Parent and Child Process\n",getpid());
	
   return 0;
}
