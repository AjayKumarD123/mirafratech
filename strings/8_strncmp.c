#include<stdio.h>
/*int strrncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s1[i]>s2[i])
			return 1;
		}
			return 0;
}*/


int strrncmp(char *s1,char *s2,int n)
{
int i;
for(i=0;i<n;i++)
{
if(*s1<*s2)
return -1;
if(*s1>*s2)
return 1;
s1++;
s2++;
}
return 0;
}




int main()
{
	char s1[100];
	char s2[100];
	int n,k;
	printf("enter the string1\n");
	scanf("%s",s1);
	printf("enter the string2\n");
	scanf("%s",s2);
	printf("enter the number\n");
	scanf("%d",&n);
	k=strrncmp(s1,s2,n);
	printf("%d",k);
}

