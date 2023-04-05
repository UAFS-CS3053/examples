#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void handler(int num);

int main(int argc, char *argv[]){
	pid_t pid;
	int wstatus;
	char *args[]={"/usr/bin/ls","-l",NULL};

	pid=fork();

	signal(SIGINT,handler);
	if(pid==0){
		//*** Child Process ****
		sleep(atoi(argv[1]));
		execv(args[0],args);
		printf("ppid[%d] - pid[%d]: Child Process\n",getppid(),getpid());
	}else{
		//*** Parent Process *****
		//sleep(atoi(argv[2]));
		printf("ppid[%d] - pid[%d]: Parent Process\n",getppid(),getpid());
		//waitpid(pid,&wstatus,WNOHANG);
		printf("Parent Exiting\n");
	}


	return 0;
}


void handler(int num){
	write(STDOUT_FILENO,"Not Stopping\n",13);
}
