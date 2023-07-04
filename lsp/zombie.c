#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("im child process\n");
		printf("child id:%d\n",getpid());
		printf("child's parent id:%d\n",getppid());
		exit(1);
	//	int x=10;
	}
	else
	{
		getchar();
		int status;
		wait(&status);
		printf("%d\n",__WEXITSTATUS(status));
		getchar();
		printf("im parent\n");
		printf("parent pid:%d\n",getpid());
		printf("parent ppid:%d\n",getppid());
	}
}
