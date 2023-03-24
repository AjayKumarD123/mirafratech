#include<stdio.h>
int prime(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if(count==2)
{
return 0;
}
return 1;
}


int main()
{
int n=6,k;
k=prime(n);
if(k==0)
{
printf("prime number");
}
else
{
printf("not prime");
}
}
