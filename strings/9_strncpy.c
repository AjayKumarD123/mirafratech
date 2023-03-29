#include<stdio.h>
void strrncpy(char s1[],char s2[],int n)
{
int i;
for(i=0;i<n;i++)
{
s1[i]=s2[i];
}
s1[i]=0;
}

void strnncpy(char *s1,char *s2,int n)
{
int i;
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
printf("enter string2\n");
scanf("%s",s2);
printf("enter the number\n");
scanf("%d",&n);
strrncpy(s1,s2,n);
strnncpy(s1,s2,n);
printf("%s",s1);
}
