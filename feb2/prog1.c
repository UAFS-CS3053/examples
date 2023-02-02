#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

//* Function Prototypes
void increment(int val);
void incrementByRef(int *val);

int main(void){
   int value=5;
	int *ptr;
	ptr=&value;

   *ptr=22;
	printf("Value: %p --> %d\n",&value,value);
	printf("Value: %p:%p --> %d\n",&ptr,ptr,*ptr);

	increment(value);
	printf("Value: %p --> %d\n",&value,value);
	
	incrementByRef(&value);
	printf("Value: %p --> %d\n",&value,value);
	
	
   return 0;
}

void increment(int val){
	val++;
}

void incrementByRef(int *val){
	(*val)++;
}
