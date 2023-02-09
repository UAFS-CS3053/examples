#include <stdio.h>
#include <string.h>

#define SIZE 25

struct student{
	int id;
	char first[SIZE];
	char last[SIZE];
};

typedef struct student Student;


int main(){
	Student student1;
	Student *studptr;
	studptr=&student1;

	student1.id=123;
	strcpy(student1.first,"Joe");
	strcpy(student1.last,"Smith");

	printf("%d - %s - %s\n",student1.id,student1.first,student1.last);
	printf("%d - %s - %s\n",studptr->id,studptr->first,studptr->last);

	return 0;
}
