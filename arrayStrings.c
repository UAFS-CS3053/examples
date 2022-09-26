#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRSIZE 100
#define ARRAYSIZE 5

char *newStr(char *string);
void printArray(char **array,int size);

int main(int argc, char *argv[]){
	char *strings[ARRAYSIZE];

	strings[0]=newStr("Luke Skywalker");
	strings[1]=newStr("Bill Clinton");
	strings[2]=newStr("Elon Musk");
	strings[3]=newStr("Abraham Lincoln");
	strings[4]=newStr("Peyton Manning");

	printArray(strings,ARRAYSIZE);

	return 0;
}

char *newStr(char *string){
	char *newStr = malloc(STRSIZE * sizeof(char));
	strcpy(newStr,string);
	return newStr;
}

void printArray(char **ptr,int size){

	printf("Array of String Pointers | Address of String | String     | 1st Character in String\n");
	printf("-----------------------------------------------------------------------------------\n");
	
}

