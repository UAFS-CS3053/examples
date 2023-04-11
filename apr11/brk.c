#include <stdio.h>
#include <stdlib.h>


int main(){
	int index;
	char *memory;

	for(index=0;index<5;index++){
		memory = malloc(4096);
		if(malloc==NULL){
			exit(1);
		}

		printf("brk: %p\n",memory);

	}


	return 0;
}
