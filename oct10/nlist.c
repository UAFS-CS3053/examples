#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long int * List;

void *NewList();
void addList(List list, void *item);
void *getItem(List list, int index);

int main(){
	List list = newList();
	int index;

	addItem(list,"First");
	addItem(list,"Second");
	addItem(list,"Third");


	for(index=0;index<3;index++){
		printf("[%d]: %s\n",index,(char *) getItem(list,index));
	}

	return 0;
}

void *NewList(){
	List newList = malloc(10 * sizeof(long int));
	*newList++=10;
	*newlist++=0;
	return newList;
}

void addList(List list, void *item){
	int size = *(list-1);
	*(list+size) = (long int) item;
	(*(list-1))++;

}

void *getItem(List list, int index){
	return (void *) *(list+index);
}

