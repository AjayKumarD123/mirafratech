#include<stdio.h>
int mystrchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==c)
		{
			return i;
		}

	}
	return -1;
}




int main()
{
	char s[100];
	char c;
	int k;
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the char\n");
	scanf(" %c",&c);
	printf("%c",c);
	k=mystrchr(s,c);
	if(k!=-1)
		printf("%d",k);
	else
		printf("not found");
}

