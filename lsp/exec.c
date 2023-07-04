#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
	pid_t pid;
	pid = fork();
	if (pid == 0)
 {
		printf("Child Process\n");
		execl("/Ajay/mirafratech/lsp/","fork.c",(char *)0);	
		printf ("This won’t Print");
    }
	else
		printf("Parent Process\n");
}
