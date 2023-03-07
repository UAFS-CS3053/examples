#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define SIZE 1000

int readLine(char *buffer);

int main(int argc, char *argv[]){
	char buffer[SIZE];
	pid_t pid;
	int wstatus;

	int finish=0;

	while(finish!=1){
		printf("myshell> ");
		readLine(buffer);

		if(strlen(buffer)>0){
			if((strcmp(buffer,"quit"))==0){
				finish=1;
			}else{
				pid=fork();
				if(pid==0){
					execv(buffer,argv);
				}else{
				//	wait(&wstatus);
				}
			}
		}

	}

	return 0;
}

int readLine(char *buffer){
	int ch;

	ch=getchar();
	while(ch!='\n' && ch!=EOF){
		*buffer=ch;
		buffer++;
		ch=getchar();
	}
	*buffer='\0';
	return ch;
}
