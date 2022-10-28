#include "show.h"

extern int numbers[];

void show(){
	int index;
	static int val=0;

	for(index=0;index<SIZE;index++){
		if(index==0){\
			printf("[");
		}else{
			printf(",");
		}
		printf("%d",numbers[index]);
	}
	printf("]\n");

	printf("val: %d\n",val);
	val++;
}
