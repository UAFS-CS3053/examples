#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(){
	//** Illustrates the relationship between pointers and arrays
	//** and pointer notation/arithmetic and array notation
   int numbers[SIZE]={10,20,30,40,50};
	int index=0;
	int *ptr;
	ptr=&numbers;
	

	for(index=0;index<SIZE;index++){
		printf("[%d]:%x:%d\n",index,&numbers[index],numbers[index]);
	}

	for(index=0;index<SIZE;index++){
		printf("[%d]:%x:%d\n",index,(ptr+index),*(ptr+index));
	}
/*
	printf("&index: %x\n",&index);
	printf("index:  %d\n",index);

	printf("&ptr: %x\n",&ptr);
	printf("ptr:  %x\n",ptr);
	printf("*ptr: %d\n",*ptr);

   *ptr=10;

	printf("&index: %x\n",&index);
	printf("index:  %d\n",index);

	printf("&ptr: %x\n",&ptr);
	printf("ptr:  %x\n",ptr);
	printf("*ptr: %d\n",*ptr);
*/
   return 0;
}
