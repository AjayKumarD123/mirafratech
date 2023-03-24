#include <stdio.h>
//static int count=0;
void printCount()
{
static int count=0;

	count++; // Increment the count
	printf("Count = %d\n", count); // Print the count
}

/*void countof()
{
count++;
printf("count=%d\n",count);
}*/


int main()
{
	printCount(); // Call the function
	printCount(); // Call the function again

	printCount(); // Call the function again

//	countof();
	return 0;
}
