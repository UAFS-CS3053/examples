#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	pid_t pid;
	int wstatus;
	char *args[]={"/usr/bin/ls","-l",NULL};

	pid=fork();

	if(pid==0){
		//** Child
		execv(args[0],args);
		sleep(atoi(argv[1]));
		printf("ppid[%d] - pid[%d] Child Process\n",getppid(),getpid());
	}else{
		//** Parent
		waitpid(pid,&wstatus,0);
		sleep(atoi(argv[2]));
		printf("ppid[%d] - pid[%d] Parent Process\n",getppid(),getpid());

	}

	return 0;
}
