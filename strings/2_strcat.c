#include<stdio.h>
//#include<string.h>
void strrcat(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];
	printf("enter thr strings\n");
	scanf("%s",s1);
	scanf("%s",s2);
	strrcat(s1,s2);
	printf("%s",s1);
}


void strrcat(char s1[],char s2[])
{
	int i,j=0;
	for(i=0;s1[i]!=0;i++);	
	j=i;
	for(i=0;s2[i]!=0;i++,j++)
	{
	s1[j]=s2[i];
	}
	s1[j]=0;

}

