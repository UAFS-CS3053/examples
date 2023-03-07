#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
	pid_t pid;

	pid=fork();
	if(pid==0){
		printf("[%d] -> Child Process\n",getpid());
	}else{
		printf("[%d] -> Parent Process\n",getpid());
		sleep(2);
	}
	return 0;
}
