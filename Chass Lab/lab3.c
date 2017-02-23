#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
int main(void){

	printf(" Start with A \n");
		exit(1);
//	fork();
	pid_t pid1;
	if(fork()==0){
		printf("First process: %d \n First parent process: %d \n ",getpid(),getppid());
	}else{
		printf("Lala dithai wat! \n");
		exit(1);
	}

}
