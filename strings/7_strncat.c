#include<stdio.h>
/*void strrncat(char s1[],char s2[],int n)
{
int i,j=0;
for(i=0;s1[i]!=0;i++);
j=i;
for(i=0;i<n;i++,j++)
{
s1[j]=s2[i];
}
s1[j]=0;
printf("%s",s1);
}*/


void *strrncat(char *s1,char *s2,int n)
{
int i=0,j=0;
while(*s1)
{
s1++;
}
while(i<n)
{
*s1=*s2;
s1++;
s2++;
i++;
}
}






int main()
{
char s1[100];
char s2[100];
int n;
printf("enter the string\n");
scanf("%s",s1);
printf("enter the string2\n");
scanf("%s",s2);
printf("enter the number\n");
scanf("%d",&n);
strrncat(s1,s2,n);
printf("%s",s1);
}
