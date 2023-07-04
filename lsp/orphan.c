#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("im child process");
		printf("child pid:%d\n",getpid());
		printf("child's parentid:%d\n",getppid());
		exit(5);
	}
	else
	{
//		sleep(2);
		int *status;
		printf("im parent process\n");
		printf("parent id:%d\n",getpid());
		printf("parents parentid:%d\n",getppid());
		wait(status);
		//printf("%d\n",status);
	}

	
}



