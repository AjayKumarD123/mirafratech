#include<stdio.h>
#include<string.h>
union student
{
int a;
float b;
char name[10];
};

int main()
{
union student s;
s.a=10;
printf("%d\n",s.a);
s.b=3.5;
printf("%f\n",s.b);
strcpy(s.name,"ajay");
printf("%s",s.name);
}
