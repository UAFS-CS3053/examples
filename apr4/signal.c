#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signum){
	write(1,"Not stopping\n",13);
}
    

int main(void)
{
  signal(SIGINT, sig_handler);
  fork();
  while(1){
  	 printf("pid[%d]: Running\n",getpid());
    sleep(2);
  }
  return 0;
}
