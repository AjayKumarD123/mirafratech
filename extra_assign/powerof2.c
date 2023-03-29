#include<stdio.h>
int main()
{
	int n;
	printf("enter the num\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("power of 2\n");
	}
	else
	{
		printf("not power of 2\n");
	}
}

