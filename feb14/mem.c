#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	int *numbers;
	int index;

	numbers = malloc(10 * sizeof(int));
	if(numbers==NULL){
		printf("Memory Allocation Error\n");
		exit(1);
	}

	for(index=0;index<10;index++){
		numbers[index]=random()%10;
	}

	for(index=0;index<10;index++){
		printf("[%d]: %d\n",index,numbers[index]);
	}

	free(numbers);
	return 0;
}
