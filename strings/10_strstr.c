#include<stdio.h>
int strstrr(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!=0&&s2[i]!=0;i++)
{
if(s1[i]==s2[i])
return i;
}
return 0;
}
}



int main()
{
char s1[100];
char s2[100];
int k;
printf("enter the string1\n");
scanf("%s",s1);
printf("enter the string2\n");
scanf("%s2",s2);
k=strstrr(s1,s2);
printf("%d",k);
}


