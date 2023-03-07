#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct string{
	int size;
	char *array;
};

typedef struct string *String;

struct string *newString(char *str);
void printString(struct string *str);
void deleteString(struct string *str);

int main(){
	String str;

	str=newString("Hello");
	printString(str);
	deleteString(str);
}

struct string *newString(char *str){
	struct string *newStr = malloc(sizeof(struct string));
	newStr->array = malloc(1000);
	strcpy(newStr->array,str);
	newStr->size=strlen(str);
	return newStr;
}

void deleteString(struct string *str){
	free(str->array);
	free(str);
}

void printString(struct string *str){
	int index;

	printf("[%p] Size:  %d\n",&str->size,str->size);
	printf("[%p] Array: %p\n",&str->array,str->array);
	printf("---------------------------------\n");
	for(index=0;index<str->size;index++){
		printf("[%p] Array[%d]: %c\n",&str->array[index],index,str->array[index]);
	}

}






