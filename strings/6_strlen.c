#include<stdio.h>
int strrlen(char s[])
{
int i=0;
while(s[i]!=0)
{
i++;
}
return i;
}



int main()
{
int k;
char s[100];
printf("enter the string\n");
scanf("%s",s);
k=strrlen(s);
printf("%d",k);
}
