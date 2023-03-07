#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000
#define ARGCOUNT 100

int readLine(char *buffer);
void parseCmdLine(char *buffer, char *cmdline, char **args);
void showCmdLine(char *cmdline);

int main(int argc, char *argv[]){
	char buffer[SIZE];
	char cmdline[SIZE];
	char *args[ARGCOUNT];

	int finish=0;

	while(finish!=1){
		printf("myshell> ");
		readLine(buffer);
		parseCmdLine(buffer,cmdline,args);
		showCmdLine(cmdline);
	
		if((strcmp(buffer,"quit"))==0){
			finish=1;
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

void parseCmdLine(char *buffer, char *cmdline, char **args){
	char *bufptr=buffer;
	char *cmdptr=cmdline;
	char *argstart=cmdline;

	//** Tokenize Buffer **
	while(*bufptr!='\0'){
		if(*bufptr==' '){
			*cmdline='\0';
		}else{
			*cmdline=*bufptr;
		}
		bufptr++;
		cmdline++;
	}
	*cmdline='\0';
	cmdline++;
	*cmdline='\n';
}

void showCmdLine(char *cmdline){
	char *ch=cmdline;

	while(*ch!='\n'){
		printf("%d ",*ch);
		ch++;
	}
	printf("%d ",*ch);

}

