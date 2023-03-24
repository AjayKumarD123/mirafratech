#include<stdio.h>
typedef struct student
{
int a;
char name[10];
float b;
}student;

int main()
{
student s={1,"ajay",4.5};
printf("%d\n%s\n%f",s.a,s.name,s.b);
}

