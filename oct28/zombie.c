#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <wait.h>

#define CHILDPROCESSES 5

pid_t Fork(void);

int main(int argc, char *argv[]){
	pid_t pid;
	int status;
	int index;

	for(index=0;index<CHILDPROCESSES;index++){
		pid=Fork();
		if(pid==0){
			printf("[%d:%d] Child Started\n",index,getpid());
			sleep(10);
			printf("[%d:%d] Child Finished\n",index,getpid());
			exit(100+index);
		}
	}
	while((pid=waitpid(-1,&status,0)) > 0){
		if(WIFEXITED(status)){
			printf("[%d] Child Terminated with Exit Status[%d]\n",pid,WEXITSTATUS(status));
		}

	}
   return 0;
}

pid_t Fork(void){
	//*** Fork is Called Once, but returns twice (in Parent,in Child) ***
	//** Parent: Returns PID of Child
	//** Child: Returns PID of 0
	pid_t pid;

	pid=fork();
	if(pid<0){
		fprintf(stderr,"[%d]Fork Error:\n", errno);
		exit(1);
	}
	return pid;
}
