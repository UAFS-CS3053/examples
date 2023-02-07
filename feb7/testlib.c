#include <stdio.h>
#include "mylib.h"

#define SIZE 10

int main(){
	int numbers[SIZE]={10,33,45,67,87,56,78,98,45,34};
	char str[]="Hello";

	showArray(numbers,SIZE);
	printf("Size of String: %s -> %d\n",str,Strlen(str));
	return 0;
}
