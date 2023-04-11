#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>


int main(){
	struct stat info;
	int index;
	int fd = open("./names.txt",O_RDWR, S_IRUSR | S_IWUSR);

	if(fstat(fd,&info) == -1){
		printf("Unable to Retrieve File Size\n");
		exit(1);
	}
	printf("File Size: %ld\n",info.st_size);


	char *mmfile = mmap(NULL,info.st_size, PROT_READ|PROT_WRITE,MAP_SHARED, fd, 0);
	
	for(index=0;index<info.st_size;index++){
		printf("%c",mmfile[index]);
	}
	printf("\n");
	for(index=0;index<info.st_size;index++){
		if(mmfile[index]>=97 && mmfile[index]<=122){
			mmfile[index]=mmfile[index]-32;
		}
	}
	printf("\n");
	munmap(mmfile,info.st_size);
	close(fd);

}
