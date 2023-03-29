#include<stdio.h>
int strcmpp(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!=0&&s2[i]!=0;i++)
{
if(s1[i]>s2[i])
return 1;
if(s1[i]<s2[i])
return -1;
}
return 0;
}







int main()
{
int k;
char s1[100];
char s2[100];
printf("enter string1\n");
scanf("%s",s1);
printf("enter string2\n");
scanf("%s",s2);
k=strcmpp(s1,s2);
printf("%d",k);
}
