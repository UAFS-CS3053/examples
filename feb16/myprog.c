#include <stdio.h>
#include "mylib.h"

#define SIZE 5

int main(){
   int array[]={10,20,30,40,50};
   int total;

   total=sum(array,SIZE);
   show(array,SIZE);
   printf("Total: %d\n",total);
   return 0;
}
