#include <stdio.h>

void showArgs(char *argv[]);

int main(int argc, char *argv[]){
	showArgs(argv);
	return 0;
}

void showArgs(char *argv[]){
	int index;

	for(index=0;argv[index]!=NULL;index++){
		printf("%s\n",argv[index]);
	}

}
