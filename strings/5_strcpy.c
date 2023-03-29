#include<stdio.h>
void strrcpy(char s1[],char s2[])
{
int i;
for(i=0;s2[i]!=0;i++)
{
s1[i]=s2[i];
}
s1[i]=0;
}





int main()
{
char s1[100];
char s2[100];
printf("enter the string\n");
scanf("%s",s1);
printf("enter the string2\n");
scanf("%s",s2);
strrcpy(s1,s2);
printf("%s",s1);
}

