#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int x=10;
int y=20;
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		int x=30;
		int y=40;
		printf("im child process\n");
		printf("child pid:%d\n",getpid());
		printf("child's parent process id:%d\n",getppid());
		printf("%p\n",&x);
		printf("%p\n",&y);
		printf("%d\n",x);
		printf("%d\n",y);
	}
	else
	
	{
	sleep(2);
		int x=50;
		int y=100;
		printf("im parent process\n");
		printf("parent pid:%d\n",getpid());
		printf("parent ppid:%d\n",getppid());
		printf("%d\n",x);
		printf("%d\n",y);
		printf("%p\n",&x);
		printf("%p\n",&y);
	}
//	printf("%d\n",x);
//	printf("%d\n",y);
}
