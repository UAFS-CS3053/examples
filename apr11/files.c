#include <stdio.h>

int main(){
	int index;
	int ch;
	FILE *fd = fopen("names.txt","r");
	
	while((ch=fgetc(fd)) != EOF){
		printf("%c",ch);
	}
	printf("\n");

	fclose(fd);
   return 0;
}
