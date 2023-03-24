#include<stdio.h>
struct student 
{
int a;
char name[10];
float k;
};
int main()
{
struct student s={1,"ajay",3.5};
printf("%d%s%f",s.a,s.name,s.k);
}
