#include<stdio.h>
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
}


int main()
{
	int a,b;
	printf("enter the a&b\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
