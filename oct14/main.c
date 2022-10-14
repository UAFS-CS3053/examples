#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void show();

int numbers[SIZE]={10,20,30,40,50};

int main(){

	show();
   return 0;
}

void show(){
	int index;

	for(index=0;index<SIZE;index++){
		if(index==0){\
			printf("[");
		}else{
			printf(",");
		}
		printf("%d",numbers[index]);
	}
	printf("]\n");
}
