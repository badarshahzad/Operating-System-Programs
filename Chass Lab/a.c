#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
int main(void){



	printf("First process: %d \n First parent process: %d \n ",getpid(),getppid());
	if(fork()==0){
		printf("\t In the Child process  \t Process ID: %d \n",getpid());
		printf("\t Parent ID \t Process ID: %d \n",getppid());
		}
	else {
		printf("\t In the Parent process \t Process ID: %d \n",getpid());
		printf("\t Parent ID \t Process ID: %d \n",getppid());

		while(1);
	}

	return 0;
}
