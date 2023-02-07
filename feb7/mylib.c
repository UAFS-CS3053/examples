#include <stdio.h>

void showArray(int array[], int size){
	int index;

	printf("[");
	for(index=0;index<size;index++){
		if(index!=0){
			printf(",");
		}
		printf("%d",*(array+index));
	}
	printf("]\n");

}

int Strlen(char *str){

}
