#include <stdio.h>

#define SIZE 5

int sum(int *array, int size);
void show(int *array, int size);

int main(){
	int numbers[SIZE]={10,20,30,40,50};
	int total;

	int (*sumptr)(int *, int)=&sum;
	void (*showptr)(int *, int)=&show;

	(*showptr)(numbers,SIZE);
	total=(*sumptr)(numbers,SIZE);

	return 0;
}


int sum(int *array, int size){
   /*********************************
    * Sum the Contents of the Array *
    *********************************/
   int sum=0;
   int index;

   for(index=0;index<size;index++){
      sum =sum + array[index];
   }
   return sum;
}

void show(int *array, int size){
   /*******************************
    * Show Array Contents         *
    *******************************/
   int index;

   for(index=0;index<size;index++){
      if(index==0){
         printf("[");
      }else{
	 printf(",");
      }
      printf("%d",array[index]);
   }
   printf("]\n");
}
