#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define ALLOCATED(l) (*(l-2))
#define SIZE *(list-1)
typedef long int * List;

void *NewList();
void addList(List list,void *item);
void *getItem(List list, int index);

int main(){
	List list;
	List list2;
	int index;

	list=NewList();
	addList(list,"First");
	addList(list,"Second");
	addList(list,"Third");
	addList(list,"Fourth");

	printf("Allocated: %ld   Size:  %ld\n",ALLOCATED(list),SIZE);
	for(index=0;index<4;index++){
		printf("[%d]: %s\n",index,(char *)getItem(list,index));
	}

	return 0;
}

void *NewList(){
	List newList = malloc(10 * sizeof(long int));
	ALLOCATED(newList)=10;
	*newList++=0;
	return newList;
}

void addList(List list,void *item){
	int size = *(list-1);
	*(list+size) = (long int) item;
	(*(list-1))++;
}

void *getItem(List list, int index){
	return (void *) *(list+index);
}
