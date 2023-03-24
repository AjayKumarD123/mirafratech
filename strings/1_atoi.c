#include<stdio.h>
void atoi(char s[])
{
int i,n=0;
for(i=0;s[i]!=0;i++)
{
n=(n*10)+(s[i]-48);
}
printf("%d",n);
}








int main()
{
char s[100];
printf("enter the string\n");
scanf("%s",s);
atoi(s);
}
