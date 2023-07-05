#include<stdio.h>
#include<unistd.h>
int main()
{
	char *path="/bin/ls";
	char *arg1="-a";
	char *arg2="-s";
	execl(path,path,arg1,arg2,NULL);
//	printf("hi\n");
return 0;
}



