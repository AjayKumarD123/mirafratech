#include<stdio.h>
static int count=0;
void countof()
{
count++;
printf("%d\n",count);
}

void countt()
{
count++;
printf("%d\n",count);
}

int main()
{
countof();
countof();
countof();
countt();
}
