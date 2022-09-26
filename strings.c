#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char *newStr(char *str);

int main(int argc, char *argv[]){
	char *str;
	int index;

	str=newStr("Hello");

	for(index=0;str[index]!='\0';index++){
		printf("%c\n",str[index]);
	}
	return 0;
}

char *newStr(char *str){
	char *nStr = malloc(SIZE);
	strcpy(nStr,str);
	return nStr;
}

