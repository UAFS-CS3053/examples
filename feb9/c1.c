#include <stdio.h>

int main(int argc, char *argv[]){
	int index;

	for(index=0;index<argc;index++){
		printf("%s\n",argv[index]);
	}
	return 0;
}

