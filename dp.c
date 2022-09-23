#include <stdio.h>
#include <stdlib.h>

int main(){
	//** A simple example of double pointers **
	char ch='A';
	char *ptr=&ch;
	char **dptr=&ptr;

	printf("ch     | %p : %c\n",&ch,ch);
	printf("*ptr   | %p: %p : %c\n",&ptr,ptr,*ptr);
	printf("**dptr | %p : %p : %p : %c\n",&dptr,dptr,*dptr,**dptr);


}
