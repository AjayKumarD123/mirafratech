#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
         pid_t pid;

         pid=vfork();

         if (pid==0)
         {
	 	        printf("I am a child process\n");
	         	        printf("Child process ID : %d \n", getpid());
	         	        printf("Child's Parent process ID : %d ",getppid());
		       exit(0);
         }  
        else
         {
	 	     printf("I am a parent process\n");
		     printf("Parent process ID : %d \n",getpid());
		     printf("Parent's parent ID(Shell id) : %d\n",getppid());
          }
}
