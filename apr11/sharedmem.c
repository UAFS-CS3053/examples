#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/mman.h>


int main(){
	int var=10;
	int status;
	pid_t pid;

	int *sharedmem = mmap(NULL,4096, PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS, -1, 0);

	*sharedmem=30;
	pid=fork();

	if(pid==0){
		var=20;
		*sharedmem=40;
	}else{
		wait(&status);
	}
	printf("pid[%d]: Variable =  %d\n",getpid(),var);
	printf("pid[%d]: sharedmem = %d\n",getpid(),*sharedmem);
   munmap(sharedmem,4096);

}
